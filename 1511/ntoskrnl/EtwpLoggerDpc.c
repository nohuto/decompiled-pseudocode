/*
 * XREFs of EtwpLoggerDpc @ 0x14011B614
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     EtwpRequestFlushTimer @ 0x140090BA4 (EtwpRequestFlushTimer.c)
 */

void __fastcall EtwpLoggerDpc(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  __int16 v5; // di

  _m_prefetchw(DeferredContext + 836);
  v5 = _InterlockedAnd((volatile signed __int32 *)DeferredContext + 209, 0xFFFFFCFF);
  if ( (v5 & 0x100) != 0 )
    KeSetEvent((PRKEVENT)(DeferredContext + 496), 0, 0);
  if ( (v5 & 0x200) != 0 )
    EtwpRequestFlushTimer((__int64)DeferredContext, 0);
}
