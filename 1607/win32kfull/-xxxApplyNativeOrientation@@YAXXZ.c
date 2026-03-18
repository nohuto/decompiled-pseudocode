/*
 * XREFs of ?xxxApplyNativeOrientation@@YAXXZ @ 0x1C01C9B60
 * Callers:
 *     xxxSetAutoRotationDocked @ 0x1C0154F04 (xxxSetAutoRotationDocked.c)
 *     xxxSetAutoRotationConvertible @ 0x1C0154F84 (xxxSetAutoRotationConvertible.c)
 *     ?RotationLockCallback@@YAX_K_J@Z @ 0x1C01C9B00 (-RotationLockCallback@@YAX_K_J@Z.c)
 * Callees:
 *     QueryAutoRotationState @ 0x1C0098B04 (QueryAutoRotationState.c)
 *     PostShellHookMessagesEx @ 0x1C00992D4 (PostShellHookMessagesEx.c)
 *     ?GetDockedOrientationValue@@YAKPEAK@Z @ 0x1C01C9748 (-GetDockedOrientationValue@@YAKPEAK@Z.c)
 *     ?xxxRotateScreen@@YAJKHPEAH@Z @ 0x1C01C9C28 (-xxxRotateScreen@@YAJKHPEAH@Z.c)
 *     xxxSetAutoRotationState @ 0x1C01CA438 (xxxSetAutoRotationState.c)
 *     ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C021F0C4 (-TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z.c)
 */

void xxxApplyNativeOrientation(void)
{
  unsigned int DockedOrientationValue; // edi
  unsigned int *v1; // rcx
  int AutoRotationState; // ebx
  __int64 v3; // r9
  __int64 v4; // r8
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  DockedOrientationValue = 0;
  if ( dword_1C032948C )
  {
    AutoRotationState = QueryAutoRotationState();
    if ( ((AutoRotationState - 64) & 0xFFFFFF3F) != 0 || AutoRotationState == 256 )
    {
      if ( ((AutoRotationState - 65) & 0xFFFFFF3F) == 0 && AutoRotationState != 257 )
        DockedOrientationValue = dword_1C0329464;
    }
    else
    {
      DockedOrientationValue = GetDockedOrientationValue(v1);
    }
    if ( !(unsigned int)xxxRotateScreen(DockedOrientationValue, 0, &v5) )
    {
      if ( v5 )
      {
        v3 = 1001LL;
        v4 = 0LL;
      }
      else
      {
        v3 = 1000LL;
        v4 = 1LL;
      }
      TraceLoggingScreenOrientationChangeEvent(DockedOrientationValue, 2LL, v4, v3);
      if ( ((AutoRotationState - 64) & 0xFFFFFF3F) == 0 && AutoRotationState != 256 )
      {
        xxxSetAutoRotationState(0LL);
        PostShellHookMessagesEx(0x32u, dword_1C0329468, 0LL);
      }
    }
  }
}
