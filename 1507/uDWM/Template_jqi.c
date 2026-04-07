/*
 * XREFs of Template_jqi @ 0x18009C734
 * Callers:
 *     ?Begin@CAnimationClock@@QEAAJK@Z @ 0x18000A974 (-Begin@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall Template_jqi(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  _QWORD v6[6]; // [rsp+20h] [rbp-40h] BYREF
  int v7; // [rsp+88h] [rbp+28h] BYREF

  v7 = a4;
  v6[2] = &v7;
  v6[0] = a3;
  v6[4] = &a5;
  v6[1] = 16LL;
  v6[3] = 4LL;
  v6[5] = 8LL;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, &UdwmAnimationClock_Begin, 3LL, v6);
}
