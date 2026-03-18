/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x1400C33F0
 * Callers:
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x14009E960 (EtwpEventWriteFull.c)
 *     EtwpCloseLogger @ 0x14009FC5C (EtwpCloseLogger.c)
 *     MiDeleteValidSystemPte @ 0x1400A1760 (MiDeleteValidSystemPte.c)
 *     RawEndOperation @ 0x1400C33B8 (RawEndOperation.c)
 *     EtwpFailLogging @ 0x14020D250 (EtwpFailLogging.c)
 *     EtwpWriteUserEvent @ 0x14041BFD0 (EtwpWriteUserEvent.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpFreeLoggerContext @ 0x14049D5B0 (EtwpFreeLoggerContext.c)
 *     EtwpStopTrace @ 0x1404CA4D8 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
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
