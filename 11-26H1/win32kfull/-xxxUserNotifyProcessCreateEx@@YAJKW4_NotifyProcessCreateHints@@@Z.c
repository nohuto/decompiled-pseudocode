/*
 * XREFs of ?xxxUserNotifyProcessCreateEx@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x1402A68E4
 * Callers:
 *     ?xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x1401A5930 (-xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x1401A37F4 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A4CB8 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z @ 0x1401A4FFC (-xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14025E14C (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxUserNotifyProcessCreateEx(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  char v6; // di
  char v7; // bl
  bool v8; // bp
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // r8
  bool v13; // si
  char v14; // bl
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  int W32ProcessImpl; // ebx
  char v19; // si
  bool v20; // bp
  char CurrentWin32kSessionId; // bl
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __int64 v27; // rcx
  bool v28; // si
  __int64 v29; // rax
  int v30; // edx
  int v31; // r8d
  unsigned __int64 ProcessInfo; // rax
  char v33; // bp
  bool v34; // r14
  char v35; // bl
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  __int64 v41; // rdx
  __int16 v43; // [rsp+30h] [rbp-98h]
  char v44; // [rsp+40h] [rbp-88h]
  char v45; // [rsp+48h] [rbp-80h]
  _BYTE v46[8]; // [rsp+50h] [rbp-78h] BYREF
  int v47; // [rsp+58h] [rbp-70h]
  __int64 v48; // [rsp+68h] [rbp-60h]

  v5 = (int)a1;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, WPP_GLOBAL_Control);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      3,
      15,
      (__int64)&WPP_835b3a91c6b03c100663678aa6bd529e_Traceguids,
      v5);
  }
  CLockProcessByPid::CLockProcessByPid((__int64)v46, v5, 512, a4, (a2 & 0x10) == 0);
  v12 = v48;
  if ( !v48 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v6 = 0;
    }
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v14 = v47;
      v15 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v16) = v13;
      LOBYTE(v17) = v6;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(v15 + 69152),
        3,
        3,
        16,
        (__int64)&WPP_835b3a91c6b03c100663678aa6bd529e_Traceguids,
        v5,
        v14);
    }
    W32ProcessImpl = v47;
    goto LABEL_53;
  }
  if ( (a2 & 0x10) != 0 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
      || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v19 = 0;
    }
    v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v19 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId((__int64)WPP_GLOBAL_Control);
      v24 = W32GetUserSessionState(v23, v22);
      LOBYTE(v25) = v20;
      LOBYTE(v26) = v19;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v26,
        v25,
        *(_QWORD *)(v24 + 69152),
        4,
        3,
        17,
        (__int64)&WPP_835b3a91c6b03c100663678aa6bd529e_Traceguids,
        v5,
        CurrentWin32kSessionId);
      v12 = v48;
    }
    if ( PsGetProcessWin32Process(v12) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 297);
    W32ProcessImpl = AllocateW32ProcessImpl(v48);
    if ( W32ProcessImpl >= 0 )
    {
      ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v46);
      *(_QWORD *)(ProcessInfo + 808) |= 0x10000000uLL;
      goto LABEL_53;
    }
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (v27 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v27 & 4) == 0)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v6 = 0;
    }
    v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v29 = W32GetUserSessionState(v27, &WPP_GLOBAL_Control);
      v45 = W32ProcessImpl;
      v44 = v5;
      v43 = 18;
LABEL_52:
      LOBYTE(v31) = v28;
      LOBYTE(v30) = v6;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v30,
        v31,
        *(_QWORD *)(v29 + 69152),
        3,
        3,
        v43,
        (__int64)&WPP_835b3a91c6b03c100663678aa6bd529e_Traceguids,
        v44,
        v45);
    }
  }
  else
  {
    if ( (a2 & 0x20) != 0 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
        || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v33 = 0;
      }
      v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v33 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v35 = W32GetCurrentWin32kSessionId((__int64)WPP_GLOBAL_Control);
        v38 = W32GetUserSessionState(v37, v36);
        LOBYTE(v39) = v34;
        LOBYTE(v40) = v33;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v40,
          v39,
          *(_QWORD *)(v38 + 69152),
          4,
          3,
          19,
          (__int64)&WPP_835b3a91c6b03c100663678aa6bd529e_Traceguids,
          v5,
          v35);
        v12 = v48;
      }
    }
    W32ProcessImpl = xxxSetProcessInitState(v12, (unsigned int)((a2 & 1) == 0) + 1);
    if ( W32ProcessImpl < 0 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v6 = 0;
      }
      v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v41);
        v45 = W32ProcessImpl;
        v44 = v5;
        v43 = 20;
        goto LABEL_52;
      }
    }
  }
LABEL_53:
  CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v46);
  return (unsigned int)W32ProcessImpl;
}
