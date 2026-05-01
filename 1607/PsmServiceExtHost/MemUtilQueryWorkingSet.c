/*
 * XREFs of MemUtilQueryWorkingSet @ 0x1800390F4
 * Callers:
 *     MemUtilPrioritizeWsPages @ 0x180038B90 (MemUtilPrioritizeWsPages.c)
 * Callees:
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall MemUtilQueryWorkingSet(HANDLE ProcessHandle, _QWORD *a2)
{
  void *v2; // rdi
  unsigned int v3; // esi
  int i; // eax
  SIZE_T Length; // rbx
  HANDLE ProcessHeap; // rax
  HANDLE v9; // rax
  void *v10; // rax
  ULONG v11; // ebx
  HANDLE v12; // rax
  _BYTE ProcessInformation[32]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v15; // [rsp+50h] [rbp-68h]

  v2 = 0LL;
  v3 = 0;
  for ( i = NtQueryInformationProcess(ProcessHandle, ProcessVmCounters, ProcessInformation, 0x58u, 0LL);
        ;
        i = NtQueryInformationProcess(ProcessHandle, ProcessVmCounters, ProcessInformation, 0x58u, 0LL) )
  {
    if ( i < 0 )
      goto LABEL_10;
    v15 >>= 12;
    Length = 8 * v15 + 16;
    if ( v2 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v2);
    }
    v9 = GetProcessHeap();
    v10 = HeapAlloc(v9, 0, Length);
    v2 = v10;
    if ( !v10 )
      return 8;
    i = NtQueryVirtualMemory(ProcessHandle, 0LL, MemoryWorkingSetList, v10, Length, 0LL);
    if ( i >= 0 )
    {
      *a2 = v2;
      return 0;
    }
    if ( i != -1073741820 )
    {
LABEL_10:
      v11 = RtlNtStatusToDosError(i);
      goto LABEL_11;
    }
    if ( v3 > 0xA )
      break;
    ++v3;
  }
  v11 = 56;
LABEL_11:
  if ( v2 )
  {
    v12 = GetProcessHeap();
    HeapFree(v12, 0, v2);
  }
  return v11;
}
