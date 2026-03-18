/*
 * XREFs of ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402E510C
 * Callers:
 *     NtUserApplyWindowAction @ 0x1402AF630 (NtUserApplyWindowAction.c)
 * Callees:
 *     ??0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z @ 0x1400469A0 (--0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1401D6C2C (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     ??1CDwmNotifyBatch@@IEAA@XZ @ 0x1401DEB84 (--1CDwmNotifyBatch@@IEAA@XZ.c)
 *     ?GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z @ 0x140289258 (-GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0Win32RawThreadLock@CMonitorTopology@@QEAA@PEAV1@@Z @ 0x140294094 (--0Win32RawThreadLock@CMonitorTopology@@QEAA@PEAV1@@Z.c)
 *     ?BeginApplyWindowActionOld@DesktopRecalc@@YA_NPEAUtagWND@@I@Z @ 0x1402DD554 (-BeginApplyWindowActionOld@DesktopRecalc@@YA_NPEAUtagWND@@I@Z.c)
 *     ?xxxEndApplyWindowActionOld@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402DF624 (-xxxEndApplyWindowActionOld@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 *     ?ClearPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@@Z @ 0x1402E1C74 (-ClearPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@@Z.c)
 *     ?GetActionTopology@@YA_NAEBU_WINDOW_ACTION@@_NPEAUtagWND@@PEAPEAVCMonitorTopology@@@Z @ 0x1402E1FFC (-GetActionTopology@@YA_NAEBU_WINDOW_ACTION@@_NPEAUtagWND@@PEAPEAVCMonitorTopology@@@Z.c)
 *     ?PopFrontSystemOperationData@@YA_NPEAUtagWND@@PEAUSystemOperationData@AdvancedWindowPos@@@Z @ 0x1402E2708 (-PopFrontSystemOperationData@@YA_NPEAUtagWND@@PEAUSystemOperationData@AdvancedWindowPos@@@Z.c)
 *     ?PostWindowAction@@YA_NPEAUtagWND@@PEBU_WINDOW_ACTION@@PEAVCMonitorTopology@@@Z @ 0x1402E298C (-PostWindowAction@@YA_NPEAUtagWND@@PEBU_WINDOW_ACTION@@PEAVCMonitorTopology@@@Z.c)
 *     ?Validateaction@@YA_NAEBU_WINDOW_ACTION@@PEAUWindowAction@AdvancedWindowPos@@@Z @ 0x1402E3AE8 (-Validateaction@@YA_NAEBU_WINDOW_ACTION@@PEAUWindowAction@AdvancedWindowPos@@@Z.c)
 *     ?xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402E6284 (-xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?OnRecalcActionApplied@CDwmWindowNotifyBatch@@QEAAXI_N@Z @ 0x1402E6D4C (-OnRecalcActionApplied@CDwmWindowNotifyBatch@@QEAAXI_N@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall WindowActions::xxxApplyActionOld(
        WindowActions *this,
        struct tagWND *a2,
        const struct _WINDOW_ACTION *a3,
        struct _WINDOW_ACTION *a4)
{
  char v5; // di
  unsigned int v7; // r14d
  char v8; // r13
  char v9; // al
  unsigned int *v10; // rcx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  unsigned int *v15; // rbx
  int v16; // edx
  int v17; // eax
  __int16 v18; // ax
  int v19; // esi
  unsigned int v20; // edi
  struct CInterceptWindowProp *v21; // rax
  int v22; // edx
  __int128 *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  bool v26; // di
  __int64 v27; // rbx
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  struct CMonitorTopology *v31; // r8
  char v32; // [rsp+60h] [rbp-A0h]
  bool v33; // [rsp+61h] [rbp-9Fh]
  char v34; // [rsp+62h] [rbp-9Eh]
  struct CMonitorTopology *v35; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v36[24]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v37[40]; // [rsp+88h] [rbp-78h] BYREF
  int v38; // [rsp+B0h] [rbp-50h] BYREF
  int v39; // [rsp+B4h] [rbp-4Ch]
  __int128 v40; // [rsp+FCh] [rbp-4h]
  int v41; // [rsp+10Ch] [rbp+Ch]
  _BYTE v42[60]; // [rsp+11Ch] [rbp+1Ch] BYREF
  unsigned int *v43; // [rsp+158h] [rbp+58h]

  v34 = (char)a2;
  v5 = (char)a2;
  v7 = 0;
  v8 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v9 = 0;
  }
  v10 = &WPP_RECORDER_INITIALIZED;
  v32 = v9;
  v33 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    UserSessionState = W32GetUserSessionState(v10, a2);
    LOBYTE(v12) = v33;
    LOBYTE(v13) = v32;
    WPP_RECORDER_AND_TRACE_SF_qDD(*((_QWORD *)WPP_GLOBAL_Control + 3), v13, v12, *(_QWORD *)(UserSessionState + 69152));
    v5 = v34;
  }
  v35 = 0LL;
  LOBYTE(a2) = v5;
  if ( GetActionTopology(a3, a2, this, &v35) )
  {
    v15 = (unsigned int *)v35;
    CMonitorTopology::Win32RawThreadLock::Win32RawThreadLock((CMonitorTopology::Win32RawThreadLock *)v36, v35);
    if ( !v5 || xxxResolveArrangePosition(this, (const struct CMonitorTopology *)v15, a3) )
    {
      v16 = *(_DWORD *)a3;
      v17 = *((_DWORD *)a3 + 1) & 0xE0;
      if ( (*(_DWORD *)a3 & 0x20) != 0 )
      {
        if ( !v17 && !*((_DWORD *)a3 + 10) && ((v16 & 6) == 6 || (v16 & 0x40) != 0) )
          *((_DWORD *)a3 + 1) |= 0x20u;
      }
      else if ( v17 )
      {
        *(_DWORD *)a3 = v16 | 0x20;
        *((_DWORD *)a3 + 10) = 2;
      }
      memset_0(&v38, 0, 0xB8uLL);
      if ( !Validateaction(a3, (struct AdvancedWindowPos::WindowAction *)&v38) )
      {
        v7 = 87;
LABEL_56:
        PopAndFreeW32ThreadLock((__int64)v36);
        return v7;
      }
      if ( v5 )
      {
        v18 = v38;
        v39 |= 0x2000u;
        v19 = v38 & 0x200;
        if ( (v38 & 0x200) != 0 )
        {
          if ( v15 )
          {
            v20 = v15[3];
          }
          else
          {
            v20 = 0;
            CInterceptWindowProp::ClearPendingDisplayChangeInfo(this);
          }
          if ( !DesktopRecalc::BeginApplyWindowActionOld(this, (struct tagWND *)v20) )
          {
LABEL_48:
            v7 = 5023;
            goto LABEL_56;
          }
          if ( !v20 )
            goto LABEL_56;
          v21 = CInterceptWindowProp::GetOrCreate(this);
          if ( v21 )
          {
            if ( *((_BYTE *)v21 + 56) )
              v39 |= 0x1000u;
            if ( !IsRectEmptyInl((const struct tagRECT *)((char *)v21 + 72)) )
            {
              v22 |= 0x4000u;
              v39 = v22;
              v40 = *v23;
            }
            if ( *(_DWORD *)(v24 + 88) )
            {
              v39 = v22 | 0x8000;
              v41 = *(_DWORD *)(v24 + 88);
            }
            *(_BYTE *)(v24 + 56) = 0;
            *v23 = 0LL;
            *(_DWORD *)(v24 + 88) = 0;
          }
          v18 = v38 & 0xFDFF;
          v38 &= ~0x200u;
        }
        if ( (v18 & 0x400) == 0
          || PopFrontSystemOperationData(this, (struct AdvancedWindowPos::SystemOperationData *)v42) )
        {
          v43 = v15;
          CDwmWindowNotifyBatch::CDwmWindowNotifyBatch((CDwmWindowNotifyBatch *)v37, this);
          if ( v38 )
            AdvancedWindowPos::xxxApplyWindowAction(this, &v38, 1LL);
          if ( v19 )
          {
            CDwmWindowNotifyBatch::OnRecalcActionApplied((CDwmWindowNotifyBatch *)v37, v15[3], 1);
            DesktopRecalc::xxxEndApplyWindowActionOld(this, (struct tagWND *)v15, v31);
          }
          CDwmNotifyBatch::~CDwmNotifyBatch((CDwmNotifyBatch *)v37);
          goto LABEL_56;
        }
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v8 = 0;
        }
        v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v27 = *(_QWORD *)this;
          v28 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
          LOBYTE(v29) = v26;
          LOBYTE(v30) = v8;
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v30,
            v29,
            *(_QWORD *)(v28 + 69152),
            3,
            4,
            130,
            (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
            v27);
        }
        goto LABEL_48;
      }
      if ( PostWindowAction((PETHREAD **)this, a3, (struct CMonitorTopology *)v15) )
        goto LABEL_56;
    }
    v7 = 8;
    goto LABEL_56;
  }
  if ( v35 )
  {
    LODWORD(v35) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3887);
  }
  return 5023LL;
}
