/*
 * XREFs of Usbh_BS_BusRun @ 0x1C0018D34
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C0019640 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     UsbhSshBusBusy @ 0x1C000B654 (UsbhSshBusBusy.c)
 *     UsbhBusPause_Action @ 0x1C000F090 (UsbhBusPause_Action.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhReleaseBusStateLock @ 0x1C001995C (UsbhReleaseBusStateLock.c)
 *     UsbhBusPnpStop_Action @ 0x1C003EFB0 (UsbhBusPnpStop_Action.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Usbh_BS_BusRun(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  struct _DEVICE_OBJECT *v11; // rcx
  int v12; // edi
  int v13; // edi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD *v18; // rax
  unsigned int v19; // edi
  __int64 v20; // rcx

  v4 = (int)a3;
  FdoExt((__int64)a1, a2, a3, a4);
  FdoExt(*(_QWORD *)(a2 + 8), v7, v8, v9);
  Log((__int64)a1, 2048, 1651724878, a2, v4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_fbd879e33feb48e7a921aba0522b0728_Traceguids,
      v4);
  if ( (_DWORD)v4 != 7 )
    *(_DWORD *)(a2 + 128) = 1;
  v10 = a2;
  v11 = a1;
  v12 = v4 - 3;
  if ( !v12 )
  {
    UsbhBusPause_Action(a1, a2);
    UsbhBusPnpStop_Action(a1, a2);
    goto LABEL_17;
  }
  v13 = v12 - 3;
  if ( !v13 )
  {
    UsbhBusPause_Action(a1, a2);
    UsbhSshBusBusy(a1);
LABEL_17:
    v11 = a1;
    goto LABEL_18;
  }
  if ( v13 != 1 )
    return (unsigned int)UsbhReleaseBusStateLock(v11, v10);
  v14 = UsbhBusPause_Action(a1, a2);
  v11 = a1;
  if ( (v14 & 0xC0000000) == 0xC0000000 )
  {
LABEL_18:
    v10 = a2;
    return (unsigned int)UsbhReleaseBusStateLock(v11, v10);
  }
  v18 = FdoExt((__int64)a1, v15, v16, v17);
  v19 = 4;
  if ( v18[610] != 4 )
  {
    v18[610] = 4;
    *(_DWORD *)(a2 + 80) = 4;
  }
  *(_DWORD *)(a2 + 76) = 1734964085;
  v20 = 8LL * (unsigned int)v18[208];
  *((_QWORD *)v18 + 167) = 0LL;
  v18[v20 + 137] = 4;
  KeReleaseSemaphore((PRKSEMAPHORE)(v18 + 612), 16, 1, 0);
  return v19;
}
