/*
 * XREFs of EtwpStopLoggerInstance @ 0x1404C989C
 * Callers:
 *     EtwpLogger @ 0x14046AE58 (EtwpLogger.c)
 *     EtwpStopTrace @ 0x1404CA4D8 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeInsertQueueDpc @ 0x140043D30 (KeInsertQueueDpc.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeGetEffectiveIrql @ 0x14009FE70 (KeGetEffectiveIrql.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     EtwpStackRundown @ 0x14021154C (EtwpStackRundown.c)
 *     EtwpSendSessionNotification @ 0x1404CC658 (EtwpSendSessionNotification.c)
 *     EtwpDisableTraceProviders @ 0x1404CCDA8 (EtwpDisableTraceProviders.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x1405001FC (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpLogPmcCounterRundown @ 0x1406655E0 (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(unsigned __int64 a1)
{
  __int64 SiloDriverState; // rbp
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r14
  signed __int64 v9; // rax
  signed __int64 v10; // rcx
  signed __int64 v11; // rtt

  _InterlockedOr((volatile signed __int32 *)(a1 + 832), 0x40u);
  if ( (*(_DWORD *)(a1 + 12) & 0x2000000) != 0 )
    EtwpUpdateLoggerGroupMasks(a1, 0LL);
  if ( (*(_DWORD *)(a1 + 832) & 0x20) == 0 )
    EtwpDisableTraceProviders(*(unsigned int *)a1);
  SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
  if ( (*(_DWORD *)(a1 + 832) & 0x4000) != 0 )
  {
    v4 = 0LL;
    while ( *(unsigned __int16 *)(SiloDriverState + 2 * v4 + 5008) != *(_DWORD *)a1 )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= 8 )
        goto LABEL_6;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = (signed __int64 *)(SiloDriverState + 384);
    v7 = KeAbPreAcquire(SiloDriverState + 384, 0LL, 0LL);
    v8 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(SiloDriverState + 384), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(SiloDriverState + 384), v7, SiloDriverState + 384);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    *(_BYTE *)(SiloDriverState + 5024) &= ~(1 << v4);
    memset((void *)(32 * v4 + SiloDriverState + 112), 0, 0x20uLL);
    *(_WORD *)(SiloDriverState + 2 * v4 + 5008) = 0;
    *(_QWORD *)(SiloDriverState + 392) = 0LL;
    _m_prefetchw(v6);
    v9 = *v6;
    v10 = *v6 - 16;
    if ( (*v6 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v10 = 0LL;
    if ( (v9 & 2) != 0 || (v11 = *v6, v11 != _InterlockedCompareExchange64(v6, v10, v9)) )
      ExfReleasePushLock((_QWORD *)(SiloDriverState + 384));
    KeAbPostRelease(SiloDriverState + 384);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
LABEL_6:
  if ( (*(_DWORD *)(a1 + 12) & 0x400) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 832) & 0x800) != 0 )
      EtwpLogPmcCounterRundown(a1, *(unsigned int *)a1);
    if ( (*(_DWORD *)(a1 + 832) & 0x1000000) != 0 )
      EtwpStackRundown(*(_QWORD *)(a1 + 856), *(_DWORD *)a1);
  }
  if ( _InterlockedExchange((volatile __int32 *)(a1 + 336), 0) )
  {
    *(_QWORD *)(SiloDriverState + 8LL * *(unsigned int *)a1 + 912) = a1 | 1;
    PsDereferenceMonitorContextServerSilo(SiloDriverState);
    if ( KeGetEffectiveIrql() > 2u )
    {
      if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 836), 8u) )
        KeInsertQueueDpc((PRKDPC)(a1 + 584), 0LL, 0LL);
    }
    else
    {
      KeSetEvent((PRKEVENT)(a1 + 496), 0, 0);
    }
    EtwpSendSessionNotification(a1, 2LL, 0LL);
    return 0LL;
  }
  else
  {
    PsDereferenceMonitorContextServerSilo(SiloDriverState);
    return 2147483685LL;
  }
}
