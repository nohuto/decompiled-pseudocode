/*
 * XREFs of HMValidateCatHandleNoSecure @ 0x14004BD14
 * Callers:
 *     UpdateMonitorForWindowAndChildren @ 0x14004AF3C (UpdateMonitorForWindowAndChildren.c)
 *     xxxInheritWindowMonitor @ 0x14004C544 (xxxInheritWindowMonitor.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1401663E8 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1401ED678 (zzzUpdateWindowsAfterModeChange.c)
 *     xxxDDETrackGetMessageHook @ 0x140290AA0 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall HMValidateCatHandleNoSecure(__int64 a1)
{
  int v1; // esi
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14

  v1 = a1;
  v2 = 0LL;
  PtiCurrent(a1);
  v6 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19904);
  if ( (unsigned __int64)(unsigned __int16)v1 < *(_QWORD *)(v6 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v6, v5);
    v10 = *(_DWORD *)(W32GetUserSessionState(v9, v8) + 19928) * (unsigned int)(unsigned __int16)v1
        + *(_QWORD *)(UserSessionState + 19920);
    v13 = HMPkheFromPhe(v10);
    LOWORD(v1) = HIWORD(v1) & 0x7FFF;
    if ( ((HIWORD(v1) & 0x7FFF) == *(_WORD *)(v10 + 26)
       || (_WORD)v1 == 0x7FFF
       || !(_WORD)v1 && PsGetCurrentProcessWow64Process(v12, v11))
      && *(_BYTE *)(v10 + 24) == 1 )
    {
      return *(_QWORD *)v13;
    }
  }
  return v2;
}
