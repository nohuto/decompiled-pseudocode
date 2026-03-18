/*
 * XREFs of ??0?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@QEAA@XZ @ 0x1800A8C18
 * Callers:
 *     _dynamic_initializer_for__CManipulationManager::s_InteractionUpdateQueue__ @ 0x180001190 (_dynamic_initializer_for__CManipulationManager--s_InteractionUpdateQueue__.c)
 * Callees:
 *     <none>
 */

__int64 *CQueue<CManipulationManager::InteractionUpdate *>::CQueue<CManipulationManager::InteractionUpdate *>()
{
  dword_1801A3D40 = 0;
  qword_1801A3D38 = (__int64)&CManipulationManager::s_InteractionUpdateQueue;
  CManipulationManager::s_InteractionUpdateQueue = (__int64)&CManipulationManager::s_InteractionUpdateQueue;
  byte_1801A3D44 = 0;
  InitializeCriticalSection(&stru_1801A3D48);
  return &CManipulationManager::s_InteractionUpdateQueue;
}
