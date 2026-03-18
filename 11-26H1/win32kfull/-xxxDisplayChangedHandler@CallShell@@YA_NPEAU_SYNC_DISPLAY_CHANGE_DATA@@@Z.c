/*
 * XREFs of ?xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z @ 0x14015AF74
 * Callers:
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x14015A030 (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_sD @ 0x140159EDC (WPP_RECORDER_AND_TRACE_SF_sD.c)
 *     ?TraceLoggingDisplayChangedHandler@@YAXHHHI@Z @ 0x14015B374 (-TraceLoggingDisplayChangedHandler@@YAXHHHI@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

bool __fastcall CallShell::xxxDisplayChangedHandler(CallShell *this, struct _SYNC_DISPLAY_CHANGE_DATA *a2)
{
  int v2; // edi
  bool v3; // r15
  _QWORD *i; // rdx
  bool v5; // si
  bool v6; // bl
  int v7; // esi
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  char v12; // bl
  struct tagTHREADINFO **v13; // r15
  __int64 v14; // rax
  int v15; // edx
  int v16; // r8d
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rbx
  char v20; // bp
  bool v21; // r14
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  __int64 v25; // r9
  const char *v26; // rax
  char v27; // bl
  bool v28; // r15
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  int v32; // [rsp+20h] [rbp-78h]
  ULONG_PTR BugCheckParameter3[9]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v35; // [rsp+A8h] [rbp+10h]
  bool v36; // [rsp+A8h] [rbp+10h]
  __int64 v37; // [rsp+B0h] [rbp+18h] BYREF
  struct tagTHREADINFO **v38; // [rsp+B8h] [rbp+20h]

  v2 = 0;
  v3 = 0;
  v35 = 0;
  for ( i = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(this, a2) + 19176) + 40LL) + 16LL);
        ;
        i = (_QWORD *)i[4] )
  {
    if ( !i )
    {
      v5 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LOBYTE(v10) = v6;
        LOBYTE(v11) = v5;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v11,
          v10,
          *(_QWORD *)(UserSessionState + 69152),
          3,
          7,
          43,
          (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids);
      }
      v7 = 0;
      goto LABEL_10;
    }
    if ( i[36] )
    {
      v38 = *(struct tagTHREADINFO ***)(i[1] + 184LL);
      if ( v38 )
        break;
    }
  }
  v7 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v12 = 0;
  }
  v36 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v14 = W32GetUserSessionState(WPP_GLOBAL_Control, i);
    LOBYTE(v15) = v12;
    v13 = v38;
    LOBYTE(v16) = v36;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v16,
      *(_QWORD *)(v14 + 69152),
      4,
      7,
      40,
      (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids,
      (char)v38);
  }
  else
  {
    v13 = v38;
  }
  v37 = 0LL;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)v13);
  v17 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v18 = xxxSendTransformableMessageTimeout(v13, 836LL, 0LL, (__int64)this, 2u, 0xC8u, &v37, 1u, 1);
  v38 = (struct tagTHREADINFO **)v18;
  v35 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v17;
  if ( v18 )
  {
    v19 = v37;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v27 = 0;
    }
    v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v29 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      LOBYTE(v30) = v28;
      LOBYTE(v31) = v27;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v31,
        v30,
        *(_QWORD *)(v29 + 69152),
        3,
        7,
        41,
        (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids);
    }
    v19 = 0LL;
    v37 = 0LL;
  }
  v3 = v19 == 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v20 = 0;
  }
  v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v22 = W32GetUserSessionState(WPP_GLOBAL_Control, v18);
    LOBYTE(v23) = v21;
    LOBYTE(v24) = v20;
    v25 = *(_QWORD *)(v22 + 69152);
    v26 = "Success";
    if ( v19 != 1 )
      v26 = "Failure";
    WPP_RECORDER_AND_TRACE_SF_sD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v24,
      v23,
      v25,
      v32,
      7,
      42,
      (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids,
      (__int64)v26,
      v19);
  }
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  LOBYTE(v2) = v38 != 0LL;
LABEL_10:
  TraceLoggingDisplayChangedHandler(v7, v2, v3, v35);
  return v3;
}
