/*
 * XREFs of sub_18000A920 @ 0x18000A920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

exception *__fastcall sub_18000A920(exception *a1, char a2)
{
  exception::~exception(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
