/*
 * XREFs of FsRtlLookupPerFileContext @ 0x1401E3EB4
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

PFSRTL_PER_FILE_CONTEXT __stdcall FsRtlLookupPerFileContext(
        PVOID *PerFileContextPointer,
        PVOID OwnerId,
        PVOID InstanceId)
{
  __int64 v3; // r9
  unsigned __int64 *v4; // rdi
  struct _FSRTL_PER_FILE_CONTEXT **v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r9
  struct _FSRTL_PER_FILE_CONTEXT *v12; // rsi
  struct _FSRTL_PER_FILE_CONTEXT *i; // rax
  signed __int64 v14; // rax
  signed __int64 v15; // rcx
  unsigned __int64 v16; // rtt
  struct _KTHREAD *v17; // rdx
  __int16 v18; // ax

  v4 = (unsigned __int64 *)*PerFileContextPointer;
  if ( !*PerFileContextPointer )
    return 0LL;
  v7 = (struct _FSRTL_PER_FILE_CONTEXT **)(v4 + 1);
  if ( *v7 == (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = KeAbPreAcquire((ULONG_PTR)v4, 0LL, 0LL, v3);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v10, (ULONG_PTR)v4, v11);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v12 = 0LL;
  if ( InstanceId )
  {
    for ( i = *v7; i != (struct _FSRTL_PER_FILE_CONTEXT *)v7; i = (struct _FSRTL_PER_FILE_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId && i->InstanceId == InstanceId )
        goto LABEL_20;
    }
  }
  else if ( OwnerId )
  {
    for ( i = *v7; i != (struct _FSRTL_PER_FILE_CONTEXT *)v7; i = (struct _FSRTL_PER_FILE_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId )
      {
LABEL_20:
        v12 = i;
        break;
      }
    }
  }
  else if ( *v7 != (struct _FSRTL_PER_FILE_CONTEXT *)v7 )
  {
    v12 = *v7;
  }
  _m_prefetchw(v4);
  v14 = *v4;
  v15 = *v4 - 16;
  if ( (*v4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v15 = 0LL;
  if ( (v14 & 2) != 0 || (v16 = *v4, v16 != _InterlockedCompareExchange64((volatile signed __int64 *)v4, v15, v14)) )
    ExfReleasePushLock(v4, v9);
  KeAbPostRelease((ULONG_PTR)v4);
  v17 = KeGetCurrentThread();
  v18 = v17->KernelApcDisable + 1;
  v17->KernelApcDisable = v18;
  if ( !v18
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
    && !v17->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v12;
}
