/*
 * XREFs of Template_j @ 0x18009C5EC
 * Callers:
 *     ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x18000ADB0 (-_OnTimerCallback@CAnimationClock@@AEAAXXZ.c)
 *     ?_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ @ 0x18000B27C (-_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall Template_j(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+2Ch] [rbp-1Ch]

  v6 = 0;
  v4 = a3;
  v5 = 16;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, a2, 1LL, &v4);
}
