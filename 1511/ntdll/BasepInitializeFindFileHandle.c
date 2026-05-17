/*
 * XREFs of BasepInitializeFindFileHandle @ 0x1800F88F8
 * Callers:
 *     _ResFindFirstFileExW @ 0x1800F997C (_ResFindFirstFileExW.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlInitializeCriticalSectionEx @ 0x180055050 (RtlInitializeCriticalSectionEx.c)
 */

unsigned __int64 __fastcall BasepInitializeFindFileHandle(__int64 a1)
{
  __int64 Heap; // rax
  unsigned __int64 v3; // rbx

  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, BaseDllTag + 786432, 80LL);
  v3 = Heap;
  if ( Heap )
  {
    *(_QWORD *)(Heap + 8) = 0LL;
    *(_QWORD *)(Heap + 16) = 0LL;
    *(_DWORD *)(Heap + 24) = 0;
    *(_DWORD *)(Heap + 28) = 0;
    *(_QWORD *)Heap = a1;
    if ( (int)RtlInitializeCriticalSectionEx(Heap + 40, 0, 0) < 0 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
      return 0LL;
    }
  }
  return v3;
}
