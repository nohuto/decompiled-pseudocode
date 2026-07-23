/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x1400073F0
 * Callers:
 *     RawEndOperation @ 0x1400073C0 (RawEndOperation.c)
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     EtwpCloseLogger @ 0x1400737B0 (EtwpCloseLogger.c)
 *     EtwpEventWriteFull @ 0x140073860 (EtwpEventWriteFull.c)
 *     EtwpTraceMessageVa @ 0x1400D3C30 (EtwpTraceMessageVa.c)
 *     EtwpFailLogging @ 0x140224BC4 (EtwpFailLogging.c)
 *     EtwpCompressionProc @ 0x14022A434 (EtwpCompressionProc.c)
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 *     EtwpFreeLoggerContext @ 0x1404942D4 (EtwpFreeLoggerContext.c)
 *     EtwpStopTrace @ 0x1404946E0 (EtwpStopTrace.c)
 *     EtwpWriteUserEvent @ 0x1404F38B0 (EtwpWriteUserEvent.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
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
