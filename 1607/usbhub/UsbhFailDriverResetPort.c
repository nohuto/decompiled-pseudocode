/*
 * XREFs of UsbhFailDriverResetPort @ 0x1C0050860
 * Callers:
 *     UsbhEnumerate1 @ 0x1C0009834 (UsbhEnumerate1.c)
 *     UsbhEnumerate2 @ 0x1C00504FC (UsbhEnumerate2.c)
 * Callees:
 *     UsbhSignalSyncDeviceReset @ 0x1C0004850 (UsbhSignalSyncDeviceReset.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
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
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      v8);
  }
  UsbhSignalSyncDeviceReset(a1, a3, a2, 0xC000000E);
  return *(unsigned int *)(a2 + 400);
}
