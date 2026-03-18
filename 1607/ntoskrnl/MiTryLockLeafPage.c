/*
 * XREFs of MiTryLockLeafPage @ 0x140022EEC
 * Callers:
 *     MiDeleteClusterSection @ 0x140021D60 (MiDeleteClusterSection.c)
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x140022F98 (MiTryLockLeafAndContainingPagesAtDpc.c)
 *     MiCopyDataPageToImagePage @ 0x140023A40 (MiCopyDataPageToImagePage.c)
 *     MiConvertStandbyToProto @ 0x1401F90BC (MiConvertStandbyToProto.c)
 * Callees:
 *     MiIsPfnInline @ 0x140030920 (MiIsPfnInline.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F2550 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F2570 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1401F26C4 (MiInvalidPteConforms.c)
 */

__int64 __fastcall MiTryLockLeafPage(__int64 a1)
{
  __int64 v1; // r11
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v1 = a1;
  while ( 1 )
  {
    while ( 1 )
    {
      v2 = MI_READ_PTE_LOCK_FREE(v1);
      v8 = v2;
      if ( (v2 & 1) == 0 )
        break;
      v3 = MI_GET_PAGE_FRAME_FROM_PTE(&v8);
LABEL_8:
      if ( (unsigned int)MiIsPfnInline(v3) )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(48 * v4 - 0x58000000000LL + 24), 0x3FuLL) )
          return 0LL;
        v5 = MI_READ_PTE_LOCK_FREE(v1);
        if ( v5 == v8 )
          return v6;
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    if ( (v2 & 0x400) != 0 || (v2 & 0x800) == 0 )
      return 0LL;
    if ( (unsigned int)MiInvalidPteConforms(v2) )
    {
      v3 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v8);
      goto LABEL_8;
    }
  }
}
