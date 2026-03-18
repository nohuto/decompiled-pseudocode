/*
 * XREFs of UsbhReset1Complete @ 0x1C00090A0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhResetPort @ 0x1C0009250 (UsbhResetPort.c)
 *     UsbhWait @ 0x1C000946C (UsbhWait.c)
 *     UsbhRawWait @ 0x1C000A400 (UsbhRawWait.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C000A4C0 (Usbh_UsbdReadFrameCounter.c)
 *     UsbhCreateDevice @ 0x1C000A574 (UsbhCreateDevice.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhReset2Complete @ 0x1C0016FE0 (UsbhReset2Complete.c)
 *     UsbhCancelResetTimeout @ 0x1C00185C8 (UsbhCancelResetTimeout.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B540 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhAllocateTimeoutObject @ 0x1C0027B44 (UsbhAllocateTimeoutObject.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhClearTt @ 0x1C0042A44 (UsbhClearTt.c)
 *     UsbhSetEnumerationFailed @ 0x1C00519C0 (UsbhSetEnumerationFailed.c)
 */

__int64 __fastcall UsbhReset1Complete(__int64 a1, __int64 a2)
{
  unsigned int v4; // r14d
  KSPIN_LOCK *v5; // rbx
  KIRQL v6; // al
  int FrameCounter; // eax
  unsigned int v8; // r9d
  int v10; // eax
  PVOID v11; // rbx
  int v12; // ebp
  int v13; // eax
  int v14; // [rsp+30h] [rbp-78h]
  int v15; // [rsp+38h] [rbp-70h]
  PVOID P; // [rsp+50h] [rbp-58h] BYREF
  int v17[2]; // [rsp+58h] [rbp-50h] BYREF
  __int16 v18; // [rsp+60h] [rbp-48h]

  P = 0LL;
  v4 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      28,
      (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
      *(_WORD *)(a2 + 4));
  Log(a1, 1024, 1884434787, a2, 0LL);
  v5 = (KSPIN_LOCK *)(FdoExt(a1) + 3064);
  v6 = KeAcquireSpinLockRaiseToDpc(v5);
  KeReleaseSpinLock(v5, v6);
  UsbhCancelResetTimeout(a1, a2, 0LL);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET1_COMPLETE, *(unsigned __int16 *)(a2 + 4), 0);
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v17[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  v17[1] = *(_DWORD *)(a2 + 544);
  v18 = *(_WORD *)(a2 + 4);
  Log(a1, 8, 2002872692, 15, 0LL);
  UsbhRawWait(v8);
  if ( (int)UsbhCreateDevice(a1) < 0 )
    goto LABEL_12;
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_ENUM_CREATE_DEVICE_COMPLETE, *(unsigned __int16 *)(a2 + 4), 0);
  if ( (*(_WORD *)(a2 + 420) & 0x400) != 0
    && !*(_DWORD *)(a2 + 544)
    && !dword_1C006668C
    && (*(_DWORD *)(FdoExt(a1) + 2560) & 0x8000000) == 0 )
  {
    return UsbhReset2Complete(a1);
  }
  v10 = UsbhAllocateTimeoutObject(a1, a2, &P);
  v11 = P;
  v12 = v10;
  if ( v10 >= 0 )
  {
    v4 = 2;
LABEL_16:
    UsbhResetPort(a1);
    return v4;
  }
  if ( !P )
  {
LABEL_12:
    v13 = UsbhAllocateTimeoutObject(a1, a2, &P);
    v11 = P;
    v12 = v13;
  }
  if ( *(_DWORD *)(a2 + 544) >= 3u )
  {
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
  }
  else if ( v11 )
  {
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY, *(unsigned __int16 *)(a2 + 4), v12);
    UsbhWait(a1, 500LL);
    ++*(_DWORD *)(a2 + 544);
    UsbhClearTt(a1);
    goto LABEL_16;
  }
  UsbhSetEnumerationFailed(a1, (int)v17, v12, v14, v15, 1494);
  return 0LL;
}
