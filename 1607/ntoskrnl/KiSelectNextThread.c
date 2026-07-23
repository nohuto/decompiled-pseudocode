/*
 * XREFs of KiSelectNextThread @ 0x1400C8450
 * Callers:
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     KiSearchForNewThreadOnProcessor @ 0x14005B8A0 (KiSearchForNewThreadOnProcessor.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExpWaitForResource @ 0x14005C9B0 (ExpWaitForResource.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1400C8DDC (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetSystemAffinityThread @ 0x1400CAA54 (KiSetSystemAffinityThread.c)
 *     KiQuantumEnd @ 0x1400CF620 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400CFF60 (KiGroupSchedulingQuantumEnd.c)
 *     KiExitThreadWait @ 0x1400F06F0 (KiExitThreadWait.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1401115F4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetHeteroPolicyThread @ 0x1401D8180 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiSelectReadyThread @ 0x14005BD40 (KiSelectReadyThread.c)
 *     KiSelectLowestRankedThread @ 0x1400C856C (KiSelectLowestRankedThread.c)
 *     KiQueryEffectivePriorityThread @ 0x1400CE00C (KiQueryEffectivePriorityThread.c)
 *     KiCheckThreadAffinity @ 0x1400CEFD4 (KiCheckThreadAffinity.c)
 *     KiAddThreadToReadyQueue @ 0x1401D7BA8 (KiAddThreadToReadyQueue.c)
 */

__int64 __fastcall KiSelectNextThread(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  unsigned __int64 *v5; // rbx
  unsigned __int64 *v6; // r8
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // rcx
  char EffectivePriorityThread; // al
  __int64 result; // rax
  int v13; // r9d
  _QWORD *v14; // rbx

  while ( 1 )
  {
    v5 = KiSelectReadyThread(1, a1, a3);
    if ( !v5 )
    {
      v5 = (unsigned __int64 *)KiSelectLowestRankedThread(a1);
      if ( !v5 )
        v5 = KiSelectReadyThread(0, a1, v6);
    }
    if ( !v5 )
      break;
    if ( (unsigned int)KiCheckThreadAffinity(v5) )
      goto LABEL_10;
    if ( !a2 )
    {
      LOBYTE(v13) = 1;
      KiAddThreadToReadyQueue(a1, 0, (_DWORD)v5, v13, 1);
      break;
    }
    *((_BYTE *)v5 + 388) = 7;
    v14 = v5 + 27;
    *v14 = *a2;
    *a2 = v14;
  }
  v7 = *(unsigned __int8 *)(a1 + 35);
  v5 = *(unsigned __int64 **)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 1600);
  *(_BYTE *)(a1 + 11755) = 1;
  if ( (v7 & 1) != 0 )
  {
    v9 = v7 - 1;
    *(_BYTE *)(a1 + 35) = v9;
    if ( !v9 )
      _interlockedbittestandset64((volatile signed __int32 *)v8, *(unsigned __int8 *)(a1 + 1617));
    _interlockedbittestandset64((volatile signed __int32 *)(v8 + 16), *(unsigned __int8 *)(a1 + 1617));
    v10 = *(_QWORD *)(a1 + 24920);
    if ( (v10 & *(_QWORD *)(v8 + 16)) == v10 )
      _InterlockedOr64((volatile signed __int64 *)(v8 + 8), v10);
  }
LABEL_10:
  if ( (*((_BYTE *)v5 + 2) & 4) != 0 )
    EffectivePriorityThread = KiQueryEffectivePriorityThread(v5, a1);
  else
    EffectivePriorityThread = *((_BYTE *)v5 + 195);
  **(_BYTE **)(a1 + 56) = EffectivePriorityThread;
  *(_QWORD *)(a1 + 16) = v5;
  result = *((unsigned __int8 *)v5 + 388);
  if ( (_BYTE)result == 1 )
  {
    result = (unsigned int)(*((_DWORD *)v5 + 502) - *((_DWORD *)v5 + 109) + MEMORY[0xFFFFF78000000320]);
    *((_DWORD *)v5 + 502) = result;
  }
  *((_BYTE *)v5 + 388) = 3;
  return result;
}
