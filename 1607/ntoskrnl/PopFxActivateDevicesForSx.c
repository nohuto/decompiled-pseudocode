/*
 * XREFs of PopFxActivateDevicesForSx @ 0x1401254E0
 * Callers:
 *     PopFxPrepareDevicesForShutdown @ 0x1402030F0 (PopFxPrepareDevicesForShutdown.c)
 *     PoBroadcastSystemState @ 0x1403CEBF8 (PoBroadcastSystemState.c)
 * Callees:
 *     PopFxActivateDevice @ 0x140007BFC (PopFxActivateDevice.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PopFxActivateDevicesForSx(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  ULONG_PTR i; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, v3, (ULONG_PTR)&PopFxDeviceListLock);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
  {
    v5 = *(_QWORD *)(i + 48);
    if ( v5 && *(unsigned __int8 *)(v5 + 200) < a1 && (*(_DWORD *)(i + 616) & 1) == 0 )
    {
      PopFxActivateDevice(*(_QWORD *)(v5 + 32), 0);
      *(_DWORD *)(v5 + 296) |= 0x1000u;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
}
