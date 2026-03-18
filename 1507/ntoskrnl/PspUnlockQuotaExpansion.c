/*
 * XREFs of PspUnlockQuotaExpansion @ 0x1401256B8
 * Callers:
 *     PspReturnResourceQuota @ 0x140125584 (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x140125608 (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x14016E910 (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x14024368C (PspExpandLimit.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall PspUnlockQuotaExpansion(__int64 a1, unsigned __int8 a2)
{
  volatile signed __int64 *v3; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v5; // rbx
  __int16 v6; // ax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)a1 )
  {
    v3 = (volatile signed __int64 *)(a1 + 16);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v3, retaddr);
    else
      _InterlockedAnd64(v3, 0LL);
    __writecr8(a2);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v5 = a1 + 16;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 16));
    KeAbPostRelease(v5);
    v6 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v6;
    if ( !v6 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
}
