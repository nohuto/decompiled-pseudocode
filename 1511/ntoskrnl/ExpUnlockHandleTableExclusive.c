/*
 * XREFs of ExpUnlockHandleTableExclusive @ 0x14009642C
 * Callers:
 *     ExDisableHandleTracing @ 0x1402137F0 (ExDisableHandleTracing.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140213938 (ExQueryHandleExceptionsPermanency.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x1404521A0 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     ExEnableHandleExceptions @ 0x140452258 (ExEnableHandleExceptions.c)
 *     ExReferenceHandleDebugInfo @ 0x1404C6520 (ExReferenceHandleDebugInfo.c)
 *     ExEnableHandleTracing @ 0x14066C82C (ExEnableHandleTracing.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 __fastcall ExpUnlockHandleTableExclusive(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx

  v3 = a1 + 56;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 56));
  KeAbPostRelease(v3);
  return KeLeaveCriticalRegionThread(a2);
}
