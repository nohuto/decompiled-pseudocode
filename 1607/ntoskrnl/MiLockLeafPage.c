/*
 * XREFs of MiLockLeafPage @ 0x14002EA50
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DF00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x14001E990 (MiReservePageFileSpaceForPage.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MiDispatchFault @ 0x1400403C0 (MiDispatchFault.c)
 *     MiReplacePageOfProtoPool @ 0x1400A99CC (MiReplacePageOfProtoPool.c)
 *     MiGetWorkingSetInfoList @ 0x1400B79E0 (MiGetWorkingSetInfoList.c)
 *     MiActOnPte @ 0x1400BBC88 (MiActOnPte.c)
 *     MiMakeImageReadOnly @ 0x1400FC6F4 (MiMakeImageReadOnly.c)
 *     MiRemoveMappedPtes @ 0x140100320 (MiRemoveMappedPtes.c)
 *     MiIsSubsectionClean @ 0x1401DEDA0 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1401DF074 (MiPurgeSubsection.c)
 *     MiTranslatePageForCopy @ 0x1401E4C54 (MiTranslatePageForCopy.c)
 *     MiPurgeImageSection @ 0x1401EA8A8 (MiPurgeImageSection.c)
 *     MiEliminateStaleExtents @ 0x1401ED5F8 (MiEliminateStaleExtents.c)
 *     MiDeletePerSessionProtos @ 0x1401F4ECC (MiDeletePerSessionProtos.c)
 *     MiConvertPrivateToProto @ 0x1401F8908 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x1401FA48C (MiResolveProtoCombine.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14002EB30 (MiLockPageAtDpcInline.c)
 *     MiIsPfnInline @ 0x140030920 (MiIsPfnInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009E2E0 (MiLockNestedPageAtDpcInline.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F2550 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F2570 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1401F26C4 (MiInvalidPteConforms.c)
 */

__int64 __fastcall MiLockLeafPage(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      v4 = MI_READ_PTE_LOCK_FREE(a1);
      v10 = v4;
      v5 = v4;
      if ( (v4 & 1) == 0 )
        break;
      v6 = MI_GET_PAGE_FRAME_FROM_PTE(&v10);
LABEL_7:
      if ( (unsigned int)MiIsPfnInline(v6) )
      {
        v8 = 48 * v7 - 0x58000000000LL;
        if ( a2 )
          MiLockNestedPageAtDpcInline(v8);
        else
          MiLockPageAtDpcInline(v8);
        if ( MI_READ_PTE_LOCK_FREE(a1) == v5 )
          return v8;
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    if ( (v4 & 0x400) != 0 || (v4 & 0x800) == 0 )
      return 0LL;
    if ( (unsigned int)MiInvalidPteConforms(v4) )
    {
      v6 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v10);
      goto LABEL_7;
    }
  }
}
