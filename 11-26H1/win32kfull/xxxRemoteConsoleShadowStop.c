/*
 * XREFs of xxxRemoteConsoleShadowStop @ 0x1402D3334
 * Callers:
 *     NtUserRemoteConsoleShadowStop @ 0x1402BA8F0 (NtUserRemoteConsoleShadowStop.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14025A0C4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     bDrvDisconnect @ 0x140336124 (bDrvDisconnect.c)
 *     DrvReleaseHDEV @ 0x1403465C8 (DrvReleaseHDEV.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 xxxRemoteConsoleShadowStop()
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v0; // r12
  _QWORD *RemoteContext; // r15
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 UserSessionState; // rdi
  char v6; // si
  bool v7; // bl
  bool v8; // r14
  __int64 v9; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rdx
  bool v17; // bl
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  int v21; // ebx
  __int64 v22; // rdx
  int v23; // ecx
  _QWORD *v24; // rcx
  void *v25; // rcx
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v30; // [rsp+48h] [rbp-C0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+58h] [rbp-B0h] BYREF
  GUID ActivityId_8; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v34[68]; // [rsp+78h] [rbp-90h] BYREF
  __int16 v35; // [rsp+BCh] [rbp-4Ch]
  int v36; // [rsp+C0h] [rbp-48h]
  _BYTE v37[4]; // [rsp+158h] [rbp+50h] BYREF
  WCHAR SourceString[422]; // [rsp+15Ch] [rbp+54h] BYREF

  LOBYTE(v30) = 0;
  ActivityId_8 = 0LL;
  EtwActivityIdControl(3u, &ActivityId_8);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId_8, 0x17u, 0, &DestinationString, (unsigned __int8 *)&v30);
  v0 = DestinationString;
  memset_0(v34, 0, 0xDCuLL);
  memset_0(v37, 0, 0x348uLL);
  DestinationString_8 = 0LL;
  RemoteContext = (_QWORD *)GreGetRemoteContext();
  UserSessionState = W32GetUserSessionState(v3, v2);
  v6 = 1;
  v7 = 0;
  if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control )
  {
    v4 = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (v4 & 4) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v7 = 1;
  }
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v9 = W32GetUserSessionState(v4, WPP_GLOBAL_Control);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(v9 + 69152),
      4,
      3,
      10,
      (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
  }
  v12 = *(_QWORD *)(W32GetUserGdiSessionState(v4) + 40);
  if ( PsGetCurrentProcess(v13) == v12 )
  {
    v15 = *(_QWORD *)(UserSessionState + 68800);
    if ( v15 )
    {
      bDrvDisconnect(v15, *(_QWORD *)(UserSessionState + 68792), *(_QWORD *)(UserSessionState + 68824));
      DrvGetHdevName(*(_QWORD *)(UserSessionState + 68800), SourceString);
      RtlInitUnicodeString(&DestinationString_8, SourceString);
      DrvReleaseHDEV(*(_QWORD *)(UserSessionState + 68800));
      *(_DWORD *)(UserSessionState + 68756) = 0;
      v35 = 220;
      v36 = 1572896;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v6 = 0;
      }
      v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
        LOBYTE(v19) = v17;
        LOBYTE(v20) = v6;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v20,
          v19,
          *(_QWORD *)(v18 + 69152),
          4,
          3,
          11,
          (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
      }
      v21 = xxxUserChangeDisplaySettings(&DestinationString_8, v34, 0LL, 268435457LL, 0LL, 0, v0);
      if ( !v21 )
      {
        xxxUserChangeDisplaySettings(0LL, 0LL, 0LL, 0LL, 0LL, 0, v0);
        v24 = *(_QWORD **)(W32GetSessionState(v23, v22) + 96);
        RemoteContext[1] = v24[585];
        RemoteContext[2] = v24[586];
        RemoteContext[4] = v24[588];
        RemoteContext[3] = v24[587];
      }
      v25 = *(void **)(UserSessionState + 68816);
      v14 = v21 != 0 ? 0xC0000001 : 0;
      if ( v25 )
      {
        ObfDereferenceObject(v25);
        *(_QWORD *)(UserSessionState + 68816) = 0LL;
      }
      v26 = *(void **)(UserSessionState + 68824);
      if ( v26 )
      {
        ObfDereferenceObject(v26);
        *(_QWORD *)(UserSessionState + 68824) = 0LL;
      }
      v27 = *(void **)(UserSessionState + 68776);
      if ( v27 )
      {
        ObfDereferenceObject(v27);
        *(_QWORD *)(UserSessionState + 68776) = 0LL;
      }
      v28 = *(void **)(UserSessionState + 68808);
      if ( v28 )
      {
        ObfDereferenceObject(v28);
        *(_QWORD *)(UserSessionState + 68808) = 0LL;
      }
      *(_QWORD *)(UserSessionState + 68800) = 0LL;
    }
    else
    {
      v14 = -1073741823;
    }
  }
  else
  {
    v14 = -1073741790;
  }
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v30);
  return v14;
}
