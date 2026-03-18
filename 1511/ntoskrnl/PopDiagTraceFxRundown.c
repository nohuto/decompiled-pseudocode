/*
 * XREFs of PopDiagTraceFxRundown @ 0x1401E97C0
 * Callers:
 *     EtwpDisallowedGuidAddition @ 0x1404CFA30 (EtwpDisallowedGuidAddition.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PopFxTraceDeviceRegistration @ 0x14051BAAC (PopFxTraceDeviceRegistration.c)
 *     PopDiagTraceDeviceVerboseRundown @ 0x140638E54 (PopDiagTraceDeviceVerboseRundown.c)
 *     PopDiagTraceFxPluginRegistration @ 0x14063957C (PopDiagTraceFxPluginRegistration.c)
 */

__int64 PopDiagTraceFxRundown()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rbx
  __int64 v2; // r8
  ULONG_PTR *i; // rbx
  __int64 v4; // rdx
  __int64 v5; // rbx
  ULONG_PTR *j; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&PopFxPluginLock, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopFxPluginLock, v1, (ULONG_PTR)&PopFxPluginLock);
  if ( v1 )
    *(_BYTE *)(v1 + 26) |= 1u;
  for ( i = (ULONG_PTR *)PopFxPluginList; i != &PopFxPluginList; i = (ULONG_PTR *)*i )
  {
    LOBYTE(v2) = 1;
    PopDiagTraceFxPluginRegistration(i, i[3], v2);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
  KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
  v5 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, v5, (ULONG_PTR)&PopFxDeviceListLock);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  for ( j = (ULONG_PTR *)PopFxDeviceList; j != &PopFxDeviceList; j = (ULONG_PTR *)*j )
  {
    if ( j[6] )
    {
      LOBYTE(v4) = 1;
      PopFxTraceDeviceRegistration(j, v4);
      PopDiagTraceDeviceVerboseRundown(j);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
