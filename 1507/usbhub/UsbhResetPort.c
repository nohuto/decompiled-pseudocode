/*
 * XREFs of UsbhResetPort @ 0x1C0009250
 * Callers:
 *     UsbhDriverResetPort @ 0x1C00049E0 (UsbhDriverResetPort.c)
 *     UsbhReset1Complete @ 0x1C00090A0 (UsbhReset1Complete.c)
 *     UsbhPortConnect @ 0x1C000A1C0 (UsbhPortConnect.c)
 *     UsbhReset2Complete @ 0x1C0016FE0 (UsbhReset2Complete.c)
 *     UsbhReset1Timeout @ 0x1C00511E0 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C0051720 (UsbhReset2Timeout.c)
 * Callees:
 *     UsbhSetTimer @ 0x1C00093E0 (UsbhSetTimer.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C000A4C0 (Usbh_UsbdReadFrameCounter.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x1C000A514 (Usbh_CheckPortHwPendingStatus.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0014BD0 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhResetPort(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  unsigned int v7; // edx
  KIRQL v8; // al
  KIRQL v9; // bl
  int FrameCounter; // eax
  int v12; // edx
  int *v13; // [rsp+28h] [rbp-50h]
  int v14; // [rsp+48h] [rbp-30h]
  __int16 v15; // [rsp+88h] [rbp+10h] BYREF
  int v16; // [rsp+90h] [rbp+18h] BYREF
  int v17; // [rsp+98h] [rbp+20h] BYREF
  __int16 v18; // [rsp+9Ch] [rbp+24h]
  __int16 v19; // [rsp+9Eh] [rbp+26h]

  v16 = 0;
  Log(a1, 4, 1919242324, a2, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      26,
      (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
      *(_WORD *)(a2 + 4));
  v6 = FdoExt(a1);
  v18 = *(_WORD *)(a2 + 4);
  v15 = 0;
  v17 = 262947;
  v19 = 0;
  v13 = &v16;
  v7 = UsbhSyncSendCommand(a1, (unsigned int)&v17, 0, (unsigned int)&v15);
  if ( (v7 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v7) )
  {
    LOBYTE(v14) = 0;
    UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 19, 0, 0, v12, v16, usbfile_bus_c, 2486, v14);
  }
  Log(a1, 4, 1919242360, *(unsigned __int16 *)(a2 + 4), *(int *)(a2 + 696));
  Usbh_CheckPortHwPendingStatus(a1, a2);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 4944));
  *(_DWORD *)(a2 + 696) = 1;
  v9 = v8;
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  *(_DWORD *)(a2 + 848) = FrameCounter;
  *(_DWORD *)(a3 + 4) = FrameCounter;
  Log(a1, 4, 1919242580, a2, a3);
  *(_QWORD *)(a2 + 680) = a3;
  KeResetEvent((PRKEVENT)(a2 + 768));
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 4944), v9);
  LOBYTE(v13) = 1;
  return UsbhSetTimer(a1, *((unsigned int *)&WPP_MAIN_CB.DeviceQueue.1 + 1), a2 + 552, a2 + 616, 1380799602, v13);
}
