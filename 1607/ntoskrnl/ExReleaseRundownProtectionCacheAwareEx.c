/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x140007280
 * Callers:
 *     RawEndOperation @ 0x140007250 (RawEndOperation.c)
 *     EtwpLogKernelEvent @ 0x140059740 (EtwpLogKernelEvent.c)
 *     EtwpCloseLogger @ 0x140073C30 (EtwpCloseLogger.c)
 *     EtwpEventWriteFull @ 0x140073CE0 (EtwpEventWriteFull.c)
 *     EtwpTraceMessageVa @ 0x1400D5D90 (EtwpTraceMessageVa.c)
 *     EtwpFailLogging @ 0x140224D98 (EtwpFailLogging.c)
 *     EtwpCompressionProc @ 0x14022A608 (EtwpCompressionProc.c)
 *     EtwpStartLogger @ 0x14048EE94 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404900BC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140490180 (EtwpReleaseLoggerContext.c)
 *     EtwpFreeLoggerContext @ 0x140493844 (EtwpFreeLoggerContext.c)
 *     EtwpStopTrace @ 0x140493C50 (EtwpStopTrace.c)
 *     EtwpWriteUserEvent @ 0x140510920 (EtwpWriteUserEvent.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 */

void __stdcall ExReleaseRundownProtectionCacheAwareEx(PEX_RUNDOWN_REF_CACHE_AWARE RunRef, ULONG Count)
{
  signed __int64 *v2; // r8
  signed __int64 v3; // r9
  unsigned __int64 v4; // r9

  v2 = (signed __int64 *)((char *)RunRef->RunRefs + RunRef->RunRefSize * (KeGetPcr()->Prcb.Number % RunRef->Number));
  _m_prefetchw(v2);
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = *v2;
      if ( (*v2 & 1) != 0 )
        break;
      if ( v3 == _InterlockedCompareExchange64(v2, v3 - 2 * Count, v3) )
        return;
    }
    if ( v3 != 1 )
      break;
    v2 = (signed __int64 *)((char *)RunRef->RunRefs + RunRef->RunRefSize * (0 % RunRef->Number));
  }
  v4 = v3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v4, -Count) == Count )
    KeSetEvent((PRKEVENT)(v4 + 8), 0, 0);
}
