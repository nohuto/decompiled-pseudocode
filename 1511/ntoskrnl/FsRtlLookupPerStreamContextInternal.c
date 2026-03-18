/*
 * XREFs of FsRtlLookupPerStreamContextInternal @ 0x1401ADB20
 * Callers:
 *     FsRtlLookupReservedPerStreamContext @ 0x1400C86D0 (FsRtlLookupReservedPerStreamContext.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     FsRtlAcquirePushLockShared @ 0x1401AD8F0 (FsRtlAcquirePushLockShared.c)
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return Flink;
}
