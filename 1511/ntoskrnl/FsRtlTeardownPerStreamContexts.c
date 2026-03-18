/*
 * XREFs of FsRtlTeardownPerStreamContexts @ 0x1404941A4
 * Callers:
 *     RawCleanupVcb @ 0x140494130 (RawCleanupVcb.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1400D7BF0 (FsRtlAcquirePushLockExclusive.c)
 */

void __stdcall FsRtlTeardownPerStreamContexts(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  signed __int64 v2; // rbx
  void (__fastcall **ReservedContext)(void *); // rax
  _LIST_ENTRY *p_FilterContexts; // rsi
  struct _LIST_ENTRY *Flink; // r15
  struct _LIST_ENTRY *v6; // rax
  unsigned __int64 Value; // rax
  signed __int64 v8; // rcx
  unsigned __int64 v9; // rtt
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rtt

  v2 = 0LL;
  if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) >= 0x30 )
  {
    ReservedContext = (void (__fastcall **)(void *))AdvancedHeader->ReservedContext;
    if ( ReservedContext )
    {
      ReservedContext[4](ReservedContext);
      AdvancedHeader->ReservedContext = 0LL;
    }
  }
  p_FilterContexts = &AdvancedHeader->FilterContexts;
  if ( p_FilterContexts->Flink != p_FilterContexts )
  {
    if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
      goto LABEL_7;
LABEL_6:
    FsRtlAcquirePushLockExclusive((unsigned __int64 *)&AdvancedHeader->PushLock);
    while ( p_FilterContexts->Flink != p_FilterContexts )
    {
      Flink = p_FilterContexts->Flink;
      v6 = p_FilterContexts->Flink->Flink;
      if ( p_FilterContexts->Flink->Blink != p_FilterContexts || v6->Blink != Flink )
        __fastfail(3u);
      p_FilterContexts->Flink = v6;
      v6->Blink = p_FilterContexts;
      if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
      {
        KeReleaseGuardedMutex(AdvancedHeader->FastMutex);
      }
      else
      {
        _m_prefetchw(&AdvancedHeader->PushLock);
        Value = AdvancedHeader->PushLock.Value;
        v8 = Value - 16;
        if ( (Value & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v8 = 0LL;
        if ( (Value & 2) != 0
          || (v9 = AdvancedHeader->PushLock.Value,
              v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&AdvancedHeader->PushLock, v8, Value)) )
        {
          ExfReleasePushLock(&AdvancedHeader->PushLock.Value);
        }
        KeAbPostRelease((ULONG_PTR)&AdvancedHeader->PushLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      }
      ((void (__fastcall *)(struct _LIST_ENTRY *))Flink[2].Flink)(Flink);
      if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) >= 0x10 )
        goto LABEL_6;
LABEL_7:
      ExAcquireFastMutex(AdvancedHeader->FastMutex);
    }
    if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
    {
      KeReleaseGuardedMutex(AdvancedHeader->FastMutex);
    }
    else
    {
      _m_prefetchw(&AdvancedHeader->PushLock);
      v10 = AdvancedHeader->PushLock.Value;
      if ( (v10 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v2 = v10 - 16;
      if ( (v10 & 2) != 0
        || (v11 = AdvancedHeader->PushLock.Value,
            v11 != _InterlockedCompareExchange64((volatile signed __int64 *)&AdvancedHeader->PushLock, v2, v10)) )
      {
        ExfReleasePushLock(&AdvancedHeader->PushLock.Value);
      }
      KeAbPostRelease((ULONG_PTR)&AdvancedHeader->PushLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
}
