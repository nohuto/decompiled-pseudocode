/*
 * XREFs of EtwpOpenLogger @ 0x140073C68
 * Callers:
 *     EtwpLogSystemEventUnsafe @ 0x14007394C (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x140073B1C (EtwpCCSwapFlush.c)
 *     NtTraceEvent @ 0x1400D5560 (NtTraceEvent.c)
 *     EtwSendTraceBuffer @ 0x140225124 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x14022528C (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1402256C4 (EtwTraceRaw.c)
 *     EtwpTraceStackKey @ 0x14022B1D8 (EtwpTraceStackKey.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006B90 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     EtwpCloseLogger @ 0x140073C30 (EtwpCloseLogger.c)
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
