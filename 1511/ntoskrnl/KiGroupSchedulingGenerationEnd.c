/*
 * XREFs of KiGroupSchedulingGenerationEnd @ 0x14007BB00
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x14007B4A0 (KiGroupSchedulingQuantumEnd.c)
 *     KeTransitionProcessorParkState @ 0x1401CBFEC (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiUpdateThreadState @ 0x140014CD8 (KiUpdateThreadState.c)
 *     KiQueryEffectivePriorityThread @ 0x140014D6C (KiQueryEffectivePriorityThread.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x14007B7B0 (KiTransitionSchedulingGroupGeneration.c)
 *     KiEndThreadCycleAccumulation @ 0x14007BC90 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x14007CDE0 (KiStartThreadCycleAccumulation.c)
 *     KiSelectReadyThread @ 0x1400832A0 (KiSelectReadyThread.c)
 *     KiAddThreadToPrcbQueue @ 0x1400E6404 (KiAddThreadToPrcbQueue.c)
 *     KiSetProcessorIdle @ 0x1400EC330 (KiSetProcessorIdle.c)
 */

__int64 __fastcall KiGroupSchedulingGenerationEnd(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v3; // r14
  bool v5; // di
  __int64 result; // rax
  __int64 v9; // rbp
  int v10; // esi
  int v11; // r15d
  _BYTE *ready; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  char EffectivePriorityThread; // al
  __int64 v16; // r8

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
    v9 = *(_QWORD *)(a1 + 16);
    v10 = 0;
    v11 = 0;
    if ( v9 )
    {
      if ( v9 == *(_QWORD *)(a1 + 24) )
        goto LABEL_10;
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( (*(_BYTE *)(v3 + 2) & 4) != 0 )
        EffectivePriorityThread = KiQueryEffectivePriorityThread(v3, a1);
      else
        EffectivePriorityThread = *(_BYTE *)(v3 + 195);
      **(_BYTE **)(a1 + 56) = EffectivePriorityThread;
      *(_BYTE *)(v9 + 388) = 1;
      v16 = (unsigned int)*(char *)(v9 + 195);
      *(_DWORD *)(v9 + 436) = MEMORY[0xFFFFF78000000320];
      KiAddThreadToPrcbQueue(a1, v9, v16, 1LL);
      v11 = 1;
    }
    if ( v9 != *(_QWORD *)(a1 + 24) )
    {
      if ( !v5 )
      {
        v10 = *(char *)(v3 + 195) + 1;
        if ( v10 > 31 )
          goto LABEL_11;
      }
      ready = (_BYTE *)KiSelectReadyThread((unsigned int)v10, a1);
      if ( ready )
      {
        KiUpdateThreadState(a1, ready, 3, 1);
        --v11;
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
    if ( v11 > 0 )
    {
      if ( (*(_BYTE *)(a1 + 35) & 1) == 0 )
        goto LABEL_11;
      v13 = 1LL;
      v14 = 1LL;
    }
    else
    {
      if ( v11 >= 0 || (*(_BYTE *)(a1 + 35) & 1) != 0 )
        goto LABEL_11;
      v13 = 0LL;
      v14 = 0LL;
    }
    KiSetProcessorIdle(a1, v14, v13);
    goto LABEL_11;
  }
  return result;
}
