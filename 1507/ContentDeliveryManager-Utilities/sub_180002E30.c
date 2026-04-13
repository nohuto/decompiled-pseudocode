/*
 * XREFs of sub_180002E30 @ 0x180002E30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002DB0 @ 0x180002DB0 (sub_180002DB0.c)
 *     sub_180004A0C @ 0x180004A0C (sub_180004A0C.c)
 */

_QWORD *__fastcall sub_180002E30(__int64 a1, _QWORD *a2, unsigned int a3)
{
  if ( a3 == 1 )
  {
    a2[3] = 15LL;
    a2[2] = 0LL;
    *(_BYTE *)a2 = 0;
    sub_180004A0C(a2, "iostream stream error", 0x15uLL);
  }
  else
  {
    sub_180002DB0(a1, a2, a3);
  }
  return a2;
}
