/*
 * XREFs of ?xxxApplyNativeOrientation@@YAXXZ @ 0x1C01D06F4
 * Callers:
 *     xxxSetAutoRotationDocked @ 0x1C0132610 (xxxSetAutoRotationDocked.c)
 *     xxxSetAutoRotationConvertible @ 0x1C0132624 (xxxSetAutoRotationConvertible.c)
 *     ?RotationLockCallback@@YAX_K_J@Z @ 0x1C01D06B0 (-RotationLockCallback@@YAX_K_J@Z.c)
 * Callees:
 *     QueryAutoRotationState @ 0x1C007D804 (QueryAutoRotationState.c)
 *     ?GetDockedOrientationValue@@YAKXZ @ 0x1C01D0340 (-GetDockedOrientationValue@@YAKXZ.c)
 *     ?xxxRotateScreen@@YAJKHPEAH@Z @ 0x1C01D0770 (-xxxRotateScreen@@YAJKHPEAH@Z.c)
 *     ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C0224C00 (-TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z.c)
 */

void xxxApplyNativeOrientation(void)
{
  unsigned int DockedOrientationValue; // ebx
  int AutoRotationState; // ecx
  __int64 v2; // r9
  __int64 v3; // r8
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  DockedOrientationValue = 0;
  if ( dword_1C032305C )
  {
    AutoRotationState = QueryAutoRotationState();
    if ( ((AutoRotationState - 64) & 0xFFFFFF3F) == 0 && AutoRotationState != 256 )
      DockedOrientationValue = GetDockedOrientationValue();
    if ( gAutoRotationInfo == DockedOrientationValue && !(unsigned int)xxxRotateScreen(DockedOrientationValue, 0, &v4) )
    {
      if ( v4 )
      {
        v2 = 1001LL;
        v3 = 0LL;
      }
      else
      {
        v2 = 1000LL;
        v3 = 1LL;
      }
      TraceLoggingScreenOrientationChangeEvent(DockedOrientationValue, 2LL, v3, v2);
    }
  }
}
