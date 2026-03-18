/*
 * XREFs of PWInsertAfter @ 0x140048268
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x140047DFC (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x140047FCC (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     ?ResolvePublicWindowAction@@YA_NPEAU_WINDOW_ACTION@@PEAVCWindowAction@AdvancedWindowPos@@PEAW4ApplyWindowActionError@3@@Z @ 0x1402E2F58 (-ResolvePublicWindowAction@@YA_NPEAU_WINDOW_ACTION@@PEAVCWindowAction@AdvancedWindowPos@@PEAW4Ap.c)
 *     ?Validateaction@@YA_NAEBU_WINDOW_ACTION@@PEAUWindowAction@AdvancedWindowPos@@@Z @ 0x1402E3AE8 (-Validateaction@@YA_NAEBU_WINDOW_ACTION@@PEAUWindowAction@AdvancedWindowPos@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402ED554 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall PWInsertAfter(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *v12; // rsi
  __int64 result; // rax

  v1 = a1;
  if ( !a1 || a1 == -2 || a1 == 1 || a1 == -1 )
    return a1;
  PtiCurrent(a1);
  v5 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 19904);
  if ( (unsigned __int64)(unsigned __int16)v1 >= *(_QWORD *)(v5 + 8) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v5, v4);
  v9 = *(_DWORD *)(W32GetUserSessionState(v8, v7) + 19928) * (unsigned int)(unsigned __int16)v1
     + *(_QWORD *)(UserSessionState + 19920);
  v12 = (__int64 *)HMPkheFromPhe(v9);
  LOWORD(v1) = HIWORD(v1) & 0x7FFF;
  if ( (HIWORD(v1) & 0x7FFF) != *(_WORD *)(v9 + 26)
    && (_WORD)v1 != 0x7FFF
    && ((_WORD)v1 || !PsGetCurrentProcessWow64Process(v11, v10)) )
  {
    return 0LL;
  }
  if ( (*(_BYTE *)(v9 + 25) & 1) != 0 )
    return 0LL;
  if ( *(_BYTE *)(v9 + 24) != 1 )
    return 0LL;
  result = *v12;
  if ( !*v12 || *(char *)(*(_QWORD *)(result + 40) + 19LL) < 0 || !*(_QWORD *)(result + 104) )
    return 0LL;
  return result;
}
