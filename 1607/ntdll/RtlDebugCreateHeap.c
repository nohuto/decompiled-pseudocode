/*
 * XREFs of RtlDebugCreateHeap @ 0x1800FA2A0
 * Callers:
 *     RtlCreateHeap @ 0x18002BA20 (RtlCreateHeap.c)
 * Callees:
 *     RtlLogStackBackTraceEx @ 0x18002B208 (RtlLogStackBackTraceEx.c)
 *     RtlCreateHeap @ 0x18002BA20 (RtlCreateHeap.c)
 *     DbgPrint @ 0x18005C3E0 (DbgPrint.c)
 *     RtlpValidateHeapHeaders @ 0x18005D300 (RtlpValidateHeapHeaders.c)
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 *     RtlpBreakPointHeap @ 0x1800FB678 (RtlpBreakPointHeap.c)
 */

void **__fastcall RtlDebugCreateHeap(
        int a1,
        char *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v10; // rcx
  int VirtualMemory; // r15d
  __int64 Heap; // rax
  void **v14; // rdi
  char *v15; // [rsp+30h] [rbp-48h]
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
  if ( (a1 & 1) != 0 && a5 )
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
    VirtualMemory = ZwQueryVirtualMemory();
    if ( VirtualMemory < 0 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Specified HeapBase (%p) invalid,  Status = %lx\n", a2, VirtualMemory);
      goto LABEL_6;
    }
    if ( v15 != a2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Specified HeapBase (%p) != to BaseAddress (%p)\n", a2, v15);
      goto LABEL_6;
    }
    if ( v16 == 0x10000 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Specified HeapBase (%p) is free or not writable\n", v15);
      goto LABEL_6;
    }
  }
  Heap = RtlCreateHeap(a1 | 0x10000060u, a2, a3, a4, a5, a6);
  v14 = (void **)Heap;
  if ( Heap )
  {
    if ( (*(_DWORD *)(Heap + 112) & 0x8000000) != 0 )
      *(_WORD *)(Heap + 304) = RtlLogStackBackTraceEx(1u);
    RtlpValidateHeapHeaders(v14, 1);
  }
  return v14;
}
