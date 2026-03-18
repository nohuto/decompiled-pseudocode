/*
 * XREFs of EditionActivateMitInput @ 0x1402A9E80
 * Callers:
 *     <none>
 * Callees:
 *     WaitForRitDisEngagement @ 0x140133D14 (WaitForRitDisEngagement.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x140133F2C (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x14025F994 (-ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ.c)
 */

__int64 EditionActivateMitInput()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax

  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    AddThreadWakeEventDispatcherToIOCP();
    UserSessionState = W32GetUserSessionState(v3, v2);
    v7 = InitializeSensorExplicitly(2LL, *(_QWORD *)(UserSessionState + 19248));
    if ( v7 >= 0 )
    {
      *(_DWORD *)(W32GetUserSessionState(v6, v5) + 18792) = 1;
      *(_DWORD *)(W32GetUserSessionState(v9, v8) + 18816) = 0;
      _InterlockedAnd((volatile signed __int32 *)(W32GetUserSessionState(v11, v10) + 18780), 0xFFFFFFFE);
      v14 = W32GetUserSessionState(v13, v12);
      CursorApiRouter::ForceSetCurrentCursorShape(*(CursorApiRouter **)(v14 + 36336));
    }
    return v7 >= 0;
  }
  else
  {
    *(_DWORD *)(W32GetUserSessionState(v1, v0) + 18776) = 1;
    AddThreadWakeEventDispatcherToIOCP();
    v15 = WaitForRitDisEngagement();
    if ( v15 )
      *(_DWORD *)(W32GetUserSessionState(v17, v16) + 18816) = 0;
    *(_DWORD *)(W32GetUserSessionState(v17, v16) + 18776) = 0;
    EnterLeaveCritMitRitHandOffHazard::ReleaseAllWaiters();
    v20 = W32GetUserSessionState(v19, v18);
    CursorApiRouter::ForceSetCurrentCursorShape(*(CursorApiRouter **)(v20 + 36336));
  }
  return v15;
}
