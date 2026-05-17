/*
 * XREFs of BasepInitializeFindFileHandle @ 0x1800F8F20
 * Callers:
 *     _ResFindFirstFileExW @ 0x1800FA064 (_ResFindFirstFileExW.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180007900 (RtlInitializeCriticalSectionEx.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
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
