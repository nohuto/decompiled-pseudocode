/*
 * XREFs of FsRtlTeardownPerFileContexts @ 0x1404B31FC
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x14007B208 (FsRtlAcquirePushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlTeardownPerFileContexts(PVOID *PerFileContextPointer)
{
  volatile signed __int32 *v1; // rbx
  __int64 **v2; // rdi
  __int64 *v3; // rsi
  __int64 v4; // rax
  signed __int64 v5; // rax
  signed __int64 v6; // rcx
  signed __int64 v7; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v9; // ax
  signed __int64 v10; // rax
  signed __int64 v11; // rcx
  signed __int64 v12; // rtt
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax

  v1 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)PerFileContextPointer, 0LL);
  if ( v1 )
  {
    v2 = (__int64 **)(v1 + 2);
    if ( *v2 != (__int64 *)v2 )
    {
      FsRtlAcquirePushLockExclusive(v1);
      while ( *v2 != (__int64 *)v2 )
      {
        v3 = *v2;
        v4 = **v2;
        if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
          __fastfail(3u);
        *v2 = (__int64 *)v4;
        *(_QWORD *)(v4 + 8) = v2;
        _m_prefetchw((const void *)v1);
        v5 = *(_QWORD *)v1;
        v6 = *(_QWORD *)v1 - 16LL;
        if ( (*(_QWORD *)v1 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v6 = 0LL;
        if ( (v5 & 2) != 0
          || (v7 = *(_QWORD *)v1, v7 != _InterlockedCompareExchange64((volatile signed __int64 *)v1, v6, v5)) )
        {
          ExfReleasePushLock(v1);
        }
        KeAbPostRelease((ULONG_PTR)v1);
        CurrentThread = KeGetCurrentThread();
        v9 = CurrentThread->KernelApcDisable + 1;
        CurrentThread->KernelApcDisable = v9;
        if ( !v9
          && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
          && !CurrentThread->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)CurrentThread);
        }
        ((void (__fastcall *)(__int64 *))v3[4])(v3);
        FsRtlAcquirePushLockExclusive(v1);
      }
      _m_prefetchw((const void *)v1);
      v10 = *(_QWORD *)v1;
      v11 = *(_QWORD *)v1 - 16LL;
      if ( (*(_QWORD *)v1 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v11 = 0LL;
      if ( (v10 & 2) != 0
        || (v12 = *(_QWORD *)v1, v12 != _InterlockedCompareExchange64((volatile signed __int64 *)v1, v11, v10)) )
      {
        ExfReleasePushLock(v1);
      }
      KeAbPostRelease((ULONG_PTR)v1);
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
    ExFreePoolWithTag((PVOID)v1, 0x63665346u);
  }
}
