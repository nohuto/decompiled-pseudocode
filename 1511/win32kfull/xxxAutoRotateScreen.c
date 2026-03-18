/*
 * XREFs of xxxAutoRotateScreen @ 0x1C01D2848
 * Callers:
 *     NtUserAutoRotateScreen @ 0x1C0217EF0 (NtUserAutoRotateScreen.c)
 * Callees:
 *     QueryAutoRotationState @ 0x1C0096AE4 (QueryAutoRotationState.c)
 *     ?GetDockedOrientationValue@@YAKPEAK@Z @ 0x1C01D1F8C (-GetDockedOrientationValue@@YAKPEAK@Z.c)
 *     ?IsOrientationWithinPreferences@@YAHK@Z @ 0x1C01D20C8 (-IsOrientationWithinPreferences@@YAHK@Z.c)
 *     ?xxxRotateScreen@@YAJKHPEAH@Z @ 0x1C01D2388 (-xxxRotateScreen@@YAJKHPEAH@Z.c)
 *     ?TraceLoggingScreenOrientationArStateChangeEvent@@YAXKW4arInitiatedBy@@W4tagAR_STATE@@@Z @ 0x1C0225FD4 (-TraceLoggingScreenOrientationArStateChangeEvent@@YAXKW4arInitiatedBy@@W4tagAR_STATE@@@Z.c)
 *     ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C0226090 (-TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z.c)
 */

__int64 __fastcall xxxAutoRotateScreen(unsigned int a1)
{
  unsigned int AutoRotationState; // eax
  unsigned int *v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // rdx
  unsigned int v7; // edi
  int v8; // [rsp+30h] [rbp+8h] BYREF

  gAutoRotationInfo = a1;
  dword_1C0323D88 = 1;
  AutoRotationState = QueryAutoRotationState();
  v4 = AutoRotationState;
  if ( AutoRotationState
    && ((v5 = AutoRotationState - 64, (v5 & 0xFFFFFF3F) != 0)
     || AutoRotationState == 256
     || a1 != (unsigned int)GetDockedOrientationValue(v3)) )
  {
    TraceLoggingScreenOrientationArStateChangeEvent(a1, v5, v4);
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
        UpdateLastInput((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24, 14LL);
    }
    else
    {
      TraceLoggingScreenOrientationChangeEvent(a1, 0LL, 0LL, 1002LL);
      return 0;
    }
    return v7;
  }
}
