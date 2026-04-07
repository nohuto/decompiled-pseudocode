/*
 * XREFs of Template_qffff @ 0x18008F4AC
 * Callers:
 *     ?CreateAnimationTransition@CAnimationEngine@@AEAAJIPEAUTA_TIMINGFUNCTION@@NPEANIPEAPEAUIUIAnimationTransition2@@@Z @ 0x1800370C0 (-CreateAnimationTransition@CAnimationEngine@@AEAAJIPEAUTA_TIMINGFUNCTION@@NPEANIPEAPEAUIUIAnimat.c)
 * Callees:
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall Template_qffff(__int64 a1, __int64 a2, int a3, float a4, char a5, char a6, char a7)
{
  _QWORD v8[10]; // [rsp+20h] [rbp-60h] BYREF
  int v9; // [rsp+A0h] [rbp+20h] BYREF
  float v10; // [rsp+A8h] [rbp+28h] BYREF

  v10 = a4;
  v9 = a3;
  v8[0] = &v9;
  v8[1] = 4LL;
  v8[2] = &v10;
  v8[3] = 4LL;
  v8[4] = &a5;
  v8[5] = 4LL;
  v8[6] = &a6;
  v8[8] = &a7;
  v8[7] = 4LL;
  v8[9] = 4LL;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, &UdwmAnimationEngine_TimingFunction, 5LL, v8);
}
