/*
 * XREFs of ??0?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x180093904
 * Callers:
 *     _dynamic_initializer_for__CManipulationManager::s_InputQueue__ @ 0x1800011A0 (_dynamic_initializer_for__CManipulationManager--s_InputQueue__.c)
 * Callees:
 *     <none>
 */

__int64 *CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>()
{
  dword_180195D10 = 0;
  qword_180195D08 = (__int64)&CManipulationManager::s_InputQueue;
  CManipulationManager::s_InputQueue = (__int64)&CManipulationManager::s_InputQueue;
  byte_180195D14 = 0;
  InitializeCriticalSection(&stru_180195D18);
  return &CManipulationManager::s_InputQueue;
}
