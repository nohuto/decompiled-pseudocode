/*
 * XREFs of ?ReadRedirectedEstimationKey@ResourceManager@ExecutionModel@@QEAAXPEAUHKEY__@@@Z @ 0x18001DE50
 * Callers:
 *     ?ReadSettings@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001DB00 (-ReadSettings@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::ResourceManager::ReadRedirectedEstimationKey(
        ExecutionModel::ResourceManager *this,
        HKEY a2)
{
  PVOID pvData; // rbx
  SIZE_T Size; // [rsp+50h] [rbp+8h] BYREF

  LODWORD(Size) = 0;
  *((_QWORD *)this + 2) = L"System\\ResourceManager\\MemoryHistory";
  if ( !RegGetValueW(a2, 0LL, L"RedirectedEstimationKey", 2u, 0LL, 0LL, (LPDWORD)&Size) && (unsigned int)Size >= 2 )
  {
    pvData = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)Size);
    if ( pvData )
    {
      if ( !RegGetValueW(a2, 0LL, L"RedirectedEstimationKey", 2u, 0LL, pvData, (LPDWORD)&Size) )
      {
        *((_QWORD *)this + 2) = pvData;
        pvData = 0LL;
      }
      if ( pvData )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, pvData);
    }
  }
}
