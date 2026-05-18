/*
 * XREFs of _dynamic_initializer_for__g_PortClient__ @ 0x180001200
 * Callers:
 *     <none>
 * Callees:
 *     ??0CApiPortClient@@QEAA@I@Z @ 0x1800047E0 (--0CApiPortClient@@QEAA@I@Z.c)
 */

int __fastcall dynamic_initializer_for__g_PortClient__(CApiPortClient *a1, unsigned int a2)
{
  CApiPortClient::CApiPortClient(a1, a2);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_PortClient__);
}
