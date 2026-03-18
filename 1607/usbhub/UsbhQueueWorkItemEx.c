/*
 * XREFs of UsbhQueueWorkItemEx @ 0x1C0025074
 * Callers:
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C0002FFC (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0003774 (UsbhSyncResetDeviceInternal.c)
 *     UsbhHubProcessIsr @ 0x1C0013B50 (UsbhHubProcessIsr.c)
 *     UsbhPdoDevicePowerState @ 0x1C001ACE0 (UsbhPdoDevicePowerState.c)
 *     UsbhFdoWakePoComplete_Action @ 0x1C0021770 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhFdoScheduleDeferredPowerRequest @ 0x1C0024F9C (UsbhFdoScheduleDeferredPowerRequest.c)
 *     UsbhPindicatorTimer @ 0x1C003DD30 (UsbhPindicatorTimer.c)
 *     UsbhQueueDriverOvercurrent @ 0x1C003E590 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C003E700 (UsbhQueueOvercurrentReset.c)
 *     Usbh_HRS_Queued @ 0x1C004735C (Usbh_HRS_Queued.c)
 *     UsbhDriverNotFoundTimer @ 0x1C004B4B0 (UsbhDriverNotFoundTimer.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhAllocWorkItem @ 0x1C00251C0 (UsbhAllocWorkItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhQueueWorkItemEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        __int64 a7)
{
  int v8; // r12d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // r13
  unsigned int v14; // ebx
  __int64 v15; // rdi
  __int64 v16; // rsi
  void (__fastcall *v17)(__int64, __int64, __int64 (__fastcall *(__fastcall *)(__int64, __int64, __int64, __int64))(__int64), _QWORD, __int64, int); // rax
  int v19; // [rsp+28h] [rbp-40h]
  unsigned int v20; // [rsp+78h] [rbp+10h]

  v20 = a2;
  v8 = a3;
  v13 = *((_BYTE *)FdoExt(a1, a2, a3, a4) + 5268);
  v14 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      46,
      (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
      a5);
  if ( a6 != 2001228627 )
    Log(a1, 8, 1632720717, a6, a4);
  v15 = a7;
  if ( !a7 )
  {
    v15 = UsbhAllocWorkItem(a1, v8, a4, a5, a6, v13);
    if ( !v15 )
      return 3221225626LL;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      47,
      (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
      a5);
  if ( a6 != 2001228627 )
    Log(a1, 8, 1364479275, a6, v15);
  v16 = *(_QWORD *)(v15 + 40);
  v17 = (void (__fastcall *)(__int64, __int64, __int64 (__fastcall *(__fastcall *)(__int64, __int64, __int64, __int64))(__int64), _QWORD, __int64, int))*((_QWORD *)FdoExt(a1, v10, v11, v12) + 598);
  if ( v17 )
  {
    LOBYTE(v19) = v13;
    v17(a1, v16, UsbhHubWorker, v20, v15, v19);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v14;
}
