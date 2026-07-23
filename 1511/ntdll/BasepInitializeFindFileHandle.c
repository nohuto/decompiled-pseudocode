/*
 * XREFs of BasepInitializeFindFileHandle @ 0x1800F88F8
 * Callers:
 *     _ResFindFirstFileExW @ 0x1800F997C (_ResFindFirstFileExW.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlInitializeCriticalSectionEx @ 0x180055050 (RtlInitializeCriticalSectionEx.c)
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
