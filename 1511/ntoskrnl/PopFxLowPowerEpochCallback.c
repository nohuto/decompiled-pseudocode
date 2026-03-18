/*
 * XREFs of PopFxLowPowerEpochCallback @ 0x1401411A0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 __fastcall PopFxLowPowerEpochCallback(_QWORD *a1, char *a2, int a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rbx
  ULONG_PTR *i; // rbx
  void (__fastcall *v9)(__int64, char *); // r8
  char v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = -1073741811;
  v4 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *a1;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *a1 )
    v4 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - a1[1];
  if ( !v4 && a3 == 4 && a2 )
  {
    PopFxLowPowerEpoch = *a2;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = KeAbPreAcquire((ULONG_PTR)&PopFxPluginLock, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PopFxPluginLock, v6, (ULONG_PTR)&PopFxPluginLock);
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    for ( i = (ULONG_PTR *)PopFxPluginList; i != &PopFxPluginList; i = (ULONG_PTR *)*i )
    {
      v9 = (void (__fastcall *)(__int64, char *))i[12];
      if ( v9 )
      {
        v10[0] = PopFxLowPowerEpoch;
        v9(24LL, v10);
      }
    }
    PopPepLowPowerEpoch = PopFxLowPowerEpoch;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
    KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return 0;
  }
  return v3;
}
