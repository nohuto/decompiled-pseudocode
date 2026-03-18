/*
 * XREFs of ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402DC50C
 * Callers:
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 * Callees:
 *     GetThreadDesktopWindow @ 0x140009BD0 (GetThreadDesktopWindow.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV5@W4MigrateWindowOptions@@PEAKPEAU6@@Z @ 0x14016294C (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x140179D6C (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x14019CCC8 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A8E4 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x1402524A4 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ??0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x14025FC74 (--0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402DB348 (-FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1402DCAF4 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?UnreserveSystemOperationDataSlot@WindowActions@@YAXPEAUtagWND@@@Z @ 0x1402E3A08 (-UnreserveSystemOperationDataSlot@WindowActions@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall ShellWindowPos::xxxProcessPositionEvent(ShellWindowPos *this, struct tagQMSG *a2)
{
  ShellWindowPos *v2; // rbx
  char v3; // si
  __int64 v4; // rax
  struct tagQMSG *v5; // rdx
  __int64 v6; // r15
  struct tagWND *v7; // rdx
  int v8; // eax
  __int64 v9; // rdi
  bool v10; // di
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  struct MOVESIZEDATA *v14; // rcx
  char v15; // al
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  struct tagTHREADINFO *v21; // rax
  struct tagWND *ThreadDesktopWindow; // rax
  __int64 v23; // rdx
  struct tagBWL *v24; // rbx
  __int64 v25; // rdx
  __int64 *i; // rbx
  struct tagWND *v27; // rax
  struct tagWND *v28; // rdi
  struct MOVESIZEDATA *v29; // rcx
  bool v30; // al
  __int64 v31; // rbx
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  __int64 v35; // rcx
  bool v36; // di
  __int64 v37; // rbx
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  __int64 v41; // rcx
  LONG v42; // r9d
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v43; // r8
  LONG v44; // edx
  struct tagRECT v45; // xmm0
  int v46; // eax
  char v47; // [rsp+50h] [rbp-59h]
  bool v48; // [rsp+50h] [rbp-59h]
  bool v49; // [rsp+51h] [rbp-58h]
  bool v50; // [rsp+51h] [rbp-58h]
  int v51; // [rsp+54h] [rbp-55h] BYREF
  __int64 *v52; // [rsp+58h] [rbp-51h]
  __int64 *v53; // [rsp+60h] [rbp-49h]
  __int64 v54; // [rsp+68h] [rbp-41h]
  struct tagBWL *v55; // [rsp+70h] [rbp-39h]
  ShellWindowPos *v56; // [rsp+78h] [rbp-31h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+80h] [rbp-29h] BYREF
  ULONG_PTR v58[2]; // [rsp+90h] [rbp-19h] BYREF
  ULONG_PTR v59[2]; // [rsp+A0h] [rbp-9h] BYREF
  struct tagRECT v60[2]; // [rsp+B0h] [rbp+7h] BYREF
  int v61; // [rsp+D0h] [rbp+27h]

  v2 = this;
  v56 = this;
  v3 = 1;
  v4 = HMValidateHandleNoSecure(*((_QWORD *)this + 2), 1);
  v6 = v4;
  if ( v4 )
  {
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v59, v4);
    v8 = *((_DWORD *)v2 + 8);
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        v9 = *((_QWORD *)v2 + 5);
        v54 = v9;
        v52 = (__int64 *)ValidateHmonitor(*(_QWORD *)v9);
        if ( v52 )
        {
          v14 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v15 = 0;
          }
          v47 = v15;
          LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          v49 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v16 = *v52;
            v17 = *(_QWORD *)v6;
            UserSessionState = W32GetUserSessionState(v14, v52);
            LOBYTE(v19) = v49;
            LOBYTE(v20) = v47;
            WPP_RECORDER_AND_TRACE_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v20,
              v19,
              *(_QWORD *)(UserSessionState + 69152),
              4,
              4,
              18,
              (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids,
              v17,
              v16);
            v9 = v54;
          }
          v21 = PtiCurrent((__int64)v14);
          Win32HM_LockIntoThread<1>((__int64)v21, (__int64)v52, (__int64 *)v58);
          ThreadDesktopWindow = (struct tagWND *)GetThreadDesktopWindow(*(_QWORD *)(v6 + 16));
          v55 = BuildHwndList(ThreadDesktopWindow, 2LL, 0LL, 1);
          v24 = v55;
          if ( v55 )
          {
            v51 = *(_DWORD *)(v9 + 8);
            CThreadLockedCurrentMonitorTopologyPtr::CThreadLockedCurrentMonitorTopologyPtr(
              (CThreadLockedCurrentMonitorTopologyPtr *)v60,
              v23);
            for ( i = (__int64 *)((char *)v55 + 32); ; ++i )
            {
              v35 = *i;
              v53 = i;
              if ( v35 == 1 )
                break;
              v27 = (struct tagWND *)HMValidateHandleNoSecure(v35, 1);
              v28 = v27;
              if ( v27 == (struct tagWND *)v6 )
                break;
              if ( v27 && GetRootOwner(v27) == (struct tagWND *)v6 )
              {
                v29 = WPP_GLOBAL_Control;
                v30 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                   && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
                   && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
                v48 = v30;
                v50 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                if ( v30 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  v31 = *(_QWORD *)v28;
                  LOBYTE(v29) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                  v32 = W32GetUserSessionState(v29, v25);
                  LOBYTE(v33) = v50;
                  LOBYTE(v34) = v48;
                  WPP_RECORDER_AND_TRACE_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v34,
                    v33,
                    *(_QWORD *)(v32 + 69152),
                    4,
                    4,
                    19,
                    (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids,
                    v31);
                  i = v53;
                }
                Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)v28);
                AdvancedWindowPos::xxxMigrateWindow(
                  (__int64)v28,
                  (__int64)v52,
                  *(__int64 *)&v60[0].left,
                  0LL,
                  0LL,
                  0,
                  &v51,
                  0LL);
                Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
              }
            }
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
            {
              v3 = 0;
            }
            v36 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v37 = *(_QWORD *)v6;
              v38 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
              LOBYTE(v39) = v36;
              LOBYTE(v40) = v3;
              WPP_RECORDER_AND_TRACE_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v40,
                v39,
                *(_QWORD *)(v38 + 69152),
                4,
                4,
                20,
                (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids,
                v37);
            }
            AdvancedWindowPos::xxxMigrateWindow(v6, (__int64)v52, *(__int64 *)&v60[0].left, 0LL, 0LL, 0, &v51, 0LL);
            if ( v51 != *(_DWORD *)(v54 + 8) )
            {
              LODWORD(v52) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1406);
            }
            CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr((CThreadLockedCurrentMonitorTopologyPtr *)v60);
            v24 = v55;
          }
          FreeHwndList(v24, v23);
          Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(v58);
          v2 = v56;
        }
        else
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
          {
            v3 = 0;
          }
          v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v11 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
            LOBYTE(v12) = v10;
            LOBYTE(v13) = v3;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v13,
              v12,
              *(_QWORD *)(v11 + 69152),
              3,
              4,
              17,
              (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids);
          }
        }
      }
    }
    else
    {
      if ( (*(_DWORD *)(v6 + 384) & 0x10) != 0 )
        WindowActions::UnreserveSystemOperationDataSlot((WindowActions *)v6, v7);
      v41 = *((_QWORD *)v2 + 5);
      v42 = *(_DWORD *)(v41 + 24);
      if ( v42 == 3 )
      {
        ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow((struct tagWND *)v6, *((struct tagRECT **)v2 + 5));
      }
      else
      {
        v43 = (const struct AdvancedWindowPos::WINDOWPOSANDSTATE *)*(unsigned int *)(v41 + 28);
        if ( ((unsigned __int8)v43 & 0x10) != 0 )
        {
          v44 = 160;
        }
        else
        {
          v44 = (*(_DWORD *)(v41 + 28) & 1) + 128;
          if ( ((unsigned __int8)v43 & 2) != 0 )
            v44 |= 2u;
        }
        if ( ((unsigned __int8)v43 & 4) != 0 && !IsRectEmptyInl((const struct tagRECT *)v41) )
          v44 |= 4u;
        if ( ((unsigned __int8)v43 & 8) != 0 && !IsRectEmptyInl((const struct tagRECT *)v41) )
          v44 |= 8u;
        if ( ((unsigned __int8)v43 & 0x20) == 0 )
          v44 |= 0x10u;
        v45 = *(struct tagRECT *)v41;
        *(_QWORD *)&v60[0].left = *(_QWORD *)(v41 + 16);
        v46 = *(_DWORD *)(v41 + 32);
        v60[0].bottom = v44;
        v60[0].right = v42;
        v60[1] = v45;
        v61 = v46;
        AdvancedWindowPos::xxxApplyWindowPos((AdvancedWindowPos *)v6, v60, v43);
      }
    }
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v59);
  }
  ShellWindowPos::FreePositionEvent((void **)v2, v5);
}
