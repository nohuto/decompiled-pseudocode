/*
 * XREFs of Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C0056344
 * Callers:
 *     UsbhIncHubBusy @ 0x1C000CE90 (UsbhIncHubBusy.c)
 *     UsbhFdoReturnPortStatus @ 0x1C0013B10 (UsbhFdoReturnPortStatus.c)
 *     Usbh_SSH_Event @ 0x1C0017F60 (Usbh_SSH_Event.c)
 * Callees:
 *     UsbhSshResumeUpstream @ 0x1C000A9A0 (UsbhSshResumeUpstream.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhUnlockSSH @ 0x1C00195C8 (UsbhUnlockSSH.c)
 *     UsbhSshResumeDownstream @ 0x1C001E7B0 (UsbhSshResumeDownstream.c)
 *     UsbhLockSSH @ 0x1C002995C (UsbhLockSSH.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
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

  v5 = a2;
  v7 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xDu,
      (__int64)&WPP_ef9c0e9779e9088dbdd2819f04244fda_Traceguids);
  v10 = FdoExt((__int64)DeviceObject, a2, a3, a4);
  v11 = v5 - 1;
  if ( !v11 )
  {
    v16 = 3;
LABEL_14:
    UsbhUnlockSSH(a3, v16, v8, v9);
    return v7;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    UsbhUnlockSSH(a3, 5, v8, v9);
    UsbhSshResumeUpstream(DeviceObject, a3);
    return v7;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    UsbhUnlockSSH(a3, 1, v8, v9);
    UsbhSshResumeDownstream(DeviceObject, a3, 0LL, v18);
    return v7;
  }
  if ( v13 == 3 )
  {
    UsbhUnlockSSH(a3, 3, v8, v9);
    KeWaitForSingleObject(v10 + 846, Executive, 0, 0, 0LL);
    v16 = UsbhLockSSH(a3, 6LL, v14, v15);
    v17 = 0;
    if ( v16 == 6 )
      v17 = -1073741823;
    v7 = v17;
    goto LABEL_14;
  }
  UsbhUnlockSSH(a3, 3, v8, v9);
  return (unsigned int)-1073741823;
}
