/*
 * XREFs of ExecutePhaseControl @ 0x1C00C4244
 * Callers:
 *     itrp_Execute @ 0x1C00B0DE0 (itrp_Execute.c)
 *     itrp_SHC @ 0x1C00B4150 (itrp_SHC.c)
 *     itrp_IUP @ 0x1C00C3970 (itrp_IUP.c)
 * Callees:
 *     PhaseShift @ 0x1C00C42F0 (PhaseShift.c)
 */

__int64 __fastcall ExecutePhaseControl(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // ebx
  __int64 result; // rax
  int v7; // edx
  int v8; // edi
  __int64 v9; // r8
  _BYTE *v10; // rcx
  unsigned __int16 v11; // bp

  v2 = *(__int16 *)(a2 + 80);
  v3 = 0;
  result = *(_QWORD *)(a2 + 64);
  v7 = 0;
  v8 = *(__int16 *)(result + 2 * v2 - 2) + 5;
  if ( v8 <= 0 )
    goto LABEL_6;
  v9 = 0LL;
  v10 = (_BYTE *)(*(_QWORD *)(a2 + 104) + 6LL);
  do
  {
    if ( (*v10 & 1) != 0 )
      break;
    ++v7;
    ++v9;
    v10 += 12;
  }
  while ( v9 < v8 );
  if ( v7 < v8 )
    v11 = 1;
  else
LABEL_6:
    v11 = 0;
  if ( v8 > 0 )
  {
    do
      result = PhaseShift(a1, a2, v11, (unsigned int)v3++);
    while ( v3 < v8 );
  }
  *(_DWORD *)(a2 + 96) = 1;
  return result;
}
