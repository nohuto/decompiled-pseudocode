/*
 * XREFs of xxxDitCompositionInputSinkLuidFromPoint @ 0x1C0223944
 * Callers:
 *     UserProcessDwmInput @ 0x1C00E0620 (UserProcessDwmInput.c)
 * Callees:
 *     IsThreadDesktopComposed @ 0x1C0058D20 (IsThreadDesktopComposed.c)
 *     DCESpeedHitTest @ 0x1C0058D3C (DCESpeedHitTest.c)
 *     SpeedHitTest @ 0x1C00591A0 (SpeedHitTest.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 xxxDitCompositionInputSinkLuidFromPoint()
{
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v1; // rbx
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v7; // [rsp+50h] [rbp-68h] BYREF
  __int64 v8; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v9[64]; // [rsp+60h] [rbp-58h] BYREF

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  EnterCrit(0LL, 1LL);
  v1 = gptCompositionInputSinkLuidFromPoint;
  gbCompositionInputSinkLuidFromPoint = 0;
  v8 = gptCompositionInputSinkLuidFromPoint;
  gluidCompositionInputSinkLuidFromPoint = 0LL;
  ghwndCompositionInputSinkLuidFromPoint = 0LL;
  memset(&gxformCompositionInputSinkLuidFromPoint, 0, 0x40uLL);
  v2 = IsThreadDesktopComposed(gptiCurrent);
  v3 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
  if ( v2 )
    DCESpeedHitTest(
      v3,
      gtypeCompositionInputSinkLuidFromPoint,
      0,
      PerformanceCounter.QuadPart,
      &v8,
      0LL,
      &v7,
      (__int64)v9,
      0LL,
      0LL);
  else
    SpeedHitTest(
      v3,
      gtypeCompositionInputSinkLuidFromPoint,
      0,
      PerformanceCounter.QuadPart,
      v1,
      v1,
      (__int64)v9,
      0LL,
      0LL);
  if ( gbCompositionInputSinkQueryBlockedOnDIT )
    KeSetEvent(gpkeDITCompositionInputSinkQueryResponseEvent, 1, 0);
  return UserSessionSwitchLeaveCrit(v5, v4);
}
