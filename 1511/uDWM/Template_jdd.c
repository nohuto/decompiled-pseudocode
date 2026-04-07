/*
 * XREFs of Template_jdd @ 0x18009DD14
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180004FE4 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall Template_jdd(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  _QWORD v6[6]; // [rsp+20h] [rbp-40h] BYREF
  int v7; // [rsp+88h] [rbp+28h] BYREF

  v7 = a4;
  v6[2] = &v7;
  v6[0] = a3;
  v6[4] = &a5;
  v6[1] = 16LL;
  v6[3] = 4LL;
  v6[5] = 4LL;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, &UdwmAnimationClock_StateChange, 3LL, v6);
}
