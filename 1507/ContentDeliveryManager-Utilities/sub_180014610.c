/*
 * XREFs of sub_180014610 @ 0x180014610
 * Callers:
 *     <none>
 * Callees:
 *     sub_180013D6C @ 0x180013D6C (sub_180013D6C.c)
 */

void *__fastcall sub_180014610(void *a1, char a2)
{
  sub_180013D6C((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
