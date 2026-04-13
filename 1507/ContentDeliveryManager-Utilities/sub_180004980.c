/*
 * XREFs of sub_180004980 @ 0x180004980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_180004980(_DWORD *a1, char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
