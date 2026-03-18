/*
 * XREFs of ?OnShutdown@CManipulationManager@@AEAAXXZ @ 0x18013FF10
 * Callers:
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x1800A6BA0 (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
 * Callees:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18013FD8C (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 */

void __fastcall CManipulationManager::OnShutdown(CManipulationManager *this)
{
  *((_BYTE *)this + 32) = 1;
  EnterCriticalSection(&stru_1801A3D48);
  byte_1801A3D44 = 1;
  LeaveCriticalSection(&stru_1801A3D48);
  EnterCriticalSection(&CriticalSection);
  byte_1801A3D04 = 1;
  LeaveCriticalSection(&CriticalSection);
  CManipulationManager::OnInteractionUpdate(this);
  CManipulationManager::OnInput((__int64)this);
}
