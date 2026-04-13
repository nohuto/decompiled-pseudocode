/*
 * XREFs of sub_18001D330 @ 0x18001D330
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001C73C @ 0x18001C73C (sub_18001C73C.c)
 */

void *__fastcall sub_18001D330(void *a1, char a2)
{
  sub_18001C73C((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
