/*
 * XREFs of Template_qqqp @ 0x18009A4A4
 * Callers:
 *     ?_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@IW4Enum@DwmResourceProperty@@@Z @ 0x1800134C0 (-_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@IW4Enum@DwmResourcePro.c)
 * Callees:
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 */

__int64 __fastcall Template_qqqp(__int64 a1, __int64 a2, int a3, int a4, char a5, char a6)
{
  _QWORD v7[8]; // [rsp+20h] [rbp-50h] BYREF
  int v8; // [rsp+90h] [rbp+20h] BYREF
  int v9; // [rsp+98h] [rbp+28h] BYREF

  v9 = a4;
  v8 = a3;
  v7[0] = &v8;
  v7[7] = 8LL;
  v7[1] = 4LL;
  v7[2] = &v9;
  v7[3] = 4LL;
  v7[4] = &a5;
  v7[6] = &a6;
  v7[5] = 4LL;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, &UdwmAnimationResource_Bind, 4LL, v7);
}
