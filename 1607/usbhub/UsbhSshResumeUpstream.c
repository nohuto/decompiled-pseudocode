/*
 * XREFs of UsbhSshResumeUpstream @ 0x1C002295C
 * Callers:
 *     Usbh_SSH_HubSuspended @ 0x1C001B1EC (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C0056AE4 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000D2D0 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000E3A0 (UsbhIncHubBusy.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C0019340 (Usbh_SSH_Event.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001CFC0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C0022AB0 (UsbhFdoCheckUpstreamConnectionState.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

__int64 __fastcall UsbhSshResumeUpstream(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // r15
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // r14
  _DWORD *v12; // rax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r9
  int v17; // [rsp+48h] [rbp-30h]
  int v18; // [rsp+90h] [rbp+18h] BYREF

  v18 = 0;
  v6 = FdoExt((__int64)DeviceObject, a2, a3, a4);
  Log((__int64)DeviceObject, 0x10000, 1383290224, a2, 0LL);
  v7 = UsbhFdoCheckUpstreamConnectionState(DeviceObject, &v18);
  v11 = (_QWORD *)UsbhIncHubBusy(DeviceObject, a2, (__int64)DeviceObject, 1347777128LL, 0);
  if ( v7 >= 0 )
  {
    v12 = FdoExt((__int64)DeviceObject, v8, v9, v10);
    if ( *((_QWORD *)v12 + 591) )
      v7 = (*((__int64 (__fastcall **)(_QWORD))v12 + 591))(*((_QWORD *)v12 + 149));
    else
      v7 = -1073741637;
  }
  UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_UPSTREAM);
  KeWaitForSingleObject(v6 + 782, Executive, 0, 0, 0LL);
  v13 = v6[781];
  KeReleaseSemaphore((PRKSEMAPHORE)(v6 + 782), 16, 1, 0);
  if ( v13 == 5 )
  {
    Usbh_SSH_Event(DeviceObject, 9u, a2, v15);
    UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_COMPLETE);
    KeSetEvent((PRKEVENT)v6 + 141, 0, 0);
    LOBYTE(v17) = 0;
    UsbhException((int)DeviceObject, 0, 137, 0, 0, v7, 0, usbfile_sshub_c, 2306, v17);
  }
  if ( v11 )
    UsbhDecHubBusy((__int64)DeviceObject, v14, v11, v15);
  Log((__int64)DeviceObject, 0x10000, 1383290232, 0LL, v7);
  return (unsigned int)v7;
}
