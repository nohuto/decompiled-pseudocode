/*
 * XREFs of ?xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z @ 0x1402EC54C
 * Callers:
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qS @ 0x140205F48 (WPP_RECORDER_AND_TRACE_SF_qS.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 */

void __fastcall AdvancedWindowPos::xxxProcessAsyncWindowAction(AdvancedWindowPos *this, _DWORD *a2)
{
  char v3; // di
  char v4; // bp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rdx
  bool v11; // bl
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  bool v15; // bl
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v19; // r9
  const wchar_t *v20; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-18h] BYREF

  v3 = 1;
  v4 = (char)this;
  v5 = HMValidateHandleNoSecure((__int64)this, 1);
  v7 = v5;
  if ( v5 && IsTopLevelWindow(v5) )
  {
    v9 = PtiCurrent(v8);
    Win32HM_LockIntoThread<0>((__int64)v9, v7, BugCheckParameter3);
    if ( (*a2 & 0x200) != 0 && (a2[1] & 0x10000) != 0 && (*(_DWORD *)(v7 + 380) & 0x10) == 0 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v3 = 0;
      }
      v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
        LOBYTE(v13) = v11;
        LOBYTE(v14) = v3;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v14,
          v13,
          *(_QWORD *)(UserSessionState + 69152),
          3,
          4,
          120,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v4);
      }
    }
    else
    {
      a2[1] &= ~0x800u;
      *((_QWORD *)a2 + 18) = 0LL;
      *((_BYTE *)a2 + 176) = 0;
      AdvancedWindowPos::xxxApplyWindowAction(v7, (__int64)a2, 3);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v3 = 0;
    }
    v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v16 = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v3;
      v19 = *(_QWORD *)(v16 + 69152);
      v20 = L"valid";
      if ( !v7 )
        v20 = L"top level";
      WPP_RECORDER_AND_TRACE_SF_qS(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v17,
        v19,
        3,
        4,
        119,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v4,
        (__int64)v20);
    }
  }
}
