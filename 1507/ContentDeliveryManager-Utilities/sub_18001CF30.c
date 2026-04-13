/*
 * XREFs of sub_18001CF30 @ 0x18001CF30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001C03C @ 0x18001C03C (sub_18001C03C.c)
 */

void *__fastcall sub_18001CF30(void *a1, char a2)
{
  sub_18001C03C((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
