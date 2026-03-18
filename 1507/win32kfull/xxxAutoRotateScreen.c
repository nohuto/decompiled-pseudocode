/*
 * XREFs of xxxAutoRotateScreen @ 0x1C01D0C4C
 * Callers:
 *     NtUserAutoRotateScreen @ 0x1C0218120 (NtUserAutoRotateScreen.c)
 * Callees:
 *     QueryAutoRotationState @ 0x1C007D804 (QueryAutoRotationState.c)
 *     ?GetDockedOrientationValue@@YAKXZ @ 0x1C01D0340 (-GetDockedOrientationValue@@YAKXZ.c)
 *     ?IsOrientationWithinPreferences@@YAHK@Z @ 0x1C01D0470 (-IsOrientationWithinPreferences@@YAHK@Z.c)
 *     ?xxxRotateScreen@@YAJKHPEAH@Z @ 0x1C01D0770 (-xxxRotateScreen@@YAJKHPEAH@Z.c)
 *     ?TraceLoggingScreenOrientationArStateChangeEvent@@YAXKW4arInitiatedBy@@W4tagAR_STATE@@@Z @ 0x1C0224B44 (-TraceLoggingScreenOrientationArStateChangeEvent@@YAXKW4arInitiatedBy@@W4tagAR_STATE@@@Z.c)
 *     ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C0224C00 (-TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z.c)
 */

__int64 __fastcall xxxAutoRotateScreen(unsigned int a1)
{
  unsigned int AutoRotationState; // eax
  unsigned int v3; // edi
  __int64 v4; // rdx
  unsigned int v6; // edi
  int v7; // [rsp+30h] [rbp+8h] BYREF

  gAutoRotationInfo = a1;
  dword_1C0323058 = 1;
  AutoRotationState = QueryAutoRotationState();
  v3 = AutoRotationState;
  if ( AutoRotationState
    && ((v4 = AutoRotationState - 64, (v4 & 0xFFFFFF3F) != 0)
     || AutoRotationState == 256
     || a1 != (unsigned int)GetDockedOrientationValue()) )
  {
    TraceLoggingScreenOrientationArStateChangeEvent(a1, v4, v3);
    return 3221225506LL;
  }
  else
  {
    if ( (unsigned int)IsOrientationWithinPreferences(a1) )
    {
      v6 = xxxRotateScreen(a1, 1, &v7);
      if ( v7 )
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
    return v6;
  }
}
