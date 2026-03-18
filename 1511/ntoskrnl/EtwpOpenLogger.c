/*
 * XREFs of EtwpOpenLogger @ 0x14009FBD4
 * Callers:
 *     NtTraceEvent @ 0x1400741D0 (NtTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x14009F660 (EtwpTraceMessageVa.c)
 *     EtwpCCSwapFlush @ 0x14011EF28 (EtwpCCSwapFlush.c)
 *     EtwpLogSystemEventUnsafe @ 0x14011FCDC (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceEvent @ 0x14012EE88 (EtwTraceEvent.c)
 *     EtwSendTraceBuffer @ 0x14020D638 (EtwSendTraceBuffer.c)
 *     EtwTraceRaw @ 0x14020D7A8 (EtwTraceRaw.c)
 *     EtwpTraceStackKey @ 0x1402116F8 (EtwpTraceStackKey.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     EtwpCloseLogger @ 0x14009FC5C (EtwpCloseLogger.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400FB0F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 */

__int64 __fastcall EtwpOpenLogger(unsigned int a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax

  v4 = a1;
  *a4 = 0;
  if ( (_BYTE)a3 == 1 || KeGetCurrentIrql() < 2u )
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
    LOBYTE(a3) = *a4;
    EtwpCloseLogger((unsigned int)v4, a2, a3);
    return 0LL;
  }
  return result;
}
