/*
 * XREFs of MiLockLeafPage @ 0x1400A2340
 * Callers:
 *     MiActOnPte @ 0x14001C9B4 (MiActOnPte.c)
 *     MiReservePageFileSpaceForPage @ 0x140036B60 (MiReservePageFileSpaceForPage.c)
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400A0890 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReplacePageOfProtoPool @ 0x1400A1EB0 (MiReplacePageOfProtoPool.c)
 *     MiRemoveMappedPtes @ 0x1400B6D00 (MiRemoveMappedPtes.c)
 *     MiMakeImageReadOnly @ 0x1400E7680 (MiMakeImageReadOnly.c)
 *     MiConvertPrivateToProto @ 0x14012A57C (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x14012AE34 (MiResolveProtoCombine.c)
 *     MiIsSubsectionClean @ 0x1401D12F4 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1401D1590 (MiPurgeSubsection.c)
 *     MiTranslatePageForCopy @ 0x1401D4068 (MiTranslatePageForCopy.c)
 *     MiPurgeImageSection @ 0x1401D8B68 (MiPurgeImageSection.c)
 *     MiDeletePerSessionProtos @ 0x1401E2DAC (MiDeletePerSessionProtos.c)
 *     MiEliminateStaleExtents @ 0x1401E3504 (MiEliminateStaleExtents.c)
 * Callees:
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400A0F7C (MiLockNestedPageAtDpcInline.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiLockLeafPage(__int64 a1, int a2)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  unsigned __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  while ( 1 )
  {
    v4 = MI_READ_PTE_LOCK_FREE(a1);
    v11 = v4;
    v5 = v4;
    if ( (v4 & 1) == 0 )
      break;
    v4 = MI_READ_PTE_LOCK_FREE(&v11);
LABEL_5:
    if ( MI_IS_PFN((v4 >> 12) & 0xFFFFFFFFFLL) )
    {
      v9 = 48 * v8 - 0x58000000000LL;
      if ( a2 )
        MiLockNestedPageAtDpcInline(v9, v6, v7);
      else
        MiLockPageAtDpcInline(v9);
      if ( MI_READ_PTE_LOCK_FREE(a1) == v5 )
        return v9;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  if ( (v4 & 0x400) == 0 && (v4 & 0x800) != 0 )
    goto LABEL_5;
  return 0LL;
}
