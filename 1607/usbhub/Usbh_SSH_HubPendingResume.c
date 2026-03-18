/*
 * XREFs of Usbh_SSH_HubPendingResume @ 0x1C001B050
 * Callers:
 *     UsbhIncHubBusy @ 0x1C000E3A0 (UsbhIncHubBusy.c)
 *     UsbhFdoReturnPortStatus @ 0x1C00149A0 (UsbhFdoReturnPortStatus.c)
 *     Usbh_SSH_Event @ 0x1C0019340 (Usbh_SSH_Event.c)
 * Callees:
 *     UsbhUnlockSSH @ 0x1C001B2C8 (UsbhUnlockSSH.c)
 *     UsbhSshResumeDownstream @ 0x1C0021F00 (UsbhSshResumeDownstream.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C00227B4 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhLockSSH @ 0x1C0028FDC (UsbhLockSSH.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubPendingResume(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3, __int64 a4)
{
  _DWORD *DeviceExtension; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // ebx
  void *v13; // rcx
  unsigned int v14; // eax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      15,
      (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL, a3, a4);
  if ( *DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension, a3, a4);
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
        UsbhUnlockSSH(a3, 5LL);
        v11 = 0;
        break;
      case 6u:
        UsbhUnlockSSH(a3, 5LL);
        v13 = DeviceExtension + 846;
        v11 = 0;
        KeWaitForSingleObject(v13, Executive, 0, 0, 0LL);
        v14 = UsbhLockSSH(a3, a2);
        if ( v14 == 6 )
          v11 = -1073741823;
        UsbhUnlockSSH(a3, v14);
        break;
      case 7u:
        UsbhUnlockSSH(a3, 1LL);
        v11 = 0;
        break;
      case 8u:
        UsbhUnlockSSH(a3, 5LL);
        UsbhSshResumeDownstream(DeviceObject);
        v11 = 0;
        break;
      case 9u:
        UsbhUnlockSSH(a3, 6LL);
        UsbhDisarmHubForWakeDetect(DeviceObject);
        v11 = 0;
        break;
      default:
        UsbhUnlockSSH(a3, 5LL);
        return (unsigned int)-1073741823;
    }
  }
  return v11;
}
