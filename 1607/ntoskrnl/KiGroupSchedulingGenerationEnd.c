/*
 * XREFs of KiGroupSchedulingGenerationEnd @ 0x1400D0340
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x1400CFF60 (KiGroupSchedulingQuantumEnd.c)
 *     KeTransitionProcessorParkState @ 0x1401DBAA4 (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiSelectReadyThread @ 0x14005BD40 (KiSelectReadyThread.c)
 *     KiUpdateThreadState @ 0x14009144C (KiUpdateThreadState.c)
 *     KiAddThreadToPrcbQueue @ 0x1400A361C (KiAddThreadToPrcbQueue.c)
 *     KiSetProcessorIdle @ 0x1400ACFA8 (KiSetProcessorIdle.c)
 *     KiQueryEffectivePriorityThread @ 0x1400CE00C (KiQueryEffectivePriorityThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D0560 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x1400D1640 (KiStartThreadCycleAccumulation.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1400D1710 (KiTransitionSchedulingGroupGeneration.c)
 */

__int64 __fastcall KiGroupSchedulingGenerationEnd(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // r14
  bool v5; // di
  __int64 result; // rax
  unsigned __int64 *v9; // r8
  __int64 v10; // rbp
  signed int v11; // esi
  int v12; // r15d
  unsigned __int64 *v13; // rax
  char v14; // r8
  int v15; // edx
  char EffectivePriorityThread; // al
  signed int v17; // r8d

  v3 = *(_QWORD *)(a1 + 8);
  v5 = v3 == *(_QWORD *)(a1 + 24);
  if ( !a3 )
  {
    _disable();
    KiEndThreadCycleAccumulation(a1, *(_QWORD *)(a1 + 8), 0LL);
    _enable();
  }
  result = KiTransitionSchedulingGroupGeneration(a1, a2, a3);
  if ( !a3 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    v11 = 0;
    v12 = 0;
    if ( v10 )
    {
      if ( v10 == *(_QWORD *)(a1 + 24) )
        goto LABEL_10;
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( (*(_BYTE *)(v3 + 2) & 4) != 0 )
        EffectivePriorityThread = KiQueryEffectivePriorityThread(v3, a1);
      else
        EffectivePriorityThread = *(_BYTE *)(v3 + 195);
      **(_BYTE **)(a1 + 56) = EffectivePriorityThread;
      *(_BYTE *)(v10 + 388) = 1;
      v17 = *(char *)(v10 + 195);
      *(_DWORD *)(v10 + 436) = MEMORY[0xFFFFF78000000320];
      KiAddThreadToPrcbQueue(a1, v10, v17, 1, 0);
      v12 = 1;
    }
    if ( v10 != *(_QWORD *)(a1 + 24) )
    {
      if ( !v5 )
      {
        v11 = *(char *)(v3 + 195) + 1;
        if ( v11 > 31 )
          goto LABEL_11;
      }
      v13 = KiSelectReadyThread(v11, a1, v9);
      if ( v13 )
      {
        KiUpdateThreadState(a1, (__int64)v13, 3, 1);
        --v12;
      }
    }
LABEL_10:
    if ( !v5 )
    {
LABEL_11:
      _disable();
      result = KiStartThreadCycleAccumulation(a1, v3, v5);
      _enable();
      return result;
    }
    if ( v12 > 0 )
    {
      if ( (*(_BYTE *)(a1 + 35) & 1) == 0 )
        goto LABEL_11;
      v14 = 1;
      v15 = 1;
    }
    else
    {
      if ( v12 >= 0 || (*(_BYTE *)(a1 + 35) & 1) != 0 )
        goto LABEL_11;
      v14 = 0;
      v15 = 0;
    }
    KiSetProcessorIdle(a1, v15, v14);
    goto LABEL_11;
  }
  return result;
}
