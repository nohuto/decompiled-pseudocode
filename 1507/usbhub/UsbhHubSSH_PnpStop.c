/*
 * XREFs of UsbhHubSSH_PnpStop @ 0x1C0056120
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSshBusBusy @ 0x1C000B654 (UsbhSshBusBusy.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhDisableTimerObject @ 0x1C001A5B0 (UsbhDisableTimerObject.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     UsbhSshBusIdle @ 0x1C003F1AC (UsbhSshBusIdle.c)
 */

LONG __fastcall UsbhHubSSH_PnpStop(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9

  Log((__int64)a1, 0x10000, 1936937840, 0LL, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v6 )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x13u,
      (__int64)&WPP_ef9c0e9779e9088dbdd2819f04244fda_Traceguids);
  v7 = FdoExt(*(_QWORD *)(a2 + 8), v4, v5, v6);
  UsbhSshBusBusy(a1);
  UsbhDisableTimerObject((__int64)a1, (__int64)(v7 + 800), v8, v9);
  UsbhSshBusIdle((__int64)a1, v10, v11, v12);
  return UsbhFreeBusyList((__int64)a1, v13, v14, v15);
}
