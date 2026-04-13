/*
 * XREFs of sub_18001F630 @ 0x18001F630
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001D470 @ 0x18001D470 (sub_18001D470.c)
 */

void *__fastcall sub_18001F630(void *a1, char a2)
{
  sub_18001D470((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
