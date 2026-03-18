/*
 * XREFs of FsRtlLookupPerStreamContextInternal @ 0x1401E4010
 * Callers:
 *     FsRtlLookupReservedPerStreamContext @ 0x1401031B0 (FsRtlLookupReservedPerStreamContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

PFSRTL_PER_STREAM_CONTEXT __stdcall FsRtlLookupPerStreamContextInternal(
        PFSRTL_ADVANCED_FCB_HEADER StreamContext,
        PVOID OwnerId,
        PVOID InstanceId)
{
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rax
  _EX_PUSH_LOCK *p_PushLock; // rbx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r9
  _FAST_MUTEX *FastMutex; // rbp
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int8 CurrentIrql; // r12
  struct _FSRTL_PER_STREAM_CONTEXT *Flink; // rsi
  struct _LIST_ENTRY *i; // rax
  _LIST_ENTRY *p_FilterContexts; // rax
  unsigned __int64 Value; // rax
  signed __int64 v20; // rcx
  unsigned __int64 v21; // rtt
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  _FAST_MUTEX *v24; // rdi
  unsigned __int8 OldIrql; // bl
  signed __int32 v26; // eax

  if ( (*((_BYTE *)StreamContext + 7) & 0xF0u) < 0x10 )
  {
    FastMutex = StreamContext->FastMutex;
    v13 = KeAbPreAcquire((ULONG_PTR)FastMutex, 0LL, 0LL, v3);
    v14 = v13;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)FastMutex, v13);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    FastMutex->Owner = KeGetCurrentThread();
    FastMutex->OldIrql = CurrentIrql;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    p_PushLock = &StreamContext->PushLock;
    --CurrentThread->KernelApcDisable;
    v10 = KeAbPreAcquire((ULONG_PTR)&StreamContext->PushLock, 0LL, 0LL, v3);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)p_PushLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)p_PushLock, v10, (ULONG_PTR)p_PushLock, v11);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
  }
  Flink = 0LL;
  if ( InstanceId )
  {
    for ( i = StreamContext->FilterContexts.Flink; i != &StreamContext->FilterContexts; i = i->Flink )
    {
      if ( i[1].Flink == OwnerId && i[1].Blink == InstanceId )
        goto LABEL_24;
    }
  }
  else if ( OwnerId )
  {
    for ( i = StreamContext->FilterContexts.Flink; i != &StreamContext->FilterContexts; i = i->Flink )
    {
      if ( i[1].Flink == OwnerId )
      {
LABEL_24:
        Flink = (struct _FSRTL_PER_STREAM_CONTEXT *)i;
        break;
      }
    }
  }
  else
  {
    p_FilterContexts = &StreamContext->FilterContexts;
    if ( p_FilterContexts->Flink != p_FilterContexts )
      Flink = (struct _FSRTL_PER_STREAM_CONTEXT *)p_FilterContexts->Flink;
  }
  if ( (*((_BYTE *)StreamContext + 7) & 0xF0u) < 0x10 )
  {
    v24 = StreamContext->FastMutex;
    v24->Owner = 0LL;
    OldIrql = v24->OldIrql;
    v26 = _InterlockedCompareExchange(&v24->Count, 1, 0);
    if ( v26 )
      ExpReleaseFastMutexContended(&v24->Count, v26);
    __writecr8(OldIrql);
    KeAbPostRelease((ULONG_PTR)v24);
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
      ExfReleasePushLock(&StreamContext->PushLock.Value, v9);
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
