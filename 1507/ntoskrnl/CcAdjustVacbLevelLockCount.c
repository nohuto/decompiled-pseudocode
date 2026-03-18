/*
 * XREFs of CcAdjustVacbLevelLockCount @ 0x1400F2B04
 * Callers:
 *     CcAllocateInitializeBcb @ 0x1400F1B2C (CcAllocateInitializeBcb.c)
 *     CcUnpinFileDataEx @ 0x1400F2430 (CcUnpinFileDataEx.c)
 *     CcDeleteBcbs @ 0x140139D58 (CcDeleteBcbs.c)
 * Callees:
 *     CcSetVacbLargeOffset @ 0x140078680 (CcSetVacbLargeOffset.c)
 *     ReferenceVacbLevel @ 0x140078A04 (ReferenceVacbLevel.c)
 */

char __fastcall CcAdjustVacbLevelLockCount(__int64 a1, __int64 a2, int a3)
{
  int v4; // r9d
  __int64 v5; // r11
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx

  v4 = 0;
  v5 = a2;
  v7 = *(_QWORD *)(a1 + 88);
  v8 = 25;
  do
  {
    v8 += 7;
    ++v4;
  }
  while ( *(_QWORD *)(a1 + 32) > 1LL << v8 );
  v9 = v8 - 7;
  do
  {
    v7 = *(_QWORD *)(v7 + 8LL * (unsigned int)(v5 >> v9));
    v10 = 1LL << v9;
    v9 -= 7;
    v5 &= v10 - 1;
    --v4;
  }
  while ( v4 );
  v11 = 2 * (*(_DWORD *)(a1 + 152) & 0x200LL);
  *(_DWORD *)(v11 + v7 + 1024) += a3;
  v12 = 2 * (*(_DWORD *)(a1 + 152) & 0x200LL);
  v13 = *(_DWORD *)(v12 + v7 + 1024) | *(_DWORD *)(v12 + v7 + 1028);
  if ( !v13 )
  {
    ReferenceVacbLevel(a1, v7, 0, 1, 1);
    LOBYTE(v13) = CcSetVacbLargeOffset(v14, a2 & 0xFFFFFFFFFE000000uLL, 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  }
  return v13;
}
