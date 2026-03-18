/*
 * XREFs of ?OnShutdown@CManipulationManager@@AEAAXXZ @ 0x18012AE48
 * Callers:
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x180092E2C (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
 * Callees:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18012A954 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 */

void __fastcall CManipulationManager::OnShutdown(CManipulationManager *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  *((_BYTE *)this + 32) = 1;
  EnterCriticalSection(&stru_180195D58);
  byte_180195D54 = 1;
  LeaveCriticalSection(&stru_180195D58);
  EnterCriticalSection(&stru_180195D18);
  byte_180195D14 = 1;
  LeaveCriticalSection(&stru_180195D18);
  CManipulationManager::OnInteractionUpdate(this);
  CManipulationManager::OnInput((unsigned __int64)this, v2, v3);
}
