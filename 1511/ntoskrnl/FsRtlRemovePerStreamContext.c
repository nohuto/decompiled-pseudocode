/*
 * XREFs of FsRtlRemovePerStreamContext @ 0x1401ADD3C
 * Callers:
 *     FsRtlRemoveReservedPerStreamContext @ 0x1401ADEB8 (FsRtlRemoveReservedPerStreamContext.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1400D7BF0 (FsRtlAcquirePushLockExclusive.c)
 */

PFSRTL_PER_STREAM_CONTEXT __stdcall FsRtlRemovePerStreamContext(
        PFSRTL_ADVANCED_FCB_HEADER StreamContext,
        PVOID OwnerId,
        PVOID InstanceId)
{
  signed __int64 v3; // rbx
  struct _FSRTL_PER_STREAM_CONTEXT *Flink; // rsi
  struct _LIST_ENTRY *i; // rax
  unsigned __int64 Value; // rax
  unsigned __int64 v10; // rtt
  _LIST_ENTRY *p_FilterContexts; // rax
  struct _LIST_ENTRY *v12; // rcx
  struct _LIST_ENTRY *Blink; // rax

  v3 = 0LL;
  if ( !StreamContext || (StreamContext->Flags2 & 2) == 0 )
    return 0LL;
  if ( (*((_BYTE *)StreamContext + 7) & 0xF0u) < 0x10 )
    ExAcquireFastMutex(StreamContext->FastMutex);
  else
    FsRtlAcquirePushLockExclusive((unsigned __int64 *)&StreamContext->PushLock);
  Flink = 0LL;
  if ( InstanceId )
  {
    for ( i = StreamContext->FilterContexts.Flink; i != &StreamContext->FilterContexts; i = i->Flink )
    {
      if ( i[1].Flink == OwnerId && i[1].Blink == InstanceId )
        goto LABEL_25;
    }
  }
  else if ( OwnerId )
  {
    for ( i = StreamContext->FilterContexts.Flink; i != &StreamContext->FilterContexts; i = i->Flink )
    {
      if ( i[1].Flink == OwnerId )
      {
LABEL_25:
        Flink = (struct _FSRTL_PER_STREAM_CONTEXT *)i;
        goto LABEL_28;
      }
    }
  }
  else
  {
    p_FilterContexts = &StreamContext->FilterContexts;
    if ( p_FilterContexts->Flink != p_FilterContexts )
    {
      Flink = (struct _FSRTL_PER_STREAM_CONTEXT *)p_FilterContexts->Flink;
LABEL_28:
      if ( Flink )
      {
        v12 = Flink->Links.Flink;
        Blink = Flink->Links.Blink;
        if ( (struct _FSRTL_PER_STREAM_CONTEXT *)Flink->Links.Flink->Blink != Flink
          || (struct _FSRTL_PER_STREAM_CONTEXT *)Blink->Flink != Flink )
        {
          __fastfail(3u);
        }
        Blink->Flink = v12;
        v12->Blink = Blink;
      }
    }
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
      v3 = Value - 16;
    if ( (Value & 2) != 0
      || (v10 = StreamContext->PushLock.Value,
          v10 != _InterlockedCompareExchange64((volatile signed __int64 *)&StreamContext->PushLock, v3, Value)) )
    {
      ExfReleasePushLock(&StreamContext->PushLock.Value);
    }
    KeAbPostRelease((ULONG_PTR)&StreamContext->PushLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return Flink;
}
