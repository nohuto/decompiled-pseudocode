/*
 * XREFs of TryLockShutdownShared @ 0x14065DB70
 * Callers:
 *     CmpSyncNextBackupHive @ 0x14065C7C4 (CmpSyncNextBackupHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KeAbPostReleaseEx @ 0x1400F49CC (KeAbPostReleaseEx.c)
 *     ExfTryAcquirePushLockShared @ 0x1400F78D4 (ExfTryAcquirePushLockShared.c)
 */

char __fastcall TryLockShutdownShared(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rbx
  struct _KTHREAD *v6; // rcx
  __int16 v7; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&CmpShutdownLock, 0LL, 1LL, a4);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&CmpShutdownLock, 17LL, 0LL)
    || ExfTryAcquirePushLockShared((signed __int64 *)&CmpShutdownLock) )
  {
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
    return 1;
  }
  else
  {
    if ( v5 )
      KeAbPostReleaseEx((ULONG_PTR)&CmpShutdownLock, v5);
    v6 = KeGetCurrentThread();
    v7 = v6->KernelApcDisable + 1;
    v6->KernelApcDisable = v7;
    if ( !v7
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v6->ApcState.ApcListHead[0].Flink != &v6->152
      && !v6->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 0;
  }
}
