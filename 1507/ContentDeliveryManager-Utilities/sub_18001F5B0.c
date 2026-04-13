/*
 * XREFs of sub_18001F5B0 @ 0x18001F5B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001D368 @ 0x18001D368 (sub_18001D368.c)
 */

void *__fastcall sub_18001F5B0(void *a1, char a2)
{
  sub_18001D368((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
