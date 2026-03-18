/*
 * XREFs of Usbh_SSH_HubSuspended @ 0x1C00194FC
 * Callers:
 *     UsbhIncHubBusy @ 0x1C000CE90 (UsbhIncHubBusy.c)
 *     Usbh_SSH_Event @ 0x1C0017F60 (Usbh_SSH_Event.c)
 * Callees:
 *     UsbhSshResumeUpstream @ 0x1C000A9A0 (UsbhSshResumeUpstream.c)
 *     Usbh_SSH_Event @ 0x1C0017F60 (Usbh_SSH_Event.c)
 *     UsbhUnlockSSH @ 0x1C00195C8 (UsbhUnlockSSH.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B540 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhSshResumeDownstream @ 0x1C001E7B0 (UsbhSshResumeDownstream.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubSuspended(PDEVICE_OBJECT DeviceObject, int a2, __int64 a3)
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
      (__int64)&WPP_ef9c0e9779e9088dbdd2819f04244fda_Traceguids);
  v6 = a2 - 1;
  if ( !v6 )
  {
    UsbhUnlockSSH(a3, 4LL);
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
      UsbhUnlockSSH(a3, 4LL);
      return (unsigned int)-1073741823;
    }
    UsbhUnlockSSH(a3, 5LL);
    UsbhSshResumeDownstream(DeviceObject);
    return 0;
  }
  UsbhUnlockSSH(a3, 5LL);
  UsbhEtwLogHubIrpEvent(DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_START, 0, 0);
  v11 = UsbhSshResumeUpstream(DeviceObject, a3);
  if ( v11 < 0 )
    Usbh_SSH_Event(*(PDEVICE_OBJECT *)(a3 + 8), 9u, a3, v14);
  return (unsigned int)v11;
}
