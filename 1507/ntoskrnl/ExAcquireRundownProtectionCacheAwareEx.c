/*
 * XREFs of ExAcquireRundownProtectionCacheAwareEx @ 0x14001A6C0
 * Callers:
 *     EtwpLogSystemEventUnsafe @ 0x14000BBEC (EtwpLogSystemEventUnsafe.c)
 *     EtwpTraceMessageVa @ 0x140016040 (EtwpTraceMessageVa.c)
 *     NtTraceEvent @ 0x140016980 (NtTraceEvent.c)
 *     EtwpCCSwapTrace @ 0x1400177F0 (EtwpCCSwapTrace.c)
 *     EtwpEventWriteFull @ 0x1400182F0 (EtwpEventWriteFull.c)
 *     MiDeleteValidSystemPte @ 0x140038C20 (MiDeleteValidSystemPte.c)
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     EtwTraceEvent @ 0x14015C274 (EtwTraceEvent.c)
 *     EtwpFailLogging @ 0x14025C558 (EtwpFailLogging.c)
 *     EtwSendTraceBuffer @ 0x14025C988 (EtwSendTraceBuffer.c)
 *     EtwpTraceStackKey @ 0x140260B00 (EtwpTraceStackKey.c)
 *     RawReadWriteDeviceControl @ 0x14040BAF0 (RawReadWriteDeviceControl.c)
 *     RawQueryFsVolumeInfo @ 0x14040C30C (RawQueryFsVolumeInfo.c)
 *     RawQueryFsSizeInfo @ 0x14040C604 (RawQueryFsSizeInfo.c)
 *     EtwpStopTrace @ 0x14040EAB0 (EtwpStopTrace.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpWriteUserEvent @ 0x140437B50 (EtwpWriteUserEvent.c)
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     WmiQueryTraceInformation @ 0x1405526DC (WmiQueryTraceInformation.c)
 *     RawUserFsCtrl @ 0x14055F784 (RawUserFsCtrl.c)
 *     EtwWriteErrorLogEntry @ 0x14057C26C (EtwWriteErrorLogEntry.c)
 *     RawQueryInformation @ 0x1406C6F38 (RawQueryInformation.c)
 *     RawSetInformation @ 0x1406C7008 (RawSetInformation.c)
 *     RawQueryFsDeviceInfo @ 0x1406C70DC (RawQueryFsDeviceInfo.c)
 *     VerifierExAcquireRundownProtectionCacheAwareEx @ 0x140741B4C (VerifierExAcquireRundownProtectionCacheAwareEx.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExAcquireRundownProtectionCacheAwareEx(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware, ULONG Count)
{
  signed __int64 *v2; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  v2 = (signed __int64 *)(*(_QWORD *)RunRefCacheAware
                        + *((_DWORD *)RunRefCacheAware + 4)
                        * (KeGetCurrentPrcb()->Number % *((_DWORD *)RunRefCacheAware + 5)));
  _m_prefetchw(v2);
  v3 = *v2;
  if ( (*v2 & 1) != 0 )
    return 0;
  while ( 1 )
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange64(v2, 2 * Count + v3, v3);
    if ( v4 == v3 )
      break;
    if ( (v3 & 1) != 0 )
      return 0;
  }
  return 1;
}
