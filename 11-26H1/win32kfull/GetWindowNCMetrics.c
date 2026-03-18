/*
 * XREFs of GetWindowNCMetrics @ 0x140031DA0
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     GetWindowFrameMetricForDpi @ 0x1401BF59C (GetWindowFrameMetricForDpi.c)
 *     GetResizeBorderWidthForDpi @ 0x14020AF94 (GetResizeBorderWidthForDpi.c)
 *     GetDpiMetricsForCurrentThread @ 0x1403023CC (GetDpiMetricsForCurrentThread.c)
 *     GetDpiServerInfoForCurrentThread @ 0x140302578 (GetDpiServerInfoForCurrentThread.c)
 */

INT __fastcall GetWindowNCMetrics(__int64 a1)
{
  __int64 DpiForSystem; // rbp
  __int64 v3; // rcx
  __int64 DpiServerInfoForCurrentThread; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  Gre::Base **DpiMetricsForCurrentThread; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  INT result; // eax
  __int64 UserSessionState; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax

  DpiForSystem = (unsigned int)GetDpiForSystem(a1);
  *(_DWORD *)(a1 + 20) = GetDpiDependentMetric(13LL, DpiForSystem);
  *(_DWORD *)(a1 + 220) = GetDpiDependentMetric(26LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 4) = GetResizeBorderWidthForDpi(DpiForSystem);
  *(_DWORD *)(a1 + 8) = GetDpiDependentMetric(0LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 12) = GetDpiDependentMetric(10LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 16) = GetDpiDependentMetric(12LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 116) = GetDpiDependentMetric(23LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 120) = GetDpiDependentMetric(24LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 216) = GetDpiDependentMetric(25LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 500) = GetWindowFrameMetricForDpi(v3, (unsigned int)DpiForSystem);
  DpiServerInfoForCurrentThread = GetDpiServerInfoForCurrentThread();
  DpiMetricsForCurrentThread = (Gre::Base **)GetDpiMetricsForCurrentThread(v6, v5, v7);
  GreExtGetObjectW(*(Gre::Base **)(DpiServerInfoForCurrentThread + 8), 92, (_WORD *)(a1 + 24));
  GreExtGetObjectW(DpiMetricsForCurrentThread[4], 92, (_WORD *)(a1 + 124));
  GreExtGetObjectW(*DpiMetricsForCurrentThread, 92, (_WORD *)(a1 + 224));
  GreExtGetObjectW(DpiMetricsForCurrentThread[7], 92, (_WORD *)(a1 + 316));
  v11 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19904);
  *(_OWORD *)(a1 + 408) = *(_OWORD *)(v11 + 5004);
  *(_OWORD *)(a1 + 424) = *(_OWORD *)(v11 + 5020);
  *(_OWORD *)(a1 + 440) = *(_OWORD *)(v11 + 5036);
  *(_OWORD *)(a1 + 456) = *(_OWORD *)(v11 + 5052);
  *(_OWORD *)(a1 + 472) = *(_OWORD *)(v11 + 5068);
  *(_QWORD *)(a1 + 488) = *(_QWORD *)(v11 + 5084);
  *(_DWORD *)(a1 + 496) = *(_DWORD *)(v11 + 5092);
  v15 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 19904);
  result = *(unsigned __int16 *)(v15 + 6998);
  if ( (_DWORD)DpiForSystem != result )
  {
    UserSessionState = W32GetUserSessionState(v15, v14);
    *(_DWORD *)(a1 + 412) = EngMulDiv(
                              *(_DWORD *)(a1 + 412),
                              DpiForSystem,
                              *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19904) + 6998LL));
    v20 = W32GetUserSessionState(v19, v18);
    result = EngMulDiv(*(_DWORD *)(a1 + 408), DpiForSystem, *(unsigned __int16 *)(*(_QWORD *)(v20 + 19904) + 6998LL));
    *(_DWORD *)(a1 + 408) = result;
  }
  return result;
}
