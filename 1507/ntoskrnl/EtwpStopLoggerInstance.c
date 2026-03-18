/*
 * XREFs of EtwpStopLoggerInstance @ 0x14040F284
 * Callers:
 *     EtwpStopTrace @ 0x14040EAB0 (EtwpStopTrace.c)
 *     EtwpLogger @ 0x1404A17E4 (EtwpLogger.c)
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeInsertQueueDpc @ 0x1400A4880 (KeInsertQueueDpc.c)
 *     EtwpStackRundown @ 0x14026091C (EtwpStackRundown.c)
 *     EtwpSendSessionNotification @ 0x14040F37C (EtwpSendSessionNotification.c)
 *     EtwpDisableTraceProviders @ 0x1404D18CC (EtwpDisableTraceProviders.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x14054A368 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpLogPmcCounterRundown @ 0x1406E86D4 (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(unsigned __int64 a1)
{
  *(_DWORD *)(a1 + 832) |= 0x40u;
  KeWaitForSingleObject(&EtwpNotificationMutex, Executive, 0, 0, 0LL);
  KeReleaseMutex(&EtwpNotificationMutex, 0);
  if ( (*(_DWORD *)(a1 + 12) & 0x2000000) != 0 )
    EtwpUpdateLoggerGroupMasks(a1, 0LL);
  if ( (*(_DWORD *)(a1 + 832) & 0x20) == 0 )
    EtwpDisableTraceProviders(*(unsigned int *)a1);
  if ( (*(_DWORD *)(a1 + 12) & 0x400) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 832) & 0x800) != 0 )
      EtwpLogPmcCounterRundown(a1, *(unsigned int *)a1);
    if ( (*(_DWORD *)(a1 + 832) & 0x1000000) != 0 )
      EtwpStackRundown(*(_QWORD *)(a1 + 856), *(_DWORD *)a1);
  }
  if ( !_InterlockedExchange((volatile __int32 *)(a1 + 336), 0) )
    return 2147483685LL;
  WmipLoggerContext[*(unsigned int *)a1] = a1 | 1;
  if ( (unsigned __int8)KeAreInterruptsEnabled() && KeGetCurrentIrql() <= 2u )
  {
    KeSetEvent((PRKEVENT)(a1 + 496), 0, 0);
  }
  else if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 836), 8u) )
  {
    KeInsertQueueDpc((PRKDPC)(a1 + 584), 0LL, 0LL);
  }
  EtwpSendSessionNotification(a1, 2LL);
  return 0LL;
}
