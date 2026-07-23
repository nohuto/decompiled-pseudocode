/*
 * XREFs of RtlDebugCreateHeap @ 0x1800FA2A0
 * Callers:
 *     RtlCreateHeap @ 0x18002BA10 (RtlCreateHeap.c)
 * Callees:
 *     RtlLogStackBackTraceEx @ 0x18002B1F8 (RtlLogStackBackTraceEx.c)
 *     RtlCreateHeap @ 0x18002BA10 (RtlCreateHeap.c)
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     RtlpValidateHeapHeaders @ 0x18005D2F0 (RtlpValidateHeapHeaders.c)
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 *     RtlpBreakPointHeap @ 0x1800FB678 (RtlpBreakPointHeap.c)
 */

PVOID *__fastcall RtlDebugCreateHeap(int a1, void *a2, SIZE_T a3, SIZE_T a4, PVOID Lock, PVOID Parameters)
{
  __int64 v10; // rcx
  NTSTATUS v12; // r15d
  PVOID *Heap; // rax
  PVOID *v14; // rdi
  void *MemoryInformation; // [rsp+30h] [rbp-48h] BYREF
  int v16; // [rsp+50h] [rbp-28h]

  if ( a3 <= 0x10 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid ReserveSize parameter - %Ix\n", a3);
LABEL_6:
    RtlpBreakPointHeap(v10);
    return 0LL;
  }
  if ( a3 < a4 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid CommitSize parameter - %Ix\n", a4);
    goto LABEL_6;
  }
  if ( (a1 & 1) != 0 && Lock )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("May not specify Lock parameter with HEAP_NO_SERIALIZE\n");
    goto LABEL_6;
  }
  if ( a2 )
  {
    v12 = ZwQueryVirtualMemory(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            a2,
            MemoryBasicInformation,
            &MemoryInformation,
            0x30uLL,
            0LL);
    if ( v12 < 0 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Specified HeapBase (%p) invalid,  Status = %lx\n", a2, v12);
      goto LABEL_6;
    }
    if ( MemoryInformation != a2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Specified HeapBase (%p) != to BaseAddress (%p)\n", a2, MemoryInformation);
      goto LABEL_6;
    }
    if ( v16 == 0x10000 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Specified HeapBase (%p) is free or not writable\n", MemoryInformation);
      goto LABEL_6;
    }
  }
  Heap = (PVOID *)RtlCreateHeap(a1 | 0x10000060u, a2, a3, a4, Lock, Parameters);
  v14 = Heap;
  if ( Heap )
  {
    if ( ((_DWORD)Heap[14] & 0x8000000) != 0 )
      *((_WORD *)Heap + 152) = RtlLogStackBackTraceEx(1u);
    RtlpValidateHeapHeaders(v14, 1);
  }
  return v14;
}
