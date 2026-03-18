/*
 * XREFs of UsbhDispatch_BusEvent @ 0x1C0021780
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001000 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSyncBusPause @ 0x1C0002610 (UsbhSyncBusPause.c)
 *     UsbhSyncBusReset @ 0x1C0003444 (UsbhSyncBusReset.c)
 *     UsbhHubStart @ 0x1C000A268 (UsbhHubStart.c)
 *     UsbhSshSuspendHub @ 0x1C001068C (UsbhSshSuspendHub.c)
 *     UsbhAsyncStartComplete @ 0x1C0020E84 (UsbhAsyncStartComplete.c)
 *     UsbhBusPnpStart @ 0x1C0020F40 (UsbhBusPnpStart.c)
 *     UsbhBusAdd @ 0x1C00216F0 (UsbhBusAdd.c)
 *     UsbhSyncBusResume @ 0x1C0021708 (UsbhSyncBusResume.c)
 *     UsbhSyncBusDisconnect @ 0x1C003F420 (UsbhSyncBusDisconnect.c)
 *     UsbhBusPnpStop @ 0x1C0042B60 (UsbhBusPnpStop.c)
 *     UsbhBusRemove @ 0x1C0042B90 (UsbhBusRemove.c)
 *     Usbh_PnpRemove @ 0x1C004BD60 (Usbh_PnpRemove.c)
 * Callees:
 *     Usbh_BS_BusSuspend @ 0x1C0003CAC (Usbh_BS_BusSuspend.c)
 *     UsbhSshBusBusy @ 0x1C0009DA0 (UsbhSshBusBusy.c)
 *     Usbh_BS_BusPause @ 0x1C0021994 (Usbh_BS_BusPause.c)
 *     UsbhReleaseBusStateLock @ 0x1C0021A9C (UsbhReleaseBusStateLock.c)
 *     Usbh_BS_BusRun @ 0x1C0021B4C (Usbh_BS_BusRun.c)
 *     Usbh_BS_BusInit @ 0x1C0021C60 (Usbh_BS_BusInit.c)
 *     Usbh_BS_BusStop @ 0x1C0021CE4 (Usbh_BS_BusStop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     Usbh_BS_BusRemove @ 0x1C003F48C (Usbh_BS_BusRemove.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhDispatch_BusEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  _DWORD *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r15
  char v12; // cl
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx

  v4 = (int)a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v7 = *(_DWORD **)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v7, a3, a4);
  if ( (_DWORD)a3 == 3 )
    UsbhSshBusBusy(a1, a2);
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
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v9 = 724267874;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 16) = a2;
      *(_QWORD *)(v9 + 24) = v4;
    }
  }
  v10 = *(_QWORD *)(a1 + 64);
  if ( !v10 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v10 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  KeWaitForSingleObject((PVOID)(v10 + 2448), Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 76) = 2020889410;
  *(_DWORD *)(a2 + 84) = v4;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  v11 = *(int *)(v10 + 2440);
  *(_DWORD *)(a2 + 80) = v11;
  v12 = *(_DWORD *)(v10 + 832) + 1;
  *(_QWORD *)(v10 + 1336) = a2;
  v13 = v12 & 7;
  *(_DWORD *)(v10 + 832) = v13;
  v13 *= 32LL;
  *(_DWORD *)(v13 + v10 + 540) = v4;
  *(_DWORD *)(v13 + v10 + 544) = *(_DWORD *)(v10 + 2440);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    v14 = *(_QWORD *)(a1 + 64);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
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
      return Usbh_BS_BusInit(a1, a2, (unsigned int)v4);
    case 2:
      return Usbh_BS_BusStop(a1, a2, (unsigned int)v4);
    case 3:
      return Usbh_BS_BusRun(a1, a2, (unsigned int)v4);
    case 5:
      return Usbh_BS_BusSuspend(a1, a2, v4);
    case 6:
      return Usbh_BS_BusRemove(a1, a2, (unsigned int)v4);
  }
  UsbhReleaseBusStateLock(a1, a2);
  return (unsigned int)v11;
}
