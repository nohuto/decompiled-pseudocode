/*
 * XREFs of CiSystemThrottleNdis @ 0x1C000B520
 * Callers:
 *     CiThreadIncrementScheduledCount @ 0x1C000AC30 (CiThreadIncrementScheduledCount.c)
 *     CiThreadDecrementScheduledCount @ 0x1C000B440 (CiThreadDecrementScheduledCount.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00029E0 (__security_check_cookie.c)
 *     WPP_SF_d @ 0x1C0004254 (WPP_SF_d.c)
 *     CiSystemOpenNdisDevice @ 0x1C000B620 (CiSystemOpenNdisDevice.c)
 */

int __fastcall CiSystemThrottleNdis(char a1)
{
  int result; // eax
  HANDLE v3; // rcx
  int v4; // edx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  int InputBuffer; // [rsp+60h] [rbp-28h] BYREF
  int v7; // [rsp+64h] [rbp-24h]
  __int64 v8; // [rsp+68h] [rbp-20h]

  result = (int)WPP_MAIN_CB.Dpc.DpcData;
  if ( LODWORD(WPP_MAIN_CB.Dpc.DpcData) != -1 && CiSystemResponsiveness != 100 )
  {
    v3 = CiNdisDeviceHandle;
    if ( CiNdisDeviceHandle != (HANDLE)0xFFFFFFFFLL )
    {
      if ( !CiNdisDeviceHandle )
      {
        result = CiSystemOpenNdisDevice();
        if ( result < 0 )
          return result;
        v3 = CiNdisDeviceHandle;
        result = (int)WPP_MAIN_CB.Dpc.DpcData;
      }
      v4 = -1;
      InputBuffer = 1048577;
      v8 = -1LL;
      if ( a1 )
        v4 = result;
      v7 = v4;
      result = ZwDeviceIoControlFile(v3, 0LL, 0LL, 0LL, &IoStatusBlock, 0x170040u, &InputBuffer, 0x10u, 0LL, 0);
      if ( result < 0 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        result = WPP_SF_d(
                   (__int64)WPP_GLOBAL_Control->AttachedDevice,
                   0xDu,
                   (__int64)&WPP_8446a7c63dc532b86ac6f3a978ec1331_Traceguids,
                   result);
      CiNdisThrottledDown = v7 != -1;
    }
  }
  return result;
}
