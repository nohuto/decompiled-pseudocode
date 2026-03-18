/*
 * XREFs of UsbhInitCallbackWorker @ 0x1C0027CA0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhDisableTimerObject @ 0x1C001C6C0 (UsbhDisableTimerObject.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhInitCallbackWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  _DWORD *v7; // rbp
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9

  v5 = (unsigned int)a2;
  v7 = FdoExt(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_f44c71c208e93d614b6f1b21108c6498_Traceguids);
  Log(a1, 2, 1766015607, a1, v5);
  UsbhDisableTimerObject(a1, *((_QWORD *)v7 + 346), v8, v9);
  return Usbh_FDO_Pnp_State(a3, 8u, v10, v11);
}
