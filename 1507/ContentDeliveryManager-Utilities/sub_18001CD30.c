/*
 * XREFs of sub_18001CD30 @ 0x18001CD30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001BCBC @ 0x18001BCBC (sub_18001BCBC.c)
 */

void *__fastcall sub_18001CD30(void *a1, char a2)
{
  sub_18001BCBC((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
