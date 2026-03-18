/*
 * XREFs of UsbhSshResumeUpstream @ 0x1C000A9A0
 * Callers:
 *     Usbh_SSH_HubSuspended @ 0x1C00194FC (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C0056344 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C000A860 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhDecHubBusy @ 0x1C000BC70 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000CE90 (UsbhIncHubBusy.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C0017F60 (Usbh_SSH_Event.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B540 (UsbhEtwLogHubIrpEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhSshResumeUpstream(struct _DEVICE_OBJECT *a1, int a2)
{
  __int64 v4; // r15
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebp
  __int64 v8; // r14
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rdx
  int v13; // [rsp+48h] [rbp-30h]
  unsigned int v14; // [rsp+90h] [rbp+18h] BYREF

  v14 = 0;
  v4 = FdoExt(a1);
  Log((_DWORD)a1, 0x10000, 1383290224, a2, 0LL);
  v7 = UsbhFdoCheckUpstreamConnectionState((__int64)a1, &v14, v5, v6);
  v8 = UsbhIncHubBusy(a1, 0);
  if ( v7 >= 0 )
  {
    v9 = FdoExt(a1);
    if ( *(_QWORD *)(v9 + 4728) )
      v7 = (*(__int64 (__fastcall **)(_QWORD))(v9 + 4728))(*(_QWORD *)(v9 + 1192));
    else
      v7 = -1073741637;
  }
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_UPSTREAM, 0, v7);
  KeWaitForSingleObject((PVOID)(v4 + 3128), Executive, 0, 0, 0LL);
  v10 = *(_DWORD *)(v4 + 3124);
  KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 3128), 16, 1, 0);
  if ( v10 == 5 )
  {
    Usbh_SSH_Event(a1);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_COMPLETE, 0, v7);
    KeSetEvent((PRKEVENT)(v4 + 3384), 0, 0);
    LOBYTE(v13) = 0;
    UsbhException((int)a1, 0, 137, 0, 0, v7, 0, usbfile_sshub_c, 2300, v13);
  }
  if ( v8 )
    UsbhDecHubBusy(a1, v11, v8);
  Log((_DWORD)a1, 0x10000, 1383290232, 0, v7);
  return (unsigned int)v7;
}
