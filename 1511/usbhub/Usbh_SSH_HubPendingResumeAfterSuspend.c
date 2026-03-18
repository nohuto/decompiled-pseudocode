/*
 * XREFs of Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C00564B4
 * Callers:
 *     Usbh_SSH_Event @ 0x1C0010030 (Usbh_SSH_Event.c)
 *     UsbhIncHubBusy @ 0x1C0014020 (UsbhIncHubBusy.c)
 *     UsbhFdoReturnPortStatus @ 0x1C0019330 (UsbhFdoReturnPortStatus.c)
 * Callees:
 *     UsbhSshResumeUpstream @ 0x1C0008B00 (UsbhSshResumeUpstream.c)
 *     UsbhSshResumeDownstream @ 0x1C000AA90 (UsbhSshResumeDownstream.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhUnlockSSH @ 0x1C001BD2C (UsbhUnlockSSH.c)
 *     UsbhLockSSH @ 0x1C002891C (UsbhLockSSH.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubPendingResumeAfterSuspend(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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

  v5 = a2;
  v7 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xDu,
      (__int64)&WPP_fa32011b2fa43127c0d18cce76e2f816_Traceguids);
  v10 = FdoExt(a1, a2, a3, a4);
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
    UsbhSshResumeUpstream(a1, a3);
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
    UsbhSshResumeDownstream(a1, a3, 0);
  return v7;
}
