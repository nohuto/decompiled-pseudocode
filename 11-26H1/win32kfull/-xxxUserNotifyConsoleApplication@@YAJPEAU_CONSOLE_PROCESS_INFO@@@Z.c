/*
 * XREFs of ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1401A4808
 * Callers:
 *     xxxConsoleControl @ 0x140278BE4 (xxxConsoleControl.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A4CB8 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     ?_Cleanup@CLockProcessByPid@@AEAAXXZ @ 0x1401A4E94 (-_Cleanup@CLockProcessByPid@@AEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?ApplyForegroundPolicyConsole@ForegroundLaunch@@YAXPEAU_EPROCESS@@@Z @ 0x1401A4F9C (-ApplyForegroundPolicyConsole@ForegroundLaunch@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z @ 0x1401A4FFC (-xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z.c)
 */

__int64 __fastcall xxxUserNotifyConsoleApplication(struct _CONSOLE_PROCESS_INFO *a1, __int64 a2)
{
  __int64 v3; // rdx
  char v4; // si
  bool v5; // di
  bool v6; // r14
  int v7; // ebx
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rdx
  ForegroundLaunch *v12; // r8
  struct _EPROCESS *v13; // rdx
  int inited; // r14d
  struct MOVESIZEDATA *v15; // rcx
  struct MOVESIZEDATA *v17; // rcx
  bool v18; // r14
  unsigned int v19; // ebx
  char v20; // bl
  int v21; // edi
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  struct tagTHREADINFO *v25; // rax
  bool v26; // di
  int v27; // ebx
  __int64 v28; // rax
  int v29; // edx
  int v30; // r8d
  int v31; // ebx
  struct tagTHREADINFO *v32; // rax
  char v33; // [rsp+28h] [rbp-39h]
  __int16 v34; // [rsp+38h] [rbp-29h]
  char v35; // [rsp+48h] [rbp-19h]
  _BYTE v36[8]; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v37; // [rsp+60h] [rbp-1h]
  char v38; // [rsp+6Ch] [rbp+Bh]
  ForegroundLaunch *v39; // [rsp+70h] [rbp+Fh]
  __int64 v40; // [rsp+88h] [rbp+27h]

  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18696) )
    return 3221225506LL;
  v4 = 1;
  v5 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v7 = *(_DWORD *)a1;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v3);
    LOBYTE(v9) = v6;
    LOBYTE(v10) = v5;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      3,
      11,
      (__int64)&WPP_835b3a91c6b03c100663678aa6bd529e_Traceguids,
      v7);
  }
  CLockProcessByPid::CLockProcessByPid(v36, *(int *)a1, 0LL);
  v12 = v39;
  if ( v39 )
  {
    inited = xxxSetProcessInitState(v39, 0LL);
    if ( inited < 0 )
    {
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v4 = 0;
      }
      v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_12;
      v31 = *(_DWORD *)a1;
      v28 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
      v35 = v31;
      v34 = 14;
      v33 = 3;
    }
    else
    {
      if ( (*((_DWORD *)a1 + 1) & 1) != 0 )
      {
        ForegroundLaunch::ApplyForegroundPolicyConsole(v39, v13);
LABEL_12:
        if ( v39 )
        {
          if ( (v38 & 8) != 0 )
          {
            v32 = PtiCurrent((__int64)v15);
            *((_QWORD *)v32 + 47) = v40;
          }
          CLockProcessByPid::_Cleanup((CLockProcessByPid *)v36);
        }
        return (unsigned int)inited;
      }
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v4 = 0;
      }
      v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_12;
      v27 = *(_DWORD *)a1;
      v28 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
      v35 = v27;
      v34 = 13;
      v33 = 4;
    }
    LOBYTE(v30) = v26;
    LOBYTE(v29) = v4;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v29,
      v30,
      *(_QWORD *)(v28 + 69152),
      v33,
      3,
      v34,
      (__int64)&WPP_835b3a91c6b03c100663678aa6bd529e_Traceguids,
      v35);
    goto LABEL_12;
  }
  v17 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
  {
    v4 = 0;
  }
  v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v20 = v37;
    v21 = *(_DWORD *)a1;
    v22 = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
    LOBYTE(v23) = v18;
    LOBYTE(v24) = v4;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v24,
      v23,
      *(_QWORD *)(v22 + 69152),
      3,
      3,
      12,
      (__int64)&WPP_835b3a91c6b03c100663678aa6bd529e_Traceguids,
      v21,
      v20);
    v12 = v39;
  }
  v19 = v37;
  if ( v12 )
  {
    if ( (v38 & 8) != 0 )
    {
      v25 = PtiCurrent((__int64)v17);
      *((_QWORD *)v25 + 47) = v40;
    }
    CLockProcessByPid::_Cleanup((CLockProcessByPid *)v36);
  }
  return v19;
}
