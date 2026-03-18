/*
 * XREFs of NtUserEnableMouseInputForCursorSuppression @ 0x140224070
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     DeferCursorSuppressionOperation @ 0x1400F7718 (DeferCursorSuppressionOperation.c)
 *     ReadCursorSuppressionConfig @ 0x1400F7E68 (ReadCursorSuppressionConfig.c)
 *     SetPointerMetaVisibility @ 0x1400F7ED0 (SetPointerMetaVisibility.c)
 *     ?SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z @ 0x1400F91D8 (-SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z.c)
 */

__int64 __fastcall NtUserEnableMouseInputForCursorSuppression(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  int CursorSuppressionConfig; // ebx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // ebx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx

  EnterCrit(0LL, 0LL);
  v4 = 0LL;
  if ( (a1 != 0) == a1 )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    if ( *(_DWORD *)(UserSessionState + 36372) != 1 )
    {
      if ( *(_DWORD *)(UserSessionState + 36372) == 2 || *(_DWORD *)(UserSessionState + 36372) == 4 )
      {
LABEL_11:
        if ( a1 )
        {
LABEL_10:
          v4 = 1LL;
          goto LABEL_3;
        }
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
        v10 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
          v10 = v9 & CurrentProcessWin32Process;
        }
        *(_QWORD *)(v10 + 808) |= 0x80000uLL;
        v11 = *(_DWORD *)(W32GetUserSessionState(v9, v10) + 36372);
        v14 = W32GetUserSessionState(v13, v12);
        v16 = (unsigned int)(*(_DWORD *)(v14 + 36372) - 1);
        if ( *(_DWORD *)(v14 + 36372) == 1
          || (v16 = (unsigned int)(*(_DWORD *)(v14 + 36372) - 2), *(_DWORD *)(v14 + 36372) == 2)
          || (v16 = (unsigned int)(*(_DWORD *)(v14 + 36372) - 3), *(_DWORD *)(v14 + 36372) == 3)
          || (v16 = (unsigned int)(*(_DWORD *)(v14 + 36372) - 4), *(_DWORD *)(v14 + 36372) == 4) )
        {
          *(_DWORD *)(W32GetUserSessionState(v15, v16) + 36372) = 1;
        }
        else
        {
          v17 = (unsigned int)(*(_DWORD *)(v14 + 36372) - 5);
          if ( *(_DWORD *)(v14 + 36372) == 5
            || (v17 = (unsigned int)(*(_DWORD *)(v14 + 36372) - 6), *(_DWORD *)(v14 + 36372) == 6)
            || (v17 = (unsigned int)(*(_DWORD *)(v14 + 36372) - 8), *(_DWORD *)(v14 + 36372) == 8) )
          {
            *(_DWORD *)(W32GetUserSessionState(v15, v17) + 36372) = 5;
            DeferCursorSuppressionOperation(v40, v39);
          }
          else if ( *(_DWORD *)(v14 + 36372) == 9 )
          {
            CursorSuppressionConfig = ReadCursorSuppressionConfig();
            *(_DWORD *)(W32GetUserSessionState(v31, v30) + 36372) = CursorSuppressionConfig;
            LOBYTE(v4) = *(_DWORD *)(W32GetUserSessionState(v33, v32) + 36372) == 0;
            SetPointerMetaVisibility((unsigned int)v4);
          }
        }
        v18 = W32GetUserSessionState(v15, v17);
        v19 = 1LL;
LABEL_19:
        InputTraceLogging::Cursor::SetCursorSuppression(v11, v19, *(_DWORD *)(v18 + 36372));
        goto LABEL_10;
      }
      if ( *(_DWORD *)(UserSessionState + 36372) != 5 )
      {
        if ( *(_DWORD *)(UserSessionState + 36372) != 6 && *(_DWORD *)(UserSessionState + 36372) != 8 )
          goto LABEL_10;
        goto LABEL_11;
      }
    }
    if ( !a1 )
      goto LABEL_10;
    v20 = PsGetCurrentProcessWin32Process(v5);
    v22 = v20;
    if ( v20 )
    {
      v21 = -(__int64)(*(_QWORD *)v20 != 0LL);
      v22 = v21 & v20;
    }
    *(_QWORD *)(v22 + 808) &= ~0x80000uLL;
    v11 = *(_DWORD *)(W32GetUserSessionState(v21, v22) + 36372);
    v25 = W32GetUserSessionState(v24, v23);
    v27 = (unsigned int)(*(_DWORD *)(v25 + 36372) - 1);
    if ( *(_DWORD *)(v25 + 36372) == 1
      || (v27 = (unsigned int)(*(_DWORD *)(v25 + 36372) - 2), *(_DWORD *)(v25 + 36372) == 2)
      || (v27 = (unsigned int)(*(_DWORD *)(v25 + 36372) - 3), *(_DWORD *)(v25 + 36372) == 3)
      || (v27 = (unsigned int)(*(_DWORD *)(v25 + 36372) - 4), *(_DWORD *)(v25 + 36372) == 4) )
    {
      *(_DWORD *)(W32GetUserSessionState(v26, v27) + 36372) = 2;
    }
    else
    {
      v28 = (unsigned int)(*(_DWORD *)(v25 + 36372) - 5);
      if ( *(_DWORD *)(v25 + 36372) == 5
        || (v28 = (unsigned int)(*(_DWORD *)(v25 + 36372) - 6), *(_DWORD *)(v25 + 36372) == 6)
        || (v28 = (unsigned int)(*(_DWORD *)(v25 + 36372) - 8), *(_DWORD *)(v25 + 36372) == 8) )
      {
        *(_DWORD *)(W32GetUserSessionState(v26, v28) + 36372) = 6;
        DeferCursorSuppressionOperation(v42, v41);
      }
      else if ( *(_DWORD *)(v25 + 36372) == 9 )
      {
        v34 = ReadCursorSuppressionConfig();
        *(_DWORD *)(W32GetUserSessionState(v36, v35) + 36372) = v34;
        LOBYTE(v4) = *(_DWORD *)(W32GetUserSessionState(v38, v37) + 36372) == 0;
        SetPointerMetaVisibility((unsigned int)v4);
      }
    }
    v18 = W32GetUserSessionState(v26, v28);
    v19 = 2LL;
    goto LABEL_19;
  }
  UserSetLastError(87);
LABEL_3:
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
