/*
 * XREFs of KiSelectNextThread @ 0x14002A940
 * Callers:
 *     KiSetSystemAffinityThread @ 0x14002A7B4 (KiSetSystemAffinityThread.c)
 *     KiExitThreadWait @ 0x14002AC60 (KiExitThreadWait.c)
 *     KiQuantumEnd @ 0x14007AAB0 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14007B4A0 (KiGroupSchedulingQuantumEnd.c)
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140082E30 (KiSearchForNewThreadOnProcessor.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140095BA0 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140106E54 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetHeteroPolicyThread @ 0x1401C9B74 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiQueryEffectivePriorityThread @ 0x140014D6C (KiQueryEffectivePriorityThread.c)
 *     KiCheckThreadAffinity @ 0x14002A76C (KiCheckThreadAffinity.c)
 *     KiSelectLowestRankedThread @ 0x14002AA38 (KiSelectLowestRankedThread.c)
 *     KiSelectReadyThread @ 0x1400832A0 (KiSelectReadyThread.c)
 *     KiAddThreadToReadyQueue @ 0x1401C95D8 (KiAddThreadToReadyQueue.c)
 */

__int64 __fastcall KiSelectNextThread(__int64 a1, _QWORD *a2)
{
  __int64 ready; // rdi
  int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // rcx
  __int64 result; // rax
  int v10; // r9d

  while ( 1 )
  {
    ready = KiSelectReadyThread(1LL, a1);
    if ( !ready )
    {
      ready = KiSelectLowestRankedThread(a1);
      if ( !ready )
        ready = KiSelectReadyThread(0LL, a1);
    }
    if ( !ready )
      break;
    if ( KiCheckThreadAffinity(ready) )
      goto LABEL_10;
    if ( !a2 )
    {
      LOBYTE(v10) = 1;
      KiAddThreadToReadyQueue(a1, 0, ready, v10, 1);
      break;
    }
    *(_BYTE *)(ready + 388) = 7;
    *(_QWORD *)(ready + 216) = *a2;
    *a2 = ready + 216;
  }
  v5 = *(unsigned __int8 *)(a1 + 35);
  ready = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 1600);
  *(_BYTE *)(a1 + 11755) = 1;
  if ( (v5 & 1) == 0 )
    __fastfail(0x21u);
  v7 = v5 - 1;
  *(_BYTE *)(a1 + 35) = v7;
  if ( !v7 )
    _interlockedbittestandset64((volatile signed __int32 *)v6, *(unsigned __int8 *)(a1 + 1617));
  _interlockedbittestandset64((volatile signed __int32 *)(v6 + 16), *(unsigned __int8 *)(a1 + 1617));
  v8 = *(_QWORD *)(a1 + 24792);
  if ( (v8 & *(_QWORD *)(v6 + 16)) == v8 )
    _InterlockedOr64((volatile signed __int64 *)(v6 + 8), v8);
LABEL_10:
  if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
    result = KiQueryEffectivePriorityThread(ready, a1);
  else
    result = *(unsigned __int8 *)(ready + 195);
  **(_BYTE **)(a1 + 56) = result;
  *(_QWORD *)(a1 + 16) = ready;
  *(_BYTE *)(ready + 388) = 3;
  return result;
}
