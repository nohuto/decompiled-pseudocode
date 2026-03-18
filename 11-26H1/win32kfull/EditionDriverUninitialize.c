/*
 * XREFs of EditionDriverUninitialize @ 0x14022F800
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x14015FDB4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     ?UninitializeWinArrangeGlobal@@YAXXZ @ 0x14022F984 (-UninitializeWinArrangeGlobal@@YAXXZ.c)
 *     ?Cleanup@CursorApiRouter@@SAXXZ @ 0x14022F9E4 (-Cleanup@CursorApiRouter@@SAXXZ.c)
 *     ?SessionCleanup@CTopologyManager@@SAXXZ @ 0x14022FA6C (-SessionCleanup@CTopologyManager@@SAXXZ.c)
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x14022FB54 (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ.c)
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x14022FBC0 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 *     FreeWin32kApiSetTable @ 0x14022FD4C (FreeWin32kApiSetTable.c)
 *     FreePerSessionWin32kCall @ 0x14022FDDC (FreePerSessionWin32kCall.c)
 *     ?UnInitialize@ShellForegroundBoost@@YAXXZ @ 0x14022FEC8 (-UnInitialize@ShellForegroundBoost@@YAXXZ.c)
 *     ?CleanupFeedbackData@@YAXXZ @ 0x14022FF14 (-CleanupFeedbackData@@YAXXZ.c)
 */

__int64 __fastcall EditionDriverUninitialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  CMonitorTopology *v6; // rcx
  ShellForegroundBoost *v7; // rcx
  struct _tagFOREGROUNDGLOBALS *UserForegroundGlobals; // rbx
  void *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 SessionState; // rax
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rax
  __int64 UserSessionState; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 62936) )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    Win32FreePool(*(void **)(UserSessionState + 62936));
    *(_QWORD *)(UserSessionState + 62936) = 0LL;
  }
  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
  CRapidHpdInfo::Delete(3LL);
  v6 = *(CMonitorTopology **)(W32GetUserSessionState(v5, v4) + 71216);
  if ( v6 )
    CMonitorTopology::Release(v6);
  UninitializeWinArrangeGlobal();
  CTopologyManager::SessionCleanup();
  ShellForegroundBoost::UnInitialize(v7);
  UserForegroundGlobals = W32GetUserForegroundGlobals();
  v9 = (void *)*((_QWORD *)UserForegroundGlobals + 4);
  if ( v9 )
    Win32FreePool(v9);
  *((_QWORD *)UserForegroundGlobals + 4) = 0LL;
  CursorApiRouter::Cleanup();
  CleanupFeedbackData();
  if ( *(_QWORD *)(W32GetUserSessionState(v11, v10) + 57568) )
  {
    v20 = W32GetUserSessionState(v13, v12);
    KeCancelTimer(*(PKTIMER *)(v20 + 57568));
    v23 = W32GetUserSessionState(v22, v21);
    Win32FreePool(*(void **)(v23 + 57568));
    *(_QWORD *)(W32GetUserSessionState(v25, v24) + 57568) = 0LL;
  }
  SessionState = W32GetSessionState(v13, v12);
  FreePerSessionWin32kCall(SessionState + 144);
  v17 = W32GetSessionState(v16, v15);
  FreeWin32kApiSetTable(v17 + 144);
  return 0LL;
}
