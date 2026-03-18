/*
 * XREFs of UsbhFailDriverResetPort @ 0x1C0050260
 * Callers:
 *     UsbhEnumerate1 @ 0x1C0027540 (UsbhEnumerate1.c)
 *     UsbhEnumerate2 @ 0x1C004FF08 (UsbhEnumerate2.c)
 * Callees:
 *     UsbhSignalSyncDeviceReset @ 0x1C0004730 (UsbhSignalSyncDeviceReset.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhFailDriverResetPort(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // r10d
  int v8; // [rsp+28h] [rbp-10h]

  Log(a1, 1024, 1884443460, a2, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v6 )
  {
    v8 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      v6 + 1,
      v6 + 41,
      (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
      v8);
  }
  UsbhSignalSyncDeviceReset(a1, a3, a2, 0xC000000E);
  return *(unsigned int *)(a2 + 400);
}
