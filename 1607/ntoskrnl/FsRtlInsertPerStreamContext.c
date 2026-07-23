/*
 * XREFs of FsRtlInsertPerStreamContext @ 0x1401B9FFC
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

NTSTATUS __stdcall FsRtlInsertPerStreamContext(
        PFSRTL_ADVANCED_FCB_HEADER PerStreamContext,
        PFSRTL_PER_STREAM_CONTEXT Ptr)
{
  signed __int64 v2; // rbx
  struct _LIST_ENTRY *p_FilterContexts; // rax
  struct _LIST_ENTRY *Flink; // rcx
  unsigned __int64 Value; // rax
  unsigned __int64 v8; // rtt
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  v2 = 0LL;
  if ( !PerStreamContext || (PerStreamContext->Flags2 & 2) == 0 )
    return -1073741808;
  if ( (*((_BYTE *)PerStreamContext + 7) & 0xF0u) < 0x10 )
    ExAcquireFastMutex(PerStreamContext->FastMutex);
  else
    FsRtlAcquirePushLockExclusive((volatile signed __int32 *)&PerStreamContext->PushLock);
  p_FilterContexts = &PerStreamContext->FilterContexts;
  Flink = PerStreamContext->FilterContexts.Flink;
  if ( Flink->Blink != &PerStreamContext->FilterContexts )
    __fastfail(3u);
  Ptr->Links.Blink = p_FilterContexts;
  Ptr->Links.Flink = Flink;
  Flink->Blink = &Ptr->Links;
  p_FilterContexts->Flink = &Ptr->Links;
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
      || (v8 = PerStreamContext->PushLock.Value,
          v8 != _InterlockedCompareExchange64((volatile signed __int64 *)&PerStreamContext->PushLock, v2, Value)) )
    {
      ExfReleasePushLock(&PerStreamContext->PushLock.Value);
    }
    KeAbPostRelease((ULONG_PTR)&PerStreamContext->PushLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
  }
  return 0;
}
