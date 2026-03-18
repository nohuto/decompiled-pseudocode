/*
 * XREFs of MiTryLockProtoPoolPageAtDpc @ 0x1400E25B4
 * Callers:
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x1400E2554 (MiTryLockLeafAndContainingPagesAtDpc.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x1400B50C0 (MiAddLockedPageCharge.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWriteValidPteVolatile @ 0x140226110 (MiWriteValidPteVolatile.c)
 */

__int64 __fastcall MiTryLockProtoPoolPageAtDpc(unsigned __int64 a1)
{
  __int64 v1; // r11
  unsigned __int64 v2; // r10
  unsigned __int64 *v3; // rsi
  unsigned __int64 PteShadow; // r9
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rdi
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0x90482413000LL;
  v2 = 2040LL;
  v3 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v3;
  if ( (unsigned __int64)(v3 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v3);
  v13 = PteShadow;
  if ( (PteShadow & 1) == 0 )
    return 0LL;
  if ( (unsigned __int64)&v13 + v1 <= v2 )
    PteShadow = MiReadPteShadow(&v13, PteShadow);
  if ( !MI_IS_PFN((PteShadow >> 12) & 0xFFFFFFFFFLL) )
    return 0LL;
  v9 = 48 * v6 - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    return 0LL;
  if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) != 0 )
    goto LABEL_20;
  v10 = *v3;
  if ( (unsigned __int64)v3 + v8 <= v7 )
    v10 = MiReadPteShadow(v3, *v3);
  v13 = v10;
  if ( (v10 & 1) == 0 || (v10 & 0x200) != 0 )
    goto LABEL_20;
  v11 = v10;
  if ( (unsigned __int64)&v13 + v8 <= v7 )
    v11 = MiReadPteShadow(&v13, v10);
  if ( v6 != ((v11 >> 12) & 0xFFFFFFFFFLL) || (*(_BYTE *)(v9 + 34) & 0x20) != 0 )
  {
LABEL_20:
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  MiAddLockedPageCharge(v9, 1LL, v5);
  *(_BYTE *)(v9 + 34) |= 0x20u;
  if ( (v10 & 0x20) == 0 )
    MiWriteValidPteVolatile(v3, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v9;
}
