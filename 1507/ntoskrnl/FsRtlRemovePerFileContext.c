/*
 * XREFs of FsRtlRemovePerFileContext @ 0x1401E4214
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

PFSRTL_PER_FILE_CONTEXT __stdcall FsRtlRemovePerFileContext(
        PVOID *PerFileContextPointer,
        PVOID OwnerId,
        PVOID InstanceId)
{
  __int64 v3; // r9
  signed __int64 v6; // rax
  unsigned __int64 *v7; // rsi
  struct _FSRTL_PER_FILE_CONTEXT **v9; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rdi
  struct _FSRTL_PER_FILE_CONTEXT *v15; // rdi
  struct _FSRTL_PER_FILE_CONTEXT *i; // rax
  signed __int64 v17; // rax
  signed __int64 v18; // rcx
  unsigned __int64 v19; // rtt
  struct _KTHREAD *v20; // rdx
  __int16 v21; // ax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax

  v6 = _InterlockedCompareExchange64((volatile signed __int64 *)PerFileContextPointer, 0LL, 0LL);
  v7 = (unsigned __int64 *)v6;
  if ( !v6 )
    return 0LL;
  v9 = (struct _FSRTL_PER_FILE_CONTEXT **)(v6 + 8);
  if ( *v9 == (struct _FSRTL_PER_FILE_CONTEXT *)v9 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0LL, v3);
  v14 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v11, (ULONG_PTR)v7, v13);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  v15 = 0LL;
  if ( InstanceId )
  {
    for ( i = *v9; i != (struct _FSRTL_PER_FILE_CONTEXT *)v9; i = (struct _FSRTL_PER_FILE_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId && i->InstanceId == InstanceId )
        goto LABEL_30;
    }
  }
  else if ( OwnerId )
  {
    for ( i = *v9; i != (struct _FSRTL_PER_FILE_CONTEXT *)v9; i = (struct _FSRTL_PER_FILE_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId )
      {
LABEL_30:
        v15 = i;
        goto LABEL_33;
      }
    }
  }
  else if ( *v9 != (struct _FSRTL_PER_FILE_CONTEXT *)v9 )
  {
    v15 = *v9;
LABEL_33:
    if ( v15 )
    {
      Flink = v15->Links.Flink;
      Blink = v15->Links.Blink;
      if ( (struct _FSRTL_PER_FILE_CONTEXT *)v15->Links.Flink->Blink != v15
        || (struct _FSRTL_PER_FILE_CONTEXT *)Blink->Flink != v15 )
      {
        __fastfail(3u);
      }
      Blink->Flink = Flink;
      Flink->Blink = Blink;
    }
  }
  _m_prefetchw(v7);
  v17 = *v7;
  v18 = *v7 - 16;
  if ( (*v7 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v18 = 0LL;
  if ( (v17 & 2) != 0 || (v19 = *v7, v19 != _InterlockedCompareExchange64((volatile signed __int64 *)v7, v18, v17)) )
    ExfReleasePushLock(v7, v12);
  KeAbPostRelease((ULONG_PTR)v7);
  v20 = KeGetCurrentThread();
  v21 = v20->KernelApcDisable + 1;
  v20->KernelApcDisable = v21;
  if ( !v21
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
    && !v20->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v15;
}
