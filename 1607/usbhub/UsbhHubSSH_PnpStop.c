/*
 * XREFs of UsbhHubSSH_PnpStop @ 0x1C00568C0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhDisableTimerObject @ 0x1C001C6C0 (UsbhDisableTimerObject.c)
 *     UsbhSshBusBusy @ 0x1C001E580 (UsbhSshBusBusy.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     UsbhSshBusIdle @ 0x1C003F6FC (UsbhSshBusIdle.c)
 */

LONG __fastcall UsbhHubSSH_PnpStop(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9

  Log((__int64)a1, 0x10000, 1936937840, 0LL, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v6 )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x13u,
      (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
  v7 = FdoExt(*(_QWORD *)(a2 + 8), v4, v5, v6);
  UsbhSshBusBusy(a1, a2, v8, v9);
  UsbhDisableTimerObject((__int64)a1, (__int64)(v7 + 800), v10, v11);
  UsbhSshBusIdle((__int64)a1, v12, v13, v14);
  return UsbhFreeBusyList((__int64)a1, v15, v16, v17);
}
