/*
 * XREFs of KiUpdateThreadState @ 0x140091CEC
 * Callers:
 *     KiDeferredReadyThread @ 0x140056AC0 (KiDeferredReadyThread.c)
 *     KiSwapThread @ 0x14005B200 (KiSwapThread.c)
 *     ExpApplyPriorityBoost @ 0x14005D2D0 (ExpApplyPriorityBoost.c)
 *     ExpReleaseResourceForThreadLite @ 0x140068950 (ExpReleaseResourceForThreadLite.c)
 *     KeRemoveQueueEx @ 0x14006A3B0 (KeRemoveQueueEx.c)
 *     KiReadyOutSwappedThreads @ 0x140091140 (KiReadyOutSwappedThreads.c)
 *     NtYieldExecution @ 0x140091AF0 (NtYieldExecution.c)
 *     KiApplyForegroundBoostThread @ 0x1400CAD5C (KiApplyForegroundBoostThread.c)
 *     KiSchedulerApc @ 0x1400CB720 (KiSchedulerApc.c)
 *     KiRemoveBoostThread @ 0x1400CF3B0 (KiRemoveBoostThread.c)
 *     KiQuantumEnd @ 0x1400D1780 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400D20C0 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400D24A0 (KiGroupSchedulingGenerationEnd.c)
 *     KiSetPriorityThread @ 0x1400D2BA0 (KiSetPriorityThread.c)
 *     KeSetPriorityThread @ 0x1400D2F20 (KeSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x1400D3450 (KiProcessDeferredReadyList.c)
 *     KiCheckForThreadDispatch @ 0x1400F2960 (KiCheckForThreadDispatch.c)
 *     KeRemovePriorityBoost @ 0x1401D2D10 (KeRemovePriorityBoost.c)
 * Callees:
 *     KiQueryEffectivePriorityThread @ 0x1400D016C (KiQueryEffectivePriorityThread.c)
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
