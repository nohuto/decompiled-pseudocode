/*
 * XREFs of UsbhPCE_Suspend @ 0x1C000A590
 * Callers:
 *     UsbhBusSuspend_Action @ 0x1C0004A20 (UsbhBusSuspend_Action.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C000CAA4 (UsbhSyncSuspendPdoPort.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000F3F8 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_ResumeDone_Action @ 0x1C0042184 (Usbh_PCE_ResumeDone_Action.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00170F0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_Suspend(__int64 a1, int a2, unsigned __int16 a3)
{
  __int64 PortData; // rax
  unsigned int v8; // [rsp+70h] [rbp+18h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h]

  v8 = -1073741667;
  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      64,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      a3);
  Log(a1, 512, 1346711856, 0, a3);
  PortData = UsbhGetPortData(a1, a3);
  if ( PortData )
  {
    LODWORD(v9) = 0;
    UsbhDispatch_PortChangeQueueEventEx(a1, PortData, 10, a2, v9, 0, 0LL, (__int64)&v8);
  }
  return v8;
}
