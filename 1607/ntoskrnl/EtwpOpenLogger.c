/*
 * XREFs of EtwpOpenLogger @ 0x1400737E8
 * Callers:
 *     EtwpLogSystemEventUnsafe @ 0x1400734CC (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x14007369C (EtwpCCSwapFlush.c)
 *     NtTraceEvent @ 0x1400D3400 (NtTraceEvent.c)
 *     EtwSendTraceBuffer @ 0x140224F50 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x1402250B8 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1402254F0 (EtwTraceRaw.c)
 *     EtwpTraceStackKey @ 0x14022B004 (EtwpTraceStackKey.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006D00 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     EtwpCloseLogger @ 0x1400737B0 (EtwpCloseLogger.c)
 */

__int64 __fastcall EtwpOpenLogger(unsigned int a1, __int64 a2, char a3, char *a4)
{
  __int64 v4; // rsi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax

  v4 = a1;
  *a4 = 0;
  if ( a3 == 1 || KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 8LL * a1 + 400), 1u) )
    {
      KeLeaveCriticalRegion();
      return 0LL;
    }
    *a4 = 1;
  }
  result = *(_QWORD *)(a2 + 8 * v4 + 912);
  if ( (result & 1) != 0 )
  {
    EtwpCloseLogger(v4, a2, *a4);
    return 0LL;
  }
  return result;
}
