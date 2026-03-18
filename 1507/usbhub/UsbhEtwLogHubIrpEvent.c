/*
 * XREFs of UsbhEtwLogHubIrpEvent @ 0x1C001B540
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C00029A0 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoSetD0Cold @ 0x1C0002F90 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoColdStartCheckPort @ 0x1C00033B8 (UsbhFdoColdStartCheckPort.c)
 *     UsbhFdoColdStartPdo @ 0x1C0003B8C (UsbhFdoColdStartPdo.c)
 *     UsbhGetDeviceInformation @ 0x1C000544C (UsbhGetDeviceInformation.c)
 *     UsbhSetupDevice @ 0x1C0007110 (UsbhSetupDevice.c)
 *     UsbhReset1Complete @ 0x1C00090A0 (UsbhReset1Complete.c)
 *     UsbhPortConnect @ 0x1C000A1C0 (UsbhPortConnect.c)
 *     UsbhSshResumeUpstream @ 0x1C000A9A0 (UsbhSshResumeUpstream.c)
 *     UsbhReset2Complete @ 0x1C0016FE0 (UsbhReset2Complete.c)
 *     UsbhArmHubForWakeDetect @ 0x1C0017A5C (UsbhArmHubForWakeDetect.c)
 *     UsbhSshSuspendHub @ 0x1C0017B8C (UsbhSshSuspendHub.c)
 *     Usbh_SSH_HubSuspended @ 0x1C00194FC (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x1C001BDCC (Usbh_SSH_HubPendingSuspend.c)
 *     UsbhFdoPower_WaitWake @ 0x1C001C3D0 (UsbhFdoPower_WaitWake.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C001C900 (UsbhGetAcpiPortAttributes.c)
 *     UsbhFdoWaitWake_IoCompletion @ 0x1C001DD40 (UsbhFdoWaitWake_IoCompletion.c)
 *     UsbhSshResumeDownstream @ 0x1C001E7B0 (UsbhSshResumeDownstream.c)
 *     UsbhSshResumePort @ 0x1C001EC20 (UsbhSshResumePort.c)
 *     UsbhSshPropagateResume @ 0x1C0020824 (UsbhSshPropagateResume.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045C70 (UsbhFdoSetD0Warm.c)
 *     UsbhQueueHardReset @ 0x1C0046B50 (UsbhQueueHardReset.c)
 *     Usbh_HRS_Queued @ 0x1C0046EEC (Usbh_HRS_Queued.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C0050610 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1DropDevice @ 0x1C0050FD0 (UsbhReset1DropDevice.c)
 *     UsbhReset1DropDeviceTimeout @ 0x1C00510A0 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset1Timeout @ 0x1C00511E0 (UsbhReset1Timeout.c)
 *     UsbhReset2DropDevice @ 0x1C0051510 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1C00515E0 (UsbhReset2DropDeviceTimeout.c)
 *     UsbhReset2Timeout @ 0x1C0051720 (UsbhReset2Timeout.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C001B750 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhEtwLogHubIrpEvent(__int64 a1, __int64 a2, __int128 *a3, const EVENT_DESCRIPTOR *a4)
{
  _DWORD *v6; // rdx
  const GUID *v7; // rdx
  __int128 v8; // [rsp+98h] [rbp+1Fh] BYREF

  if ( dword_1C0066650 )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL, a3, a2);
    v6 = *(_DWORD **)(a1 + 64);
    if ( !v6 )
      UsbhTrapFatal_Dbg(a1, 0LL, a3, a2);
    if ( *v6 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v6, a3, a2);
    if ( a3 )
    {
      v8 = *a3;
    }
    else if ( !a2 || !g_IoGetActivityIdIrp || (int)g_IoGetActivityIdIrp(a2, &v8) < 0 )
    {
      v7 = 0LL;
LABEL_8:
      UsbhEtwWrite(a4, v7);
      return;
    }
    v7 = (const GUID *)&v8;
    goto LABEL_8;
  }
}
