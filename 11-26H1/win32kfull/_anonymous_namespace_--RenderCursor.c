/*
 * XREFs of _anonymous_namespace_::RenderCursor @ 0x1400F8A80
 * Callers:
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x1400F8870 (-OnPointerCursorOperation@@YAXXZ.c)
 * Callees:
 *     ReadCursorSuppressionConfig @ 0x1400F7E68 (ReadCursorSuppressionConfig.c)
 *     SetPointerMetaVisibility @ 0x1400F7ED0 (SetPointerMetaVisibility.c)
 *     zzzEnableDwmPointerSupport @ 0x1400F8118 (zzzEnableDwmPointerSupport.c)
 *     _anonymous_namespace_::MoveCursor @ 0x1400F8EAC (_anonymous_namespace_--MoveCursor.c)
 *     TransitionCursorSuppressionState @ 0x1400F8F50 (TransitionCursorSuppressionState.c)
 *     ?SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z @ 0x1400F91D8 (-SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z.c)
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1400FA110 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 */

__int64 __fastcall anonymous_namespace_::RenderCursor(unsigned int *a1, __int64 a2)
{
  int v3; // edi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // edx
  int v28; // edx
  int CursorSuppressionConfig; // ebx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 UserSessionState; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  unsigned int v46; // edi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rax
  int v53; // edx
  int v54; // edx
  int v55; // ebx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax

  v3 = 0;
  if ( !*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 36344) + 80LL) )
  {
    EnterCrit(1LL, 0LL);
    if ( *(_DWORD *)(W32GetUserSessionState(v6, v5) + 36372) != 3 )
    {
      v8 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 36344);
      if ( *(_DWORD *)(v8 + 88) || (v8 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 36344), !*(_DWORD *)(v8 + 92)) )
        v3 = 1;
    }
    if ( *(_DWORD *)(W32GetUserSessionState(v8, v7) + 36372) == 1
      || *(_DWORD *)(W32GetUserSessionState(v10, v9) + 36372) == 5 )
    {
      goto LABEL_13;
    }
    v12 = *(_DWORD *)(W32GetUserSessionState(v10, v11) + 36372);
    v15 = (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v14, v13) + 36372) - 1);
    if ( (_DWORD)v15 )
    {
      v15 = (unsigned int)(v15 - 1);
      if ( (_DWORD)v15 )
      {
        v15 = (unsigned int)(v15 - 1);
        if ( (_DWORD)v15 )
        {
          v15 = (unsigned int)(v15 - 1);
          if ( (_DWORD)v15 )
          {
            v27 = v15 - 1;
            if ( v27 )
            {
              v28 = v27 - 1;
              if ( v28 )
              {
                v17 = (unsigned int)(v28 - 2);
                if ( (_DWORD)v17 )
                {
                  if ( (_DWORD)v17 == 1 )
                  {
                    CursorSuppressionConfig = ReadCursorSuppressionConfig();
                    *(_DWORD *)(W32GetUserSessionState(v31, v30) + 36372) = CursorSuppressionConfig;
                    UserSessionState = W32GetUserSessionState(v33, v32);
                    SetPointerMetaVisibility(*(_DWORD *)(UserSessionState + 36372) == 0);
                  }
                  goto LABEL_12;
                }
              }
            }
            zzzEnableDwmPointerSupport(0LL, 1LL);
            v43 = W32GetUserSessionState(v42, v41);
            CursorApiRouter::HidePointer(*(CursorApiRouter **)(v43 + 36336), 1);
          }
        }
      }
    }
    *(_DWORD *)(W32GetUserSessionState(v16, v15) + 36372) = 2;
LABEL_12:
    v18 = W32GetUserSessionState(v16, v17);
    InputTraceLogging::Cursor::SetCursorSuppression(v12, 2LL, *(unsigned int *)(v18 + 36372));
LABEL_13:
    UserSessionSwitchLeaveCrit(v10);
    *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v20, v19) + 36344) + 80LL) = 1;
  }
  anonymous_namespace_::MoveCursor((struct tagPOINT *)(a1 + 1));
  if ( v3 )
  {
    EnterCrit(1LL, 0LL);
    if ( *(_DWORD *)(W32GetUserSessionState(v36, v35) + 36372) != 1
      && *(_DWORD *)(W32GetUserSessionState(v38, v37) + 36372) != 5 )
    {
      TransitionCursorSuppressionState(8LL, 0LL);
    }
    v39 = W32GetUserSessionState(v38, v37);
    CursorApiRouter::HidePointer(*(CursorApiRouter **)(v39 + 36336), 0);
    UserSessionSwitchLeaveCrit(v40);
  }
  result = *a1;
  if ( (result & 2) == 0 )
  {
    EnterCrit(1LL, 0LL);
    v24 = *(_QWORD *)(W32GetUserSessionState(v22, v21) + 36344);
    if ( !*(_DWORD *)(v24 + 88) )
    {
      v24 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 36344);
      if ( !*(_DWORD *)(v24 + 92) )
        goto LABEL_19;
    }
    if ( *(_DWORD *)(W32GetUserSessionState(v24, v23) + 36372) == 1
      || *(_DWORD *)(W32GetUserSessionState(v24, v44) + 36372) == 5 )
    {
      goto LABEL_19;
    }
    v46 = *(_DWORD *)(W32GetUserSessionState(v24, v45) + 36372);
    v49 = (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v48, v47) + 36372) - 1);
    if ( (_DWORD)v49 )
    {
      v49 = (unsigned int)(v49 - 1);
      if ( (_DWORD)v49 )
      {
        v49 = (unsigned int)(v49 - 1);
        if ( (_DWORD)v49 )
        {
          v49 = (unsigned int)(v49 - 1);
          if ( (_DWORD)v49 )
          {
            v53 = v49 - 1;
            if ( v53 )
            {
              v54 = v53 - 1;
              if ( v54 )
              {
                v51 = (unsigned int)(v54 - 2);
                if ( (_DWORD)v51 )
                {
                  if ( (_DWORD)v51 == 1 )
                  {
                    v55 = ReadCursorSuppressionConfig();
                    *(_DWORD *)(W32GetUserSessionState(v57, v56) + 36372) = v55;
                    v60 = W32GetUserSessionState(v59, v58);
                    SetPointerMetaVisibility(*(_DWORD *)(v60 + 36372) == 0);
                  }
                  goto LABEL_37;
                }
              }
            }
            zzzEnableDwmPointerSupport(0LL, 1LL);
            v63 = W32GetUserSessionState(v62, v61);
            CursorApiRouter::HidePointer(*(CursorApiRouter **)(v63 + 36336), 1);
          }
        }
      }
    }
    *(_DWORD *)(W32GetUserSessionState(v50, v49) + 36372) = 2;
LABEL_37:
    v52 = W32GetUserSessionState(v50, v51);
    InputTraceLogging::Cursor::SetCursorSuppression(v46, 2LL, *(unsigned int *)(v52 + 36372));
LABEL_19:
    UserSessionSwitchLeaveCrit(v24);
    result = W32GetUserSessionState(v26, v25);
    *(_DWORD *)(*(_QWORD *)(result + 36344) + 80LL) = 0;
  }
  return result;
}
