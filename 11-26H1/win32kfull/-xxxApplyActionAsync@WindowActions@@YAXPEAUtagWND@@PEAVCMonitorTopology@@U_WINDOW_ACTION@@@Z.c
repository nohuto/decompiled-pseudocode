/*
 * XREFs of ?xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z @ 0x1402E4AD0
 * Callers:
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 * Callees:
 *     ??0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z @ 0x1400469A0 (--0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1401D6C2C (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     ??1CDwmNotifyBatch@@IEAA@XZ @ 0x1401DEB84 (--1CDwmNotifyBatch@@IEAA@XZ.c)
 *     ?xxxEndApplyWindowActionOld@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402DF624 (-xxxEndApplyWindowActionOld@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 *     ?RemoveLastSystemOperationData@WindowActions@@YAXPEAUtagWND@@@Z @ 0x1402E2C88 (-RemoveLastSystemOperationData@WindowActions@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402E4C80 (-xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?OnExternalSystemOperation@CDwmWindowNotifyBatch@@QEAAXXZ @ 0x1402E6B00 (-OnExternalSystemOperation@CDwmWindowNotifyBatch@@QEAAXXZ.c)
 *     ?OnRecalcActionApplied@CDwmWindowNotifyBatch@@QEAAXI_N@Z @ 0x1402E6D4C (-OnRecalcActionApplied@CDwmWindowNotifyBatch@@QEAAXI_N@Z.c)
 */

void __fastcall WindowActions::xxxApplyActionAsync(struct tagWND *a1, unsigned int *a2, struct _WINDOW_ACTION *a3)
{
  bool v6; // bp
  bool v7; // r12
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r12d
  int v14; // ebp
  int v15; // esi
  bool v16; // al
  struct tagWND *v17; // rdx
  struct CMonitorTopology *v18; // r8
  bool v19; // bl
  int v20; // edi
  _BYTE v21[104]; // [rsp+60h] [rbp-68h] BYREF

  v6 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_qDD(*((_QWORD *)WPP_GLOBAL_Control + 3), v10, v9, *(_QWORD *)(UserSessionState + 69152));
  }
  CDwmWindowNotifyBatch::CDwmWindowNotifyBatch((CDwmWindowNotifyBatch *)v21, a1);
  v13 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v12, v11) + 19176) + 48LL) & 0x400;
  v14 = *(_DWORD *)a3 & 0x400;
  v15 = *((_DWORD *)a1 + 96) & 0x10;
  if ( !v15 )
    *(_DWORD *)a3 &= ~0x400u;
  v16 = xxxApplyActionAsyncImpl(a1, (struct CMonitorTopology *)a2, a3);
  v19 = v16;
  v20 = *(_DWORD *)a3 & 0x200;
  if ( !v13 || v15 && v16 )
  {
    if ( !v20 )
      goto LABEL_22;
  }
  else
  {
    if ( v14 )
      CDwmWindowNotifyBatch::OnExternalSystemOperation((CDwmWindowNotifyBatch *)v21);
    if ( !v20 )
    {
LABEL_22:
      if ( v19 )
        goto LABEL_26;
      goto LABEL_23;
    }
    CDwmWindowNotifyBatch::OnRecalcActionApplied((CDwmWindowNotifyBatch *)v21, a2[3], v19);
  }
  if ( v15 )
    goto LABEL_22;
  if ( v19 )
  {
    DesktopRecalc::xxxEndApplyWindowActionOld(a1, (struct tagWND *)a2, v18);
    goto LABEL_26;
  }
LABEL_23:
  if ( !v14 && (*(_DWORD *)a3 & 0x400) != 0 )
    WindowActions::RemoveLastSystemOperationData(a1, v17);
LABEL_26:
  CDwmNotifyBatch::~CDwmNotifyBatch((CDwmNotifyBatch *)v21);
}
