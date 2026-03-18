/*
 * XREFs of PpProfileCancelTransitioningDock @ 0x14060DF40
 * Callers:
 *     PipProcessEnumeratedChildDevice @ 0x140457C40 (PipProcessEnumeratedChildDevice.c)
 *     PiProcessNewDeviceNode @ 0x1404ED460 (PiProcessNewDeviceNode.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeReleaseSemaphore @ 0x140084230 (KeReleaseSemaphore.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140601D58 (PnpRequestHwProfileChangeNotification.c)
 *     PiProfileUpdateDeviceTree @ 0x14060DB84 (PiProfileUpdateDeviceTree.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14060DCB4 (PnpProfileUpdateHardwareProfile.c)
 */

void __fastcall PpProfileCancelTransitioningDock(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  ExAcquireFastMutex(&PiProfileDeviceListLock);
  *(_DWORD *)(a1 + 568) = 1;
  LODWORD(a1) = _InterlockedExchangeAdd(&PiProfileDevicesInTransition, 0xFFFFFFFF);
  KeReleaseGuardedMutex(&PiProfileDeviceListLock);
  if ( (_DWORD)a1 == 1 )
  {
    if ( (int)PnpProfileUpdateHardwareProfile((__int64)&v3) >= 0 && (_BYTE)v3 )
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
