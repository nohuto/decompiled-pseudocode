/*
 * XREFs of xxxAutoRotateScreen @ 0x1C01CA304
 * Callers:
 *     NtUserAutoRotateScreen @ 0x1C0210CE0 (NtUserAutoRotateScreen.c)
 * Callees:
 *     QueryAutoRotationState @ 0x1C0098B04 (QueryAutoRotationState.c)
 *     ?GetDockedOrientationValue@@YAKPEAK@Z @ 0x1C01C9748 (-GetDockedOrientationValue@@YAKPEAK@Z.c)
 *     ?IsOrientationWithinPreferences@@YAHK@Z @ 0x1C01C9974 (-IsOrientationWithinPreferences@@YAHK@Z.c)
 *     ?xxxRotateScreen@@YAJKHPEAH@Z @ 0x1C01C9C28 (-xxxRotateScreen@@YAJKHPEAH@Z.c)
 *     ?TraceLoggingScreenOrientationArStateChangeEvent@@YAXKW4arInitiatedBy@@W4tagAR_STATE@@@Z @ 0x1C021EFEC (-TraceLoggingScreenOrientationArStateChangeEvent@@YAXKW4arInitiatedBy@@W4tagAR_STATE@@@Z.c)
 *     ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C021F0C4 (-TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z.c)
 */

__int64 __fastcall xxxAutoRotateScreen(unsigned int a1)
{
  unsigned int AutoRotationState; // eax
  __int64 v4; // rdx
  unsigned int v5; // edi
  unsigned int *v6; // rcx
  unsigned int v7; // edi
  int v8; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned int)(gPowerDisplayState[16] - 1) > 1 )
    return 0xFFFFFFFFLL;
  gAutoRotationInfo = a1;
  dword_1C0329488 = 1;
  AutoRotationState = QueryAutoRotationState();
  v5 = AutoRotationState;
  if ( AutoRotationState
    && ((v6 = (unsigned int *)(AutoRotationState - 64), ((unsigned int)v6 & 0xFFFFFF3F) != 0)
     || AutoRotationState == 256
     || a1 != (unsigned int)GetDockedOrientationValue(v6)) )
  {
    TraceLoggingScreenOrientationArStateChangeEvent(a1, v4, v5);
    return 3221225506LL;
  }
  else
  {
    if ( (unsigned int)IsOrientationWithinPreferences(a1) )
    {
      v7 = xxxRotateScreen(a1, 1, &v8);
      if ( v8 )
        TraceLoggingScreenOrientationChangeEvent(a1, 0LL, 0LL, 1001LL);
      else
        UpdateLastInput(
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          14LL);
    }
    else
    {
      TraceLoggingScreenOrientationChangeEvent(a1, 0LL, 0LL, 1002LL);
      return 0;
    }
    return v7;
  }
}
