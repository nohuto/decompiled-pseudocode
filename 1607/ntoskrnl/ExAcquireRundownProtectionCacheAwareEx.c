/*
 * XREFs of ExAcquireRundownProtectionCacheAwareEx @ 0x140006B90
 * Callers:
 *     RawBeginOperation @ 0x140006B5C (RawBeginOperation.c)
 *     EtwpLogKernelEvent @ 0x140059740 (EtwpLogKernelEvent.c)
 *     EtwpOpenLogger @ 0x140073C68 (EtwpOpenLogger.c)
 *     EtwpEventWriteFull @ 0x140073CE0 (EtwpEventWriteFull.c)
 *     EtwpTraceMessageVa @ 0x1400D5D90 (EtwpTraceMessageVa.c)
 *     EtwpFailLogging @ 0x140224D98 (EtwpFailLogging.c)
 *     EtwpCompressionDpc @ 0x14022A5CC (EtwpCompressionDpc.c)
 *     EtwpStartLogger @ 0x14048EE94 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404900BC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpStopTrace @ 0x140493C50 (EtwpStopTrace.c)
 *     EtwpWriteUserEvent @ 0x140510920 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExAcquireRundownProtectionCacheAwareEx(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware, ULONG Count)
{
  signed __int64 *v2; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  v2 = (signed __int64 *)((char *)RunRefCacheAware->RunRefs
                        + RunRefCacheAware->RunRefSize * (KeGetPcr()->Prcb.Number % RunRefCacheAware->Number));
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
