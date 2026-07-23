/*
 * XREFs of FsRtlRemovePerFileContext @ 0x1401BA318
 * Callers:
 *     <none>
 * Callees:
 *     KiDeliverApc @ 0x14005D750 (KiDeliverApc.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x14007B208 (FsRtlAcquirePushLockExclusive.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

PFSRTL_PER_FILE_CONTEXT __stdcall FsRtlRemovePerFileContext(
        PVOID *PerFileContextPointer,
        PVOID OwnerId,
        PVOID InstanceId)
{
  volatile signed __int32 *v5; // rax
  signed __int64 *v6; // rsi
  struct _FSRTL_PER_FILE_CONTEXT **v7; // rbx
  struct _FSRTL_PER_FILE_CONTEXT *v8; // rdi
  struct _FSRTL_PER_FILE_CONTEXT *i; // rcx
  struct _FSRTL_PER_FILE_CONTEXT *j; // rax
  signed __int64 v11; // rax
  signed __int64 v12; // rcx
  signed __int64 v13; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v15; // ax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax

  v5 = (volatile signed __int32 *)_InterlockedCompareExchange64(
                                    (volatile signed __int64 *)PerFileContextPointer,
                                    0LL,
                                    0LL);
  v6 = (signed __int64 *)v5;
  if ( !v5 )
    return 0LL;
  v7 = (struct _FSRTL_PER_FILE_CONTEXT **)(v5 + 2);
  if ( *v7 == (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
    return 0LL;
  FsRtlAcquirePushLockExclusive(v5);
  v8 = 0LL;
  if ( InstanceId )
  {
    for ( i = *v7; i != (struct _FSRTL_PER_FILE_CONTEXT *)v7; i = (struct _FSRTL_PER_FILE_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId && i->InstanceId == InstanceId )
      {
        v8 = i;
        goto LABEL_28;
      }
    }
  }
  else if ( OwnerId )
  {
    for ( j = *v7; j != (struct _FSRTL_PER_FILE_CONTEXT *)v7; j = (struct _FSRTL_PER_FILE_CONTEXT *)j->Links.Flink )
    {
      if ( j->OwnerId == OwnerId )
      {
        v8 = j;
        goto LABEL_28;
      }
    }
  }
  else if ( *v7 != (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
  {
    v8 = *v7;
LABEL_28:
    if ( v8 )
    {
      Flink = v8->Links.Flink;
      Blink = v8->Links.Blink;
      if ( (struct _FSRTL_PER_FILE_CONTEXT *)v8->Links.Flink->Blink != v8
        || (struct _FSRTL_PER_FILE_CONTEXT *)Blink->Flink != v8 )
      {
        __fastfail(3u);
      }
      Blink->Flink = Flink;
      Flink->Blink = Blink;
    }
  }
  _m_prefetchw(v6);
  v11 = *v6;
  v12 = *v6 - 16;
  if ( (*v6 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v12 = 0LL;
  if ( (v11 & 2) != 0 || (v13 = *v6, v13 != _InterlockedCompareExchange64(v6, v12, v11)) )
    ExfReleasePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  CurrentThread = KeGetCurrentThread();
  v15 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v15;
  if ( !v15
    && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    if ( KeGetCurrentIrql() )
    {
      LOBYTE(CurrentThread) = 1;
      KeGetCurrentThread()->ApcState.KernelApcPending = 1;
      HalRequestSoftwareInterrupt(CurrentThread);
    }
    else
    {
      __writecr8(1uLL);
      KiDeliverApc(0, 0, 0LL);
      __writecr8(0LL);
    }
  }
  return v8;
}
