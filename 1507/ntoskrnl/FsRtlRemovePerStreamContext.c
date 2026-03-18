/*
 * XREFs of FsRtlRemovePerStreamContext @ 0x1401E43A4
 * Callers:
 *     FsRtlRemoveReservedPerStreamContext @ 0x1401E461C (FsRtlRemoveReservedPerStreamContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

PFSRTL_PER_STREAM_CONTEXT __stdcall FsRtlRemovePerStreamContext(
        PFSRTL_ADVANCED_FCB_HEADER StreamContext,
        PVOID OwnerId,
        PVOID InstanceId)
{
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rax
  _EX_PUSH_LOCK *p_PushLock; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rdi
  _FAST_MUTEX *FastMutex; // rsi
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int8 CurrentIrql; // r15
  struct _FSRTL_PER_STREAM_CONTEXT *Flink; // rdi
  struct _LIST_ENTRY *i; // rax
  unsigned __int64 Value; // rax
  signed __int64 v20; // rcx
  unsigned __int64 v21; // rtt
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  _LIST_ENTRY *p_FilterContexts; // rax
  struct _LIST_ENTRY *v25; // rcx
  struct _LIST_ENTRY *Blink; // rax
  _FAST_MUTEX *v27; // rbx
  unsigned __int8 OldIrql; // si
  signed __int32 v29; // eax

  if ( !StreamContext || (StreamContext->Flags2 & 2) == 0 )
    return 0LL;
  if ( (*((_BYTE *)StreamContext + 7) & 0xF0u) < 0x10 )
  {
    FastMutex = StreamContext->FastMutex;
    v14 = KeAbPreAcquire((ULONG_PTR)FastMutex, 0LL, 0LL, v3);
    v15 = v14;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)FastMutex, v14);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    FastMutex->Owner = KeGetCurrentThread();
    FastMutex->OldIrql = CurrentIrql;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    p_PushLock = &StreamContext->PushLock;
    --CurrentThread->KernelApcDisable;
    v9 = KeAbPreAcquire((ULONG_PTR)&StreamContext->PushLock, 0LL, 0LL, v3);
    v12 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)p_PushLock, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)p_PushLock, v9, (ULONG_PTR)p_PushLock, v11);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
  }
  Flink = 0LL;
  if ( InstanceId )
  {
    for ( i = StreamContext->FilterContexts.Flink; i != &StreamContext->FilterContexts; i = i->Flink )
    {
      if ( i[1].Flink == OwnerId && i[1].Blink == InstanceId )
        goto LABEL_35;
    }
  }
  else if ( OwnerId )
  {
    for ( i = StreamContext->FilterContexts.Flink; i != &StreamContext->FilterContexts; i = i->Flink )
    {
      if ( i[1].Flink == OwnerId )
      {
LABEL_35:
        Flink = (struct _FSRTL_PER_STREAM_CONTEXT *)i;
        goto LABEL_38;
      }
    }
  }
  else
  {
    p_FilterContexts = &StreamContext->FilterContexts;
    if ( p_FilterContexts->Flink != p_FilterContexts )
    {
      Flink = (struct _FSRTL_PER_STREAM_CONTEXT *)p_FilterContexts->Flink;
LABEL_38:
      if ( Flink )
      {
        v25 = Flink->Links.Flink;
        Blink = Flink->Links.Blink;
        if ( (struct _FSRTL_PER_STREAM_CONTEXT *)Flink->Links.Flink->Blink != Flink
          || (struct _FSRTL_PER_STREAM_CONTEXT *)Blink->Flink != Flink )
        {
          __fastfail(3u);
        }
        Blink->Flink = v25;
        v25->Blink = Blink;
      }
    }
  }
  if ( (*((_BYTE *)StreamContext + 7) & 0xF0u) < 0x10 )
  {
    v27 = StreamContext->FastMutex;
    OldIrql = v27->OldIrql;
    v27->Owner = 0LL;
    v29 = _InterlockedCompareExchange(&v27->Count, 1, 0);
    if ( v29 )
      ExpReleaseFastMutexContended(&v27->Count, v29);
    __writecr8(OldIrql);
    KeAbPostRelease((ULONG_PTR)v27);
  }
  else
  {
    _m_prefetchw(&StreamContext->PushLock);
    Value = StreamContext->PushLock.Value;
    v20 = Value - 16;
    if ( (Value & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v20 = 0LL;
    if ( (Value & 2) != 0
      || (v21 = StreamContext->PushLock.Value,
          v21 != _InterlockedCompareExchange64((volatile signed __int64 *)&StreamContext->PushLock, v20, Value)) )
    {
      ExfReleasePushLock(&StreamContext->PushLock.Value, v10);
    }
    KeAbPostRelease((ULONG_PTR)&StreamContext->PushLock);
    v22 = KeGetCurrentThread();
    v23 = v22->KernelApcDisable + 1;
    v22->KernelApcDisable = v23;
    if ( !v23
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
      && !v22->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return Flink;
}
