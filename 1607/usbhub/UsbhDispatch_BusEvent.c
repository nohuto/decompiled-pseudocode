/*
 * XREFs of UsbhDispatch_BusEvent @ 0x1C000CF00
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C000120C (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSyncBusPause @ 0x1C0002810 (UsbhSyncBusPause.c)
 *     UsbhSyncBusReset @ 0x1C0003708 (UsbhSyncBusReset.c)
 *     UsbhHubStart @ 0x1C000AFA4 (UsbhHubStart.c)
 *     UsbhSyncBusResume @ 0x1C000BF24 (UsbhSyncBusResume.c)
 *     UsbhBusAdd @ 0x1C000C310 (UsbhBusAdd.c)
 *     UsbhBusPnpStart @ 0x1C000C330 (UsbhBusPnpStart.c)
 *     UsbhSshSuspendHub @ 0x1C0018F70 (UsbhSshSuspendHub.c)
 *     UsbhAsyncStartComplete @ 0x1C00259E4 (UsbhAsyncStartComplete.c)
 *     UsbhSyncBusDisconnect @ 0x1C003F740 (UsbhSyncBusDisconnect.c)
 *     UsbhBusPnpStop @ 0x1C0042EA0 (UsbhBusPnpStop.c)
 *     UsbhBusRemove @ 0x1C0042ED0 (UsbhBusRemove.c)
 *     Usbh_PnpRemove @ 0x1C004C400 (Usbh_PnpRemove.c)
 * Callees:
 *     Usbh_BS_BusSuspend @ 0x1C0003EAC (Usbh_BS_BusSuspend.c)
 *     Usbh_BS_BusStop @ 0x1C000BF90 (Usbh_BS_BusStop.c)
 *     Usbh_BS_BusInit @ 0x1C000C040 (Usbh_BS_BusInit.c)
 *     Usbh_BS_BusRun @ 0x1C000CDE4 (Usbh_BS_BusRun.c)
 *     Usbh_BS_BusPause @ 0x1C000D114 (Usbh_BS_BusPause.c)
 *     UsbhReleaseBusStateLock @ 0x1C000D21C (UsbhReleaseBusStateLock.c)
 *     UsbhSshBusBusy @ 0x1C001E580 (UsbhSshBusBusy.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     Usbh_BS_BusRemove @ 0x1C003F7AC (Usbh_BS_BusRemove.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhDispatch_BusEvent(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  _DWORD *DeviceExtension; // rdx
  void *v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rdi
  __int64 v11; // r15
  char v12; // cl
  __int64 v13; // rcx
  void *v14; // rdx
  __int64 v15; // rcx

  v4 = (int)a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  DeviceExtension = a1->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(a1, DeviceExtension, a3, a4);
  if ( (_DWORD)a3 == 3 )
    UsbhSshBusBusy(a1, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_99dd9bfc408b3f1dff14dd9b257ad869_Traceguids,
      v4);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    v8 = a1->DeviceExtension;
    if ( v8 )
    {
      v9 = *((_QWORD *)v8 + 111)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v8 + 220) & *((_DWORD *)v8 + 221));
      *(_DWORD *)v9 = 724267874;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 16) = a2;
      *(_QWORD *)(v9 + 24) = v4;
    }
  }
  v10 = a1->DeviceExtension;
  if ( !v10 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *v10 != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension, a3, a4);
  KeWaitForSingleObject(v10 + 612, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 76) = 2020889410;
  *(_DWORD *)(a2 + 84) = v4;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  v11 = (int)v10[610];
  *(_DWORD *)(a2 + 80) = v11;
  v12 = v10[208] + 1;
  *((_QWORD *)v10 + 167) = a2;
  v13 = v12 & 7;
  v10[208] = v13;
  v13 *= 32LL;
  *(_DWORD *)((char *)v10 + v13 + 540) = v4;
  *(_DWORD *)((char *)v10 + v13 + 544) = v10[610];
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    v14 = a1->DeviceExtension;
    if ( v14 )
    {
      v15 = *((_QWORD *)v14 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v14 + 220) & *((_DWORD *)v14 + 221));
      *(_DWORD *)v15 = 757953378;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = a2;
      *(_QWORD *)(v15 + 24) = v11;
    }
  }
  switch ( (_DWORD)v11 )
  {
    case 4:
      return Usbh_BS_BusPause(a1, a2, (unsigned int)v4);
    case 1:
      return Usbh_BS_BusInit((__int64)a1, a2, v4);
    case 2:
      return Usbh_BS_BusStop((__int64)a1, a2, v4);
    case 3:
      return Usbh_BS_BusRun(a1, a2, v4);
    case 5:
      return Usbh_BS_BusSuspend((__int64)a1, a2, v4);
    case 6:
      return Usbh_BS_BusRemove(a1, a2, (unsigned int)v4);
  }
  UsbhReleaseBusStateLock(a1, a2);
  return (unsigned int)v11;
}
