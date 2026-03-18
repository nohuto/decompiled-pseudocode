/*
 * XREFs of _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x140192D18
 * Callers:
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x14019328C (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z @ 0x1401A21F0 (-RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x14026D7C8 (_anonymous_namespace_--CanSetForegroundWindow.c)
 * Callees:
 *     PtiKbdFromQ @ 0x14009809C (PtiKbdFromQ.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     IsImmersiveBand @ 0x14015E3C0 (IsImmersiveBand.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall anonymous_namespace_::CheckImmersiveForegroundAccess(__int64 a1, char a2)
{
  __int64 CurrentProcessWin32Process; // rax
  _DWORD *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // r15
  char v9; // si
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  char v13; // bl
  bool v14; // di
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  char v19; // di
  bool v20; // r15
  int v21; // ebx
  __int64 UserSessionState; // rax
  int v23; // r8d
  int v24; // edx
  bool v25; // di
  int v26; // edx
  int v27; // r8d
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  char v31; // cl
  char v32; // al
  char v33; // bl
  bool v34; // zf
  unsigned int v35; // r12d
  __int64 v36; // r13
  unsigned int v37; // edi
  unsigned int CurrentWin32kSessionId; // eax
  bool v39; // r15
  int v40; // ebx
  int v41; // edi
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned int v48; // edi
  __int64 v49; // rcx
  unsigned int v50; // ebx
  unsigned int v51; // eax
  __int16 v52; // [rsp+30h] [rbp-48h]
  int v53; // [rsp+40h] [rbp-38h]

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v5 = (_DWORD *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v5 = (_DWORD *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  v8 = (unsigned int)IsDesktopApp(v5) != 0;
  if ( (v5[202] & 0x100LL) != 0 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v19 = 0;
    }
    v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v19 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v21 = v5[14];
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
      LOBYTE(v23) = v20;
      LOBYTE(v24) = v19;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v24,
        v23,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        2,
        16,
        (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
        v21);
    }
    return 1;
  }
  v9 = 1;
  if ( v5[217] )
  {
    if ( (unsigned int)IsImmersiveAppRestricted(v5) )
    {
      v31 = a2;
      v32 = a2 | 1;
      v33 = a2 & 0xFE;
      v34 = (v31 & 8) == 0;
      v30 = 16LL;
      if ( !v34 )
        v33 = v32;
      if ( (v33 & 0x10) != 0 )
        a2 = v33 | 2;
      else
        a2 = v33 & 0xFD;
    }
    if ( (a2 & 1) == 0 )
    {
      v35 = v5[217];
      v36 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL);
      v37 = *(_DWORD *)(v36 + 868);
      if ( v35 != v37 )
      {
        CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v30);
        if ( !(unsigned __int8)SeIsParentOfChildAppContainer(CurrentWin32kSessionId, v35, v37) )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
          {
            v9 = 0;
          }
          v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v40 = *(_DWORD *)(v36 + 56);
            v41 = v5[14];
            v42 = W32GetUserSessionState(WPP_GLOBAL_Control, v29);
            LOBYTE(v43) = v39;
            LOBYTE(v44) = v9;
            WPP_RECORDER_AND_TRACE_SF_Dd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v44,
              v43,
              *(_QWORD *)(v42 + 69152),
              4,
              2,
              17,
              (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
              v41,
              v40);
          }
          return 0;
        }
      }
    }
    if ( (a2 & 2) != 0 )
    {
      if ( (unsigned int)IsImmersiveAppRestricted(v5) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1283LL);
      goto LABEL_6;
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v30, v29) + 18928) )
    {
      v45 = W32GetUserSessionState(v7, v6);
      v7 = *(_QWORD *)(PtiKbdFromQ(*(_QWORD *)(v45 + 18928)) + 456);
      if ( *(_DWORD *)(v7 + 868) != v5[217] )
      {
        v46 = W32GetUserSessionState(v7, v6);
        v47 = PtiKbdFromQ(*(_QWORD *)(v46 + 18928));
        v48 = v5[217];
        v49 = *(_QWORD *)(v47 + 456);
        v50 = *(_DWORD *)(v49 + 868);
        v51 = W32GetCurrentWin32kSessionId(v49);
        if ( !(unsigned __int8)SeIsParentOfChildAppContainer(v51, v48, v50) )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
          {
            v9 = 0;
          }
          v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            return 0;
          v53 = v5[14];
          v28 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v6) + 69152);
          v52 = 18;
          goto LABEL_25;
        }
      }
    }
  }
  if ( !v8 )
  {
LABEL_9:
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v13 = 0;
    }
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(v15 + 69152),
        4,
        2,
        20,
        (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
    }
    return 1;
  }
LABEL_6:
  if ( !*(_QWORD *)(W32GetUserSessionState(v7, v6) + 18928) )
    goto LABEL_9;
  v11 = *(_QWORD *)(W32GetUserSessionState(v10, v6) + 18928);
  if ( !*(_QWORD *)(v11 + 128) )
    goto LABEL_9;
  v12 = W32GetUserSessionState(v11, v6);
  if ( !(unsigned int)IsImmersiveBand(*(_QWORD *)(*(_QWORD *)(v12 + 18928) + 128LL)) )
    goto LABEL_9;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v9 = 0;
  }
  v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v53 = v5[14];
    v28 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v6) + 69152);
    v52 = 19;
LABEL_25:
    LOBYTE(v27) = v25;
    LOBYTE(v26) = v9;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v26,
      v27,
      v28,
      4,
      2,
      v52,
      (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
      v53);
  }
  return 0;
}
