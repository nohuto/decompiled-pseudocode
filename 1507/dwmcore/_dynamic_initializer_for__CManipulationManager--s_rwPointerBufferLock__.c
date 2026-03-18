/*
 * XREFs of _dynamic_initializer_for__CManipulationManager::s_rwPointerBufferLock__ @ 0x1800011E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__CManipulationManager::s_rwPointerBufferLock__()
{
  InitializeSRWLock(&SRWLock);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CManipulationManager::s_rwPointerBufferLock__);
}
