/*
 * XREFs of Usbh_SSH_HubPendingSuspend @ 0x1C0026CA4
 * Callers:
 *     UsbhIncHubBusy @ 0x1C000E3A0 (UsbhIncHubBusy.c)
 *     Usbh_SSH_Event @ 0x1C0019340 (Usbh_SSH_Event.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhUnlockSSH @ 0x1C001B2C8 (UsbhUnlockSSH.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001CFC0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhLockSSH @ 0x1C0028FDC (UsbhLockSSH.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubPendingSuspend(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // r14
  int v12; // edi
  int v13; // edi
  _DWORD *v14; // rax
  int v16; // edi
  int v17; // edx
  int v18; // eax

  v5 = a2;
  v7 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
  v11 = FdoExt(a1, a2, a3, a4);
  v12 = v5 - 1;
  if ( !v12 )
  {
    v17 = 2;
    goto LABEL_15;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v16 = v13 - 1;
    if ( v16 )
    {
      if ( v16 != 3 )
      {
        UsbhUnlockSSH(a3, 2, v9, v10);
        return (unsigned int)-1073741823;
      }
      UsbhUnlockSSH(a3, 3, v9, v10);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_START);
      KeWaitForSingleObject(v11 + 846, Executive, 0, 0, 0LL);
      v17 = UsbhLockSSH(a3, 6LL);
      v18 = 0;
      if ( v17 == 6 )
        v18 = -1073741823;
      v7 = v18;
    }
    else
    {
      v17 = 1;
    }
LABEL_15:
    UsbhUnlockSSH(a3, v17, v9, v10);
    return v7;
  }
  v14 = FdoExt(*(_QWORD *)(a3 + 8), v8, v9, v10);
  v14[781] = 4;
  v14[8 * v14[864] + 867] = 4;
  *(_DWORD *)(a3 + 120) = 1734964085;
  *((_QWORD *)v14 + 399) = 0LL;
  KeReleaseSemaphore((PRKSEMAPHORE)(v14 + 782), 16, 1, 0);
  return v7;
}
