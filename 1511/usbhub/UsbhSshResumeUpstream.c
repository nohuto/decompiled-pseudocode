/*
 * XREFs of UsbhSshResumeUpstream @ 0x1C0008B00
 * Callers:
 *     Usbh_SSH_HubSuspended @ 0x1C001BC50 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C00564B4 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C00089C0 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhDecHubBusy @ 0x1C000C010 (UsbhDecHubBusy.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C000F030 (UsbhEtwLogHubIrpEvent.c)
 *     Usbh_SSH_Event @ 0x1C0010030 (Usbh_SSH_Event.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhIncHubBusy @ 0x1C0014020 (UsbhIncHubBusy.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhSshResumeUpstream(__int64 a1, __int64 a2)
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
  Log(a1, 0x10000, 1383290224, a2, 0LL);
  v7 = UsbhFdoCheckUpstreamConnectionState(a1, &v14, v5, v6);
  v8 = UsbhIncHubBusy(a1, a2, a1, 1347777128, 0);
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
    Usbh_SSH_Event(a1, 9LL, a2);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_COMPLETE, 0, v7);
    KeSetEvent((PRKEVENT)(v4 + 3384), 0, 0);
    LOBYTE(v13) = 0;
    UsbhException(a1, 0, 137, 0, 0, v7, 0, usbfile_sshub_c, 2306, v13);
  }
  if ( v8 )
    UsbhDecHubBusy(a1, v11, v8);
  Log(a1, 0x10000, 1383290232, 0, v7);
  return (unsigned int)v7;
}
