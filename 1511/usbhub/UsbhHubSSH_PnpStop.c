/*
 * XREFs of UsbhHubSSH_PnpStop @ 0x1C0056290
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSshBusBusy @ 0x1C0009DA0 (UsbhSshBusBusy.c)
 *     UsbhDisableTimerObject @ 0x1C000E0A0 (UsbhDisableTimerObject.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     UsbhSshBusIdle @ 0x1C003F3DC (UsbhSshBusIdle.c)
 */

LONG __fastcall UsbhHubSSH_PnpStop(__int64 a1, __int64 a2)
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

  Log(a1, 0x10000, 1936937840, 0LL, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v6 )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x13u,
      (__int64)&WPP_fa32011b2fa43127c0d18cce76e2f816_Traceguids);
  v7 = FdoExt(*(_QWORD *)(a2 + 8), v4, v5, v6);
  UsbhSshBusBusy(a1, a2);
  UsbhDisableTimerObject(a1, (__int64)(v7 + 800), v8, v9);
  UsbhSshBusIdle(a1, v10, v11, v12);
  return UsbhFreeBusyList(a1, v13, v14, v15);
}
