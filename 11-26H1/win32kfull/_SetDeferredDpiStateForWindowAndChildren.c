/*
 * XREFs of _SetDeferredDpiStateForWindowAndChildren @ 0x140046530
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     UpdateWindowMonitor @ 0x14004BA40 (UpdateWindowMonitor.c)
 *     xxxNotifyMonitorChanged @ 0x14004BDFC (xxxNotifyMonitorChanged.c)
 *     NtUserDeferWindowDpiChanges @ 0x1402465B0 (NtUserDeferWindowDpiChanges.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x14024B060 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqss @ 0x1402A1F3C (WPP_RECORDER_AND_TRACE_SF_dqss.c)
 */

__int64 __fastcall SetDeferredDpiStateForWindowAndChildren(__int64 *a1, __int64 a2, int a3)
{
  int v3; // esi
  char v4; // r15
  int v6; // r12d
  __int64 v8; // rcx
  __int16 v10; // r14
  char v11; // bp
  char v12; // si
  __int64 *v13; // rbx
  _DWORD *v14; // rax
  _DWORD *v15; // rcx
  __int64 *v16; // rax
  __int64 *i; // rax
  char v18; // dl
  unsigned int v19; // ecx
  _DWORD *v20; // rax
  bool v21; // bp
  __int64 v22; // rbx
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  __int64 UserSessionState; // rax
  int v27; // r8d
  int v28; // edx
  _BYTE v29[8]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v30; // [rsp+68h] [rbp-40h]
  __int16 v31; // [rsp+B0h] [rbp+8h]

  v3 = *((_DWORD *)a1 + 95);
  v4 = 0;
  v6 = a2;
  if ( (v3 & 0x40) != 0 && !a3 )
    return 0LL;
  v8 = a1[5];
  if ( (_DWORD)a2 == (*(_WORD *)(v8 + 286) != 0) )
  {
    if ( (v3 & 0x40) == 0 && a3 )
    {
      *((_DWORD *)a1 + 95) = v3 | 0x40;
      return 1LL;
    }
    return 0LL;
  }
  if ( (_DWORD)a2 )
  {
    v31 = *(_WORD *)(v8 + 284);
    if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
    {
      v4 = 1;
    }
    v21 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
       && *((_WORD *)WPP_GLOBAL_Control + 36);
    if ( v4 || v21 )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v27) = v21;
      LOBYTE(v28) = v4;
      v10 = v31;
      WPP_RECORDER_AND_TRACE_SF_dqss(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v28,
        v27,
        *(_QWORD *)(UserSessionState + 69152));
    }
    else
    {
      v10 = *(_WORD *)(v8 + 284);
    }
  }
  else
  {
    v10 = 0;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v11 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v12 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v12 = 0;
    }
    if ( v11 || v12 )
    {
      v22 = *a1;
      v23 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v24) = v12;
      LOBYTE(v25) = v11;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v24,
        *(_QWORD *)(v23 + 69152),
        5,
        4,
        24,
        (__int64)&WPP_1438f2a5ce8b301fefff07164e1e1908_Traceguids,
        v22);
    }
  }
  v13 = a1;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v29);
  while ( v13 )
  {
LABEL_17:
    if ( v13 == a1 || (*((_DWORD *)v13 + 95) & 0x40) == 0 )
    {
      *(_WORD *)(v13[5] + 286) = v10;
      if ( v6 )
      {
        if ( !gbIgnoreStressedOutStuff && v13[37] )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2842LL);
        v20 = (_DWORD *)a1[36];
        v13[37] = (__int64)v20;
        ++*v20;
      }
      else
      {
        if ( !gbIgnoreStressedOutStuff && !v13[37] )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2851LL);
        v14 = (_DWORD *)v13[37];
        if ( v14 )
        {
          --*v14;
          v15 = (_DWORD *)v13[37];
          if ( !*v15 )
            Win32FreePool(v15);
          v13[37] = 0LL;
        }
      }
      v16 = (__int64 *)v13[14];
      if ( v16 )
        goto LABEL_40;
      if ( v13 == a1 )
        goto LABEL_28;
    }
    v16 = (__int64 *)v13[11];
    if ( !v16 )
    {
LABEL_28:
      for ( i = v13; i != a1; i = (__int64 *)i[13] )
      {
        v13 = (__int64 *)i[11];
        if ( v13 )
          goto LABEL_17;
      }
      break;
    }
LABEL_40:
    v13 = v16;
  }
  if ( v29[0] )
    --*(_DWORD *)(v30 + 28);
  if ( !a3 || (v18 = 1, !v6) )
    v18 = 0;
  v19 = *((_DWORD *)a1 + 95) | 0x40;
  if ( !v18 )
    v19 = *((_DWORD *)a1 + 95) & 0xFFFFFFBF;
  *((_DWORD *)a1 + 95) = v19;
  return 1LL;
}
