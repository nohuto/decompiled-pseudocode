/*
 * XREFs of PsGetPagePriorityThread @ 0x1400E5CA0
 * Callers:
 *     SmSetThreadPagePriority @ 0x1400049CC (SmSetThreadPagePriority.c)
 *     MiGetEffectivePagePriorityThread @ 0x140026934 (MiGetEffectivePagePriorityThread.c)
 *     CcAsyncCopyRead @ 0x14006D6EC (CcAsyncCopyRead.c)
 *     CcCompleteAsyncRead @ 0x14006E664 (CcCompleteAsyncRead.c)
 *     CcScheduleReadAheadEx @ 0x14006E990 (CcScheduleReadAheadEx.c)
 *     CcPerformReadAhead @ 0x140071EB4 (CcPerformReadAhead.c)
 *     EtwpTraceThreadRundown @ 0x1400732C4 (EtwpTraceThreadRundown.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiInitializePfn @ 0x1400E5120 (MiInitializePfn.c)
 *     MiInitializeInPageSupport @ 0x1400E5470 (MiInitializeInPageSupport.c)
 *     ExpWorkerThread @ 0x1400E55A0 (ExpWorkerThread.c)
 *     CcInitializeCacheMapEx @ 0x1400E62E0 (CcInitializeCacheMapEx.c)
 *     PfLogFileDataAccess @ 0x1401FECFC (PfLogFileDataAccess.c)
 *     PfSnAsyncContextInitialize @ 0x1403E6760 (PfSnAsyncContextInitialize.c)
 *     PfSnCheckActionsNeeded @ 0x1403E8FC4 (PfSnCheckActionsNeeded.c)
 *     EtwTraceThread @ 0x1404597E4 (EtwTraceThread.c)
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
