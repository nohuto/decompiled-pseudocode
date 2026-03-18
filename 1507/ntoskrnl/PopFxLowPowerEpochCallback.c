/*
 * XREFs of PopFxLowPowerEpochCallback @ 0x14016EDF8
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PopFxLowPowerEpochCallback(_QWORD *a1, char *a2, int a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rbx
  __int64 v7; // r9
  ULONG_PTR *i; // rbx
  struct _KTHREAD *v9; // rcx
  __int16 v10; // ax
  void (__fastcall *v12)(__int64, char *); // r8
  char v13[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = -1073741811;
  v4 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *a1;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *a1 )
    v4 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - a1[1];
  if ( !v4 && a3 == 4 && a2 )
  {
    PopFxLowPowerEpoch = *a2;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = KeAbPreAcquire((ULONG_PTR)&PopFxPluginLock, 0LL, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PopFxPluginLock, v6, (ULONG_PTR)&PopFxPluginLock, v7);
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    for ( i = (ULONG_PTR *)PopFxPluginList; i != &PopFxPluginList; i = (ULONG_PTR *)*i )
    {
      v12 = (void (__fastcall *)(__int64, char *))i[12];
      if ( v12 )
      {
        v13[0] = PopFxLowPowerEpoch;
        v12(24LL, v13);
      }
    }
    PopPepLowPowerEpoch = PopFxLowPowerEpoch;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
    KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
    v9 = KeGetCurrentThread();
    v10 = v9->KernelApcDisable + 1;
    v9->KernelApcDisable = v10;
    if ( !v10
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink != &v9->152
      && !v9->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 0;
  }
  return v3;
}
