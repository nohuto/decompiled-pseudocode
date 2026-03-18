/*
 * XREFs of EtwpStopLoggerInstance @ 0x140493B50
 * Callers:
 *     EtwpStartLogger @ 0x14048EE94 (EtwpStartLogger.c)
 *     EtwpLogger @ 0x14048FBA8 (EtwpLogger.c)
 *     EtwpStopTrace @ 0x140493C50 (EtwpStopTrace.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeGetEffectiveIrql @ 0x1400516A4 (KeGetEffectiveIrql.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
 *     KeInsertQueueDpc @ 0x1400D82A0 (KeInsertQueueDpc.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     EtwpStackRundown @ 0x14022B020 (EtwpStackRundown.c)
 *     EtwpDisableTraceProviders @ 0x14040B4EC (EtwpDisableTraceProviders.c)
 *     EtwpSendSessionNotification @ 0x1404935F4 (EtwpSendSessionNotification.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140495790 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpLogPmcCounterRundown @ 0x1406A6FD4 (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v6; // rsi
  _BYTE *v7; // rax
  _BYTE *v8; // r14
  signed __int64 v9; // rax
  signed __int64 v10; // rcx
  signed __int64 v11; // rtt
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  v2 = *(_QWORD *)(a1 + 904);
  _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x40u);
  if ( (*(_DWORD *)(a1 + 12) & 0x2000000) != 0 )
    EtwpUpdateLoggerGroupMasks(a1, 0LL);
  if ( (*(_DWORD *)(a1 + 816) & 0x20) == 0 )
    EtwpDisableTraceProviders(v2, *(_DWORD *)a1);
  if ( (*(_DWORD *)(a1 + 816) & 0x4000) != 0 )
  {
    v4 = 0LL;
    while ( *(unsigned __int16 *)(v2 + 2 * v4 + 5008) != *(_DWORD *)a1 )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= 8 )
        goto LABEL_6;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = (signed __int64 *)(v2 + 384);
    v7 = (_BYTE *)KeAbPreAcquire(v2 + 384, 0LL, 0);
    v8 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 384), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 384), v7, v2 + 384);
    if ( v8 )
      v8[26] |= 1u;
    *(_BYTE *)(v2 + 5024) &= ~(1 << v4);
    memset((void *)(32 * v4 + v2 + 112), 0, 0x20uLL);
    *(_WORD *)(v2 + 2 * v4 + 5008) = 0;
    *(_QWORD *)(v2 + 392) = 0LL;
    _m_prefetchw(v6);
    v9 = *v6;
    v10 = *v6 - 16;
    if ( (*v6 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v10 = 0LL;
    if ( (v9 & 2) != 0 || (v11 = *v6, v11 != _InterlockedCompareExchange64(v6, v10, v9)) )
      ExfReleasePushLock((_QWORD *)(v2 + 384));
    KeAbPostRelease(v2 + 384);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
  }
LABEL_6:
  if ( (*(_DWORD *)(a1 + 12) & 0x400) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 816) & 0x800) != 0 )
      EtwpLogPmcCounterRundown(a1, *(unsigned int *)a1);
    if ( (*(_DWORD *)(a1 + 816) & 0x1000000) != 0 )
      EtwpStackRundown(*(_QWORD *)(a1 + 840), *(_DWORD *)a1);
  }
  if ( !_InterlockedExchange((volatile __int32 *)(a1 + 320), 0) )
    return 2147483685LL;
  *(_QWORD *)(v2 + 8LL * *(unsigned int *)a1 + 912) = a1 | 1;
  if ( KeGetEffectiveIrql() > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 820), 8u) )
      KeInsertQueueDpc((PRKDPC)(a1 + 568), 0LL, 0LL);
  }
  else
  {
    KeSetEvent((PRKEVENT)(a1 + 480), 0, 0);
  }
  EtwpSendSessionNotification(a1, 2u, 0);
  return 0LL;
}
