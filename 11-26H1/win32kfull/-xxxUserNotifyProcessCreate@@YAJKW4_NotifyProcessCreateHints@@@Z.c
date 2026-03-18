/*
 * XREFs of ?xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x1401A5930
 * Callers:
 *     NtUserNotifyProcessCreate @ 0x1401A5C20 (NtUserNotifyProcessCreate.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x1401A37F4 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A4CB8 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     ?_Cleanup@CLockProcessByPid@@AEAAXXZ @ 0x1401A4E94 (-_Cleanup@CLockProcessByPid@@AEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z @ 0x1401A4FFC (-xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z.c)
 *     Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline @ 0x1401A5D0C (Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?xxxUserNotifyProcessCreateEx@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x1402A68E4 (-xxxUserNotifyProcessCreateEx@@YAJKW4_NotifyProcessCreateHints@@@Z.c)
 */

__int64 __fastcall xxxUserNotifyProcessCreate(int a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdx
  __int64 v5; // r9
  char v7; // di
  char v8; // si
  bool v9; // r14
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rdx
  bool v14; // si
  char v15; // bl
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  unsigned int v19; // ebx
  int inited; // eax
  __int64 v21; // rcx
  char v22; // si
  bool v23; // bl
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  struct tagTHREADINFO *v27; // rax
  PVOID v28; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v29; // [rsp+58h] [rbp-60h]
  char v30; // [rsp+64h] [rbp-54h]
  __int64 v31; // [rsp+68h] [rbp-50h]
  __int64 v32; // [rsp+80h] [rbp-38h]

  v2 = a1;
  if ( (a2 & 0xC) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 361LL);
  if ( (a2 & 3) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 365LL);
  if ( (unsigned int)Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline() )
    return xxxUserNotifyProcessCreateEx((unsigned int)v2, a2);
  v7 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v8 = 0;
  }
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v4);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      3,
      21,
      (__int64)&WPP_835b3a91c6b03c100663678aa6bd529e_Traceguids,
      v2);
  }
  CLockProcessByPid::CLockProcessByPid((__int64)&v28, v2, 0, v5, 1);
  if ( v31 )
  {
    inited = xxxSetProcessInitState(v31, (unsigned int)((a2 & 1) == 0) + 1);
    v22 = inited;
    if ( inited < 0 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (v21 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v21 & 4) == 0)
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v7 = 0;
      }
      v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v24 = W32GetUserSessionState(v21, WPP_GLOBAL_Control);
        LOBYTE(v25) = v23;
        LOBYTE(v26) = v7;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v26,
          v25,
          *(_QWORD *)(v24 + 69152),
          3,
          3,
          23,
          (__int64)&WPP_835b3a91c6b03c100663678aa6bd529e_Traceguids,
          v2,
          v22);
      }
    }
    if ( v31 )
    {
      if ( (v30 & 8) != 0 )
      {
        v27 = PtiCurrent(v21);
        *((_QWORD *)v27 + 47) = v32;
      }
      CLockProcessByPid::_Cleanup(&v28);
    }
    return 0LL;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v7 = 0;
    }
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v15 = v29;
      v16 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
      LOBYTE(v17) = v14;
      LOBYTE(v18) = v7;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v17,
        *(_QWORD *)(v16 + 69152),
        3,
        3,
        22,
        (__int64)&WPP_835b3a91c6b03c100663678aa6bd529e_Traceguids,
        v2,
        v15);
    }
    v19 = v29;
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)&v28);
    return v19;
  }
}
