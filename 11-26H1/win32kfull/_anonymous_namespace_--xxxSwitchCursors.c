/*
 * XREFs of _anonymous_namespace_::xxxSwitchCursors @ 0x1400F9310
 * Callers:
 *     _anonymous_namespace_::HandlePointerCursorSideOp @ 0x1400F8920 (_anonymous_namespace_--HandlePointerCursorSideOp.c)
 * Callees:
 *     ReadCursorSuppressionConfig @ 0x1400F7E68 (ReadCursorSuppressionConfig.c)
 *     SetPointerMetaVisibility @ 0x1400F7ED0 (SetPointerMetaVisibility.c)
 *     _anonymous_namespace_::xxxReplaceMouseCursorsWithPenCursors @ 0x1400F86EC (_anonymous_namespace_--xxxReplaceMouseCursorsWithPenCursors.c)
 *     ?SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z @ 0x1400F91D8 (-SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z.c)
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1400FA110 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 */

void __fastcall anonymous_namespace_::xxxSwitchCursors(__int64 a1, __int64 a2)
{
  int v2; // ebp
  int v3; // edi
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  _DWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int CursorSuppressionConfig; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx

  v2 = a2;
  v3 = a1;
  v4 = 0;
  *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 36344) + 88LL) = a1;
  *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 36344) + 92LL) = v3 == 0;
  if ( v3 )
  {
    EtwTraceContactVisualizationInfo(1LL);
    v7 = (_DWORD *)UPDWORDPointer(8222LL);
    if ( v2 )
    {
      if ( (*v7 & 0x20) == 0 || (v9 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 36344), *(_DWORD *)(v9 + 96)) )
      {
        v10 = *(_DWORD *)(W32GetUserSessionState(v9, v8) + 36372);
        UserSessionState = W32GetUserSessionState(v12, v11);
        v15 = (unsigned int)(*(_DWORD *)(UserSessionState + 36372) - 1);
        if ( *(_DWORD *)(UserSessionState + 36372) != 1 )
        {
          v15 = (unsigned int)(*(_DWORD *)(UserSessionState + 36372) - 2);
          if ( *(_DWORD *)(UserSessionState + 36372) != 2 )
          {
            v15 = (unsigned int)(*(_DWORD *)(UserSessionState + 36372) - 3);
            if ( *(_DWORD *)(UserSessionState + 36372) != 3 )
            {
              v15 = (unsigned int)(*(_DWORD *)(UserSessionState + 36372) - 4);
              if ( *(_DWORD *)(UserSessionState + 36372) != 4 )
              {
                if ( *(_DWORD *)(UserSessionState + 36372) != 5 && *(_DWORD *)(UserSessionState + 36372) != 6 )
                {
                  v16 = (unsigned int)(*(_DWORD *)(UserSessionState + 36372) - 8);
                  if ( *(_DWORD *)(UserSessionState + 36372) != 8 )
                  {
                    if ( *(_DWORD *)(UserSessionState + 36372) == 9 )
                    {
                      CursorSuppressionConfig = ReadCursorSuppressionConfig();
                      *(_DWORD *)(W32GetUserSessionState(v26, v25) + 36372) = CursorSuppressionConfig;
                      LOBYTE(v4) = *(_DWORD *)(W32GetUserSessionState(v28, v27) + 36372) == 0;
                      SetPointerMetaVisibility(v4);
                    }
                    goto LABEL_9;
                  }
                }
                SetPointerMetaVisibility(0LL);
              }
            }
          }
        }
        *(_DWORD *)(W32GetUserSessionState(v14, v15) + 36372) = 3;
LABEL_9:
        v17 = W32GetUserSessionState(v14, v16);
        InputTraceLogging::Cursor::SetCursorSuppression(v10, 3LL, *(_DWORD *)(v17 + 36372));
        return;
      }
    }
    v21 = W32GetUserSessionState(v9, v8);
    CursorApiRouter::HidePointer(*(CursorApiRouter **)(v21 + 36336), 1);
    anonymous_namespace_::xxxReplaceMouseCursorsWithPenCursors(v23, v22);
  }
  else
  {
    EtwTraceContactVisualizationInfo(2LL);
    v20 = W32GetUserSessionState(v19, v18);
    CursorApiRouter::HidePointer(*(CursorApiRouter **)(v20 + 36336), 1);
  }
}
