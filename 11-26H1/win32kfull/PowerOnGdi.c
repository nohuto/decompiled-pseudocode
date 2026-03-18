/*
 * XREFs of PowerOnGdi @ 0x140248020
 * Callers:
 *     xxxRemoteDisconnect @ 0x1401B3938 (xxxRemoteDisconnect.c)
 * Callees:
 *     ReadCursorSuppressionConfig @ 0x1400F7E68 (ReadCursorSuppressionConfig.c)
 *     SetPointerMetaVisibility @ 0x1400F7ED0 (SetPointerMetaVisibility.c)
 *     zzzEnableDwmPointerSupport @ 0x1400F8118 (zzzEnableDwmPointerSupport.c)
 *     ?SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z @ 0x1400F91D8 (-SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z.c)
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1400FA110 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 *     xxxUserResetDisplayDevice @ 0x140248210 (xxxUserResetDisplayDevice.c)
 *     ProcessDelayedSdc @ 0x1402635B0 (ProcessDelayedSdc.c)
 */

__int64 __fastcall PowerOnGdi(struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a1, __int64 a2, unsigned int a3)
{
  int v4; // esi
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 UserGdiSessionState; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  int CursorSuppressionConfig; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax

  v4 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v9 = 0;
  if ( !(unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 16LL)) )
  {
    UserGdiSessionState = W32GetUserGdiSessionState(v8);
    DrvDxgkLogCodePointPacket(11LL, 0LL, *(unsigned int *)(UserGdiSessionState + 16), 0LL);
    EtwTracePowerOnGdiBegin(a3);
    *(_DWORD *)(W32GetUserGdiSessionState(v11) + 28) = 1;
    SafeEnableMDEV(2LL);
    v14 = W32GetUserSessionState(v13, v12);
    DrvSetMDEVPowerState(*(_QWORD *)(*(_QWORD *)(v14 + 56968) + 16LL), 1LL);
    DispBrokerAsyncSessionStateChanged(a1);
    xxxUserResetDisplayDevice(v16, v15);
    if ( v4 )
      ProcessDelayedSdc(a1);
  }
  v17 = *(_DWORD *)(W32GetUserSessionState(v8, v7) + 36372);
  v20 = W32GetUserSessionState(v19, v18);
  v22 = (unsigned int)(*(_DWORD *)(v20 + 36372) - 1);
  if ( *(_DWORD *)(v20 + 36372) == 1 )
    goto LABEL_14;
  v22 = (unsigned int)(*(_DWORD *)(v20 + 36372) - 2);
  if ( *(_DWORD *)(v20 + 36372) == 2 )
    goto LABEL_14;
  v22 = (unsigned int)(*(_DWORD *)(v20 + 36372) - 3);
  if ( *(_DWORD *)(v20 + 36372) == 3 )
    goto LABEL_14;
  v22 = (unsigned int)(*(_DWORD *)(v20 + 36372) - 4);
  if ( *(_DWORD *)(v20 + 36372) == 4 )
    goto LABEL_14;
  if ( *(_DWORD *)(v20 + 36372) == 5
    || *(_DWORD *)(v20 + 36372) == 6
    || (v23 = (unsigned int)(*(_DWORD *)(v20 + 36372) - 8), *(_DWORD *)(v20 + 36372) == 8) )
  {
    zzzEnableDwmPointerSupport(0LL, 1LL);
    v31 = W32GetUserSessionState(v30, v29);
    CursorApiRouter::HidePointer(*(CursorApiRouter **)(v31 + 36336), 1u);
LABEL_14:
    *(_DWORD *)(W32GetUserSessionState(v21, v22) + 36372) = 2;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(v20 + 36372) == 9 )
  {
    CursorSuppressionConfig = ReadCursorSuppressionConfig();
    *(_DWORD *)(W32GetUserSessionState(v26, v25) + 36372) = CursorSuppressionConfig;
    LOBYTE(v9) = *(_DWORD *)(W32GetUserSessionState(v28, v27) + 36372) == 0;
    SetPointerMetaVisibility(v9);
  }
LABEL_15:
  v32 = W32GetUserSessionState(v21, v23);
  InputTraceLogging::Cursor::SetCursorSuppression(v17, 2LL, *(_DWORD *)(v32 + 36372));
  return EtwTracePowerOnGdiEnd(a3);
}
