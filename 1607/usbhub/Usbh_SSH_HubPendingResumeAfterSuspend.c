/*
 * XREFs of Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C0056AE4
 * Callers:
 *     UsbhIncHubBusy @ 0x1C000E3A0 (UsbhIncHubBusy.c)
 *     UsbhFdoReturnPortStatus @ 0x1C00149A0 (UsbhFdoReturnPortStatus.c)
 *     Usbh_SSH_Event @ 0x1C0019340 (Usbh_SSH_Event.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhUnlockSSH @ 0x1C001B2C8 (UsbhUnlockSSH.c)
 *     UsbhSshResumeDownstream @ 0x1C0021F00 (UsbhSshResumeDownstream.c)
 *     UsbhSshResumeUpstream @ 0x1C002295C (UsbhSshResumeUpstream.c)
 *     UsbhLockSSH @ 0x1C0028FDC (UsbhLockSSH.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubPendingResumeAfterSuspend(
        PDEVICE_OBJECT DeviceObject,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // edi
  unsigned int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // r14
  int v11; // edi
  int v12; // edi
  int v13; // edi
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // edx
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9

  v5 = a2;
  v7 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xDu,
      (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
  v10 = FdoExt((__int64)DeviceObject, a2, a3, a4);
  v11 = v5 - 1;
  if ( !v11 )
  {
    v16 = 3;
    goto LABEL_15;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    UsbhUnlockSSH(a3, 5, v8, v9);
    UsbhSshResumeUpstream(DeviceObject, a3, v19, v20);
    return v7;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    if ( v13 != 3 )
    {
      UsbhUnlockSSH(a3, 3, v8, v9);
      return (unsigned int)-1073741823;
    }
    UsbhUnlockSSH(a3, 3, v8, v9);
    KeWaitForSingleObject(v10 + 846, Executive, 0, 0, 0LL);
    v16 = UsbhLockSSH(a3, 6LL, v14, v15);
    v17 = 0;
    if ( v16 == 6 )
      v17 = -1073741823;
    v7 = v17;
LABEL_15:
    UsbhUnlockSSH(a3, v16, v8, v9);
    return v7;
  }
  UsbhUnlockSSH(a3, 1, v8, v9);
  if ( !*((_BYTE *)v10 + 3416) )
    UsbhSshResumeDownstream(DeviceObject, a3, 0LL, v18);
  return v7;
}
