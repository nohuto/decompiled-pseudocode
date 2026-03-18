/*
 * XREFs of UsbhEtwLogHubIrpEvent @ 0x1C000F030
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C00029A0 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoSetD0Cold @ 0x1C0002F90 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoColdStartCheckPort @ 0x1C00033B8 (UsbhFdoColdStartCheckPort.c)
 *     UsbhFdoColdStartPdo @ 0x1C0003B8C (UsbhFdoColdStartPdo.c)
 *     UsbhSetupDevice @ 0x1C0005420 (UsbhSetupDevice.c)
 *     UsbhGetDeviceInformation @ 0x1C0006310 (UsbhGetDeviceInformation.c)
 *     UsbhSshResumeUpstream @ 0x1C0008B00 (UsbhSshResumeUpstream.c)
 *     UsbhFdoPower_WaitWake @ 0x1C000A640 (UsbhFdoPower_WaitWake.c)
 *     UsbhSshResumeDownstream @ 0x1C000AA90 (UsbhSshResumeDownstream.c)
 *     UsbhSshResumePort @ 0x1C000AF00 (UsbhSshResumePort.c)
 *     UsbhSshSuspendHub @ 0x1C001068C (UsbhSshSuspendHub.c)
 *     UsbhArmHubForWakeDetect @ 0x1C0010858 (UsbhArmHubForWakeDetect.c)
 *     UsbhReset2Complete @ 0x1C0010B30 (UsbhReset2Complete.c)
 *     Usbh_SSH_HubSuspended @ 0x1C001BC50 (Usbh_SSH_HubSuspended.c)
 *     UsbhPortConnect @ 0x1C001BDA0 (UsbhPortConnect.c)
 *     UsbhReset1Complete @ 0x1C001EA00 (UsbhReset1Complete.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C0022E20 (UsbhGetAcpiPortAttributes.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x1C0025C14 (Usbh_SSH_HubPendingSuspend.c)
 *     UsbhSshPropagateResume @ 0x1C0025CD0 (UsbhSshPropagateResume.c)
 *     UsbhFdoWaitWake_IoCompletion @ 0x1C0026700 (UsbhFdoWaitWake_IoCompletion.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045DA0 (UsbhFdoSetD0Warm.c)
 *     UsbhQueueHardReset @ 0x1C0046BD0 (UsbhQueueHardReset.c)
 *     Usbh_HRS_Queued @ 0x1C0046F6C (Usbh_HRS_Queued.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C0050570 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1DropDevice @ 0x1C0050F30 (UsbhReset1DropDevice.c)
 *     UsbhReset1DropDeviceTimeout @ 0x1C0051000 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset1Timeout @ 0x1C0051140 (UsbhReset1Timeout.c)
 *     UsbhReset2DropDevice @ 0x1C0051470 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1C0051540 (UsbhReset2DropDeviceTimeout.c)
 *     UsbhReset2Timeout @ 0x1C0051680 (UsbhReset2Timeout.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C000F240 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
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
