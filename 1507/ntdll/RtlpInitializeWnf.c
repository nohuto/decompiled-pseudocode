/*
 * XREFs of RtlpInitializeWnf @ 0x18007AED0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     TpAllocTimer @ 0x18003C6C0 (TpAllocTimer.c)
 *     TpReleaseTimer @ 0x18003ED60 (TpReleaseTimer.c)
 *     RtlpWnfRegisterTpNotification @ 0x18007AFA4 (RtlpWnfRegisterTpNotification.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 RtlpInitializeWnf()
{
  void *Heap; // rax
  unsigned __int64 v1; // rbx

  Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 96LL);
  v1 = (unsigned __int64)Heap;
  if ( Heap )
  {
    memset(Heap, 0, 0x60uLL);
    *(_DWORD *)v1 = 6293777;
    if ( (int)TpAllocTimer((_PEB_LDR_DATA *)(v1 + 80), (__int64)RtlpWnfRetryTimerCallback, 0LL, 0LL) >= 0 )
    {
      *(_QWORD *)(v1 + 88) = 0LL;
      *(_QWORD *)(v1 + 24) = v1 + 16;
      *(_QWORD *)(v1 + 16) = v1 + 16;
      *(_QWORD *)(v1 + 8) = 0LL;
      *(_QWORD *)(v1 + 40) = v1 + 32;
      *(_QWORD *)(v1 + 32) = v1 + 32;
      *(_QWORD *)(v1 + 48) = 0LL;
      *(_DWORD *)(v1 + 60) = 500;
      *(_DWORD *)(v1 + 64) = 1000;
      *(_DWORD *)(v1 + 68) = 3600000;
      *(_DWORD *)(v1 + 72) = 10;
      *(_DWORD *)(v1 + 56) = 1;
      if ( (int)RtlpWnfRegisterTpNotification() >= 0 )
      {
        qword_180146F28 = v1;
        return 1LL;
      }
      TpReleaseTimer(*(_QWORD *)(v1 + 80));
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
  }
  return 0LL;
}
