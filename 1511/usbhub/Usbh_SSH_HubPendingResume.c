/*
 * XREFs of Usbh_SSH_HubPendingResume @ 0x1C001B8F0
 * Callers:
 *     Usbh_SSH_Event @ 0x1C0010030 (Usbh_SSH_Event.c)
 *     UsbhIncHubBusy @ 0x1C0014020 (UsbhIncHubBusy.c)
 *     UsbhFdoReturnPortStatus @ 0x1C0019330 (UsbhFdoReturnPortStatus.c)
 * Callees:
 *     UsbhSshResumeDownstream @ 0x1C000AA90 (UsbhSshResumeDownstream.c)
 *     UsbhUnlockSSH @ 0x1C001BD2C (UsbhUnlockSSH.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C0025B78 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhLockSSH @ 0x1C002891C (UsbhLockSSH.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubPendingResume(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _DWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // ebx
  void *v13; // rcx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      15,
      (__int64)&WPP_fa32011b2fa43127c0d18cce76e2f816_Traceguids);
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v7 = *(_DWORD **)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  if ( a2 == 5 )
  {
    v8 = *(_QWORD *)(a3 + 8);
    if ( !v8 )
      UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
    v9 = *(_QWORD *)(v8 + 64);
    if ( !v9 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(a3 + 8), 0LL, a3, a4);
    if ( *(_DWORD *)v9 != 541218120 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(a3 + 8), *(_QWORD *)(v8 + 64), a3, a4);
    v10 = *(unsigned int *)(v9 + 3456);
    *(_DWORD *)(v9 + 3124) = 5;
    *(_DWORD *)(32 * v10 + v9 + 3468) = 5;
    *(_DWORD *)(a3 + 120) = 1734964085;
    *(_QWORD *)(v9 + 3192) = 0LL;
    KeReleaseSemaphore((PRKSEMAPHORE)(v9 + 3128), 16, 1, 0);
    return (unsigned int)-1073741823;
  }
  else
  {
    switch ( a2 )
    {
      case 1u:
      case 7u:
        UsbhUnlockSSH(a3);
        v11 = 0;
        break;
      case 6u:
        UsbhUnlockSSH(a3);
        v13 = v7 + 846;
        v11 = 0;
        KeWaitForSingleObject(v13, Executive, 0, 0, 0LL);
        if ( (unsigned int)UsbhLockSSH(a3, a2) == 6 )
          v11 = -1073741823;
        UsbhUnlockSSH(a3);
        break;
      case 8u:
        UsbhUnlockSSH(a3);
        UsbhSshResumeDownstream(a1, a3, 1);
        v11 = 0;
        break;
      case 9u:
        UsbhUnlockSSH(a3);
        UsbhDisarmHubForWakeDetect(a1);
        v11 = 0;
        break;
      default:
        UsbhUnlockSSH(a3);
        return (unsigned int)-1073741823;
    }
  }
  return v11;
}
