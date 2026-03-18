/*
 * XREFs of Template_qqq @ 0x140004A30
 * Callers:
 *     ?HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ @ 0x1400012B0 (-HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140003130 (__security_check_cookie.c)
 */

__int64 __fastcall Template_qqq(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  _QWORD v6[6]; // [rsp+20h] [rbp-48h] BYREF
  int v7; // [rsp+80h] [rbp+18h] BYREF
  int v8; // [rsp+88h] [rbp+20h] BYREF

  v8 = a4;
  v7 = a3;
  v6[0] = &v7;
  v6[1] = 4LL;
  v6[2] = &v8;
  v6[3] = 4LL;
  v6[4] = &a5;
  v6[5] = 4LL;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, &UdwmProcessModeChange_Info, 3LL, v6);
}
