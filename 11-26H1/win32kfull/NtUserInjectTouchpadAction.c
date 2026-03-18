/*
 * XREFs of NtUserInjectTouchpadAction @ 0x1402B7030
 * Callers:
 *     <none>
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14001EA30 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14001F398 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140162868 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x1402A08EC (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 *     EditionIsRIMInjectionBlocked @ 0x1402A4DD0 (EditionIsRIMInjectionBlocked.c)
 */

__int64 __fastcall NtUserInjectTouchpadAction(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v4; // rbx
  __int64 v5; // rdi
  char v6; // si
  bool v7; // bp
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // bp
  bool v16; // si
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  ULONG v20; // ecx
  bool v21; // si
  __int64 v22; // rax
  int v23; // edx
  int v24; // r8d
  __int64 v25; // rdx
  bool v26; // si
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // rcx
  int v31; // esi
  bool v32; // bp
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  __int16 v37; // [rsp+30h] [rbp-58h]
  __int64 v38; // [rsp+A0h] [rbp+18h] BYREF
  __int64 *v39; // [rsp+A8h] [rbp+20h] BYREF

  v2 = a2;
  v4 = 0LL;
  v5 = 1LL;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0x13u)
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      20,
      37,
      (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
      a1,
      v2);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v39, "InjectTouchpadAction", 0LL);
  v38 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( !(unsigned int)Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline() )
  {
    UserSetLastError(5023);
    goto LABEL_67;
  }
  v12 = RawInputManagerDeviceObjectResolveHandle(a1, 3LL, 1LL, &v38);
  v15 = v12;
  if ( v12 < 0 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0x13u)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v5) = 0;
    }
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v17 = W32GetUserSessionState(v14, WPP_GLOBAL_Control);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v5;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(v17 + 69152),
        2,
        20,
        38,
        (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
        v15);
    }
    v20 = 6;
    goto LABEL_63;
  }
  if ( (*(_DWORD *)(v38 + 240) & 0x2000) == 0 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0x13u)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v5) = 0;
    }
    v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_28;
    v22 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
    v37 = 39;
LABEL_27:
    LOBYTE(v24) = v21;
    LOBYTE(v23) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v23,
      v24,
      *(_QWORD *)(v22 + 69152),
      2,
      20,
      v37,
      (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
LABEL_28:
    v20 = 87;
LABEL_63:
    UserSetLastError(v20);
    v5 = 0LL;
    goto LABEL_64;
  }
  if ( (*(_DWORD *)(v38 + 256) & 0x80u) == 0 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0x13u)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v5) = 0;
    }
    v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_28;
    v22 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
    v37 = 40;
    goto LABEL_27;
  }
  if ( *(_DWORD *)(*(_QWORD *)(v38 + 528) + 24LL) != 7 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0x13u)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v5) = 0;
    }
    v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v5 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_28;
    v22 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
    v37 = 41;
    goto LABEL_27;
  }
  if ( (unsigned int)EditionIsRIMInjectionBlocked(v38 + 72, v13) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0x13u)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v5) = 0;
    }
    v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v27 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
      LOBYTE(v28) = v26;
      LOBYTE(v29) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v29,
        v28,
        *(_QWORD *)(v27 + 69152),
        2,
        20,
        42,
        (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
    }
    v20 = 5;
    goto LABEL_63;
  }
  v31 = CPTPProcessor::InjectTouchpadAction(v38, v2);
  if ( v31 < 0 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0x13u)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      LOBYTE(v5) = 0;
    }
    v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v33 = W32GetUserSessionState(v30, WPP_GLOBAL_Control);
      LOBYTE(v34) = v32;
      LOBYTE(v35) = v5;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v35,
        v34,
        *(_QWORD *)(v33 + 69152),
        2,
        20,
        43,
        (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
        v31);
    }
    v20 = RtlNtStatusToDosError(v31);
    goto LABEL_63;
  }
LABEL_64:
  v11 = v38;
  if ( v38 )
    RawInputManagerDeviceObjectDereference(v38);
  v4 = v5;
LABEL_67:
  UserSessionSwitchLeaveCrit(v11);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v39);
  return v4;
}
