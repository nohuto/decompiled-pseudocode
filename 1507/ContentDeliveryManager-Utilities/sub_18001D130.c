/*
 * XREFs of sub_18001D130 @ 0x18001D130
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001C3BC @ 0x18001C3BC (sub_18001C3BC.c)
 */

void *__fastcall sub_18001D130(void *a1, char a2)
{
  sub_18001C3BC((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
