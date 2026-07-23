/*
 * XREFs of CcAdjustVacbLevelLockCount @ 0x14006C6CC
 * Callers:
 *     CcAllocateInitializeBcb @ 0x14006C544 (CcAllocateInitializeBcb.c)
 *     CcUnpinFileDataEx @ 0x1400CD700 (CcUnpinFileDataEx.c)
 *     CcDeleteBcbs @ 0x1401122D8 (CcDeleteBcbs.c)
 * Callees:
 *     CcSetVacbLargeOffset @ 0x14006C770 (CcSetVacbLargeOffset.c)
 *     ReferenceVacbLevel @ 0x14006CA58 (ReferenceVacbLevel.c)
 *     VacbLevelReference @ 0x14006CA78 (VacbLevelReference.c)
 */

__int64 __fastcall CcAdjustVacbLevelLockCount(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r9
  __int64 v5; // r11
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rax
  bool v12; // zf
  _DWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD *v18; // rax
  int v19; // edx
  int v20; // r8d
  int v21; // r10d
  __int64 result; // rax
  __int64 v23; // rcx

  LODWORD(v4) = 0;
  v5 = a2;
  v8 = *(_QWORD *)(a1 + 88);
  v9 = 25;
  do
  {
    v9 += 7;
    LODWORD(v4) = v4 + 1;
  }
  while ( *(_QWORD *)(a1 + 32) > 1LL << v9 );
  v10 = v9 - 7;
  do
  {
    v8 = *(_QWORD *)(v8 + 8LL * (unsigned int)(v5 >> v10));
    v11 = 1LL << v10;
    v10 -= 7;
    v5 &= v11 - 1;
    v12 = (_DWORD)v4 == 1;
    v4 = (unsigned int)(v4 - 1);
  }
  while ( !v12 );
  v13 = (_DWORD *)VacbLevelReference(a1, v8, 0LL, v4);
  *v13 += a3;
  v18 = (_DWORD *)VacbLevelReference(v15, v14, v16, v17);
  result = (unsigned int)(*v18 | v18[1]);
  if ( !(_DWORD)result )
  {
    ReferenceVacbLevel(v21, v19, v20, 1, 1);
    return CcSetVacbLargeOffset(v23, a2 & 0xFFFFFFFFFE000000uLL, -2LL);
  }
  return result;
}
