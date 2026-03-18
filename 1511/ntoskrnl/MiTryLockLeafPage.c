/*
 * XREFs of MiTryLockLeafPage @ 0x14000FB0C
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14000EF10 (MiCopyDataPageToImagePage.c)
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x14000F970 (MiTryLockLeafAndContainingPagesAtDpc.c)
 *     MiConvertStandbyToProto @ 0x140127A94 (MiConvertStandbyToProto.c)
 * Callees:
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiTryLockLeafPage(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r9
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  while ( 1 )
  {
    v2 = MI_READ_PTE_LOCK_FREE(a1);
    v8 = v2;
    v3 = v2;
    if ( (v2 & 1) == 0 )
      break;
    v3 = MI_READ_PTE_LOCK_FREE(&v8);
LABEL_5:
    if ( (unsigned int)MI_IS_PFN((v3 >> 12) & 0xFFFFFFFFFLL) )
    {
      v5 = 48 * v4 - 0x58000000000LL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
        return 0LL;
      v6 = MI_READ_PTE_LOCK_FREE(a1);
      if ( v6 == v8 )
        return v5;
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  if ( (v2 & 0x400) == 0 && (v2 & 0x800) != 0 )
    goto LABEL_5;
  return 0LL;
}
