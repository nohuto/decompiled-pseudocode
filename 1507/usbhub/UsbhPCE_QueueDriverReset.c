/*
 * XREFs of UsbhPCE_QueueDriverReset @ 0x1C0003950
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003574 (UsbhSyncResetDeviceInternal.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000AEF0 (UsbhGetPortData.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0010B40 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_QueueDriverReset(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 result; // rax

  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      81,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      a2);
  Log(a1, 512, 1953452114, 0, a2);
  result = UsbhGetPortData(a1, a2);
  if ( result )
    return UsbhDispatch_PortChangeQueueEventEx(a1, result, 15, a4, a3, 1, a5, 0LL);
  return result;
}
