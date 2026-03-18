/*
 * XREFs of ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402E474C
 * Callers:
 *     NtUserApplyWindowAction @ 0x1402AF630 (NtUserApplyWindowAction.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x14015F568 (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14018CD00 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 *     ??0CDisableILCheckAuto@@QEAA@XZ @ 0x1401BEF8C (--0CDisableILCheckAuto@@QEAA@XZ.c)
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x1402524A4 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ??0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z @ 0x1402C3B6C (--0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z.c)
 *     ?OnApplyWindowActionReRunRequest@CRecalcProp@@QEAA_NPEAUtagWND@@@Z @ 0x1402DD9D8 (-OnApplyWindowActionReRunRequest@CRecalcProp@@QEAA_NPEAUtagWND@@@Z.c)
 *     ?ApplyWindowActionErrorCode@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@W4ApplyWindowActionError@AdvancedWindowPos@@@Z @ 0x1402E1B58 (-ApplyWindowActionErrorCode@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@W4ApplyWindowActionError@Advance.c)
 *     ?ClearPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@@Z @ 0x1402E1C74 (-ClearPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@@Z.c)
 *     ?PopFrontSystemOperationData@@YA_NPEAUtagWND@@PEAUSystemOperationData@AdvancedWindowPos@@@Z @ 0x1402E2708 (-PopFrontSystemOperationData@@YA_NPEAUtagWND@@PEAUSystemOperationData@AdvancedWindowPos@@@Z.c)
 *     ?ResolvePublicWindowAction@@YA_NPEAU_WINDOW_ACTION@@PEAVCWindowAction@AdvancedWindowPos@@PEAW4ApplyWindowActionError@3@@Z @ 0x1402E2F58 (-ResolvePublicWindowAction@@YA_NPEAU_WINDOW_ACTION@@PEAVCWindowAction@AdvancedWindowPos@@PEAW4Ap.c)
 *     ?RestorePendingDisplayChangeInfo@CInterceptWindowProp@@SA_NPEAUtagWND@@_NIPEAVCWindowAction@AdvancedWindowPos@@PEAW4ApplyWindowActionError@4@@Z @ 0x1402E3454 (-RestorePendingDisplayChangeInfo@CInterceptWindowProp@@SA_NPEAUtagWND@@_NIPEAVCWindowAction@Adva.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall WindowActions::xxxApplyAction(
        WindowActions *this,
        struct _WINDOW_ACTION *a2,
        struct _WINDOW_ACTION *a3)
{
  __int64 v5; // rcx
  unsigned int v6; // r8d
  struct tagTHREADINFO *v8; // r12
  int v9; // eax
  char v10; // r15
  char v11; // bl
  struct tagWND *v12; // r14
  __int64 v13; // rdx
  struct tagTHREADINFO *v14; // r13
  char v15; // bl
  __int64 v16; // rbx
  __int64 UserSessionState; // rax
  int v18; // edx
  int v19; // r8d
  CRecalcProp *RecalcProperty; // rax
  __int64 v21; // rax
  int v22; // eax
  __int128 v23; // xmm1
  unsigned int v24; // r8d
  unsigned int v25; // ebx
  __int64 v26; // rdx
  bool v27; // [rsp+50h] [rbp-B0h]
  unsigned int v28; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h]
  __int128 v31; // [rsp+68h] [rbp-98h] BYREF
  __int128 v32; // [rsp+78h] [rbp-88h]
  int v33; // [rsp+88h] [rbp-78h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+90h] [rbp-70h] BYREF
  int v35; // [rsp+A0h] [rbp-60h] BYREF
  int v36; // [rsp+A4h] [rbp-5Ch]
  __int128 v37; // [rsp+10Ch] [rbp+Ch]
  __int128 v38; // [rsp+11Ch] [rbp+1Ch]
  int v39; // [rsp+12Ch] [rbp+2Ch]
  __int64 v40; // [rsp+130h] [rbp+30h]
  _BYTE v41[40]; // [rsp+158h] [rbp+58h] BYREF

  if ( (W32GetCurrentThreadDpiAwarenessContext(this) & 0xF) != 2 )
  {
    v6 = 1;
    return ApplyWindowActionErrorCode((HWND)this, (__int64)a2, v6);
  }
  v8 = PtiCurrent(v5);
  LOBYTE(v9) = IAMThreadAccessGranted(v8);
  v10 = 1;
  if ( v9 )
  {
    v11 = 1;
    CDisableILCheckAuto::CDisableILCheckAuto((CDisableILCheckAuto *)&v29);
    v12 = (struct tagWND *)ValidateHwnd(this);
    if ( (_BYTE)v30 )
      *(_BYTE *)(v29 + 1708) = 1;
  }
  else
  {
    v11 = 0;
    v12 = (struct tagWND *)ValidateHwnd(this);
  }
  if ( !v12 )
  {
    v6 = 2;
    return ApplyWindowActionErrorCode((HWND)this, (__int64)a2, v6);
  }
  if ( !IsTopLevelWindow((__int64)v12) )
  {
    v6 = 3;
    return ApplyWindowActionErrorCode((HWND)this, (__int64)a2, v6);
  }
  v14 = (struct tagTHREADINFO *)*((_QWORD *)v12 + 2);
  if ( !v11 && v14 != v8 )
  {
    v6 = 5;
    return ApplyWindowActionErrorCode((HWND)this, (__int64)a2, v6);
  }
  if ( (*(_DWORD *)a2 & 0x200) == 0 )
  {
    v15 = 0;
LABEL_31:
    AdvancedWindowPos::CWindowAction::CWindowAction((__int64)&v35, 0);
    v28 = 0;
    if ( v14 == v8 )
    {
      v36 |= 0x2000u;
    }
    else
    {
      v21 = *((_QWORD *)v12 + 2);
      v36 |= 0x800u;
      v40 = v21;
    }
    if ( (*(_DWORD *)a2 & 0x400) != 0 )
    {
      v22 = 0;
      v23 = 0LL;
      v33 = 0;
      v31 = 0LL;
      v32 = 0LL;
      if ( v14 == v8 )
      {
        if ( !PopFrontSystemOperationData(v12, (struct AdvancedWindowPos::SystemOperationData *)&v31) )
        {
          v24 = 8;
          goto LABEL_44;
        }
        v22 = v33;
        v23 = v32;
      }
      else
      {
        LODWORD(v31) = 1;
      }
      v35 |= 0x400u;
      v38 = v23;
      v39 = v22;
      v37 = v31;
    }
    if ( (!v15
       || CInterceptWindowProp::RestorePendingDisplayChangeInfo(
            v12,
            v14 == v8,
            *((_DWORD *)a2 + 22),
            (struct AdvancedWindowPos::CWindowAction *)&v35,
            (enum AdvancedWindowPos::ApplyWindowActionError *)&v28))
      && ResolvePublicWindowAction(
           a2,
           (struct AdvancedWindowPos::CWindowAction *)&v35,
           (enum AdvancedWindowPos::ApplyWindowActionError *)&v28) )
    {
      if ( v14 != v8 && (*(_DWORD *)a2 & 0x10) != 0 && (*((_DWORD *)a2 + 1) & 2) != 0 )
      {
        v35 |= 0x10u;
        v36 |= 2u;
      }
      Win32HM_LockIntoThread<0>((__int64)v8, (__int64)v12, BugCheckParameter3);
      LOBYTE(v29) = 0;
      v30 = 0LL;
      AtomicExecutionCheck::Arm((AtomicExecutionCheck *)&v29, v26);
      if ( v14 == v8 )
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v29);
      AdvancedWindowPos::xxxApplyWindowAction(v12, &v35, 0LL);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v29);
      if ( v15 )
        CInterceptWindowProp::ClearPendingDisplayChangeInfo(v12);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
      v25 = 0;
      goto LABEL_55;
    }
    v24 = v28;
LABEL_44:
    v25 = ApplyWindowActionErrorCode((HWND)this, (__int64)a2, v24);
LABEL_55:
    CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr((CThreadLockedCurrentMonitorTopologyPtr *)v41);
    return v25;
  }
  v15 = 1;
  if ( *((_DWORD *)a2 + 22) )
    goto LABEL_31;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v10 = 0;
  }
  v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v16 = *(_QWORD *)v12;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
    LOBYTE(v18) = v10;
    LOBYTE(v19) = v27;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v18,
      v19,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      4,
      14,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
      v16);
  }
  if ( v14 != v8 )
  {
    v6 = 6;
    return ApplyWindowActionErrorCode((HWND)this, (__int64)a2, v6);
  }
  RecalcProperty = CRecalcProp::GetRecalcProperty(v12, v13);
  if ( !RecalcProperty || !CRecalcProp::OnApplyWindowActionReRunRequest(RecalcProperty, v12) )
  {
    v6 = 7;
    return ApplyWindowActionErrorCode((HWND)this, (__int64)a2, v6);
  }
  return 0LL;
}
