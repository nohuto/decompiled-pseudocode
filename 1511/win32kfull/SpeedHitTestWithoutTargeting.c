/*
 * XREFs of SpeedHitTestWithoutTargeting @ 0x1C022D78C
 * Callers:
 *     ?RevalidateHitTestResult@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01F2208 (-RevalidateHitTestResult@@YAXPEAUtagTPSTATE@@@Z.c)
 *     PointerSpeedHitTest @ 0x1C022D63C (PointerSpeedHitTest.c)
 * Callees:
 *     DCESpeedHitTest @ 0x1C0066310 (DCESpeedHitTest.c)
 *     SpeedHitTest @ 0x1C0066700 (SpeedHitTest.c)
 *     IsCurrentDesktopComposed @ 0x1C00874C0 (IsCurrentDesktopComposed.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall SpeedHitTestWithoutTargeting(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v11; // [rsp+50h] [rbp-98h] BYREF
  __int64 v12; // [rsp+58h] [rbp-90h] BYREF
  _BYTE v13[64]; // [rsp+60h] [rbp-88h] BYREF

  v12 = a4;
  if ( !(unsigned int)IsCurrentDesktopComposed() )
    return SpeedHitTest(a1, a2, 0, a3, a4, (__int64)v13, a5, a6);
  v11 = 0;
  return DCESpeedHitTest(a1, a2, 0, a3, &v12, 0LL, &v11, (__int64)v13, a5, a6);
}
