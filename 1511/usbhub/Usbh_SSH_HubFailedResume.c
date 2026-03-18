/*
 * XREFs of Usbh_SSH_HubFailedResume @ 0x1C005641C
 * Callers:
 *     Usbh_SSH_Event @ 0x1C0010030 (Usbh_SSH_Event.c)
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhUnlockSSH @ 0x1C001BD2C (UsbhUnlockSSH.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubFailedResume(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r9

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x10u,
      (__int64)&WPP_fa32011b2fa43127c0d18cce76e2f816_Traceguids);
  FdoExt(a1, a2, a3, a4);
  UsbhUnlockSSH(a3, 6, v6, v7);
  return 3221225473LL;
}
