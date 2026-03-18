/*
 * XREFs of UsbhPCE_BusReset @ 0x1C0003FE4
 * Callers:
 *     UsbhBusReset_Action @ 0x1C0003F64 (UsbhBusReset_Action.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0011EB0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C001B570 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_BusReset(__int64 a1, int a2, unsigned __int16 a3)
{
  __int64 result; // rax
  __int64 v7; // [rsp+68h] [rbp+20h]

  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      63,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      a3);
  Log(a1, 512, 1346711609, 0, a3);
  result = UsbhGetPortData(a1, a3);
  if ( result )
  {
    LODWORD(v7) = 0;
    return UsbhDispatch_PortChangeQueueEventEx(a1, result, 9, a2, v7, 0, 0LL, 0LL);
  }
  return result;
}
