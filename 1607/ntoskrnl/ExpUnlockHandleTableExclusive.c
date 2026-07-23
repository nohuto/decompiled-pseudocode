/*
 * XREFs of ExpUnlockHandleTableExclusive @ 0x1400A6FC4
 * Callers:
 *     ExDisableHandleTracing @ 0x14022C818 (ExDisableHandleTracing.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14022C960 (ExQueryHandleExceptionsPermanency.c)
 *     ExReferenceHandleDebugInfo @ 0x1404B7C04 (ExReferenceHandleDebugInfo.c)
 *     ExEnableHandleExceptions @ 0x1404B7C54 (ExEnableHandleExceptions.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x1404B7CF0 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     ExEnableHandleTracing @ 0x1406AD4DC (ExEnableHandleTracing.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall ExpUnlockHandleTableExclusive(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx

  v3 = a1 + 56;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 56);
  KeAbPostRelease(v3);
  return KeLeaveCriticalRegionThread(a2);
}
