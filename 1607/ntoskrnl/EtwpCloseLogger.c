/*
 * XREFs of EtwpCloseLogger @ 0x140073C30
 * Callers:
 *     EtwpLogKernelEvent @ 0x140059740 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x14007394C (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x140073B1C (EtwpCCSwapFlush.c)
 *     EtwpOpenLogger @ 0x140073C68 (EtwpOpenLogger.c)
 *     NtTraceEvent @ 0x1400D5560 (NtTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x1400D5D90 (EtwpTraceMessageVa.c)
 *     EtwSendTraceBuffer @ 0x140225124 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x14022528C (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1402256C4 (EtwTraceRaw.c)
 *     EtwpTraceStackKey @ 0x14022B1D8 (EtwpTraceStackKey.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140007280 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 __fastcall EtwpCloseLogger(unsigned int a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  result = a2;
  if ( a3 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 8LL * a1 + 400), 1u);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v4, v5, v6);
  }
  return result;
}
