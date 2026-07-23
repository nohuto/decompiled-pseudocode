/*
 * XREFs of PopFxLowPowerEpochCallback @ 0x14014ADF0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PopFxLowPowerEpochCallback(_QWORD *a1, char *a2, int a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rbx
  ULONG_PTR *i; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
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
    v6 = KeAbPreAcquire((ULONG_PTR)&PopFxPluginLock, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PopFxPluginLock, v6, (ULONG_PTR)&PopFxPluginLock);
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
    return 0;
  }
  return v3;
}
