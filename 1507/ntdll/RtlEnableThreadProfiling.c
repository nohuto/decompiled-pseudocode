/*
 * XREFs of RtlEnableThreadProfiling @ 0x1800BB650
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     NtSetInformationThread @ 0x1800939D0 (NtSetInformationThread.c)
 *     memset @ 0x180098540 (memset.c)
 */

NTSTATUS __cdecl RtlEnableThreadProfiling(
        HANDLE ThreadHandle,
        ULONG Flags,
        ULONG64 HardwareCounters,
        PVOID *PerformanceDataHandle)
{
  _QWORD *Heap; // rax
  _QWORD *v10; // rbx
  int v11; // edi
  ULONG64 ThreadInformation; // [rsp+20h] [rbp-38h] BYREF
  ULONG v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+2Ch] [rbp-2Ch]
  _QWORD *v15; // [rsp+30h] [rbp-28h]

  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741584;
  if ( (HardwareCounters & 0xFFFFFFFFFFFF0000uLL) != 0 )
    return -1073741583;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x1C0uLL);
  v10 = Heap;
  if ( !Heap )
    return -1073741801;
  memset(Heap, 0, 0x1C0uLL);
  *(_DWORD *)v10 = 65984;
  v10[4] = HardwareCounters;
  v14 = 1;
  v13 = Flags;
  ThreadInformation = HardwareCounters;
  v15 = v10;
  v11 = NtSetInformationThread(ThreadHandle, ThreadCounterProfiling, &ThreadInformation, 0x18u);
  if ( v11 < 0 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  else
    *PerformanceDataHandle = v10;
  return v11;
}
