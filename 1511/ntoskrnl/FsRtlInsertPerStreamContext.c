/*
 * XREFs of FsRtlInsertPerStreamContext @ 0x1401AD958
 * Callers:
 *     FsRtlInsertReservedPerStreamContext @ 0x1400E7454 (FsRtlInsertReservedPerStreamContext.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1400D7BF0 (FsRtlAcquirePushLockExclusive.c)
 */

NTSTATUS __stdcall FsRtlInsertPerStreamContext(
        PFSRTL_ADVANCED_FCB_HEADER PerStreamContext,
        PFSRTL_PER_STREAM_CONTEXT Ptr)
{
  signed __int64 v2; // rbx
  struct _LIST_ENTRY *Flink; // rcx
  unsigned __int64 Value; // rax
  unsigned __int64 v7; // rtt

  v2 = 0LL;
  if ( !PerStreamContext || (PerStreamContext->Flags2 & 2) == 0 )
    return -1073741808;
  if ( (*((_BYTE *)PerStreamContext + 7) & 0xF0u) < 0x10 )
    ExAcquireFastMutex(PerStreamContext->FastMutex);
  else
    FsRtlAcquirePushLockExclusive((unsigned __int64 *)&PerStreamContext->PushLock);
  Flink = PerStreamContext->FilterContexts.Flink;
  Ptr->Links.Flink = Flink;
  Ptr->Links.Blink = &PerStreamContext->FilterContexts;
  if ( Flink->Blink != &PerStreamContext->FilterContexts )
    __fastfail(3u);
  Flink->Blink = &Ptr->Links;
  PerStreamContext->FilterContexts.Flink = &Ptr->Links;
  if ( (*((_BYTE *)PerStreamContext + 7) & 0xF0u) < 0x10 )
  {
    KeReleaseGuardedMutex(PerStreamContext->FastMutex);
  }
  else
  {
    _m_prefetchw(&PerStreamContext->PushLock);
    Value = PerStreamContext->PushLock.Value;
    if ( (Value & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v2 = Value - 16;
    if ( (Value & 2) != 0
      || (v7 = PerStreamContext->PushLock.Value,
          v7 != _InterlockedCompareExchange64((volatile signed __int64 *)&PerStreamContext->PushLock, v2, Value)) )
    {
      ExfReleasePushLock(&PerStreamContext->PushLock.Value);
    }
    KeAbPostRelease((ULONG_PTR)&PerStreamContext->PushLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return 0;
}
