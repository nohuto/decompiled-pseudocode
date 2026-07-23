/*
 * XREFs of KiUpdateChildrenCpuTarget @ 0x1400A4DC4
 * Callers:
 *     KiUpdateCpuTargetByRate @ 0x1400A51E8 (KiUpdateCpuTargetByRate.c)
 *     KiUpdateCpuTargetByWeight @ 0x1400A547C (KiUpdateCpuTargetByWeight.c)
 * Callees:
 *     KiUpdateCpuTargetByRate @ 0x1400A51E8 (KiUpdateCpuTargetByRate.c)
 *     KiUpdateCpuTargetByWeight @ 0x1400A547C (KiUpdateCpuTargetByWeight.c)
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
    v5 = v2 - 7;
    LOBYTE(a2) = v3;
    if ( (*((_DWORD *)v2 - 13) & 1) != 0 )
      result = KiUpdateCpuTargetByRate(v5, a2);
    else
      result = KiUpdateCpuTargetByWeight(v5, a2);
    v2 = (_QWORD *)*v2;
  }
  while ( v2 != a1 );
  return result;
}
