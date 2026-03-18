/*
 * XREFs of _dynamic_initializer_for__g_DisplayManager__ @ 0x180001020
 * Callers:
 *     <none>
 * Callees:
 *     ??0CDisplayManager@@QEAA@XZ @ 0x1800BA440 (--0CDisplayManager@@QEAA@XZ.c)
 */

int __fastcall dynamic_initializer_for__g_DisplayManager__(CDisplayManager *a1)
{
  CDisplayManager::CDisplayManager(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_DisplayManager__);
}
