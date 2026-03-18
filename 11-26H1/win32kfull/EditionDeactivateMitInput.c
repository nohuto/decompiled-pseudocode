/*
 * XREFs of EditionDeactivateMitInput @ 0x1402A9FC0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x140133F2C (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     WakeRIT @ 0x140133F68 (WakeRIT.c)
 *     WaitForRitToCompleteLastCommand @ 0x140134004 (WaitForRitToCompleteLastCommand.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MasterInputThreadPrepareForRitTakeover @ 0x140249234 (MasterInputThreadPrepareForRitTakeover.c)
 *     EditionPrepareHidForInputThreadMigration @ 0x140249400 (EditionPrepareHidForInputThreadMigration.c)
 *     ?CleanupMitIocpSupport@@YAX_N@Z @ 0x1402954D4 (-CleanupMitIocpSupport@@YAX_N@Z.c)
 *     ??4?$SGWINEVENTgdwDeferWinEvent@K@@QEAAAEAKAEBK@Z @ 0x1402966E0 (--4-$SGWINEVENTgdwDeferWinEvent@K@@QEAAAEAKAEBK@Z.c)
 */

void EditionDeactivateMitInput()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct MOVESIZEDATA *v14; // rcx
  bool v15; // di
  bool v16; // si
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // [rsp+50h] [rbp+8h] BYREF

  EtwTraceDitShutdown();
  if ( *(_DWORD *)(W32GetUserSessionState(v1, v0) + 18792) )
  {
    if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      *(_DWORD *)(W32GetUserSessionState(v3, v2) + 18792) = 0;
      EditionPrepareHidForInputThreadMigration();
      if ( *(_BYTE *)(W32GetUserSessionState(v5, v4) + 19264) )
      {
        UserSessionState = W32GetUserSessionState(v7, v6);
        KeSetEvent(*(PRKEVENT *)(UserSessionState + 19288), 1, 0);
      }
      if ( *(_BYTE *)(W32GetUserSessionState(v7, v6) + 18836) )
      {
        v11 = W32GetUserSessionState(v10, v9);
        KeSetEvent(*(PRKEVENT *)(v11 + 18848), 1, 0);
      }
      v39 = 0;
      SGWINEVENTgdwDeferWinEvent<unsigned long>::operator=(v10, &v39);
      CleanupMitIocpSupport(v13, v12);
    }
    else
    {
      v14 = WPP_GLOBAL_Control;
      v15 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v17 = W32GetUserSessionState(WPP_GLOBAL_Control, v2);
        LOBYTE(v18) = v16;
        LOBYTE(v19) = v15;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v19,
          v18,
          *(_QWORD *)(v17 + 69152),
          4,
          20,
          10,
          (__int64)&WPP_695bd6c02b8a3c654c69143288436f58_Traceguids);
      }
      *(_DWORD *)(W32GetUserSessionState(v14, v2) + 18776) = 1;
      _InterlockedExchange((volatile __int32 *)(W32GetUserSessionState(v21, v20) + 16332), 0);
      MasterInputThreadPrepareForRitTakeover();
      *(_DWORD *)(W32GetUserSessionState(v23, v22) + 18792) = 0;
      if ( *(_BYTE *)(W32GetUserSessionState(v25, v24) + 19264) )
      {
        v28 = W32GetUserSessionState(v27, v26);
        KeSetEvent(*(PRKEVENT *)(v28 + 19288), 1, 0);
      }
      if ( *(_BYTE *)(W32GetUserSessionState(v27, v26) + 18836) )
      {
        v31 = W32GetUserSessionState(v30, v29);
        KeSetEvent(*(PRKEVENT *)(v31 + 18848), 1, 0);
      }
      v39 = 0;
      SGWINEVENTgdwDeferWinEvent<unsigned long>::operator=(v30, &v39);
      CleanupMitIocpSupport(v33, v32);
      WakeRIT(8LL, v34);
      WaitForRitToCompleteLastCommand(v36, v35);
      *(_DWORD *)(W32GetUserSessionState(v38, v37) + 18776) = 0;
      EnterLeaveCritMitRitHandOffHazard::ReleaseAllWaiters();
    }
  }
}
