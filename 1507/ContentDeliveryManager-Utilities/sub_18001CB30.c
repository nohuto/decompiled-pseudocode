/*
 * XREFs of sub_18001CB30 @ 0x18001CB30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B22C @ 0x18001B22C (sub_18001B22C.c)
 */

void *__fastcall sub_18001CB30(void *a1, char a2)
{
  sub_18001B22C((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
