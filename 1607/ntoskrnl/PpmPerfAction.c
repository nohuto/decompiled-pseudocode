/*
 * XREFs of PpmPerfAction @ 0x1400D6560
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
 *     PpmPerfSnapUtility @ 0x1400D7020 (PpmPerfSnapUtility.c)
 *     PpmPerfApplyProcessorState @ 0x14012F920 (PpmPerfApplyProcessorState.c)
 *     PpmParkReportParkedCore @ 0x14020DE44 (PpmParkReportParkedCore.c)
 *     PpmParkReportUnparkedCore @ 0x14020DEC4 (PpmParkReportUnparkedCore.c)
 */

void __fastcall PpmPerfAction(
        struct _KDPC *Dpc,
        volatile __int32 *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  volatile __int32 *v4; // rdi
  char v5; // bl
  __int64 v6; // rax

  v4 = DeferredContext;
  v5 = _InterlockedExchange(DeferredContext + 6036, 0);
  if ( (v5 & 1) != 0 )
    PpmPerfSnapUtility(DeferredContext);
  if ( (v5 & 2) != 0 )
    PpmParkReportUnparkedCore(v4, DeferredContext, SystemArgument1, SystemArgument2);
  if ( (v5 & 4) != 0 )
  {
    v6 = *((_QWORD *)v4 + 3023);
    if ( *(_BYTE *)(v6 + 88) )
    {
      LOBYTE(DeferredContext) = 1;
      *(_BYTE *)(v6 + 88) = 0;
      PpmPerfApplyProcessorState(v4, DeferredContext, SystemArgument1, SystemArgument2);
    }
    PpmPerfApplyProcessorState(v4, 0LL, SystemArgument1, SystemArgument2);
  }
  if ( (v5 & 8) != 0 )
    PpmParkReportParkedCore(v4, DeferredContext, SystemArgument1, SystemArgument2);
  if ( _InterlockedExchangeAdd(&PpmCheckCount, 0xFFFFFFFF) == 1 )
    KiInsertQueueDpc((ULONG_PTR)&PpmCheckDpc, 0LL, 0LL, 0LL, 0);
}
