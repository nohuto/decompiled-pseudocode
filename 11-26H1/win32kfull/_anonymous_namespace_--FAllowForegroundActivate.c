/*
 * XREFs of _anonymous_namespace_::FAllowForegroundActivate @ 0x14019328C
 * Callers:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x14012B3C8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x140191B8C (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsImmersiveBandOrShellManaged @ 0x14015DA48 (IsImmersiveBandOrShellManaged.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dq @ 0x140192A44 (WPP_RECORDER_AND_TRACE_SF_Dq.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x140192D18 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 *     IsForegroundLocked @ 0x1401A3D64 (IsForegroundLocked.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x140289CEC (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall anonymous_namespace_::FAllowForegroundActivate(__int64 a1)
{
  struct tagTHREADINFO *v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // si
  bool v7; // bl
  int v8; // edx
  int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  char v15; // si
  bool v16; // r14
  int v17; // edx
  int v18; // r8d
  __int64 v19; // r9
  char v20; // bl
  bool v21; // di
  int v22; // edx
  int v23; // r8d
  __int64 v24; // r9
  __int64 v26; // rdx
  char v27; // si
  bool v28; // di
  int v29; // edx
  int v30; // r8d
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  char v42; // si
  bool v43; // r15
  __int64 UserSessionState; // rax
  int v45; // r8d
  int v46; // edx
  __int16 v47; // [rsp+30h] [rbp-48h]
  __int16 v48; // [rsp+30h] [rbp-48h]
  __int16 v49; // [rsp+30h] [rbp-48h]
  __int16 v50; // [rsp+30h] [rbp-48h]
  __int64 v51; // [rsp+40h] [rbp-38h]
  int v52; // [rsp+40h] [rbp-38h]

  v2 = PtiCurrent(a1);
  v3 = *((_QWORD *)v2 + 57);
  if ( !(unsigned __int8)anonymous_namespace_::RemoveForegroundActivate() )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v6 = 0;
    }
    v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v10 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v4) + 69152);
    v47 = 27;
    goto LABEL_89;
  }
  v12 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19176);
  if ( *((_QWORD *)v2 + 61) != v12
    || (v13 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 18928), v13 == *((_QWORD *)v2 + 58))
    || (unsigned int)IsForegroundLocked(v13, v11) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v6 = 0;
    }
    v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v10 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v11) + 69152);
    v47 = 28;
LABEL_89:
    LOBYTE(v9) = v7;
    LOBYTE(v8) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v9,
      v10,
      4,
      2,
      v47,
      (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
    return 0;
  }
  v14 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v14 + 27) & 8) != 0 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v15 = 0;
    }
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v15 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v51 = *(_QWORD *)a1;
    v19 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v11) + 69152);
    v48 = 29;
    goto LABEL_28;
  }
  if ( *(_DWORD *)(v14 + 236) != 15 )
  {
    if ( *(int *)(v3 + 12) < 0 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v20 = 0;
      }
      v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v20 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 1;
      v24 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v11) + 69152);
      v49 = 31;
      goto LABEL_37;
    }
    if ( (unsigned int)IsImmersiveBroker(v3)
      && (unsigned int)IsImmersiveBandOrShellManaged(a1)
      && (*(_DWORD *)(a1 + 384) & 4) == 0 )
    {
      if ( (unsigned int)IAMThreadAccessGranted(v2) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1467LL);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v27 = 0;
      }
      v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v27 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0;
      v52 = *(_DWORD *)(v3 + 12);
      v31 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v26) + 69152);
      v50 = 32;
    }
    else
    {
      if ( !(unsigned int)IsImmersiveBroker(v3)
        || !*(_QWORD *)(W32GetUserSessionState(v33, v32) + 18928)
        || (v37 = *(_QWORD *)(W32GetUserSessionState(v35, v34) + 18928), !*(_QWORD *)(v37 + 128))
        || (v38 = W32GetUserSessionState(v37, v36),
            !(unsigned int)IsImmersiveBandOrShellManaged(*(_QWORD *)(*(_QWORD *)(v38 + 18928) + 128LL))) )
      {
        if ( !anonymous_namespace_::CheckImmersiveForegroundAccess(a1, 2) )
        {
          if ( (unsigned int)IAMThreadAccessGranted(v2) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1487LL);
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
            || (v42 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v42 = 0;
          }
          v43 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v42 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v41);
            LOBYTE(v45) = v43;
            LOBYTE(v46) = v42;
            WPP_RECORDER_AND_TRACE_SF_Dq(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v46,
              v45,
              *(_QWORD *)(UserSessionState + 69152));
          }
          return 0;
        }
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v20 = 0;
        }
        v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v20 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 1;
        v24 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v40) + 69152);
        v49 = 35;
LABEL_37:
        LOBYTE(v23) = v21;
        LOBYTE(v22) = v20;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v22,
          v23,
          v24,
          4,
          2,
          v49,
          (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
        return 1;
      }
      if ( (unsigned int)IAMThreadAccessGranted(v2) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1478LL);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v27 = 0;
      }
      v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v27 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0;
      v52 = *(_DWORD *)(v3 + 56);
      v31 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v39) + 69152);
      v50 = 33;
    }
    LOBYTE(v30) = v28;
    LOBYTE(v29) = v27;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v29,
      v30,
      v31,
      4,
      2,
      v50,
      (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
      v52);
    return 0;
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v15 = 0;
  }
  v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( !v15 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    return 0;
  v51 = *(_QWORD *)a1;
  v19 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v11) + 69152);
  v48 = 30;
LABEL_28:
  LOBYTE(v18) = v16;
  LOBYTE(v17) = v15;
  WPP_RECORDER_AND_TRACE_SF_q(
    *((_QWORD *)WPP_GLOBAL_Control + 3),
    v17,
    v18,
    v19,
    4,
    2,
    v48,
    (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
    v51);
  return 0;
}
