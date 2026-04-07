/*
 * XREFs of sub_180001070 @ 0x180001070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int sub_180001070()
{
  InitializeCriticalSection(&CDesktopManager::s_csDwmInstance);
  return atexit((void (__cdecl *)())sub_1800513C0);
}
