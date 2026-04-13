/*
 * XREFs of sub_180002A90 @ 0x180002A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_180002A90(_DWORD *a1, char a2)
{
  *(_QWORD *)a1 = &off_18002C280;
  a1[4] = -1073741823;
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
