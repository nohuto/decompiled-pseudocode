/*
 * XREFs of FsRtlLookupPerStreamContextInternal @ 0x1401BA1C4
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     FsRtlAcquirePushLockShared @ 0x1401B9EC8 (FsRtlAcquirePushLockShared.c)
 */

PFSRTL_PER_STREAM_CONTEXT __stdcall FsRtlLookupPerStreamContextInternal(
        PFSRTL_ADVANCED_FCB_HEADER StreamContext,
        PVOID OwnerId,
        PVOID InstanceId)
{
  signed __int64 v6; // rcx
  struct _FSRTL_PER_STREAM_CONTEXT *Flink; // rdi
  struct _LIST_ENTRY *i; // rax
  _LIST_ENTRY *p_FilterContexts; // rax
  unsigned __int64 Value; // rax
  unsigned __int64 v11; // rtt
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  if ( (*((_BYTE *)StreamContext + 7) & 0xF0u) < 0x10 )
    ExAcquireFastMutex(StreamContext->FastMutex);
  else
    FsRtlAcquirePushLockShared((volatile signed __int64 *)&StreamContext->PushLock);
  v6 = 0LL;
  Flink = 0LL;
  if ( InstanceId )
  {
    for ( i = StreamContext->FilterContexts.Flink; i != &StreamContext->FilterContexts; i = i->Flink )
    {
      if ( i[1].Flink == OwnerId && i[1].Blink == InstanceId )
        goto LABEL_17;
    }
  }
  else if ( OwnerId )
  {
    for ( i = StreamContext->FilterContexts.Flink; i != &StreamContext->FilterContexts; i = i->Flink )
    {
      if ( i[1].Flink == OwnerId )
      {
LABEL_17:
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
    KeReleaseGuardedMutex(StreamContext->FastMutex);
  }
  else
  {
    _m_prefetchw(&StreamContext->PushLock);
    Value = StreamContext->PushLock.Value;
    if ( (Value & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v6 = Value - 16;
    if ( (Value & 2) != 0
      || (v11 = StreamContext->PushLock.Value,
          v11 != _InterlockedCompareExchange64((volatile signed __int64 *)&StreamContext->PushLock, v6, Value)) )
    {
      ExfReleasePushLock(&StreamContext->PushLock.Value);
    }
    KeAbPostRelease((ULONG_PTR)&StreamContext->PushLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
  }
  return Flink;
}
