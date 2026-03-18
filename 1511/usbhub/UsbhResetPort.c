/*
 * XREFs of UsbhResetPort @ 0x1C001E7B8
 * Callers:
 *     UsbhDriverResetPort @ 0x1C0004900 (UsbhDriverResetPort.c)
 *     UsbhReset2Complete @ 0x1C0010B30 (UsbhReset2Complete.c)
 *     UsbhPortConnect @ 0x1C001BDA0 (UsbhPortConnect.c)
 *     UsbhReset1Complete @ 0x1C001EA00 (UsbhReset1Complete.c)
 *     UsbhReset1Timeout @ 0x1C0051140 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C0051680 (UsbhReset2Timeout.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSyncSendCommand @ 0x1C001A080 (UsbhSyncSendCommand.c)
 *     UsbhSetTimer @ 0x1C001E72C (UsbhSetTimer.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C001E948 (Usbh_UsbdReadFrameCounter.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x1C001E99C (Usbh_CheckPortHwPendingStatus.c)
 *     Usb_Disconnected @ 0x1C002765C (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhResetPort(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  KSPIN_LOCK *v9; // rdi
  unsigned int v10; // edx
  KIRQL v11; // al
  KIRQL v12; // bl
  int FrameCounter; // eax
  int v15; // edx
  int v16; // [rsp+20h] [rbp-58h]
  int v17; // [rsp+48h] [rbp-30h]
  __int16 v18; // [rsp+88h] [rbp+10h] BYREF
  int v19; // [rsp+90h] [rbp+18h] BYREF
  int v20; // [rsp+98h] [rbp+20h] BYREF
  __int16 v21; // [rsp+9Ch] [rbp+24h]
  __int16 v22; // [rsp+9Eh] [rbp+26h]

  v19 = 0;
  Log(a1, 4, 1919242324, a2, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      26,
      (__int64)&WPP_023598a80677ca4034006684006c4b8e_Traceguids,
      *(_WORD *)(a2 + 4));
  v9 = (KSPIN_LOCK *)FdoExt(a1, v6, v7, v8);
  v21 = *(_WORD *)(a2 + 4);
  v18 = 0;
  v20 = 262947;
  v22 = 0;
  v10 = UsbhSyncSendCommand(a1, (__int64)&v20, 0LL, &v18, v16, &v19);
  if ( (v10 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v10) )
  {
    LOBYTE(v17) = 0;
    UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 19, 0, 0, v15, v19, usbfile_bus_c, 2463, v17);
  }
  Log(a1, 4, 1919242360, *(unsigned __int16 *)(a2 + 4), *(int *)(a2 + 696));
  Usbh_CheckPortHwPendingStatus(a1, a2);
  v11 = KeAcquireSpinLockRaiseToDpc(v9 + 618);
  *(_DWORD *)(a2 + 696) = 1;
  v12 = v11;
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  *(_DWORD *)(a2 + 848) = FrameCounter;
  *(_DWORD *)(a3 + 4) = FrameCounter;
  Log(a1, 4, 1919242580, a2, a3);
  *(_QWORD *)(a2 + 680) = a3;
  KeResetEvent((PRKEVENT)(a2 + 768));
  KeReleaseSpinLock(v9 + 618, v12);
  return UsbhSetTimer(
           a1,
           *((int *)&WPP_MAIN_CB.DeviceQueue.1 + 1),
           (struct _KTIMER *)(a2 + 552),
           (struct _KDPC *)(a2 + 616),
           1380799602,
           1);
}
