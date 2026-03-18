/*
 * XREFs of PspComputeQuantumAndPriority @ 0x14046A228
 * Callers:
 *     PsSetProcessPriorityByClass @ 0x14041C598 (PsSetProcessPriorityByClass.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 * Callees:
 *     MmSetMemoryPriorityProcess @ 0x14002B708 (MmSetMemoryPriorityProcess.c)
 *     PspComputeQuantum @ 0x14046A2A8 (PspComputeQuantum.c)
 */

__int64 __fastcall PspComputeQuantumAndPriority(__int64 a1, __int64 a2, _BYTE *a3, _DWORD *a4)
{
  char v6; // di

  v6 = (_DWORD)a2 != 1 ? 0 : 2;
  if ( a4 )
  {
    if ( *(_BYTE *)(a1 + 1490) == 2 && !(_DWORD)a2 )
    {
      *a4 = 1;
      goto LABEL_3;
    }
    *a4 = 0;
  }
  if ( (_DWORD)a2 != 2 )
LABEL_3:
    MmSetMemoryPriorityProcess(a1, (_DWORD)a2 != 1 ? 0 : 2);
  LOBYTE(a2) = v6;
  *a3 = PspComputeQuantum(a1, a2);
  return *((unsigned int *)PspPriorityTable + *(unsigned __int8 *)(a1 + 1111));
}
