/*
 * XREFs of UsbhDispatch_BusEvent @ 0x1C0019640
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001000 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSyncBusPause @ 0x1C0002610 (UsbhSyncBusPause.c)
 *     UsbhSyncBusReset @ 0x1C0003444 (UsbhSyncBusReset.c)
 *     UsbhSshSuspendHub @ 0x1C0017B8C (UsbhSshSuspendHub.c)
 *     UsbhSyncBusResume @ 0x1C001C360 (UsbhSyncBusResume.c)
 *     UsbhBusAdd @ 0x1C001CEB0 (UsbhBusAdd.c)
 *     UsbhBusPnpStart @ 0x1C001CED0 (UsbhBusPnpStart.c)
 *     UsbhAsyncStartComplete @ 0x1C0021734 (UsbhAsyncStartComplete.c)
 *     UsbhHubStart @ 0x1C0021B28 (UsbhHubStart.c)
 *     UsbhSyncBusDisconnect @ 0x1C003F1F0 (UsbhSyncBusDisconnect.c)
 *     UsbhBusPnpStop @ 0x1C0042940 (UsbhBusPnpStop.c)
 *     UsbhBusRemove @ 0x1C0042970 (UsbhBusRemove.c)
 *     Usbh_PnpRemove @ 0x1C004BDB0 (Usbh_PnpRemove.c)
 * Callees:
 *     Usbh_BS_BusSuspend @ 0x1C0003D94 (Usbh_BS_BusSuspend.c)
 *     UsbhSshBusBusy @ 0x1C000B654 (UsbhSshBusBusy.c)
 *     Usbh_BS_BusRun @ 0x1C0018D34 (Usbh_BS_BusRun.c)
 *     Usbh_BS_BusPause @ 0x1C0019854 (Usbh_BS_BusPause.c)
 *     UsbhReleaseBusStateLock @ 0x1C001995C (UsbhReleaseBusStateLock.c)
 *     Usbh_BS_BusInit @ 0x1C001C22C (Usbh_BS_BusInit.c)
 *     Usbh_BS_BusStop @ 0x1C001C2B0 (Usbh_BS_BusStop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     Usbh_BS_BusRemove @ 0x1C003F25C (Usbh_BS_BusRemove.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhDispatch_BusEvent(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  _DWORD *DeviceExtension; // rdx
  void *v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rdi
  __int64 v11; // r9
  __int64 v12; // r15
  char v13; // cl
  __int64 v14; // rcx
  void *v15; // rdx
  __int64 v16; // rcx

  v4 = (int)a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  DeviceExtension = a1->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(a1, DeviceExtension, a3, a4);
  if ( (_DWORD)a3 == 3 )
    UsbhSshBusBusy(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_fbd879e33feb48e7a921aba0522b0728_Traceguids,
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
  v12 = (int)v10[610];
  *(_DWORD *)(a2 + 80) = v12;
  v13 = v10[208] + 1;
  *((_QWORD *)v10 + 167) = a2;
  v14 = v13 & 7;
  v10[208] = v14;
  v14 *= 32LL;
  *(_DWORD *)((char *)v10 + v14 + 540) = v4;
  *(_DWORD *)((char *)v10 + v14 + 544) = v10[610];
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    v15 = a1->DeviceExtension;
    if ( v15 )
    {
      v16 = *((_QWORD *)v15 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v15 + 220) & *((_DWORD *)v15 + 221));
      *(_DWORD *)v16 = 757953378;
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_QWORD *)(v16 + 16) = a2;
      *(_QWORD *)(v16 + 24) = v12;
    }
  }
  switch ( (_DWORD)v12 )
  {
    case 4:
      return Usbh_BS_BusPause(a1, a2, (unsigned int)v4);
    case 1:
      return Usbh_BS_BusInit(a1, a2, (unsigned int)v4);
    case 2:
      return Usbh_BS_BusStop(a1, a2, (unsigned int)v4);
    case 3:
      return Usbh_BS_BusRun(a1, a2, (unsigned int)v4, v11);
    case 5:
      return Usbh_BS_BusSuspend((__int64)a1, a2, v4);
    case 6:
      return Usbh_BS_BusRemove(a1, a2, (unsigned int)v4);
  }
  UsbhReleaseBusStateLock(a1, a2);
  return (unsigned int)v12;
}
