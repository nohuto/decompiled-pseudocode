/*
 * XREFs of FsRtlRemovePerStreamContext @ 0x1401BA4B4
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x14007B208 (FsRtlAcquirePushLockExclusive.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _LIST_ENTRY *p_FilterContexts; // rax
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY *Blink; // rax

  v3 = 0LL;
  if ( !StreamContext || (StreamContext->Flags2 & 2) == 0 )
    return 0LL;
  if ( (*((_BYTE *)StreamContext + 7) & 0xF0u) < 0x10 )
    ExAcquireFastMutex(StreamContext->FastMutex);
  else
    FsRtlAcquirePushLockExclusive((volatile signed __int32 *)&StreamContext->PushLock);
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
        v15 = Flink->Links.Flink;
        Blink = Flink->Links.Blink;
        if ( (struct _FSRTL_PER_STREAM_CONTEXT *)Flink->Links.Flink->Blink != Flink
          || (struct _FSRTL_PER_STREAM_CONTEXT *)Blink->Flink != Flink )
        {
          __fastfail(3u);
        }
        Blink->Flink = v15;
        v15->Blink = Blink;
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
  }
  return Flink;
}
