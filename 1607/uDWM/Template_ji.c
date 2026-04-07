/*
 * XREFs of Template_ji @ 0x18009A818
 * Callers:
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x18003B4CC (-End@CAnimationClock@@QEAAJXZ.c)
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x18003B5F4 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 */

__int64 Template_ji(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h]
  int v6; // [rsp+2Ch] [rbp-2Ch]
  va_list v7; // [rsp+30h] [rbp-28h]
  int v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+3Ch] [rbp-1Ch]
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  v4 = a3;
  v6 = 0;
  v5 = 16;
  va_copy(v7, va);
  v9 = 0;
  v8 = 8;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, a2, 2LL, &v4);
}
