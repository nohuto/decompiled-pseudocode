/*
 * XREFs of sub_180019690 @ 0x180019690
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000EDF0 @ 0x18000EDF0 (sub_18000EDF0.c)
 */

_QWORD *__fastcall sub_180019690(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v4; // bl

  v4 = a2;
  sub_18000EDF0(a1 + 1, a2, a3);
  *a1 = &off_18002D388;
  if ( (v4 & 1) != 0 )
    operator delete(a1);
  return a1;
}
