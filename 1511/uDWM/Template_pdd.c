/*
 * XREFs of Template_pdd @ 0x180099794
 * Callers:
 *     ?_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z @ 0x18000BD50 (-_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall Template_pdd(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  _QWORD v6[6]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7; // [rsp+80h] [rbp+20h] BYREF
  int v8; // [rsp+88h] [rbp+28h] BYREF

  v8 = a4;
  v7 = a3;
  v6[0] = &v7;
  v6[1] = 8LL;
  v6[2] = &v8;
  v6[3] = 4LL;
  v6[4] = &a5;
  v6[5] = 4LL;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, a2, 3LL, v6);
}
