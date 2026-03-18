/*
 * XREFs of NtUserInjectTouchInput @ 0x1402B6AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14001EA30 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14001F398 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x140022FA8 (--0-$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXP.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x1401607D0 (WPP_RECORDER_AND_TRACE_SF_dq.c)
 *     ??1?$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ @ 0x14018BC44 (--1-$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     UserGetLastError @ 0x1401B0B24 (UserGetLastError.c)
 *     xxxInjectTouchInput @ 0x14029E10C (xxxInjectTouchInput.c)
 *     RtlCopyVolatileMemory @ 0x14034FD00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserInjectTouchInput(__int64 a1, volatile void *a2)
{
  __int64 v2; // r12
  char v3; // di
  char v4; // bl
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rdx
  bool v10; // bl
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  int v14; // esi
  struct MOVESIZEDATA *v15; // rcx
  struct tagPOINTER_TOUCH_INFO *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 CurrentProcessWow64Process; // rax
  struct tagPOINTER_TOUCH_INFO *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  bool v23; // r12
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  bool v27; // si
  bool v28; // r12
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  bool v32; // r14
  char LastError; // bl
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  __int64 v39; // rcx
  __int64 *v41; // [rsp+68h] [rbp-60h] BYREF
  _QWORD v42[11]; // [rsp+70h] [rbp-58h] BYREF
  char v43; // [rsp+D0h] [rbp+8h]
  char v45; // [rsp+E0h] [rbp+18h] BYREF
  bool v46; // [rsp+E8h] [rbp+20h]

  v43 = a1;
  v2 = (unsigned int)a1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v4 = 0;
    v3 = 1;
  }
  else
  {
    v3 = 1;
    v4 = 1;
  }
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 3), v8, v7, *(_QWORD *)(UserSessionState + 69152));
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v41, "InjectTouchInput", 0LL);
  EnterCrit(1LL, 0LL);
  v45 = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((EnterLeaveCritMitRitHandOffHazard *)&v45);
  InputExtensibilityCalloutGuard();
  if ( v45 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v3 = 0;
    }
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v11 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v3;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(v11 + 69152),
        2,
        20,
        32,
        (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
    }
    v14 = 0;
    UserSetLastError(5);
  }
  else
  {
    v16 = 0LL;
    if ( (unsigned int)(v2 - 1) > 0xFF )
    {
      v27 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
        LOBYTE(v30) = v28;
        LOBYTE(v31) = v27;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v31,
          v30,
          *(_QWORD *)(v29 + 69152),
          2,
          20,
          33,
          (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
          v43);
      }
      v14 = 0;
      UserSetLastError(87);
    }
    else
    {
      EtwTraceTouchInjectionStart();
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v18, v17);
      ProbeForRead(a2, 144 * v2, CurrentProcessWow64Process != 0 ? 1 : 4);
      v20 = (struct tagPOINTER_TOUCH_INFO *)Win32AllocPoolWithQuotaZInit(144 * v2, 1953067861LL);
      v16 = v20;
      if ( !v20 )
        ExRaiseStatus(-1073741801);
      RtlCopyVolatileMemory(v20, (const void *)a2, 144 * v2);
      Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
        v42,
        (__int64)v16,
        (__int64)Win32FreePool);
      v14 = xxxInjectTouchInput((unsigned int)v2, v16);
      if ( !v14 )
      {
        v23 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
        v46 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v23 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v24 = W32GetUserSessionState(v22, v21);
          LOBYTE(v25) = v46;
          LOBYTE(v26) = v23;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v26,
            v25,
            *(_QWORD *)(v24 + 69152),
            2,
            20,
            35,
            (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
        }
      }
      Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>::~Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>(v42);
    }
    if ( v16 )
      Win32FreePool(v16);
    EtwTraceTouchInjectionStop();
    if ( !v14 )
    {
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v3 = 0;
      }
      v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LastError = UserGetLastError();
        v36 = W32GetUserSessionState(v35, v34);
        LOBYTE(v37) = v32;
        LOBYTE(v38) = v3;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v38,
          v37,
          *(_QWORD *)(v36 + 69152),
          2,
          20,
          36,
          (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
          LastError);
      }
    }
  }
  LeaveMitRitHazardCrit(v15);
  UserSessionSwitchLeaveCrit(v39);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v41);
  return v14;
}
