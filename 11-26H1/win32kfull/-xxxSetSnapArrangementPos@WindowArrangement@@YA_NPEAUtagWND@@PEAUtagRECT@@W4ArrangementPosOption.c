/*
 * XREFs of ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402C7DC0
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140229DF0 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1402DCAF4 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402EDDD0 (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@W4AdditionalWindowCheck@1@@Z @ 0x14001122C (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@.c)
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x1400305B4 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14003144C (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400326CC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140046914 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     ??0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z @ 0x1400469A0 (--0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z.c)
 *     GetRect @ 0x14012B140 (GetRect.c)
 *     IntersectRect @ 0x14012B290 (IntersectRect.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x14019CCC8 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 *     ?IsGhostWindowClass@@YA_NPEBUtagWND@@@Z @ 0x1401A690C (-IsGhostWindowClass@@YA_NPEBUtagWND@@@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1401D65B4 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ??1CDwmNotifyBatch@@IEAA@XZ @ 0x1401DEB84 (--1CDwmNotifyBatch@@IEAA@XZ.c)
 *     ??1?$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ @ 0x1401EE9DC (--1-$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ.c)
 *     GetMonitorWorkRectForWindow @ 0x1401EFBA4 (GetMonitorWorkRectForWindow.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A8E4 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     GetNormalRect @ 0x14024BFD0 (GetNormalRect.c)
 *     ?ArrangementStyleFromOverlap@@YA?AW4ArrStyleFromOverlap@@W4FrameBoundsOverlapInfo@@@Z @ 0x140259FD4 (-ArrangementStyleFromOverlap@@YA-AW4ArrStyleFromOverlap@@W4FrameBoundsOverlapInfo@@@Z.c)
 *     ??1DwmNotifyMoveReason@@QEAA@XZ @ 0x14025A64C (--1DwmNotifyMoveReason@@QEAA@XZ.c)
 *     ??1CSaveRestoreCheckPoint@@QEAA@XZ @ 0x14025C7C4 (--1CSaveRestoreCheckPoint@@QEAA@XZ.c)
 *     ?xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x14025FAE8 (-xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?GetFrameBoundsOverlapInfo@@YA?AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z @ 0x1402660F8 (-GetFrameBoundsOverlapInfo@@YA-AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z.c)
 *     ?TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOverlapInfo@@PEAUtagRECT@@@Z @ 0x14026A2D0 (-TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOve.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1402C4160 (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1402DC0C4 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     ?xxxInterceptSetSnapArrangementPos@WindowActions@@YAXPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@WindowArrangement@@K@Z @ 0x1402E5FFC (-xxxInterceptSetSnapArrangementPos@WindowActions@@YAXPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOp.c)
 *     ?MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402E805C (-MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

char __fastcall WindowArrangement::xxxSetSnapArrangementPos(__int64 a1, __int32 *a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r13
  int v5; // ebx
  const struct tagWND *v9; // r14
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r12
  __m128i *MonitorWorkRectForWindow; // rax
  __int64 v17; // rdx
  struct tagWND *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct tagWND *v21; // rbx
  __int64 v22; // r14
  struct tagTHREADINFO *v23; // rax
  struct tagMONITOR *v24; // r8
  unsigned int v25; // ebx
  struct tagWND *v26; // rdx
  struct tagRECT v27; // xmm0
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v28; // r8
  __int64 v29; // rcx
  struct tagWND *v30; // rbx
  __int64 v31; // rcx
  struct tagTHREADINFO *v32; // rax
  struct tagMONITOR *v33; // r8
  __int64 v34; // rsi
  struct tagWND *v35; // rdx
  bool v36; // r8
  int FrameBoundsOverlapInfo; // [rsp+30h] [rbp-D0h]
  ULONG_PTR v38[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v39; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR v40[2]; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v42; // [rsp+78h] [rbp-88h] BYREF
  __int128 v43; // [rsp+80h] [rbp-80h]
  _BYTE v44[40]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v45; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v46; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v47; // [rsp+D8h] [rbp-28h] BYREF
  struct tagRECT v48[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v49; // [rsp+100h] [rbp+0h]

  v4 = a4;
  v5 = 0;
  v9 = *(const struct tagWND **)(*((_QWORD *)PtiCurrent(a1) + 61) + 328LL);
  if ( !v9 )
    return 0;
  CDwmWindowNotifyBatch::CDwmWindowNotifyBatch((CDwmWindowNotifyBatch *)v44, (struct tagWND *)a1);
  v12 = PtiCurrent(v11);
  Win32HM_LockIntoThread<1>((__int64)v12, (__int64)v9, (__int64 *)BugCheckParameter3);
  v40[1] = 0LL;
  v40[0] = -1LL;
  if ( !*((_QWORD *)PtiCurrent(v13) + 88) )
  {
    v14 = MonitorFromRect(a2, 0LL, 0x12u);
    v15 = v14;
    if ( v14 )
    {
      Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)v40, v14);
      MonitorWorkRectForWindow = GetMonitorWorkRectForWindow((__m128i *)v38, v15, v9);
      v39 = 0LL;
      *(__m128i *)v38 = *MonitorWorkRectForWindow;
      if ( (unsigned int)IntersectRect(&v39, a2, (int *)v38) )
      {
        if ( v39 == *(_OWORD *)a2 )
        {
          FrameBoundsOverlapInfo = GetFrameBoundsOverlapInfo(v38, a2, 1);
          if ( (unsigned int)ArrangementStyleFromOverlap(FrameBoundsOverlapInfo) )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 4) != 0
              && !IsGhostWindowClass((const struct tagWND *)a1, v17)
              && (unsigned int)EvaluateArrangeState(a1) != 4 )
            {
              if ( (*(_DWORD *)(a1 + 384) & 0x10) != 0 )
              {
                WindowActions::xxxInterceptSetSnapArrangementPos(a1, a2, a3, (unsigned int)v4);
              }
              else
              {
                if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x21) == 0 && !IsArranged((const struct tagWND *)a1) )
                {
                  *(_OWORD *)v38 = 0LL;
                  GetRect((const struct tagWND *)a1, (__int64)v38, 66);
                  CHECKPOINT::Restore((struct tagWND *)a1, (const struct tagRECT *)v38);
                }
                v18 = (struct tagWND *)MonitorFromRect(a2, 2LL, 0x12u);
                v20 = *(_QWORD *)(a1 + 40);
                v21 = v18;
                v22 = *(_QWORD *)v18;
                if ( *(_QWORD *)(v20 + 256) != *(_QWORD *)v18 )
                {
                  v23 = PtiCurrent(v20);
                  Win32HM_LockIntoThread<1>((__int64)v23, (__int64)v21, (__int64 *)v38);
                  AdvancedWindowPos::xxxMigrateCheckpoint((AdvancedWindowPos *)a1, v21, v24);
                  Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(v38);
                }
                v25 = (*(_DWORD *)(W32GetUserSessionState(v20, v19) + 66792) & 0x10000 | 0x4000u) >> 7;
                if ( (a3 & 1) != 0 )
                {
                  v25 |= 0x20u;
                }
                else if ( (a3 & 2) != 0 )
                {
                  v25 |= 1u;
                }
                if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x21) != 0 )
                {
                  v25 |= 8u;
                }
                else if ( IsArranged((const struct tagWND *)a1) )
                {
                  *(_DWORD *)(a1 + 380) &= ~0x4000000u;
                }
                v42 = *(_QWORD *)a1;
                *(_OWORD *)v38 = 0LL;
                GetNormalRect((const struct tagWND *)a1, v38);
                v47 = 0LL;
                v43 = *(_OWORD *)v38;
                v45 = 0LL;
                v46 = 0LL;
                xxxInitSendValidateMinMaxInfoEx((struct tagWND *)a1, (__int64)&v45, 0LL);
                TransformShellProvidedRectangle(a1, (int *)&v47, (int *)&v46 + 2, v15, FrameBoundsOverlapInfo, a2);
                *(_DWORD *)(a1 + 380) |= 0x200000u;
                *(_QWORD *)&v39 = a1;
                WORD4(v39) = 1;
                AdvancedWindowPos::MarkWindowAsArranged((AdvancedWindowPos *)a1, v26);
                v27 = *(struct tagRECT *)a2;
                *(_QWORD *)&v48[0].left = 0LL;
                v48[0].right = 0;
                v48[0].bottom = v25 | 0x140;
                v48[1] = v27;
                v49 = v4;
                AdvancedWindowPos::xxxApplyWindowPos((AdvancedWindowPos *)a1, v48, v28);
                *(_DWORD *)(a1 + 380) |= 0x4000000u;
                DwmNotifyMoveReason::~DwmNotifyMoveReason((DwmNotifyMoveReason *)&v39);
                CSaveRestoreCheckPoint::~CSaveRestoreCheckPoint((CSaveRestoreCheckPoint *)&v42);
                v29 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 256LL);
                if ( v22 != v29 )
                {
                  v30 = (struct tagWND *)ValidateHmonitorNoRip(v29);
                  v32 = PtiCurrent(v31);
                  Win32HM_LockIntoThread<1>((__int64)v32, (__int64)v30, (__int64 *)v38);
                  AdvancedWindowPos::xxxMigrateCheckpoint((AdvancedWindowPos *)a1, v30, v33);
                  Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(v38);
                }
                if ( !IsArranged((const struct tagWND *)a1) )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7688);
                v5 = 1;
              }
            }
          }
        }
      }
      Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v40);
    }
  }
  v34 = Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3);
  if ( v34 )
  {
    if ( v5 )
      NotifyShell::ArrangementCompleted((__int64 *)a1, v4, v5);
    if ( (a3 & 1) != 0 )
      LastWokenThread::Set(*(_QWORD *)(v34 + 16), 1LL, 0LL);
    if ( ShellWindowManagement::WindowSubjectToBehavior(a1, 0x10u, 0, 1) )
    {
      LOBYTE(v35) = 1;
      NotifyShell::TrackedWindowPosChanged((NotifyShell *)a1, v35, v36);
    }
  }
  Win32HMThreadLockBase<tagMONITOR,1,1>::~Win32HMThreadLockBase<tagMONITOR,1,1>(v40);
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3);
  CDwmNotifyBatch::~CDwmNotifyBatch((CDwmNotifyBatch *)v44);
  return v5;
}
