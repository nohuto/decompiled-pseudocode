/*
 * XREFs of Template_qdq @ 0x18008F42C
 * Callers:
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x180036FCC (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x180038D74 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall Template_qdq(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  _QWORD v6[6]; // [rsp+20h] [rbp-40h] BYREF
  int v7; // [rsp+80h] [rbp+20h] BYREF
  int v8; // [rsp+88h] [rbp+28h] BYREF

  v8 = a4;
  v7 = a3;
  v6[0] = &v7;
  v6[1] = 4LL;
  v6[2] = &v8;
  v6[3] = 4LL;
  v6[4] = &a5;
  v6[5] = 4LL;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, a2, 3LL, v6);
}
