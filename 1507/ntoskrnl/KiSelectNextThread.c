/*
 * XREFs of KiSelectNextThread @ 0x1400D5240
 * Callers:
 *     KiSetAffinityThread @ 0x1400434D0 (KiSetAffinityThread.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ExpWaitForResource @ 0x14009C5E0 (ExpWaitForResource.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1400A15C0 (KiSearchForNewThreadOnProcessor.c)
 *     KiExitThreadWait @ 0x1400A23E0 (KiExitThreadWait.c)
 *     KiQuantumEnd @ 0x1400A25A0 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400A3400 (KiGroupSchedulingQuantumEnd.c)
 *     KiSetSystemAffinityThread @ 0x1400D50B8 (KiSetSystemAffinityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14013328C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140133514 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetHeteroPolicyThread @ 0x14020739C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiSelectReadyThread @ 0x1400A19C0 (KiSelectReadyThread.c)
 *     KiSelectLowestRankedThread @ 0x1400D5364 (KiSelectLowestRankedThread.c)
 *     KiSetProcessorIdle @ 0x1400D53B0 (KiSetProcessorIdle.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToReadyQueue @ 0x1400ED780 (KiAddThreadToReadyQueue.c)
 */

char *__fastcall KiSelectNextThread(__int64 a1, _QWORD *a2)
{
  char v4; // si
  __int64 ready; // r10
  _QWORD *v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rdx
  char *result; // rax

  v4 = 1;
  while ( 1 )
  {
    ready = KiSelectReadyThread(1, a1);
    if ( !ready )
    {
      ready = KiSelectLowestRankedThread(a1);
      if ( !ready )
        ready = KiSelectReadyThread(0, a1);
    }
    if ( !ready )
      break;
    if ( *(_QWORD *)(ready + 568) == KiCpuSetSequence || (*(_DWORD *)(ready + 116) & 8) != 0 )
      goto LABEL_12;
    if ( !a2 )
    {
      KiAddThreadToReadyQueue(a1, 0, ready, 1, 1);
      break;
    }
    *(_BYTE *)(ready + 388) = 7;
    v6 = (_QWORD *)(ready + 216);
    *v6 = *a2;
    *a2 = v6;
  }
  KiSetProcessorIdle(a1, 1LL, 1LL);
LABEL_12:
  if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
  {
    if ( *(char *)(ready + 195) >= 16
      || !*(_QWORD *)(ready + 104)
      || (v7 = *(_QWORD *)(ready + 104)) == 0
      || (v8 = *(unsigned int *)(a1 + 1624) + v7) == 0
      || !(unsigned int)KiGetThreadEffectiveRankNonZero(ready, v8, 0LL) )
    {
      v4 = *(_BYTE *)(ready + 195);
    }
  }
  else
  {
    v4 = *(_BYTE *)(ready + 195);
  }
  result = *(char **)(a1 + 56);
  *result = v4;
  *(_QWORD *)(a1 + 16) = ready;
  *(_BYTE *)(ready + 388) = 3;
  return result;
}
