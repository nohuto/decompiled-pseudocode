/*
 * XREFs of KiDeferGroupSchedulingPreemption @ 0x140029684
 * Callers:
 *     KiDispatchInterrupt @ 0x14015A980 (KiDispatchInterrupt.c)
 * Callees:
 *     KiQueryEffectivePriorityThread @ 0x140014D6C (KiQueryEffectivePriorityThread.c)
 *     KiShouldPreemptionBeDeferred @ 0x14002A6D4 (KiShouldPreemptionBeDeferred.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x14002A710 (KiGetThreadEffectiveRankNonZero.c)
 *     KiPrcbInGroupAffinity @ 0x14002A910 (KiPrcbInGroupAffinity.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400312FC (KiInsertDeferredPreemptionApc.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiAddThreadToScbQueue @ 0x1400C38CC (KiAddThreadToScbQueue.c)
 *     KiAddThreadToPrcbQueue @ 0x1400E6404 (KiAddThreadToPrcbQueue.c)
 */

char __fastcall KiDeferGroupSchedulingPreemption(__int64 a1, __int64 a2)
{
  int ThreadEffectiveRankNonZero; // r14d
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // rbp
  char EffectivePriorityThread; // al
  int v10; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 104) || !(unsigned __int8)KiShouldPreemptionBeDeferred() )
    return 0;
  ThreadEffectiveRankNonZero = 0;
  v10 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v10);
    while ( *(_QWORD *)(a2 + 48) );
  }
  v6 = *(_QWORD *)(a2 + 16);
  if ( !*(_QWORD *)(a1 + 104)
    || v6 == *(_QWORD *)(a2 + 24)
    || !(unsigned int)KiPrcbInGroupAffinity(a2, a1 + 576)
    || ((v8 = *(_QWORD *)(v6 + 104)) == 0
     || (v8 += *(unsigned int *)(a2 + 1624)) == 0
     || (LOBYTE(v7) = 1, (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v6, v8, v7)) == 0))
    && *(_BYTE *)(v6 + 195) > *(_BYTE *)(a1 + 195) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    return 0;
  }
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
    EffectivePriorityThread = KiQueryEffectivePriorityThread(a1, a2);
  else
    EffectivePriorityThread = *(_BYTE *)(a1 + 195);
  **(_BYTE **)(a2 + 56) = EffectivePriorityThread;
  *(_BYTE *)(v6 + 388) = 1;
  if ( ThreadEffectiveRankNonZero )
    KiAddThreadToScbQueue(a2, v8, v6, 1LL);
  else
    KiAddThreadToPrcbQueue(a2, v6, (unsigned int)*(char *)(v6 + 195), 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
  KiInsertDeferredPreemptionApc(a2, a1, 0LL);
  return 1;
}
