/*
 * XREFs of UsbhReset1Timeout @ 0x1C00517E0
 * Callers:
 *     UsbhReset1TimeoutBadEnable @ 0x1C00519D0 (UsbhReset1TimeoutBadEnable.c)
 * Callees:
 *     UsbhAllocateTimeoutObject @ 0x1C00077A8 (UsbhAllocateTimeoutObject.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C0009B18 (Usbh_UsbdReadFrameCounter.c)
 *     UsbhResetPort @ 0x1C0009B6C (UsbhResetPort.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001CFC0 (UsbhEtwLogHubIrpEvent.c)
 *     __security_check_cookie @ 0x1C0029400 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C0042E68 (UsbhAssertBusLock.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051FC0 (UsbhSetEnumerationFailed.c)
 */

__int64 __fastcall UsbhReset1Timeout(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int FrameCounter; // eax
  __int64 v13; // rdx
  int v14; // esi
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // eax
  int v19; // [rsp+28h] [rbp-70h]
  int v20; // [rsp+30h] [rbp-68h]
  int v21; // [rsp+38h] [rbp-60h]
  PVOID P; // [rsp+50h] [rbp-48h] BYREF
  int v23[2]; // [rsp+58h] [rbp-40h] BYREF
  __int16 v24; // [rsp+60h] [rbp-38h]

  P = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v19 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x10u,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      v19);
  }
  Log(a1, 1024, 1884443476, a2, *(unsigned int *)(a2 + 544));
  UsbhAssertBusLock(a1, v6, v7, v8);
  FrameCounter = (unsigned int)Usbh_UsbdReadFrameCounter(a1, v9, v10, v11);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v23[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  v23[1] = *(_DWORD *)(a2 + 544);
  v24 = *(_WORD *)(a2 + 4);
  v14 = UsbhAllocateTimeoutObject(a1, a2, &P);
  v17 = *(_DWORD *)(a2 + 544);
  if ( v17 >= 3 || v14 < 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    PdoExt(a3, v13, v15, v16)[699] = 1073807362;
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET_TIMEOUT);
    UsbhSetEnumerationFailed(a1, (int)v23, v14, v20, v21, 743);
    return 0LL;
  }
  else
  {
    *(_DWORD *)(a2 + 544) = v17 + 1;
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY);
    UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 81LL, v23, 0xCu, v14, -1, usbfile_busfunc_c, 726, 0);
    UsbhResetPort(a1, a2, (__int64)P);
    return 1LL;
  }
}
