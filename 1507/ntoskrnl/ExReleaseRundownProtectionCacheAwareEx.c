/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40
 * Callers:
 *     RawCompletionRoutine @ 0x140006D10 (RawCompletionRoutine.c)
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
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     EtwpFreeLoggerContext @ 0x140524388 (EtwpFreeLoggerContext.c)
 *     WmiQueryTraceInformation @ 0x1405526DC (WmiQueryTraceInformation.c)
 *     RawUserFsCtrl @ 0x14055F784 (RawUserFsCtrl.c)
 *     EtwWriteErrorLogEntry @ 0x14057C26C (EtwWriteErrorLogEntry.c)
 *     RawQueryInformation @ 0x1406C6F38 (RawQueryInformation.c)
 *     RawSetInformation @ 0x1406C7008 (RawSetInformation.c)
 *     RawQueryFsDeviceInfo @ 0x1406C70DC (RawQueryFsDeviceInfo.c)
 * Callees:
 *     <none>
 */

void __stdcall ExReleaseRundownProtectionCacheAwareEx(PEX_RUNDOWN_REF_CACHE_AWARE RunRef, ULONG Count)
{
  signed __int64 *v3; // r9
  signed __int64 v4; // rcx
  unsigned __int64 v5; // rcx

  v3 = (signed __int64 *)(*(_QWORD *)RunRef
                        + *((_DWORD *)RunRef + 4) * (KeGetCurrentPrcb()->Number % *((_DWORD *)RunRef + 5)));
  _m_prefetchw(v3);
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = *v3;
      if ( (*v3 & 1) != 0 )
        break;
      if ( v4 == _InterlockedCompareExchange64(v3, v4 - 2 * Count, v4) )
        return;
    }
    if ( v4 != 1 )
      break;
    v3 = (signed __int64 *)(*(_QWORD *)RunRef + *((_DWORD *)RunRef + 4) * (0u % *((_DWORD *)RunRef + 5)));
  }
  v5 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5, -Count) == Count )
    KeSetEvent((PRKEVENT)(v5 + 8), 0, 0);
}
