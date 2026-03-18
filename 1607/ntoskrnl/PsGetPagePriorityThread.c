/*
 * XREFs of PsGetPagePriorityThread @ 0x1400E7E00
 * Callers:
 *     SmSetThreadPagePriority @ 0x140004858 (SmSetThreadPagePriority.c)
 *     MiGetEffectivePagePriorityThread @ 0x140026DB4 (MiGetEffectivePagePriorityThread.c)
 *     CcAsyncCopyRead @ 0x14006DB6C (CcAsyncCopyRead.c)
 *     CcCompleteAsyncRead @ 0x14006EAE4 (CcCompleteAsyncRead.c)
 *     CcScheduleReadAheadEx @ 0x14006EE10 (CcScheduleReadAheadEx.c)
 *     CcPerformReadAhead @ 0x140072334 (CcPerformReadAhead.c)
 *     EtwpTraceThreadRundown @ 0x140073744 (EtwpTraceThreadRundown.c)
 *     MiCopyOnWriteEx @ 0x1400E2730 (MiCopyOnWriteEx.c)
 *     MiInitializePfn @ 0x1400E7280 (MiInitializePfn.c)
 *     MiInitializeInPageSupport @ 0x1400E75D0 (MiInitializeInPageSupport.c)
 *     ExpWorkerThread @ 0x1400E7700 (ExpWorkerThread.c)
 *     CcInitializeCacheMapEx @ 0x1400E8440 (CcInitializeCacheMapEx.c)
 *     PfLogFileDataAccess @ 0x1401FEED0 (PfLogFileDataAccess.c)
 *     PfSnAsyncContextInitialize @ 0x1403E5134 (PfSnAsyncContextInitialize.c)
 *     PfSnCheckActionsNeeded @ 0x1403E7994 (PfSnCheckActionsNeeded.c)
 *     EtwTraceThread @ 0x14045A914 (EtwTraceThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetPagePriorityThread(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1728) >> 12) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 772LL) & 0x100000) != 0 && (unsigned int)result >= 2 )
    return 2LL;
  return result;
}
