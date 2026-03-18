/*
 * XREFs of UserDeleteAtom @ 0x1C000FE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserDeleteAtom(unsigned __int16 a1)
{
  return UserDeleteAtomFromAtomTable(UserAtomTableHandle, a1);
}
