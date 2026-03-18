/*
 * XREFs of FsRtlTeardownPerStreamContexts @ 0x14040E114
 * Callers:
 *     RawCleanupVcb @ 0x14040E0A0 (RawCleanupVcb.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

void __stdcall FsRtlTeardownPerStreamContexts(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  __int64 v1; // r9
  void (__fastcall **ReservedContext)(void *); // rax
  _LIST_ENTRY *p_FilterContexts; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r14
  _FAST_MUTEX *FastMutex; // r13
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned __int8 CurrentIrql; // r12
  struct _LIST_ENTRY *Flink; // r12
  struct _LIST_ENTRY *v15; // rax
  unsigned __int64 Value; // rax
  signed __int64 v17; // rcx
  unsigned __int64 v18; // rtt
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  _FAST_MUTEX *v21; // r14
  unsigned __int8 OldIrql; // r13
  signed __int32 v23; // eax
  __int64 v24; // r9
  struct _KTHREAD *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // r14
  _FAST_MUTEX *v29; // r13
  __int64 v30; // rax
  __int64 v31; // r14
  unsigned __int8 v32; // r12
  unsigned __int64 v33; // rax
  signed __int64 v34; // rcx
  unsigned __int64 v35; // rtt
  struct _KTHREAD *v36; // rcx
  __int16 v37; // ax
  _FAST_MUTEX *v38; // rdi
  unsigned __int8 v39; // bl
  signed __int32 v40; // eax

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
    {
      FastMutex = AdvancedHeader->FastMutex;
      v11 = KeAbPreAcquire((ULONG_PTR)FastMutex, 0LL, 0LL, v1);
      v12 = v11;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)FastMutex, v11);
      if ( v12 )
        *(_BYTE *)(v12 + 26) |= 1u;
      FastMutex->Owner = KeGetCurrentThread();
      FastMutex->OldIrql = CurrentIrql;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v6 = KeAbPreAcquire((ULONG_PTR)&AdvancedHeader->PushLock, 0LL, 0LL, v1);
      v9 = v6;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&AdvancedHeader->PushLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&AdvancedHeader->PushLock,
          v6,
          (ULONG_PTR)&AdvancedHeader->PushLock,
          v8);
      if ( v9 )
        *(_BYTE *)(v9 + 26) |= 1u;
    }
    while ( p_FilterContexts->Flink != p_FilterContexts )
    {
      Flink = p_FilterContexts->Flink;
      v15 = p_FilterContexts->Flink->Flink;
      if ( p_FilterContexts->Flink->Blink != p_FilterContexts || v15->Blink != Flink )
        __fastfail(3u);
      p_FilterContexts->Flink = v15;
      v15->Blink = p_FilterContexts;
      if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
      {
        v21 = AdvancedHeader->FastMutex;
        v21->Owner = 0LL;
        OldIrql = v21->OldIrql;
        v23 = _InterlockedCompareExchange(&v21->Count, 1, 0);
        if ( v23 )
          ExpReleaseFastMutexContended(&v21->Count, v23);
        __writecr8(OldIrql);
        KeAbPostRelease((ULONG_PTR)v21);
      }
      else
      {
        _m_prefetchw(&AdvancedHeader->PushLock);
        Value = AdvancedHeader->PushLock.Value;
        v17 = Value - 16;
        if ( (Value & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v17 = 0LL;
        if ( (Value & 2) != 0
          || (v18 = AdvancedHeader->PushLock.Value,
              v18 != _InterlockedCompareExchange64((volatile signed __int64 *)&AdvancedHeader->PushLock, v17, Value)) )
        {
          ExfReleasePushLock(&AdvancedHeader->PushLock.Value, v7);
        }
        KeAbPostRelease((ULONG_PTR)&AdvancedHeader->PushLock);
        v19 = KeGetCurrentThread();
        v20 = v19->KernelApcDisable + 1;
        v19->KernelApcDisable = v20;
        if ( !v20
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
          && !v19->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      ((void (__fastcall *)(struct _LIST_ENTRY *))Flink[2].Flink)(Flink);
      if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
      {
        v29 = AdvancedHeader->FastMutex;
        v30 = KeAbPreAcquire((ULONG_PTR)v29, 0LL, 0LL, v24);
        v31 = v30;
        v32 = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset(&v29->Count, 0) )
          ExpAcquireFastMutexContended((ULONG_PTR)v29, v30);
        if ( v31 )
          *(_BYTE *)(v31 + 26) |= 1u;
        v29->Owner = KeGetCurrentThread();
        v29->OldIrql = v32;
      }
      else
      {
        v25 = KeGetCurrentThread();
        --v25->KernelApcDisable;
        v26 = KeAbPreAcquire((ULONG_PTR)&AdvancedHeader->PushLock, 0LL, 0LL, v24);
        v28 = v26;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&AdvancedHeader->PushLock, 0LL) )
          ExfAcquirePushLockExclusiveEx(
            (unsigned __int64 *)&AdvancedHeader->PushLock,
            v26,
            (ULONG_PTR)&AdvancedHeader->PushLock,
            v27);
        if ( v28 )
          *(_BYTE *)(v28 + 26) |= 1u;
      }
    }
    if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
    {
      v38 = AdvancedHeader->FastMutex;
      v38->Owner = 0LL;
      v39 = v38->OldIrql;
      v40 = _InterlockedCompareExchange(&v38->Count, 1, 0);
      if ( v40 )
        ExpReleaseFastMutexContended(&v38->Count, v40);
      __writecr8(v39);
      KeAbPostRelease((ULONG_PTR)v38);
    }
    else
    {
      _m_prefetchw(&AdvancedHeader->PushLock);
      v33 = AdvancedHeader->PushLock.Value;
      v34 = v33 - 16;
      if ( (v33 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v34 = 0LL;
      if ( (v33 & 2) != 0
        || (v35 = AdvancedHeader->PushLock.Value,
            v35 != _InterlockedCompareExchange64((volatile signed __int64 *)&AdvancedHeader->PushLock, v34, v33)) )
      {
        ExfReleasePushLock(&AdvancedHeader->PushLock.Value, v7);
      }
      KeAbPostRelease((ULONG_PTR)&AdvancedHeader->PushLock);
      v36 = KeGetCurrentThread();
      v37 = v36->KernelApcDisable + 1;
      v36->KernelApcDisable = v37;
      if ( !v37
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v36->ApcState.ApcListHead[0].Flink != &v36->152
        && !v36->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
}
