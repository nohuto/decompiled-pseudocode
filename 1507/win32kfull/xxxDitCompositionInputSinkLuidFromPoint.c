/*
 * XREFs of xxxDitCompositionInputSinkLuidFromPoint @ 0x1C022D7D4
 * Callers:
 *     UserProcessDwmInput @ 0x1C00F1FE0 (UserProcessDwmInput.c)
 * Callees:
 *     DCESpeedHitTest @ 0x1C0065270 (DCESpeedHitTest.c)
 *     IsThreadDesktopComposed @ 0x1C008BBD0 (IsThreadDesktopComposed.c)
 *     SpeedHitTest @ 0x1C008D450 (SpeedHitTest.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 xxxDitCompositionInputSinkLuidFromPoint()
{
  LARGE_INTEGER PerformanceCounter; // rbx
  int v1; // eax
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // [rsp+50h] [rbp-68h] BYREF
  int v8; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v9[64]; // [rsp+60h] [rbp-58h] BYREF

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  EnterCrit(1LL);
  gbCompositionInputSinkLuidFromPoint = 0;
  gluidCompositionInputSinkLuidFromPoint = 0LL;
  v7 = gptCompositionInputSinkLuidFromPoint;
  v1 = IsThreadDesktopComposed(gptiCurrent);
  v3 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
  if ( v1 )
    DCESpeedHitTest(v3, 0, 0, PerformanceCounter.QuadPart, &v7, 0LL, &v8, (__int64)v9, 0LL, 0LL);
  else
    SpeedHitTest(v3, 0, 0, PerformanceCounter.QuadPart, v2, (__int64)v9, 0LL, 0LL);
  if ( gbCompositionInputSinkQueryBlockedOnDIT )
    KeSetEvent(gpkeDITCompositionInputSinkQueryResponseEvent, 1, 0);
  return UserSessionSwitchLeaveCrit(v5, v4);
}
