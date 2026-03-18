/*
 * XREFs of HvpGetCellFlat @ 0x1405501B4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetCellFlat(__int64 a1, unsigned int a2, unsigned int *a3)
{
  __int64 result; // rax

  result = a2 + *(_QWORD *)(a1 + 64) + 4100LL;
  *a3 = a2;
  return result;
}
