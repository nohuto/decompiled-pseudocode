/*
 * XREFs of KiDeferGroupSchedulingPreemption @ 0x1400CDCB8
 * Callers:
 *     KiDispatchInterrupt @ 0x140166320 (KiDispatchInterrupt.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiAddThreadToScbQueue @ 0x140098D0C (KiAddThreadToScbQueue.c)
 *     KiAddThreadToPrcbQueue @ 0x1400A361C (KiAddThreadToPrcbQueue.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400C7DD4 (KiInsertDeferredPreemptionApc.c)
 *     KiPrcbInGroupAffinity @ 0x1400CABB0 (KiPrcbInGroupAffinity.c)
 *     KiQueryEffectivePriorityThread @ 0x1400CE00C (KiQueryEffectivePriorityThread.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400CE0C0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiShouldPreemptionBeDeferred @ 0x1400CE170 (KiShouldPreemptionBeDeferred.c)
 */

char __fastcall KiDeferGroupSchedulingPreemption(__int64 a1, __int64 a2)
{
  int ThreadEffectiveRankNonZero; // r14d
  __int64 v5; // rsi
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rbp
  char EffectivePriorityThread; // al
  char v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+60h] [rbp+18h] BYREF

  if ( !*(_QWORD *)(a1 + 104) || !(unsigned __int8)KiShouldPreemptionBeDeferred(a1) )
    return 0;
  ThreadEffectiveRankNonZero = 0;
  v12 = 0;
  v11 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v12);
    while ( *(_QWORD *)(a2 + 48) );
  }
  v5 = *(_QWORD *)(a2 + 16);
  if ( !*(_QWORD *)(a1 + 104)
    || v5 == *(_QWORD *)(a2 + 24)
    || !KiPrcbInGroupAffinity(a2, a1 + 576)
    || ((v9 = *(_QWORD *)(v5 + 104)) == 0
     || (v9 += *(unsigned int *)(a2 + 1624)) == 0
     || (LOBYTE(v8) = 1,
         (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v5, v9, v7, v8, (__int64)&v11)) == 0))
    && *(_BYTE *)(v5 + 195) > *(_BYTE *)(a1 + 195) )
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
  *(_BYTE *)(v5 + 388) = 1;
  if ( ThreadEffectiveRankNonZero )
    KiAddThreadToScbQueue(a2, v9, v5, 1);
  else
    KiAddThreadToPrcbQueue(a2, v5, *(char *)(v5 + 195), 1, v11);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
  KiInsertDeferredPreemptionApc(a2, a1, 0);
  return 1;
}
