/*
 * XREFs of sub_180014460 @ 0x180014460
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800144B0 @ 0x1800144B0 (sub_1800144B0.c)
 */

_QWORD *__fastcall sub_180014460(_QWORD *a1, char a2)
{
  __int64 v4; // rcx

  *a1 = off_18002E358;
  v4 = a1[12];
  if ( v4 )
    sub_1800144B0(v4, 1LL);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
