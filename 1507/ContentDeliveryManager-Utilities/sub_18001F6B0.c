/*
 * XREFs of sub_18001F6B0 @ 0x18001F6B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001D578 @ 0x18001D578 (sub_18001D578.c)
 */

void *__fastcall sub_18001F6B0(void *a1, char a2)
{
  sub_18001D578((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
