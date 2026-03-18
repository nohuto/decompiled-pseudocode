/*
 * XREFs of UsbhQueueWorkItemEx @ 0x1C0024960
 * Callers:
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C0002DFC (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0003574 (UsbhSyncResetDeviceInternal.c)
 *     UsbhPdoDevicePowerState @ 0x1C000C4B4 (UsbhPdoDevicePowerState.c)
 *     UsbhHubProcessIsr @ 0x1C0012AD0 (UsbhHubProcessIsr.c)
 *     UsbhFdoWakePoComplete_Action @ 0x1C0020340 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhFdoScheduleDeferredPowerRequest @ 0x1C0024888 (UsbhFdoScheduleDeferredPowerRequest.c)
 *     UsbhPindicatorTimer @ 0x1C003DA10 (UsbhPindicatorTimer.c)
 *     UsbhQueueDriverOvercurrent @ 0x1C003E270 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C003E3E0 (UsbhQueueOvercurrentReset.c)
 *     Usbh_HRS_Queued @ 0x1C0046F6C (Usbh_HRS_Queued.c)
 *     UsbhDriverNotFoundTimer @ 0x1C004AE10 (UsbhDriverNotFoundTimer.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhAllocWorkItem @ 0x1C0024AAC (UsbhAllocWorkItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
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
      (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids,
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
      (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids,
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
