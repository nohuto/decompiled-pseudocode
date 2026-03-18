/*
 * XREFs of UsbhHandleSuspend @ 0x1C00257E8
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x1C0018370 (UsbhHubDispatchPortEvent.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhResumeSuspendedPort @ 0x1C0025898 (UsbhResumeSuspendedPort.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C004FD8C (WPP_RECORDER_SF_DDD.c)
 *     UsbhHandleOvercurrent @ 0x1C0050254 (UsbhHandleOvercurrent.c)
 *     UsbhPortDisconnect @ 0x1C0050830 (UsbhPortDisconnect.c)
 */

__int64 __fastcall UsbhHandleSuspend(__int64 a1, unsigned int a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // ebx
  __int64 v9; // r9
  PDEVICE_OBJECT v10; // rcx

  v8 = 5;
  Log(a1, 1024, 1398100816, a4, a2);
  v10 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_DDD(
      WPP_GLOBAL_Control->DeviceExtension,
      a3,
      *(unsigned __int16 *)(v9 + 4),
      44,
      (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
      *(_WORD *)(v9 + 4),
      a3,
      a2);
    v10 = WPP_GLOBAL_Control;
  }
  if ( a2 == 1 )
    return (unsigned int)UsbhPortDisconnect(a1, a4, a5);
  if ( a2 == 8 )
    return (unsigned int)UsbhHandleOvercurrent(a1, a5);
  if ( a2 != 0x40000 )
  {
    if ( a2 == 0x100000 )
      return (unsigned int)UsbhResumeSuspendedPort(a1, a5);
    if ( LOWORD(v10->DeviceType) )
      WPP_RECORDER_SF_(v10->DeviceExtension, 0, 1, 45, (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids);
    Log(a1, 1024, 1937077062, *(unsigned __int16 *)(a4 + 420), a3);
    return 4;
  }
  return v8;
}
