/*
 * XREFs of RtlUnlockHeapManagerForCloning @ 0x1800E067C
 * Callers:
 *     RtlCloneUserProcess @ 0x18008D540 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800CC020 (RtlCompleteProcessCloning.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A5520 (ZwQueryVirtualMemory.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800E1A50 (RtlpUnlockHeapManagerForCloning.c)
 */

__int64 __fastcall RtlUnlockHeapManagerForCloning(unsigned int a1)
{
  struct _PEB *v2; // rdi
  void **ProcessHeaps; // r12
  unsigned int NumberOfHeaps; // ebx
  __int64 v5; // rsi
  int v6; // r15d
  _DWORD *v7; // rcx
  char MemoryInformation[32]; // [rsp+38h] [rbp-70h] BYREF
  int v10; // [rsp+58h] [rbp-50h]

  v2 = NtCurrentPeb();
  if ( a1 )
  {
    ProcessHeaps = v2->ProcessHeaps;
    NumberOfHeaps = v2->NumberOfHeaps;
    v5 = 0LL;
    v6 = 0;
    while ( (unsigned int)v5 < v2->NumberOfHeaps )
    {
      ZwQueryVirtualMemory(
        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
        ProcessHeaps[v5],
        MemoryBasicInformation,
        MemoryInformation,
        0x30uLL,
        0LL);
      if ( v10 == 4096 && ((v7 = ProcessHeaps[v5], v7[38] == -285217025) || v7[4] == -571548178) )
        ProcessHeaps[v6++] = v7;
      else
        --NumberOfHeaps;
      v5 = (unsigned int)(v5 + 1);
    }
    v2->NumberOfHeaps = NumberOfHeaps;
  }
  return RtlpUnlockHeapManagerForCloning(a1, v2->NumberOfHeaps);
}
