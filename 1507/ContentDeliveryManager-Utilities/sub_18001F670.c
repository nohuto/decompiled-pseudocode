/*
 * XREFs of sub_18001F670 @ 0x18001F670
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001D4F4 @ 0x18001D4F4 (sub_18001D4F4.c)
 */

void *__fastcall sub_18001F670(void *a1, char a2)
{
  sub_18001D4F4((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
