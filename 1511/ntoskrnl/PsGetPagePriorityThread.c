/*
 * XREFs of PsGetPagePriorityThread @ 0x140070140
 * Callers:
 *     MiGetEffectivePagePriorityThread @ 0x140011A18 (MiGetEffectivePagePriorityThread.c)
 *     CcScheduleReadAheadEx @ 0x14002E96C (CcScheduleReadAheadEx.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     ExpWorkerThread @ 0x14006F990 (ExpWorkerThread.c)
 *     MiInitializeInPageSupport @ 0x140070E90 (MiInitializeInPageSupport.c)
 *     MiMapWsMetaPage @ 0x1400A90C0 (MiMapWsMetaPage.c)
 *     MiInitializePfn @ 0x1400AA390 (MiInitializePfn.c)
 *     CcInitializeCacheMap @ 0x1400AF300 (CcInitializeCacheMap.c)
 *     SmSetThreadPagePriority @ 0x1400F7AD8 (SmSetThreadPagePriority.c)
 *     CcCompleteAsyncRead @ 0x1400FB54C (CcCompleteAsyncRead.c)
 *     CcPerformReadAhead @ 0x1400FC4E4 (CcPerformReadAhead.c)
 *     CcAsyncCopyRead @ 0x1400FF7AC (CcAsyncCopyRead.c)
 *     PfLogFileDataAccess @ 0x140116508 (PfLogFileDataAccess.c)
 *     EtwpTraceThreadRundown @ 0x14011FAD4 (EtwpTraceThreadRundown.c)
 *     PfSnCheckActionsNeeded @ 0x1404D78A0 (PfSnCheckActionsNeeded.c)
 *     PfSnAsyncContextInitialize @ 0x1404DFB18 (PfSnAsyncContextInitialize.c)
 *     EtwTraceThread @ 0x140502700 (EtwTraceThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetPagePriorityThread(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1724) >> 12) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 772LL) & 0x100000) != 0 && (unsigned int)result >= 2 )
    return 2LL;
  return result;
}
