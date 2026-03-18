/*
 * XREFs of ExpUnlockHandleTableExclusive @ 0x1400A8A44
 * Callers:
 *     ExDisableHandleTracing @ 0x14022C9EC (ExDisableHandleTracing.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14022CB34 (ExQueryHandleExceptionsPermanency.c)
 *     ExReferenceHandleDebugInfo @ 0x1404D4164 (ExReferenceHandleDebugInfo.c)
 *     ExEnableHandleExceptions @ 0x1404D41B4 (ExEnableHandleExceptions.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x1404D4250 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     ExEnableHandleTracing @ 0x1406AD3A4 (ExEnableHandleTracing.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
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
