/*
 * XREFs of RemoteThinwireStats @ 0x1402973B4
 * Callers:
 *     NtUserRemoteThinwireStats @ 0x1402BACF0 (NtUserRemoteThinwireStats.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall RemoteThinwireStats(_OWORD *a1, __int64 a2)
{
  bool v2; // bl
  unsigned int *v3; // rcx
  bool v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax

  v2 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v3 = &WPP_RECORDER_INITIALIZED;
  v4 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v2 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, a2);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      3,
      20,
      (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
  }
  v8 = *(_QWORD *)(W32GetUserGdiSessionState(v3) + 40);
  if ( PsGetCurrentProcess(v9) != v8 )
    return 3221225506LL;
  if ( !*(_QWORD *)(W32GetUserSessionState(v11, v10) + 68920) )
    return 3221225486LL;
  ProbeForWrite(a1, 0x54uLL, 1u);
  v15 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 68920);
  *a1 = *(_OWORD *)v15;
  a1[1] = *(_OWORD *)(v15 + 16);
  a1[2] = *(_OWORD *)(v15 + 32);
  a1[3] = *(_OWORD *)(v15 + 48);
  a1[4] = *(_OWORD *)(v15 + 64);
  *((_DWORD *)a1 + 20) = *(_DWORD *)(v15 + 80);
  return 0LL;
}
