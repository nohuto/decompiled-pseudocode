/*
 * XREFs of FsRtlTeardownPerStreamContexts @ 0x1403EFB18
 * Callers:
 *     RawCleanupVcb @ 0x1403EFAA4 (RawCleanupVcb.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x14007B208 (FsRtlAcquirePushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

void __stdcall FsRtlTeardownPerStreamContexts(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  _LIST_ENTRY *p_FilterContexts; // rdi
  struct _LIST_ENTRY *Flink; // r14
  struct _LIST_ENTRY *v4; // rax
  unsigned __int64 Value; // rax
  signed __int64 v6; // rcx
  unsigned __int64 v7; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v9; // ax
  unsigned __int64 v10; // rax
  signed __int64 v11; // rcx
  unsigned __int64 v12; // rtt
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax

  p_FilterContexts = &AdvancedHeader->FilterContexts;
  if ( p_FilterContexts->Flink != p_FilterContexts )
  {
    if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
      ExAcquireFastMutex(AdvancedHeader->FastMutex);
    else
      FsRtlAcquirePushLockExclusive((volatile signed __int32 *)&AdvancedHeader->PushLock);
    while ( p_FilterContexts->Flink != p_FilterContexts )
    {
      Flink = p_FilterContexts->Flink;
      v4 = p_FilterContexts->Flink->Flink;
      if ( p_FilterContexts->Flink->Blink != p_FilterContexts || v4->Blink != Flink )
        __fastfail(3u);
      p_FilterContexts->Flink = v4;
      v4->Blink = p_FilterContexts;
      if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
      {
        KeReleaseGuardedMutex(AdvancedHeader->FastMutex);
      }
      else
      {
        _m_prefetchw(&AdvancedHeader->PushLock);
        Value = AdvancedHeader->PushLock.Value;
        v6 = Value - 16;
        if ( (Value & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v6 = 0LL;
        if ( (Value & 2) != 0
          || (v7 = AdvancedHeader->PushLock.Value,
              v7 != _InterlockedCompareExchange64((volatile signed __int64 *)&AdvancedHeader->PushLock, v6, Value)) )
        {
          ExfReleasePushLock(&AdvancedHeader->PushLock.Value);
        }
        KeAbPostRelease((ULONG_PTR)&AdvancedHeader->PushLock);
        CurrentThread = KeGetCurrentThread();
        v9 = CurrentThread->KernelApcDisable + 1;
        CurrentThread->KernelApcDisable = v9;
        if ( !v9
          && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
          && !CurrentThread->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)CurrentThread);
        }
      }
      ((void (__fastcall *)(struct _LIST_ENTRY *))Flink[2].Flink)(Flink);
      if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
        ExAcquireFastMutex(AdvancedHeader->FastMutex);
      else
        FsRtlAcquirePushLockExclusive((volatile signed __int32 *)&AdvancedHeader->PushLock);
    }
    if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
    {
      KeReleaseGuardedMutex(AdvancedHeader->FastMutex);
    }
    else
    {
      _m_prefetchw(&AdvancedHeader->PushLock);
      v10 = AdvancedHeader->PushLock.Value;
      v11 = v10 - 16;
      if ( (v10 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v11 = 0LL;
      if ( (v10 & 2) != 0
        || (v12 = AdvancedHeader->PushLock.Value,
            v12 != _InterlockedCompareExchange64((volatile signed __int64 *)&AdvancedHeader->PushLock, v11, v10)) )
      {
        ExfReleasePushLock(&AdvancedHeader->PushLock.Value);
      }
      KeAbPostRelease((ULONG_PTR)&AdvancedHeader->PushLock);
      v13 = KeGetCurrentThread();
      v14 = v13->KernelApcDisable + 1;
      v13->KernelApcDisable = v14;
      if ( !v14
        && ($2B8565053CDC740D4E4887693DD8AC9E *)v13->ApcState.ApcListHead[0].Flink != &v13->152
        && !v13->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v13);
      }
    }
  }
}
