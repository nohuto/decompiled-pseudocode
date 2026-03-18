/*
 * XREFs of KiUpdateChildrenCpuTarget @ 0x1400C3E28
 * Callers:
 *     KiUpdateCpuTargetByRate @ 0x1400C42BC (KiUpdateCpuTargetByRate.c)
 *     KiUpdateCpuTargetByWeight @ 0x1400C4518 (KiUpdateCpuTargetByWeight.c)
 * Callees:
 *     KiUpdateCpuTargetByRate @ 0x1400C42BC (KiUpdateCpuTargetByRate.c)
 *     KiUpdateCpuTargetByWeight @ 0x1400C4518 (KiUpdateCpuTargetByWeight.c)
 */

__int64 __fastcall KiUpdateChildrenCpuTarget(_QWORD **a1, __int64 a2)
{
  _QWORD *v2; // rbx
  char v3; // si
  _QWORD *v5; // rcx
  __int64 result; // rax

  v2 = *a1;
  v3 = a2;
  do
  {
    v5 = v2 - 5;
    LOBYTE(a2) = v3;
    if ( (*((_DWORD *)v2 - 9) & 1) != 0 )
      result = KiUpdateCpuTargetByRate(v5, a2);
    else
      result = KiUpdateCpuTargetByWeight(v5, a2);
    v2 = (_QWORD *)*v2;
  }
  while ( v2 != a1 );
  return result;
}
