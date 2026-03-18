/*
 * XREFs of NtUserSendInput @ 0x1402BB4D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14001EA30 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14001F398 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x140022FA8 (--0-$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXP.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??1?$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ @ 0x14018BC44 (--1-$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     UserGetLastError @ 0x1401B0B24 (UserGetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqd @ 0x14020410C (WPP_RECORDER_AND_TRACE_SF_dqd.c)
 *     ?xxxSendInput@@YAIIPEAUtagINPUT@@@Z @ 0x14029C1EC (-xxxSendInput@@YAIIPEAUtagINPUT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddD @ 0x1402C2344 (WPP_RECORDER_AND_TRACE_SF_ddD.c)
 *     RtlCopyVolatileMemory @ 0x14034FD00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserSendInput(unsigned int a1, volatile void *a2, int a3)
{
  __int64 v3; // r15
  char v4; // di
  char v5; // si
  bool v6; // r14
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // bl
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  unsigned int v16; // esi
  struct MOVESIZEDATA *v17; // rcx
  bool v18; // bl
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  __int64 CurrentProcessWow64Process; // rax
  struct tagINPUT *v23; // rax
  struct tagINPUT *v24; // r14
  bool v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  _QWORD v32[10]; // [rsp+78h] [rbp-50h] BYREF
  __int64 *v35; // [rsp+E8h] [rbp+20h] BYREF

  v3 = a1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v5 = 0;
    v4 = 1;
  }
  else
  {
    v4 = 1;
    v5 = 1;
  }
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_dqd(*((_QWORD *)WPP_GLOBAL_Control + 3), v9, v8, *(_QWORD *)(UserSessionState + 69152));
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v35, "SendInput", 0LL);
  EnterCrit(0LL, 0LL);
  if ( a3 != 40 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v4 = 0;
    }
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v13 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v4;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(v13 + 69152),
        2,
        20,
        22,
        (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
        a3,
        40);
    }
LABEL_17:
    v16 = 0;
    UserSetLastError(87);
    goto LABEL_36;
  }
  if ( !(_DWORD)v3 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v4 = 0;
    }
    v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v19 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v20) = v18;
      LOBYTE(v21) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v20,
        *(_QWORD *)(v19 + 69152),
        2,
        20,
        23,
        (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
    }
    goto LABEL_17;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v11, v10);
  ProbeForRead(a2, 40 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
  v23 = (struct tagINPUT *)Win32AllocPoolWithQuotaZInit(40 * v3, 1769173845LL);
  v24 = v23;
  if ( !v23 )
    ExRaiseStatus(-1073741801);
  RtlCopyVolatileMemory(v23, (const void *)a2, 40 * v3);
  Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
    v32,
    (__int64)v24,
    (__int64)Win32FreePool);
  v16 = xxxSendInput(v3, v24);
  Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>::~Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>(v32);
  Win32FreePool(v24);
  if ( v16 != (_DWORD)v3 )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v4 = 0;
    }
    v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserGetLastError();
      v28 = W32GetUserSessionState(v27, v26);
      LOBYTE(v29) = v25;
      LOBYTE(v30) = v4;
      WPP_RECORDER_AND_TRACE_SF_ddD(*((_QWORD *)WPP_GLOBAL_Control + 3), v30, v29, *(_QWORD *)(v28 + 69152));
    }
  }
LABEL_36:
  UserSessionSwitchLeaveCrit(v17);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v35);
  return v16;
}
