/*
 * XREFs of UsbhPCE_QueueChangeObject @ 0x1C0041478
 * Callers:
 *     UsbhResetPortTimerDpc @ 0x1C00446A0 (UsbhResetPortTimerDpc.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0011EB0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C001B570 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_QueueChangeObject(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  unsigned __int16 v7; // bx
  __int64 result; // rax
  __int64 v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+28h] [rbp-30h]

  v7 = a2;
  FdoExt((__int64)a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v11 = v7;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x4Du,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      v11);
  }
  result = UsbhGetPortData((__int64)a1, v7);
  if ( result )
    result = (__int64)UsbhDispatch_PortChangeQueueEventEx(a1, result, 4LL, a4, a3, 2u, a6, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v10) = v7;
    return WPP_RECORDER_SF_d(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             0,
             1u,
             0x4Eu,
             (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
             v10);
  }
  return result;
}
