/*
 * XREFs of MiTryLockProtoPoolPageAtDpc @ 0x140022B78
 * Callers:
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x140022B18 (MiTryLockLeafAndContainingPagesAtDpc.c)
 * Callees:
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiAddLockedPageCharge @ 0x14004ED08 (MiAddLockedPageCharge.c)
 *     MiWriteValidPteVolatile @ 0x1400FCE74 (MiWriteValidPteVolatile.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiTryLockProtoPoolPageAtDpc(unsigned __int64 a1)
{
  __int64 v1; // rdi
  unsigned __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = MI_READ_PTE_LOCK_FREE(v1);
  if ( (v10 & 1) == 0 )
    return 0LL;
  v2 = MI_READ_PTE_LOCK_FREE(&v10);
  if ( !(unsigned int)MiIsPfnInline((v2 >> 12) & 0xFFFFFFFFFLL) )
    return 0LL;
  v4 = 48 * v3 - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    return 0LL;
  if ( (*(_QWORD *)(v4 + 24) & 0x4000000000000000LL) != 0
    || (v5 = MI_READ_PTE_LOCK_FREE(v1), v10 = v5, (v5 & 1) == 0)
    || (v5 & 0x200) != 0
    || (v6 = MI_GET_PAGE_FRAME_FROM_PTE(&v10), v8 != v6)
    || (*(_BYTE *)(v4 + 34) & 0x20) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  MiAddLockedPageCharge(v4, 1LL, v7, v8);
  *(_BYTE *)(v4 + 34) |= 0x20u;
  if ( (v10 & 0x20) == 0 )
    MiWriteValidPteVolatile(v1, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v4;
}
