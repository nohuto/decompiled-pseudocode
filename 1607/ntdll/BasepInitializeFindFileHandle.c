/*
 * XREFs of BasepInitializeFindFileHandle @ 0x1801031CC
 * Callers:
 *     _ResFindFirstFileExW @ 0x180104254 (_ResFindFirstFileExW.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlInitializeCriticalSectionEx @ 0x18002B280 (RtlInitializeCriticalSectionEx.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 */

_RTL_CRITICAL_SECTION *__fastcall BasepInitializeFindFileHandle(_RTL_CRITICAL_SECTION_DEBUG *a1)
{
  _RTL_CRITICAL_SECTION *Heap; // rax
  _RTL_CRITICAL_SECTION *v3; // rbx

  Heap = (_RTL_CRITICAL_SECTION *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, BaseDllTag + 786432, 0x50uLL);
  v3 = Heap;
  if ( Heap )
  {
    *(_QWORD *)&Heap->LockCount = 0LL;
    Heap->OwningThread = 0LL;
    LODWORD(Heap->LockSemaphore) = 0;
    HIDWORD(Heap->LockSemaphore) = 0;
    Heap->DebugInfo = a1;
    if ( RtlInitializeCriticalSectionEx(Heap + 1, 0, 0) < 0 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
      return 0LL;
    }
  }
  return v3;
}
