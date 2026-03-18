/*
 * XREFs of Usbh_BS_BusRun @ 0x1C0021B4C
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C0021780 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     UsbhSshBusBusy @ 0x1C0009DA0 (UsbhSshBusBusy.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhBusPause_Action @ 0x1C00157E0 (UsbhBusPause_Action.c)
 *     UsbhReleaseBusStateLock @ 0x1C0021A9C (UsbhReleaseBusStateLock.c)
 *     UsbhBusPnpStop_Action @ 0x1C003F1E0 (UsbhBusPnpStop_Action.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Usbh_BS_BusRun(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebp
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  struct _DEVICE_OBJECT *v14; // rcx
  int v15; // edi
  int v16; // edi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  _DWORD *v20; // rax
  unsigned int v21; // edi
  __int64 v22; // rcx
  __int64 v24; // r8

  v4 = (int)a3;
  FdoExt((__int64)a1, a2, a3, a4);
  FdoExt(*(_QWORD *)(a2 + 8), v7, v8, v9);
  v10 = *(_DWORD *)(a2 + 80);
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
  v13 = a2;
  v14 = a1;
  v15 = v4 - 3;
  if ( !v15 )
  {
    UsbhBusPause_Action(a1, a2, v11, v12);
    UsbhBusPnpStop_Action(a1, a2);
    v24 = 2LL;
    goto LABEL_17;
  }
  v16 = v15 - 3;
  if ( !v16 )
  {
    UsbhBusPause_Action(a1, a2, v11, v12);
    UsbhSshBusBusy((__int64)a1, a2);
    v24 = 5LL;
LABEL_17:
    v14 = a1;
    goto LABEL_18;
  }
  if ( v16 != 1 )
  {
    v24 = v10;
    return (unsigned int)UsbhReleaseBusStateLock(v14, v13, v24, v12);
  }
  v17 = UsbhBusPause_Action(a1, a2, v11, v12);
  v14 = a1;
  if ( (v17 & 0xC0000000) == 0xC0000000 )
  {
    v24 = 3LL;
LABEL_18:
    v13 = a2;
    return (unsigned int)UsbhReleaseBusStateLock(v14, v13, v24, v12);
  }
  v20 = FdoExt((__int64)a1, v18, v19, v12);
  v21 = 4;
  if ( v20[610] != 4 )
  {
    v20[610] = 4;
    *(_DWORD *)(a2 + 80) = 4;
  }
  *(_DWORD *)(a2 + 76) = 1734964085;
  v22 = 8LL * (unsigned int)v20[208];
  *((_QWORD *)v20 + 167) = 0LL;
  v20[v22 + 137] = 4;
  KeReleaseSemaphore((PRKSEMAPHORE)(v20 + 612), 16, 1, 0);
  return v21;
}
