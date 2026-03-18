/*
 * XREFs of KiUpdateThreadState @ 0x140014CD8
 * Callers:
 *     KiSchedulerApc @ 0x140029304 (KiSchedulerApc.c)
 *     KiCheckForThreadDispatch @ 0x14002AD14 (KiCheckForThreadDispatch.c)
 *     KiReadyOutSwappedThreads @ 0x14003307C (KiReadyOutSwappedThreads.c)
 *     ExpReleaseResourceForThreadLite @ 0x14003FF80 (ExpReleaseResourceForThreadLite.c)
 *     KiQuantumEnd @ 0x14007AAB0 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14007B4A0 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14007BB00 (KiGroupSchedulingGenerationEnd.c)
 *     KiSetPriorityThread @ 0x14007BEA0 (KiSetPriorityThread.c)
 *     KiRemoveBoostThread @ 0x14007CF40 (KiRemoveBoostThread.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x14007D6F0 (KeSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     ExpApplyPriorityBoost @ 0x14007EC80 (ExpApplyPriorityBoost.c)
 *     KeRemoveQueueEx @ 0x1400807E0 (KeRemoveQueueEx.c)
 *     KiSwapThread @ 0x140082450 (KiSwapThread.c)
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400959C4 (KiApplyForegroundBoostThread.c)
 *     KeRemovePriorityBoost @ 0x1401C2FDC (KeRemovePriorityBoost.c)
 * Callees:
 *     KiQueryEffectivePriorityThread @ 0x140014D6C (KiQueryEffectivePriorityThread.c)
 */

char __fastcall KiUpdateThreadState(__int64 a1, _BYTE *a2, int a3, char a4)
{
  _UNKNOWN **v4; // rax
  char v5; // bp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v4 = &retaddr;
  v5 = 1;
  if ( a4 )
    v5 = 3;
  if ( (v5 & 2) != 0 )
  {
    if ( (a2[2] & 4) != 0 )
      LOBYTE(v4) = KiQueryEffectivePriorityThread(a2, a1);
    else
      LOBYTE(v4) = a2[195];
    **(_BYTE **)(a1 + 56) = (_BYTE)v4;
  }
  if ( a3 == 2 )
  {
    *(_QWORD *)(a1 + 8) = a2;
  }
  else if ( a3 == 3 )
  {
    *(_QWORD *)(a1 + 16) = a2;
  }
  a2[388] = a3;
  return (char)v4;
}
