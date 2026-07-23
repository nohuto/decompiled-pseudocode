/*
 * XREFs of KiUpdateThreadState @ 0x14009144C
 * Callers:
 *     KiDeferredReadyThread @ 0x140056640 (KiDeferredReadyThread.c)
 *     KiSwapThread @ 0x14005AD80 (KiSwapThread.c)
 *     ExpApplyPriorityBoost @ 0x14005CE50 (ExpApplyPriorityBoost.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400684D0 (ExpReleaseResourceForThreadLite.c)
 *     KeRemoveQueueEx @ 0x140069F30 (KeRemoveQueueEx.c)
 *     KiReadyOutSwappedThreads @ 0x1400908A0 (KiReadyOutSwappedThreads.c)
 *     NtYieldExecution @ 0x140091250 (NtYieldExecution.c)
 *     KiApplyForegroundBoostThread @ 0x1400C8BFC (KiApplyForegroundBoostThread.c)
 *     KiSchedulerApc @ 0x1400C95C0 (KiSchedulerApc.c)
 *     KiRemoveBoostThread @ 0x1400CD250 (KiRemoveBoostThread.c)
 *     KiQuantumEnd @ 0x1400CF620 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400CFF60 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400D0340 (KiGroupSchedulingGenerationEnd.c)
 *     KiSetPriorityThread @ 0x1400D0A40 (KiSetPriorityThread.c)
 *     KeSetPriorityThread @ 0x1400D0DC0 (KeSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x1400D12F0 (KiProcessDeferredReadyList.c)
 *     KiCheckForThreadDispatch @ 0x1400F07B0 (KiCheckForThreadDispatch.c)
 *     KeRemovePriorityBoost @ 0x1401D2B3C (KeRemovePriorityBoost.c)
 * Callees:
 *     KiQueryEffectivePriorityThread @ 0x1400CE00C (KiQueryEffectivePriorityThread.c)
 */

char __fastcall KiUpdateThreadState(__int64 a1, __int64 a2, int a3, char a4)
{
  char v4; // bp
  char EffectivePriorityThread; // al
  int v9; // eax

  v4 = 1;
  if ( a4 )
    v4 = 3;
  if ( (v4 & 2) != 0 )
  {
    if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
      EffectivePriorityThread = KiQueryEffectivePriorityThread(a2, a1);
    else
      EffectivePriorityThread = *(_BYTE *)(a2 + 195);
    **(_BYTE **)(a1 + 56) = EffectivePriorityThread;
  }
  if ( a3 == 2 )
  {
    *(_QWORD *)(a1 + 8) = a2;
  }
  else if ( a3 == 3 )
  {
    *(_QWORD *)(a1 + 16) = a2;
  }
  LOBYTE(v9) = *(_BYTE *)(a2 + 388);
  if ( (_BYTE)v9 == 1 )
  {
    v9 = *(_DWORD *)(a2 + 2008) - *(_DWORD *)(a2 + 436) + MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(a2 + 2008) = v9;
  }
  *(_BYTE *)(a2 + 388) = a3;
  return v9;
}
