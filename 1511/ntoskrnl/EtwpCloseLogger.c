/*
 * XREFs of EtwpCloseLogger @ 0x14009FC5C
 * Callers:
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     NtTraceEvent @ 0x1400741D0 (NtTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x14009F660 (EtwpTraceMessageVa.c)
 *     EtwpOpenLogger @ 0x14009FBD4 (EtwpOpenLogger.c)
 *     MiDeleteValidSystemPte @ 0x1400A1760 (MiDeleteValidSystemPte.c)
 *     EtwpCCSwapFlush @ 0x14011EF28 (EtwpCCSwapFlush.c)
 *     EtwpLogSystemEventUnsafe @ 0x14011FCDC (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceEvent @ 0x14012EE88 (EtwTraceEvent.c)
 *     EtwSendTraceBuffer @ 0x14020D638 (EtwSendTraceBuffer.c)
 *     EtwTraceRaw @ 0x14020D7A8 (EtwTraceRaw.c)
 *     EtwpTraceStackKey @ 0x1402116F8 (EtwpTraceStackKey.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400C33F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

__int64 __fastcall EtwpCloseLogger(unsigned int a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = a2;
  if ( a3 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 8LL * a1 + 400), 1u);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
