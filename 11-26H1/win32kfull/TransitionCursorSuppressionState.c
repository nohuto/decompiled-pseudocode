/*
 * XREFs of TransitionCursorSuppressionState @ 0x1400F8F50
 * Callers:
 *     _anonymous_namespace_::HandlePointerCursorSideOp @ 0x1400F8920 (_anonymous_namespace_--HandlePointerCursorSideOp.c)
 *     _anonymous_namespace_::RenderCursor @ 0x1400F8A80 (_anonymous_namespace_--RenderCursor.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x1401AE4CC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 *     RawInputThread @ 0x140270B00 (RawInputThread.c)
 *     xxxRemoteReconnect @ 0x1402D3988 (xxxRemoteReconnect.c)
 * Callees:
 *     DeferCursorSuppressionOperation @ 0x1400F7718 (DeferCursorSuppressionOperation.c)
 *     ReadCursorSuppressionConfig @ 0x1400F7E68 (ReadCursorSuppressionConfig.c)
 *     SetPointerMetaVisibility @ 0x1400F7ED0 (SetPointerMetaVisibility.c)
 *     zzzEnableDwmPointerSupport @ 0x1400F8118 (zzzEnableDwmPointerSupport.c)
 *     ?SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z @ 0x1400F91D8 (-SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z.c)
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1400FA110 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 */

__int64 __fastcall TransitionCursorSuppressionState(__int64 a1, __int64 a2)
{
  int v2; // esi
  unsigned int v3; // edi
  unsigned int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  int CursorSuppressionConfig; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)(W32GetUserSessionState(a1, a2) + 36372);
  UserSessionState = W32GetUserSessionState(v6, v5);
  switch ( *(_DWORD *)(UserSessionState + 36372) )
  {
    case 1:
    case 2:
    case 3:
    case 4:
      switch ( v3 )
      {
        case 1u:
LABEL_20:
          *(_DWORD *)(W32GetUserSessionState(v9, v8) + 36372) = 1;
          goto LABEL_8;
        case 2u:
          goto LABEL_26;
        case 3u:
          goto LABEL_7;
      }
      if ( v3 != 8 )
        break;
      if ( v2 )
      {
        *(_DWORD *)(W32GetUserSessionState(v9, v8) + 36372) = 4;
        goto LABEL_28;
      }
      zzzEnableDwmPointerSupport(1LL, 1LL);
      v23 = W32GetUserSessionState(v22, v21);
      CursorApiRouter::HidePointer(*(CursorApiRouter **)(v23 + 36336), 0);
      goto LABEL_24;
    case 5:
    case 6:
    case 8:
      if ( v3 != 8 )
      {
        if ( v3 != 2 )
        {
          if ( v3 == 1 )
          {
            if ( !v2 )
            {
              zzzEnableDwmPointerSupport(0LL, 1LL);
              v20 = W32GetUserSessionState(v19, v18);
              CursorApiRouter::HidePointer(*(CursorApiRouter **)(v20 + 36336), 1);
              goto LABEL_20;
            }
            *(_DWORD *)(W32GetUserSessionState(0LL, v8) + 36372) = 5;
LABEL_28:
            DeferCursorSuppressionOperation(v28, v27);
            break;
          }
          if ( v3 != 3 )
            break;
          if ( v2 )
          {
            *(_DWORD *)(W32GetUserSessionState(0LL, v8) + 36372) = 7;
            goto LABEL_28;
          }
          SetPointerMetaVisibility(0LL);
LABEL_7:
          *(_DWORD *)(W32GetUserSessionState(v9, v8) + 36372) = 3;
          break;
        }
        if ( v2 )
        {
          *(_DWORD *)(W32GetUserSessionState(0LL, v8) + 36372) = 6;
          goto LABEL_28;
        }
        zzzEnableDwmPointerSupport(0LL, 1LL);
        v26 = W32GetUserSessionState(v25, v24);
        CursorApiRouter::HidePointer(*(CursorApiRouter **)(v26 + 36336), 1);
LABEL_26:
        *(_DWORD *)(W32GetUserSessionState(v9, v8) + 36372) = 2;
        break;
      }
LABEL_24:
      *(_DWORD *)(W32GetUserSessionState(v9, v8) + 36372) = 8;
      break;
    case 9:
      CursorSuppressionConfig = ReadCursorSuppressionConfig();
      *(_DWORD *)(W32GetUserSessionState(v14, v13) + 36372) = CursorSuppressionConfig;
      v17 = W32GetUserSessionState(v16, v15);
      SetPointerMetaVisibility(*(_DWORD *)(v17 + 36372) == 0);
      break;
  }
LABEL_8:
  v10 = W32GetUserSessionState(v9, v8);
  return InputTraceLogging::Cursor::SetCursorSuppression(v4, v3, *(unsigned int *)(v10 + 36372));
}
