/*
 * XREFs of VslpIumPhase4Initialize @ 0x14014C7E0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     IumApiInit_0 @ 0x140001308 (IumApiInit_0.c)
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     VslpIumInitializeTelemetry @ 0x1407BC73C (VslpIumInitializeTelemetry.c)
 */

__int64 VslpIumPhase4Initialize()
{
  __int64 result; // rax
  NTSTATUS v1; // eax
  _BYTE v2[112]; // [rsp+40h] [rbp-88h] BYREF

  result = VslpIumInitializeTelemetry();
  if ( VslVsmEnabled )
  {
    v1 = VslpEnterIumSecureMode(1, 1LL, 0LL, (__int64)v2);
    if ( v1 < 0 )
      KeBugCheckEx(0x6Fu, v1, 3uLL, 0LL, 0LL);
    return IumApiInit_0();
  }
  return result;
}
