/*
 * XREFs of UserAddAtomEx @ 0x1C0053CD0
 * Callers:
 *     Win32UserInitialize @ 0x1C01556F4 (Win32UserInitialize.c)
 * Callees:
 *     <none>
 */

__int64 UserAddAtomEx()
{
  return UserAddAtomToAtomTableEx(UserAtomTableHandle);
}
