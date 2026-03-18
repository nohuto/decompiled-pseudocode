/*
 * XREFs of zzzStartSonar @ 0x1402A46E0
 * Callers:
 *     EditionHandleSonarKeyEvent @ 0x1401F3D00 (EditionHandleSonarKeyEvent.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     _MonitorFromPoint @ 0x14008A650 (_MonitorFromPoint.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x14009AEF8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     zzzStartFade @ 0x14021AFA8 (zzzStartFade.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1402A3FDC (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 *     ?SonarStart@Mouse@InputTraceLogging@@SAXAEBUtagPOINT@@I@Z @ 0x1402A41BC (-SonarStart@Mouse@InputTraceLogging@@SAXAEBUtagPOINT@@I@Z.c)
 *     StopSonar @ 0x1402A4434 (StopSonar.c)
 *     zzzAnimateFade @ 0x1402A456C (zzzAnimateFade.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

HDC __fastcall zzzStartSonar(__int64 a1, __int64 a2)
{
  const struct tagPOINT *UserSessionState; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  const struct tagPOINT *v5; // rdi
  __int64 v6; // rcx
  INT v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  HDC result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _BYTE v16[16]; // [rsp+30h] [rbp-38h] BYREF
  struct tagRECT v17; // [rsp+40h] [rbp-28h] BYREF

  UserSessionState = (const struct tagPOINT *)W32GetUserSessionState(a1, a2);
  v5 = UserSessionState + 2040;
  v6 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v4, v3) + 19904) + 4960LL);
  UserSessionState[2040] = (const struct tagPOINT)v6;
  v7 = *(unsigned __int16 *)(*(_QWORD *)(MonitorFromPoint(v6, 2LL, 0x12u) + 40) + 60LL);
  UserSessionState[2041].x = v7;
  UserSessionState[2039].y = EngMulDiv(100, v7, 96);
  if ( *(_DWORD *)(W32GetUserSessionState(v9, v8) + 43056) )
    StopSonar();
  InputTraceLogging::Mouse::SonarStart(UserSessionState + 2040);
  v17.left = v5->x - UserSessionState[2039].y;
  v17.right = v5->x + UserSessionState[2039].y;
  v17.top = UserSessionState[2040].y - UserSessionState[2039].y;
  v17.bottom = UserSessionState[2040].y + UserSessionState[2039].y;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext((unsigned int)v17.top);
  result = CreateFadeInternal(0LL, &v17, 1000, 192, CurrentThreadDpiAwarenessContext);
  if ( result )
  {
    DrawSonar(result);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v16);
    zzzStartFade(v13, v12);
    zzzAnimateFade(v15, v14);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v16);
    return (HDC)1;
  }
  return result;
}
