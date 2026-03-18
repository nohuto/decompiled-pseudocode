/*
 * XREFs of _dynamic_initializer_for__D3DCompilerHelper::s_csInitLock__ @ 0x1800013D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__D3DCompilerHelper::s_csInitLock__()
{
  InitializeCriticalSection(&D3DCompilerHelper::s_csInitLock);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__D3DCompilerHelper::s_csInitLock__);
}
