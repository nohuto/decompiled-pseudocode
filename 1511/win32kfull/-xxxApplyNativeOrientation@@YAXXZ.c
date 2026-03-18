/*
 * XREFs of ?xxxApplyNativeOrientation@@YAXXZ @ 0x1C01D22C0
 * Callers:
 *     xxxSetAutoRotationDocked @ 0x1C014F5A0 (xxxSetAutoRotationDocked.c)
 *     xxxSetAutoRotationConvertible @ 0x1C014F5D4 (xxxSetAutoRotationConvertible.c)
 *     ?RotationLockCallback@@YAX_K_J@Z @ 0x1C01D2260 (-RotationLockCallback@@YAX_K_J@Z.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0081C20 (PostShellHookMessagesEx.c)
 *     QueryAutoRotationState @ 0x1C0096AE4 (QueryAutoRotationState.c)
 *     ?GetDockedOrientationValue@@YAKPEAK@Z @ 0x1C01D1F8C (-GetDockedOrientationValue@@YAKPEAK@Z.c)
 *     ?xxxRotateScreen@@YAJKHPEAH@Z @ 0x1C01D2388 (-xxxRotateScreen@@YAJKHPEAH@Z.c)
 *     xxxSetAutoRotationState @ 0x1C01D295C (xxxSetAutoRotationState.c)
 *     ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C0226090 (-TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z.c)
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
  if ( dword_1C0323D8C )
  {
    AutoRotationState = QueryAutoRotationState();
    if ( ((AutoRotationState - 64) & 0xFFFFFF3F) != 0 || AutoRotationState == 256 )
    {
      if ( ((AutoRotationState - 65) & 0xFFFFFF3F) == 0 && AutoRotationState != 257 )
        DockedOrientationValue = dword_1C0323D64;
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
        PostShellHookMessagesEx(0x32u, dword_1C0323D68, 0LL);
      }
    }
  }
}
