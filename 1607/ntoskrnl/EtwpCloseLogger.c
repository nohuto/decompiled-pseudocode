/*
 * XREFs of EtwpCloseLogger @ 0x1400737B0
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x1400734CC (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x14007369C (EtwpCCSwapFlush.c)
 *     EtwpOpenLogger @ 0x1400737E8 (EtwpOpenLogger.c)
 *     NtTraceEvent @ 0x1400D3400 (NtTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x1400D3C30 (EtwpTraceMessageVa.c)
 *     EtwSendTraceBuffer @ 0x140224F50 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x1402250B8 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1402254F0 (EtwTraceRaw.c)
 *     EtwpTraceStackKey @ 0x14022B004 (EtwpTraceStackKey.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400073F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
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
