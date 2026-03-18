/*
 * XREFs of UsbhReset2Timeout @ 0x1C0051D20
 * Callers:
 *     UsbhReset2TimeoutBadEnable @ 0x1C0051EE0 (UsbhReset2TimeoutBadEnable.c)
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0003C04 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhAllocateTimeoutObject @ 0x1C00077A8 (UsbhAllocateTimeoutObject.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C0009B18 (Usbh_UsbdReadFrameCounter.c)
 *     UsbhResetPort @ 0x1C0009B6C (UsbhResetPort.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001CFC0 (UsbhEtwLogHubIrpEvent.c)
 *     __security_check_cookie @ 0x1C0029400 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C0042E68 (UsbhAssertBusLock.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051FC0 (UsbhSetEnumerationFailed.c)
 */

__int64 __fastcall UsbhReset2Timeout(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int FrameCounter; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v18; // [rsp+28h] [rbp-60h]
  int v19; // [rsp+30h] [rbp-58h]
  int v20; // [rsp+38h] [rbp-50h]
  PVOID P; // [rsp+50h] [rbp-38h] BYREF
  int v22[2]; // [rsp+58h] [rbp-30h] BYREF
  __int16 v23; // [rsp+60h] [rbp-28h]

  P = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v18 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x1Bu,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      v18);
  }
  Log(a1, 1024, 1884443186, a2, 0LL);
  UsbhAssertBusLock(a1, v6, v7, v8);
  FrameCounter = (unsigned int)Usbh_UsbdReadFrameCounter(a1, v9, v10, v11);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v22[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  v22[1] = *(_DWORD *)(a2 + 544);
  v23 = *(_WORD *)(a2 + 4);
  v13 = UsbhAllocateTimeoutObject(a1, a2, &P);
  if ( *(_DWORD *)(a2 + 544) >= 3u || v13 < 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    PdoExt(a3, v14, v15, v16)[699] = 1073807362;
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET_TIMEOUT);
    UsbhSetEnumerationFailed(a1, (int)v22, -1, v19, v20, 1366);
    return 0LL;
  }
  else
  {
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY);
    ++*(_DWORD *)(a2 + 544);
    UsbhUnlinkPdoDeviceHandle(a1, a3, 2017740857, 1);
    UsbhResetPort(a1, a2, (__int64)P);
    return 1LL;
  }
}
