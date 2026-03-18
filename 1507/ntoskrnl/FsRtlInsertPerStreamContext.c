/*
 * XREFs of FsRtlInsertPerStreamContext @ 0x1401E3CD8
 * Callers:
 *     FsRtlInsertReservedPerStreamContext @ 0x1401202B8 (FsRtlInsertReservedPerStreamContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

NTSTATUS __stdcall FsRtlInsertPerStreamContext(
        PFSRTL_ADVANCED_FCB_HEADER PerStreamContext,
        PFSRTL_PER_STREAM_CONTEXT Ptr)
{
  __int64 v2; // r9
  struct _KTHREAD *CurrentThread; // rax
  _EX_PUSH_LOCK *p_PushLock; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rdi
  _FAST_MUTEX *FastMutex; // rbp
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned __int8 CurrentIrql; // r14
  struct _LIST_ENTRY *Flink; // rcx
  unsigned __int64 Value; // rax
  signed __int64 v17; // rcx
  unsigned __int64 v18; // rtt
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  _FAST_MUTEX *v21; // rbx
  unsigned __int8 OldIrql; // di
  signed __int32 v23; // eax

  if ( !PerStreamContext || (PerStreamContext->Flags2 & 2) == 0 )
    return -1073741808;
  if ( (*((_BYTE *)PerStreamContext + 7) & 0xF0u) < 0x10 )
  {
    FastMutex = PerStreamContext->FastMutex;
    v12 = KeAbPreAcquire((ULONG_PTR)FastMutex, 0LL, 0LL, v2);
    v13 = v12;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)FastMutex, v12);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    FastMutex->Owner = KeGetCurrentThread();
    FastMutex->OldIrql = CurrentIrql;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    p_PushLock = &PerStreamContext->PushLock;
    --CurrentThread->KernelApcDisable;
    v7 = KeAbPreAcquire((ULONG_PTR)&PerStreamContext->PushLock, 0LL, 0LL, v2);
    v10 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)p_PushLock, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)p_PushLock, v7, (ULONG_PTR)p_PushLock, v9);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
  }
  Flink = PerStreamContext->FilterContexts.Flink;
  Ptr->Links.Flink = Flink;
  Ptr->Links.Blink = &PerStreamContext->FilterContexts;
  if ( Flink->Blink != &PerStreamContext->FilterContexts )
    __fastfail(3u);
  Flink->Blink = &Ptr->Links;
  PerStreamContext->FilterContexts.Flink = &Ptr->Links;
  if ( (*((_BYTE *)PerStreamContext + 7) & 0xF0u) < 0x10 )
  {
    v21 = PerStreamContext->FastMutex;
    OldIrql = v21->OldIrql;
    v21->Owner = 0LL;
    v23 = _InterlockedCompareExchange(&v21->Count, 1, 0);
    if ( v23 )
      ExpReleaseFastMutexContended(&v21->Count, v23);
    __writecr8(OldIrql);
    KeAbPostRelease((ULONG_PTR)v21);
  }
  else
  {
    _m_prefetchw(&PerStreamContext->PushLock);
    Value = PerStreamContext->PushLock.Value;
    v17 = Value - 16;
    if ( (Value & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v17 = 0LL;
    if ( (Value & 2) != 0
      || (v18 = PerStreamContext->PushLock.Value,
          v18 != _InterlockedCompareExchange64((volatile signed __int64 *)&PerStreamContext->PushLock, v17, Value)) )
    {
      ExfReleasePushLock(&PerStreamContext->PushLock.Value, v8);
    }
    KeAbPostRelease((ULONG_PTR)&PerStreamContext->PushLock);
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
  return 0;
}
