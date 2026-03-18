/*
 * XREFs of PopDiagTraceFxRundown @ 0x140237234
 * Callers:
 *     EtwpAddKmRegEntry @ 0x14054C94C (EtwpAddKmRegEntry.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     PopFxTraceDeviceRegistration @ 0x1405AC94C (PopFxTraceDeviceRegistration.c)
 *     PopDiagTraceDeviceVerboseRundown @ 0x1406B8F48 (PopDiagTraceDeviceVerboseRundown.c)
 *     PopDiagTraceFxPluginRegistration @ 0x1406B9670 (PopDiagTraceFxPluginRegistration.c)
 */

void __fastcall PopDiagTraceFxRundown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  ULONG_PTR *i; // rbx
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r9
  ULONG_PTR *j; // rbx
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&PopFxPluginLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopFxPluginLock, v5, (ULONG_PTR)&PopFxPluginLock, v7);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  for ( i = (ULONG_PTR *)PopFxPluginList; i != &PopFxPluginList; i = (ULONG_PTR *)*i )
  {
    LOBYTE(v6) = 1;
    PopDiagTraceFxPluginRegistration(i, i[3], v6);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
  KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
  v11 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0LL, v9);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, v11, (ULONG_PTR)&PopFxDeviceListLock, v12);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  for ( j = (ULONG_PTR *)PopFxDeviceList; j != &PopFxDeviceList; j = (ULONG_PTR *)*j )
  {
    if ( j[6] )
    {
      LOBYTE(v10) = 1;
      PopFxTraceDeviceRegistration(j, v10);
      PopDiagTraceDeviceVerboseRundown(j);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  v14 = KeGetCurrentThread();
  v15 = v14->KernelApcDisable + 1;
  v14->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
    && !v14->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
