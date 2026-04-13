/*
 * XREFs of sub_180015CB0 @ 0x180015CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall sub_180015CB0(void **a1, char a2)
{
  *a1 = off_18002E180;
  operator delete[](a1[2]);
  operator delete[](a1[4]);
  operator delete[](a1[5]);
  *a1 = &off_18002D990;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
