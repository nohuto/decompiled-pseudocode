/*
 * XREFs of PowerOffGdi @ 0x140253020
 * Callers:
 *     xxxRemoteDisconnect @ 0x1401B3938 (xxxRemoteDisconnect.c)
 * Callees:
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ReadCursorSuppressionConfig @ 0x1400F7E68 (ReadCursorSuppressionConfig.c)
 *     SetPointerMetaVisibility @ 0x1400F7ED0 (SetPointerMetaVisibility.c)
 *     zzzEnableDwmPointerSupport @ 0x1400F8118 (zzzEnableDwmPointerSupport.c)
 *     ?SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z @ 0x1400F91D8 (-SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z.c)
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1400FA110 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 */

int __fastcall PowerOffGdi(struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a1, __int64 a2)
{
  __int64 UserSessionState; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int CursorSuppressionConfig; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int MDEVPowerState; // ebx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v6 = *(_DWORD *)(W32GetUserSessionState(v5, v4) + 36372);
  v9 = W32GetUserSessionState(v8, v7);
  switch ( *(_DWORD *)(v9 + 36372) )
  {
    case 1:
    case 2:
    case 3:
    case 4:
      goto LABEL_11;
    case 5:
    case 6:
    case 8:
      zzzEnableDwmPointerSupport(0LL, 1LL);
      v20 = W32GetUserSessionState(v19, v18);
      CursorApiRouter::HidePointer(*(CursorApiRouter **)(v20 + 36336), 1u);
LABEL_11:
      *(_DWORD *)(W32GetUserSessionState(v11, v10) + 36372) = 2;
      break;
    case 9:
      CursorSuppressionConfig = ReadCursorSuppressionConfig();
      *(_DWORD *)(W32GetUserSessionState(v14, v13) + 36372) = CursorSuppressionConfig;
      v17 = W32GetUserSessionState(v16, v15);
      SetPointerMetaVisibility(*(_DWORD *)(v17 + 36372) == 0);
      break;
  }
  v21 = W32GetUserSessionState(v11, v10);
  InputTraceLogging::Cursor::SetCursorSuppression(v6, 2LL, *(_DWORD *)(v21 + 36372));
  v24 = W32GetUserSessionState(v23, v22);
  MDEVPowerState = DrvQueryMDEVPowerState(*(_QWORD *)(*(_QWORD *)(v24 + 56968) + 16LL));
  if ( MDEVPowerState )
  {
    SafeDisableMDEV(2LL);
    DestroyMonitorDCs();
    *(_DWORD *)(W32GetUserGdiSessionState(v26) + 28) = 0;
  }
  DrvDxgkLogCodePointPacket(12LL, *(_DWORD *)(UserSessionState + 3020) == 5, 0LL, 0LL);
  v29 = W32GetUserSessionState(v28, v27);
  DrvSetMDEVPowerState(*(_QWORD *)(*(_QWORD *)(v29 + 56968) + 16LL), 0LL);
  LODWORD(v30) = DispBrokerAsyncSessionStateChanged(a1);
  if ( MDEVPowerState )
  {
    if ( *(_DWORD *)(UserSessionState + 3020) == 5 )
    {
      v30 = *((_QWORD *)PtiCurrent(v31) + 61);
      if ( v30 )
      {
        v30 = *(_QWORD *)(v30 + 8);
        if ( v30 )
        {
          v32 = *(_QWORD *)(v30 + 168);
          if ( v32 )
            LODWORD(v30) = PostMessage(v32, 536, 12, 0);
        }
      }
    }
  }
  return v30;
}
