/*
 * XREFs of ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV5@W4MigrateWindowOptions@@PEAKPEAU6@@Z @ 0x14016294C
 * Callers:
 *     ?xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAUtagRECT@@PEAVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1401624F0 (-xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAUtagRECT@@PEAVCMonitorTopology@@PEAVCRecalcContext.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402C5B78 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402DC50C (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1402DF660 (-xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@.c)
 * Callees:
 *     ?Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z @ 0x14003139C (-Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032910 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x140162C0C (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 *     ?HasValidCheckpointPosition@@YA_NPEAUtagWND@@@Z @ 0x1401631E0 (-HasValidCheckpointPosition@@YA_NPEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x14016348C (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ??1CSaveRestoreCheckPoint@@QEAA@XZ @ 0x14025C7C4 (--1CSaveRestoreCheckPoint@@QEAA@XZ.c)
 *     ?xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV4@W4MigrateWindowOptions@@PEAK@Z @ 0x1402627D4 (-xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@P.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall AdvancedWindowPos::xxxMigrateWindow(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int *a7,
        __int64 a8)
{
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // r13d
  __int64 UserSessionState; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  CHECKPOINT *Prop; // r15
  struct tagTHREADINFO *v20; // rax
  __int128 v22; // xmm6
  struct CHECKPOINT *v23; // rax
  __int64 v24; // rcx
  struct tagTHREADINFO *v25; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v27; // [rsp+50h] [rbp-68h] BYREF
  __int128 v28; // [rsp+58h] [rbp-60h]

  v12 = PtiCurrent(a1);
  Win32HM_LockIntoThread<1>((__int64)v12, a2, (__int64 *)BugCheckParameter3);
  if ( (*(_DWORD *)(a1 + 384) & 0x10) != 0 && (a6 & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1152LL);
  if ( (*(_DWORD *)(a1 + 384) & 0x10) != 0 && a8 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1154LL);
  if ( (*(_DWORD *)(a1 + 384) & 0x10) != 0 )
  {
    WindowActions::xxxInterceptMigrateWindow(a1, a2, a3, a4, a5, a6, a7);
    v25 = PtiCurrent(v24);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v25, BugCheckParameter3);
    return 0LL;
  }
  else
  {
    if ( (a6 & 8) != 0 )
      *(_DWORD *)(a1 + 380) |= 0x200u;
    v15 = 0;
    UserSessionState = W32GetUserSessionState(v14, v13);
    Prop = (CHECKPOINT *)GetProp(a1, *(unsigned __int16 *)(UserSessionState + 41374), 1u);
    if ( Prop && HasValidCheckpointPosition((struct tagWND *)a1) )
      v15 = anonymous_namespace_::xxxMigrateWindowCheckpoint((struct tagWND *)a1, Prop, a4, a5, a6, (__int64)a7);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x20) == 0 )
    {
      v27 = *(_QWORD *)a1;
      v22 = 0LL;
      v23 = CHECKPOINT::Get((const struct tagWND *)a1, v17);
      if ( v23 )
        v22 = *(_OWORD *)((char *)v23 + 20);
      v28 = v22;
      anonymous_namespace_::xxxMigrateWindowPosition((struct tagWND *)a1, a6, *a7, a8);
      CSaveRestoreCheckPoint::~CSaveRestoreCheckPoint((CSaveRestoreCheckPoint *)&v27);
    }
    if ( (a6 & 8) != 0 )
      *(_DWORD *)(a1 + 380) &= ~0x200u;
    v20 = PtiCurrent(v18);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v20, BugCheckParameter3);
    return v15;
  }
}
