/*
 * XREFs of Usbh_SSH_HubSuspended @ 0x1C001BC50
 * Callers:
 *     Usbh_SSH_Event @ 0x1C0010030 (Usbh_SSH_Event.c)
 *     UsbhIncHubBusy @ 0x1C0014020 (UsbhIncHubBusy.c)
 * Callees:
 *     UsbhSshResumeUpstream @ 0x1C0008B00 (UsbhSshResumeUpstream.c)
 *     UsbhSshResumeDownstream @ 0x1C000AA90 (UsbhSshResumeDownstream.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C000F030 (UsbhEtwLogHubIrpEvent.c)
 *     Usbh_SSH_Event @ 0x1C0010030 (Usbh_SSH_Event.c)
 *     UsbhUnlockSSH @ 0x1C001BD2C (UsbhUnlockSSH.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubSuspended(__int64 a1, int a2, __int64 a3)
{
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v13; // ebx
  __int64 v14; // r9

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      14,
      (__int64)&WPP_fa32011b2fa43127c0d18cce76e2f816_Traceguids);
  v6 = a2 - 1;
  if ( !v6 )
  {
    UsbhUnlockSSH(a3);
    return 0;
  }
  v7 = v6 - 1;
  if ( !v7 )
    goto LABEL_8;
  v8 = v7 - 1;
  if ( !v8 )
    goto LABEL_8;
  v9 = v8 - 1;
  if ( !v9 )
    goto LABEL_8;
  v10 = v9 - 1;
  if ( !v10 )
    goto LABEL_8;
  v13 = v10 - 1;
  if ( v13 )
  {
    if ( v13 != 2 )
    {
LABEL_8:
      UsbhUnlockSSH(a3);
      return (unsigned int)-1073741823;
    }
    UsbhUnlockSSH(a3);
    UsbhSshResumeDownstream(a1, a3, 1);
    return 0;
  }
  UsbhUnlockSSH(a3);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_START);
  v11 = UsbhSshResumeUpstream(a1, a3);
  if ( v11 < 0 )
    Usbh_SSH_Event(*(_QWORD *)(a3 + 8), 9u, a3, v14);
  return (unsigned int)v11;
}
