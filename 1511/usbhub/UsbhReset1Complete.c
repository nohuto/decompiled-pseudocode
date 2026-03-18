/*
 * XREFs of UsbhReset1Complete @ 0x1C001EA00
 * Callers:
 *     <none>
 * Callees:
 *     UsbhCreateDevice @ 0x1C0009880 (UsbhCreateDevice.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C000F030 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhCancelResetTimeout @ 0x1C000FBE4 (UsbhCancelResetTimeout.c)
 *     UsbhReset2Complete @ 0x1C0010B30 (UsbhReset2Complete.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhRawWait @ 0x1C001BFE0 (UsbhRawWait.c)
 *     UsbhWait @ 0x1C001E700 (UsbhWait.c)
 *     UsbhResetPort @ 0x1C001E7B8 (UsbhResetPort.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C001E948 (Usbh_UsbdReadFrameCounter.c)
 *     UsbhAllocateTimeoutObject @ 0x1C001F21C (UsbhAllocateTimeoutObject.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhClearTt @ 0x1C0042C64 (UsbhClearTt.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051920 (UsbhSetEnumerationFailed.c)
 */

__int64 __fastcall UsbhReset1Complete(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  KSPIN_LOCK *v10; // rbx
  KIRQL v11; // al
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int FrameCounter; // eax
  int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v21; // eax
  PVOID v22; // rbx
  int v23; // ebp
  int v24; // eax
  int v25; // [rsp+30h] [rbp-78h]
  int v26; // [rsp+38h] [rbp-70h]
  PVOID P; // [rsp+50h] [rbp-58h] BYREF
  int v28[2]; // [rsp+58h] [rbp-50h] BYREF
  __int16 v29; // [rsp+60h] [rbp-48h]

  P = 0LL;
  v6 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      28,
      (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
      *(_WORD *)(a2 + 4));
  Log(a1, 1024, 1884434787, a2, 0LL);
  v10 = (KSPIN_LOCK *)(FdoExt(a1, v7, v8, v9) + 766);
  v11 = KeAcquireSpinLockRaiseToDpc(v10);
  KeReleaseSpinLock(v10, v11);
  UsbhCancelResetTimeout(a1, a2, 0);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET1_COMPLETE);
  FrameCounter = (unsigned int)Usbh_UsbdReadFrameCounter(a1, v12, v13, v14);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v28[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  v28[1] = *(_DWORD *)(a2 + 544);
  v29 = *(_WORD *)(a2 + 4);
  Log(a1, 8, 2002872692, 15LL, 0LL);
  UsbhRawWait(v16);
  if ( (int)UsbhCreateDevice(a1, a3, *(_WORD *)(a2 + 420), *(_WORD *)(a2 + 4)) < 0 )
    goto LABEL_12;
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_ENUM_CREATE_DEVICE_COMPLETE);
  if ( (*(_WORD *)(a2 + 420) & 0x400) != 0
    && !*(_DWORD *)(a2 + 544)
    && !dword_1C006768C
    && (FdoExt(a1, v17, v18, v19)[640] & 0x8000000) == 0 )
  {
    return UsbhReset2Complete(a1, a2, a3);
  }
  v21 = UsbhAllocateTimeoutObject(a1, a2, &P);
  v22 = P;
  v23 = v21;
  if ( v21 >= 0 )
  {
    v6 = 2;
LABEL_16:
    UsbhResetPort(a1, a2, (__int64)v22);
    return v6;
  }
  if ( !P )
  {
LABEL_12:
    v24 = UsbhAllocateTimeoutObject(a1, a2, &P);
    v22 = P;
    v23 = v24;
  }
  if ( *(_DWORD *)(a2 + 544) >= 3u )
  {
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
  }
  else if ( v22 )
  {
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY);
    UsbhWait(a1, 0x1F4u);
    ++*(_DWORD *)(a2 + 544);
    UsbhClearTt(a1);
    goto LABEL_16;
  }
  UsbhSetEnumerationFailed(a1, (int)v28, v23, v25, v26, 1494);
  return 0LL;
}
