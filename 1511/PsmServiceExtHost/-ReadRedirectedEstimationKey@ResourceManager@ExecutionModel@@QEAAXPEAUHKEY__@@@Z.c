/*
 * XREFs of ?ReadRedirectedEstimationKey@ResourceManager@ExecutionModel@@QEAAXPEAUHKEY__@@@Z @ 0x18002369C
 * Callers:
 *     ?ReadSettings@ResourceManager@ExecutionModel@@UEAAJXZ @ 0x180023330 (-ReadSettings@ResourceManager@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     RmpAllocateHeap @ 0x180007C10 (RmpAllocateHeap.c)
 *     RmpFreeHeap @ 0x18001BBC0 (RmpFreeHeap.c)
 */

void __fastcall ExecutionModel::ResourceManager::ReadRedirectedEstimationKey(
        ExecutionModel::ResourceManager *this,
        HKEY a2)
{
  PVOID pvData; // rbx
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  pcbData = 0;
  *((_QWORD *)this + 4) = L"System\\ResourceManager\\MemoryHistory";
  if ( !RegGetValueW(a2, 0LL, L"RedirectedEstimationKey", 2u, 0LL, 0LL, &pcbData) && pcbData >= 2 )
  {
    pvData = RmpAllocateHeap(pcbData);
    if ( pvData )
    {
      if ( !RegGetValueW(a2, 0LL, L"RedirectedEstimationKey", 2u, 0LL, pvData, &pcbData) )
      {
        *((_QWORD *)this + 4) = pvData;
        pvData = 0LL;
      }
      if ( pvData )
        RmpFreeHeap(pvData);
    }
  }
}
