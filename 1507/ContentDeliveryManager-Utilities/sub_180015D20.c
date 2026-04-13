/*
 * XREFs of sub_180015D20 @ 0x180015D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180015D20(_QWORD *a1, char a2)
{
  *a1 = &off_18002E100;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
