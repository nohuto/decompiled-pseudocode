/*
 * XREFs of RtlDebugCreateHeap @ 0x1800EED84
 * Callers:
 *     RtlCreateHeap @ 0x180055310 (RtlCreateHeap.c)
 * Callees:
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlpValidateHeapHeaders @ 0x18004B6B0 (RtlpValidateHeapHeaders.c)
 *     RtlLogStackBackTraceEx @ 0x180054FC8 (RtlLogStackBackTraceEx.c)
 *     RtlCreateHeap @ 0x180055310 (RtlCreateHeap.c)
 *     ZwQueryVirtualMemory @ 0x1800A5520 (ZwQueryVirtualMemory.c)
 *     RtlpBreakPointHeap @ 0x1800F019C (RtlpBreakPointHeap.c)
 */

void **__fastcall RtlDebugCreateHeap(
        int a1,
        char *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int VirtualMemory; // r15d
  __int64 Heap; // rax
  void **v13; // rdi
  char *v14; // [rsp+30h] [rbp-48h]
  int v15; // [rsp+50h] [rbp-28h]

  if ( a3 <= 0x10 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid ReserveSize parameter - %Ix\n", a3);
LABEL_6:
    RtlpBreakPointHeap(0LL);
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
    if ( v14 != a2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Specified HeapBase (%p) != to BaseAddress (%p)\n", a2, v14);
      goto LABEL_6;
    }
    if ( v15 == 0x10000 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Specified HeapBase (%p) is free or not writable\n", v14);
      goto LABEL_6;
    }
  }
  Heap = RtlCreateHeap(a1 | 0x10000060u, a2, a3, a4, a5, a6);
  v13 = (void **)Heap;
  if ( Heap )
  {
    if ( (*(_DWORD *)(Heap + 112) & 0x8000000) != 0 )
      *(_WORD *)(Heap + 304) = RtlLogStackBackTraceEx(1u);
    RtlpValidateHeapHeaders(v13, 1);
  }
  return v13;
}
