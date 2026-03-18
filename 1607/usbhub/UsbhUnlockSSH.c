/*
 * XREFs of UsbhUnlockSSH @ 0x1C001B2C8
 * Callers:
 *     UsbhIncHubBusy @ 0x1C000E3A0 (UsbhIncHubBusy.c)
 *     UsbhFdoReturnPortStatus @ 0x1C00149A0 (UsbhFdoReturnPortStatus.c)
 *     Usbh_SSH_Event @ 0x1C0019340 (Usbh_SSH_Event.c)
 *     Usbh_SSH_HubPendingResume @ 0x1C001B050 (Usbh_SSH_HubPendingResume.c)
 *     Usbh_SSH_HubSuspended @ 0x1C001B1EC (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x1C0026CA4 (Usbh_SSH_HubPendingSuspend.c)
 *     Usbh_SSH_HubFailedResume @ 0x1C0056A4C (Usbh_SSH_HubFailedResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C0056AE4 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
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
