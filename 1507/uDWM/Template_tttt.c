/*
 * XREFs of Template_tttt @ 0x180097800
 * Callers:
 *     ?OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ @ 0x180091700 (-OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall Template_tttt(__int64 a1, __int64 a2, int a3, int a4, char a5, char a6)
{
  _QWORD v7[8]; // [rsp+20h] [rbp-50h] BYREF
  int v8; // [rsp+90h] [rbp+20h] BYREF
  int v9; // [rsp+98h] [rbp+28h] BYREF

  v9 = a4;
  v8 = a3;
  v7[0] = &v8;
  v7[1] = 4LL;
  v7[2] = &v9;
  v7[3] = 4LL;
  v7[4] = &a5;
  v7[5] = 4LL;
  v7[6] = &a6;
  v7[7] = 4LL;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, &UdwmSystemAnimation_DelayedArrangementStart, 4LL, v7);
}
