/*
 * XREFs of PpProfileCancelTransitioningDock @ 0x14068DAC4
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x1404E0BF8 (PipProcessEnumeratedChildDevice.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x140048A40 (KeReleaseSemaphore.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14067CC00 (PnpRequestHwProfileChangeNotification.c)
 *     PiProfileUpdateDeviceTree @ 0x14068D5C0 (PiProfileUpdateDeviceTree.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14068D6F0 (PnpProfileUpdateHardwareProfile.c)
 */

void __fastcall PpProfileCancelTransitioningDock(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // si
  signed __int32 v8; // ebx
  unsigned __int8 v9; // di
  signed __int32 v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = a2;
  v5 = KeAbPreAcquire((ULONG_PTR)&PiProfileDeviceListLock, 0LL, 0LL, a4);
  v6 = v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PiProfileDeviceListLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PiProfileDeviceListLock, v5);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  dword_1403493F0 = CurrentIrql;
  *(_DWORD *)(a1 + 568) = 1;
  qword_1403493C8 = 0LL;
  v8 = _InterlockedDecrement(&PiProfileDevicesInTransition);
  v9 = dword_1403493F0;
  v10 = _InterlockedCompareExchange((volatile signed __int32 *)&PiProfileDeviceListLock, 1, 0);
  if ( v10 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PiProfileDeviceListLock, v10);
  __writecr8(v9);
  KeAbPostRelease((ULONG_PTR)&PiProfileDeviceListLock);
  if ( !v8 )
  {
    if ( (int)PnpProfileUpdateHardwareProfile((__int64)&v14, v11, v12, v13) >= 0 && (_BYTE)v14 )
    {
      PnpRequestHwProfileChangeNotification(&GUID_HWPROFILE_CHANGE_COMPLETE, 2, 0LL, 0LL);
      PiProfileUpdateDeviceTree();
    }
    else
    {
      PnpRequestHwProfileChangeNotification(&GUID_HWPROFILE_CHANGE_CANCELLED, 2, 0LL, 0LL);
    }
    KeReleaseSemaphore(&PiProfileChangeSemaphore, 0, 1, 0);
  }
}
