/*
 * XREFs of sub_18000AAD0 @ 0x18000AAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18000AAD0(_QWORD *a1, char a2)
{
  *a1 = &off_18002D990;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
