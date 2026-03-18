/*
 * XREFs of UsbhPCE_Suspend @ 0x1C001E798
 * Callers:
 *     UsbhBusSuspend_Action @ 0x1C0004C20 (UsbhBusSuspend_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000D4E0 (Usbh_PCE_Suspend_Action.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C001A924 (UsbhSyncSuspendPdoPort.c)
 *     Usbh_PCE_ResumeDone_Action @ 0x1C00424BC (Usbh_PCE_ResumeDone_Action.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0011EB0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C001B570 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_Suspend(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // di
  __int64 PortData; // rax
  unsigned int v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h]

  v4 = a3;
  v9 = -1073741667;
  FdoExt((__int64)a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      64,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      v4);
  Log((__int64)a1, 512, 1346711856, 0LL, v4);
  PortData = UsbhGetPortData((__int64)a1, v4);
  if ( PortData )
  {
    LODWORD(v10) = 0;
    UsbhDispatch_PortChangeQueueEventEx(a1, PortData, 10LL, a2, v10, 0, 0LL, (int *)&v9);
  }
  return v9;
}
