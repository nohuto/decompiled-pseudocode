/*
 * XREFs of xxxRemoteStopScreenUpdates @ 0x1401B3EEC
 * Callers:
 *     xxxRemoteDisconnect @ 0x1401B3938 (xxxRemoteDisconnect.c)
 *     NtUserRemoteStopScreenUpdates @ 0x1402BAC70 (NtUserRemoteStopScreenUpdates.c)
 *     xxxRemotePassthruEnable @ 0x1402D3744 (xxxRemotePassthruEnable.c)
 *     xxxRemoteReconnect @ 0x1402D3988 (xxxRemoteReconnect.c)
 *     xxxRemoteShadowSetup @ 0x1402D4974 (xxxRemoteShadowSetup.c)
 *     xxxRemoteShadowStop @ 0x1402D4A84 (xxxRemoteShadowStop.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RemoteDisableScreen @ 0x1401B25E8 (RemoteDisableScreen.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxRemoteStopScreenUpdates(__int64 a1, __int64 a2)
{
  struct MOVESIZEDATA *v2; // rcx
  char v3; // bl
  bool v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  __int16 v22; // cx
  __int16 v23; // bx
  char v24; // al
  unsigned __int16 v25; // dx
  unsigned __int16 v26; // cx
  unsigned int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rcx
  _DWORD *v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v45; // [rsp+48h] [rbp-C0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *ActivityId; // [rsp+50h] [rbp-B8h] BYREF
  GUID ActivityId_8; // [rsp+58h] [rbp-B0h] BYREF
  int v48; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v49; // [rsp+6Ch] [rbp-9Ch]
  __int64 v50; // [rsp+7Ch] [rbp-8Ch]
  int v51; // [rsp+84h] [rbp-84h]
  int v52; // [rsp+88h] [rbp-80h]
  __int128 v53; // [rsp+8Ch] [rbp-7Ch]
  __int64 v54; // [rsp+9Ch] [rbp-6Ch]
  int v55; // [rsp+A4h] [rbp-64h]
  int v56; // [rsp+A8h] [rbp-60h]
  __int128 v57; // [rsp+ACh] [rbp-5Ch]
  __int64 v58; // [rsp+BCh] [rbp-4Ch]
  int v59; // [rsp+C4h] [rbp-44h]
  int v60; // [rsp+C8h] [rbp-40h]
  __int128 v61; // [rsp+CCh] [rbp-3Ch]
  __int64 v62; // [rsp+DCh] [rbp-2Ch]
  int v63; // [rsp+E4h] [rbp-24h]
  int v64; // [rsp+E8h] [rbp-20h]
  __int128 v65; // [rsp+ECh] [rbp-1Ch]
  __int64 v66; // [rsp+FCh] [rbp-Ch]
  int v67; // [rsp+104h] [rbp-4h]
  int v68; // [rsp+108h] [rbp+0h]
  __int128 v69; // [rsp+10Ch] [rbp+4h]
  __int64 v70; // [rsp+11Ch] [rbp+14h]
  int v71; // [rsp+124h] [rbp+1Ch]

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
    || (v3 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v3 = 0;
  }
  v4 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      3,
      19,
      (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
  }
  v8 = W32GetUserSessionState(v2, a2);
  if ( !*(_DWORD *)(W32GetUserSessionState(v10, v9) + 68852) )
  {
    if ( (unsigned int)UserRemoteConnectedSessionUsingWddm() )
    {
      LOBYTE(v45) = 0;
      ActivityId_8 = 0LL;
      EtwActivityIdControl(3u, &ActivityId_8);
      DisplayScenarioContextEnsureAndAssociate(&ActivityId_8, 0x41u, 0, &ActivityId, (unsigned __int8 *)&v45);
      v13 = ActivityId;
      v16 = W32GetUserSessionState(v15, v14);
      LOBYTE(v17) = 1;
      DrvSetMonitorPowerState(*(_QWORD *)(*(_QWORD *)(v16 + 56968) + 16LL), 4LL, v17, v13);
      if ( (_BYTE)v45 )
        DisplayScenarioContextDissociate(&ActivityId);
    }
    else
    {
      v20 = W32GetUserSessionState(v12, v11);
      KeSetEvent(*(PRKEVENT *)(v20 + 68432), 1, 0);
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v19, v18) + 62976) )
    {
      v22 = *(_WORD *)(v8 + 20636);
      v23 = v22 & ~*(_WORD *)(v8 + 20638);
      v24 = v22 ^ v23;
      v25 = (v22 ^ v23) & 1;
      v26 = v25 | 2;
      if ( (v24 & 2) == 0 )
        v26 = v25;
      if ( v26 )
        ReleaseMouseButton(v26);
      *(_WORD *)(v8 + 20636) = v23;
      v50 = 0LL;
      v49 = 0LL;
      v51 = 0;
      v27 = 0;
      v53 = 0LL;
      v54 = 0LL;
      v55 = 0;
      v57 = 0LL;
      v58 = 0LL;
      v59 = 0;
      v61 = 0LL;
      v62 = 0LL;
      v63 = 0;
      v65 = 0LL;
      v66 = 0LL;
      v67 = 0;
      v69 = 0LL;
      v70 = 0LL;
      v71 = 0;
      v48 = -2136735560;
      v52 = -2119892808;
      v56 = -2136866659;
      v60 = -2120023907;
      v64 = -2136997718;
      v68 = -2120154954;
      do
      {
        LOBYTE(v21) = 1;
        xxxProcessKeyEvent(&v48 + 8 * (int)v27++, 0LL, v21, 0LL, 0LL, 0LL);
      }
      while ( v27 < 6 );
      UpdateKeyLights(1LL);
      v30 = (_DWORD *)(W32GetUserSessionState(v29, v28) + 62824);
      v33 = W32GetUserSessionState(v32, v31) + 19184;
      v36 = *(_QWORD **)(W32GetUserSessionState(v35, v34) + 62976);
      v39 = W32GetUserSessionState(v38, v37);
      RemoteDisableScreen(*(_QWORD **)(v39 + 19176), v36, v33, v30);
      *(_DWORD *)(W32GetUserSessionState(v41, v40) + 68852) = 1;
      W32GetUserSessionState(v43, v42);
    }
  }
  return 0LL;
}
