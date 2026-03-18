/*
 * XREFs of UsbhPCE_BusDisconnect @ 0x1C00409E4
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1C001D9C0 (UsbhPdoDevicePowerState.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003DDE8 (UsbhOvercurrentResetWorker.c)
 *     UsbhBusDisconnect_Action @ 0x1C003EF30 (UsbhBusDisconnect_Action.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000AEF0 (UsbhGetPortData.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0010B40 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 */

int *__fastcall UsbhPCE_BusDisconnect(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // di
  int *result; // rax
  int v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+68h] [rbp+20h]

  v4 = a3;
  FdoExt((__int64)a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v8 = v4;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x41u,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      v8);
  }
  Log((__int64)a1, 512, 1346711857, 0LL, v4);
  result = (int *)UsbhGetPortData((__int64)a1, v4);
  if ( result )
  {
    LODWORD(v9) = 0;
    return UsbhDispatch_PortChangeQueueEventEx(a1, (__int64)result, 11LL, a2, v9, 0, 0LL, 0LL);
  }
  return result;
}
