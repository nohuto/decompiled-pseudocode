/*
 * XREFs of UsbhUnlockSSH @ 0x1C00195C8
 * Callers:
 *     UsbhIncHubBusy @ 0x1C000CE90 (UsbhIncHubBusy.c)
 *     UsbhFdoReturnPortStatus @ 0x1C0013B10 (UsbhFdoReturnPortStatus.c)
 *     Usbh_SSH_Event @ 0x1C0017F60 (Usbh_SSH_Event.c)
 *     Usbh_SSH_HubPendingResume @ 0x1C0019360 (Usbh_SSH_HubPendingResume.c)
 *     Usbh_SSH_HubSuspended @ 0x1C00194FC (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x1C001BDCC (Usbh_SSH_HubPendingSuspend.c)
 *     Usbh_SSH_HubFailedResume @ 0x1C00562AC (Usbh_SSH_HubFailedResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C0056344 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 */

LONG __fastcall UsbhUnlockSSH(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v7; // rax

  v4 = *(_QWORD *)(a1 + 8);
  if ( !v4 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a1, a4);
  v6 = *(_QWORD *)(v4 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(v4, 0LL, a1, a4);
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(v4, *(_QWORD *)(v4 + 64), a1, a4);
  v7 = *(unsigned int *)(v6 + 3456);
  *(_DWORD *)(v6 + 3124) = a2;
  *(_DWORD *)(32 * v7 + v6 + 3468) = a2;
  *(_DWORD *)(a1 + 120) = 1734964085;
  *(_QWORD *)(v6 + 3192) = 0LL;
  return KeReleaseSemaphore((PRKSEMAPHORE)(v6 + 3128), 16, 1, 0);
}
