/*
 * XREFs of UsbhEtwLogHubIrpEvent @ 0x1C001CFC0
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C0002BA0 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoSetD0Cold @ 0x1C0003190 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoColdStartCheckPort @ 0x1C00035B8 (UsbhFdoColdStartCheckPort.c)
 *     UsbhFdoColdStartPdo @ 0x1C0003D8C (UsbhFdoColdStartPdo.c)
 *     UsbhSetupDevice @ 0x1C0005530 (UsbhSetupDevice.c)
 *     UsbhGetDeviceInformation @ 0x1C0007814 (UsbhGetDeviceInformation.c)
 *     UsbhReset1Complete @ 0x1C0009900 (UsbhReset1Complete.c)
 *     UsbhPortConnect @ 0x1C0009DC0 (UsbhPortConnect.c)
 *     UsbhReset2Complete @ 0x1C00183B0 (UsbhReset2Complete.c)
 *     UsbhArmHubForWakeDetect @ 0x1C0018E40 (UsbhArmHubForWakeDetect.c)
 *     UsbhSshSuspendHub @ 0x1C0018F70 (UsbhSshSuspendHub.c)
 *     Usbh_SSH_HubSuspended @ 0x1C001B1EC (Usbh_SSH_HubSuspended.c)
 *     UsbhFdoPower_WaitWake @ 0x1C001DF80 (UsbhFdoPower_WaitWake.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C001EDC0 (UsbhGetAcpiPortAttributes.c)
 *     UsbhSshResumeDownstream @ 0x1C0021F00 (UsbhSshResumeDownstream.c)
 *     UsbhSshResumePort @ 0x1C0022370 (UsbhSshResumePort.c)
 *     UsbhSshPropagateResume @ 0x1C0022850 (UsbhSshPropagateResume.c)
 *     UsbhSshResumeUpstream @ 0x1C002295C (UsbhSshResumeUpstream.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x1C0026CA4 (Usbh_SSH_HubPendingSuspend.c)
 *     UsbhFdoWaitWake_IoCompletion @ 0x1C0027270 (UsbhFdoWaitWake_IoCompletion.c)
 *     UsbhFdoSetD0Warm @ 0x1C0046020 (UsbhFdoSetD0Warm.c)
 *     UsbhQueueHardReset @ 0x1C0046FC0 (UsbhQueueHardReset.c)
 *     Usbh_HRS_Queued @ 0x1C004735C (Usbh_HRS_Queued.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C0050C10 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1DropDevice @ 0x1C00515D0 (UsbhReset1DropDevice.c)
 *     UsbhReset1DropDeviceTimeout @ 0x1C00516A0 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset1Timeout @ 0x1C00517E0 (UsbhReset1Timeout.c)
 *     UsbhReset2DropDevice @ 0x1C0051B10 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1C0051BE0 (UsbhReset2DropDeviceTimeout.c)
 *     UsbhReset2Timeout @ 0x1C0051D20 (UsbhReset2Timeout.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C001D860 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C0029400 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhEtwLogHubIrpEvent(__int64 a1, __int64 a2, __int128 *a3, const EVENT_DESCRIPTOR *a4)
{
  _DWORD *v6; // rdx
  const GUID *v7; // rdx
  __int128 v8; // [rsp+98h] [rbp+1Fh] BYREF

  if ( dword_1C0067650 )
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
