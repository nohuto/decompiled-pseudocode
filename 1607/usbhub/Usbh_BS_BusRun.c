/*
 * XREFs of Usbh_BS_BusRun @ 0x1C000CDE4
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C000CF00 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     UsbhReleaseBusStateLock @ 0x1C000D21C (UsbhReleaseBusStateLock.c)
 *     UsbhBusPause_Action @ 0x1C00105A0 (UsbhBusPause_Action.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhSshBusBusy @ 0x1C001E580 (UsbhSshBusBusy.c)
 *     UsbhBusPnpStop_Action @ 0x1C003F500 (UsbhBusPnpStop_Action.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Usbh_BS_BusRun(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rdx
  struct _DEVICE_OBJECT *v7; // rcx
  int v8; // edi
  int v9; // edi
  int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // edi
  __int64 v13; // rcx

  v3 = a3;
  FdoExt(a1);
  FdoExt(*(_QWORD *)(a2 + 8));
  Log((_DWORD)a1, 2048, 1651724878, a2, v3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_99dd9bfc408b3f1dff14dd9b257ad869_Traceguids,
      v3);
  if ( (_DWORD)v3 != 7 )
    *(_DWORD *)(a2 + 128) = 1;
  v6 = a2;
  v7 = a1;
  v8 = v3 - 3;
  if ( !v8 )
  {
    UsbhBusPause_Action(a1);
    UsbhBusPnpStop_Action(a1, a2);
    goto LABEL_17;
  }
  v9 = v8 - 3;
  if ( !v9 )
  {
    UsbhBusPause_Action(a1);
    UsbhSshBusBusy(a1, a2);
LABEL_17:
    v7 = a1;
    goto LABEL_18;
  }
  if ( v9 != 1 )
    return (unsigned int)UsbhReleaseBusStateLock(v7, v6);
  v10 = UsbhBusPause_Action(a1);
  v7 = a1;
  if ( (v10 & 0xC0000000) == 0xC0000000 )
  {
LABEL_18:
    v6 = a2;
    return (unsigned int)UsbhReleaseBusStateLock(v7, v6);
  }
  v11 = FdoExt(a1);
  v12 = 4;
  if ( *(_DWORD *)(v11 + 2440) != 4 )
  {
    *(_DWORD *)(v11 + 2440) = 4;
    *(_DWORD *)(a2 + 80) = 4;
  }
  *(_DWORD *)(a2 + 76) = 1734964085;
  v13 = 32LL * *(unsigned int *)(v11 + 832);
  *(_QWORD *)(v11 + 1336) = 0LL;
  *(_DWORD *)(v13 + v11 + 548) = 4;
  KeReleaseSemaphore((PRKSEMAPHORE)(v11 + 2448), 16, 1, 0);
  return v12;
}
