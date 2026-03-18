/*
 * XREFs of MiTryLockProtoPoolPageAtDpc @ 0x14000F9D0
 * Callers:
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x14000F970 (MiTryLockLeafAndContainingPagesAtDpc.c)
 * Callees:
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiAddLockedPageCharge @ 0x1400AA108 (MiAddLockedPageCharge.c)
 *     MI_WRITE_VALID_PTE_VOLATILE @ 0x1400B8CFC (MI_WRITE_VALID_PTE_VOLATILE.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiTryLockProtoPoolPageAtDpc(unsigned __int64 a1)
{
  __int64 v1; // rbp
  unsigned __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rax
  char v5; // bl
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = MI_READ_PTE_LOCK_FREE(v1);
  if ( (v7 & 1) == 0 )
    return 0LL;
  v2 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v7) >> 12) & 0xFFFFFFFFFLL;
  if ( !(unsigned int)MI_IS_PFN(v2) )
    return 0LL;
  v3 = 48 * v2 - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    return 0LL;
  if ( (*(_QWORD *)(v3 + 24) & 0x4000000000000000LL) != 0
    || (v4 = MI_READ_PTE_LOCK_FREE(v1), v7 = v4, v5 = v4, (v4 & 1) == 0)
    || (v4 & 0x200) != 0
    || v2 != MI_GET_PAGE_FRAME_FROM_PTE(&v7)
    || (*(_BYTE *)(v3 + 34) & 0x20) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  MiAddLockedPageCharge(v3, 1LL);
  *(_BYTE *)(v3 + 34) |= 0x20u;
  if ( (v5 & 0x20) == 0 )
    MI_WRITE_VALID_PTE_VOLATILE(v1, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 48 * v2 - 0x58000000000LL;
}
