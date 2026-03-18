/*
 * XREFs of ??0?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x1800A8C60
 * Callers:
 *     _dynamic_initializer_for__CManipulationManager::s_InputQueue__ @ 0x180001170 (_dynamic_initializer_for__CManipulationManager--s_InputQueue__.c)
 * Callees:
 *     <none>
 */

__int64 *CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>()
{
  dword_1801A3D00 = 0;
  qword_1801A3CF8 = (__int64)&CManipulationManager::s_InputQueue;
  CManipulationManager::s_InputQueue = (__int64)&CManipulationManager::s_InputQueue;
  byte_1801A3D04 = 0;
  InitializeCriticalSection(&CriticalSection);
  return &CManipulationManager::s_InputQueue;
}
