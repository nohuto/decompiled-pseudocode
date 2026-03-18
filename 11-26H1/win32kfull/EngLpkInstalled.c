/*
 * XREFs of EngLpkInstalled @ 0x1401C1B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL EngLpkInstalled(void)
{
  Gre::Base *v0; // rcx

  return *(_DWORD *)(*((_QWORD *)Gre::Base::Globals(v0) + 232) + 1573012LL) != 0;
}
