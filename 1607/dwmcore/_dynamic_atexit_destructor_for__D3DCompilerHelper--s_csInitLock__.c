/*
 * XREFs of _dynamic_atexit_destructor_for__D3DCompilerHelper::s_csInitLock__ @ 0x1800C2FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__D3DCompilerHelper::s_csInitLock__()
{
  DeleteCriticalSection(&D3DCompilerHelper::s_csInitLock);
}
