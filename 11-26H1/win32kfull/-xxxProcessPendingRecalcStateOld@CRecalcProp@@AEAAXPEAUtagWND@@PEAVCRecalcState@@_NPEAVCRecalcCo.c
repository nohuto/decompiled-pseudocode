/*
 * XREFs of ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402E01BC
 * Callers:
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x14028E8F0 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     ?RestoreStateSettingEnabled@DesktopRecalcSettings@@YA_NXZ @ 0x14015CB14 (-RestoreStateSettingEnabled@DesktopRecalcSettings@@YA_NXZ.c)
 *     IsImmersiveBand @ 0x14015E3C0 (IsImmersiveBand.c)
 *     ?ShouldSkipRecalcForWindow@CRecalcProp@@CA_NPEBUtagWND@@PEAVCRecalcState@@@Z @ 0x14015EE84 (-ShouldSkipRecalcForWindow@CRecalcProp@@CA_NPEBUtagWND@@PEAVCRecalcState@@@Z.c)
 *     ?xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAUtagRECT@@PEAVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1401624F0 (-xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAUtagRECT@@PEAVCMonitorTopology@@PEAVCRecalcContext.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?ClearAnchorPosition@CRecalcProp@@AEAAXXZ @ 0x140210358 (-ClearAnchorPosition@CRecalcProp@@AEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140251CD4 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x1402524A4 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ??0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x14025FC74 (--0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ?SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z @ 0x140261090 (-SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1402613D0 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetAnchorPosition@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x14027CAFC (-SetAnchorPosition@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?ShouldMigrateFromAnchor@CRecalcProp@@AEAA_NXZ @ 0x14027CC38 (-ShouldMigrateFromAnchor@CRecalcProp@@AEAA_NXZ.c)
 *     ?SetStateBeforeProcessing@CRecalcProp@@AEAAPEAVCRecalcState@@XZ @ 0x14028B330 (-SetStateBeforeProcessing@CRecalcProp@@AEAAPEAVCRecalcState@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ClearLastInterceptedTopology@CRecalcProp@@QEAAXXZ @ 0x1402DD620 (-ClearLastInterceptedTopology@CRecalcProp@@QEAAXXZ.c)
 *     ?ReattachRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1402DE340 (-ReattachRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?SetLastInterceptedTopology@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402DE4F4 (-SetLastInterceptedTopology@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 *     ?xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1402DF660 (-xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@.c)
 *     ?xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1402E0514 (-xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 */

void __fastcall CRecalcProp::xxxProcessPendingRecalcStateOld(
        struct CMonitorTopology **this,
        struct tagTHREADINFO **a2,
        struct CRecalcState *a3,
        char a4,
        struct CRecalcContext *a5)
{
  struct tagRECT *v5; // rbp
  struct CRecalcState *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rdx
  char v12; // si
  char v13; // al
  unsigned int *v14; // rcx
  int v15; // esi
  int v16; // edi
  __int64 v17; // rbx
  __int64 UserSessionState; // rax
  __int64 v19; // rdx
  CRecalcState *v20; // rcx
  struct CMonitorTopology *v21; // r8
  char v22; // r12
  struct tagTHREADINFO *v23; // rbx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  struct CMonitorTopology *v27; // rbx
  char v28; // [rsp+60h] [rbp-68h]
  struct CMonitorTopology *v29[12]; // [rsp+68h] [rbp-60h] BYREF
  char v30; // [rsp+D8h] [rbp+10h]

  v5 = 0LL;
  if ( a4 && a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4218);
  v9 = CRecalcProp::SetStateBeforeProcessing((CRecalcProp *)this);
  CThreadLockedCurrentMonitorTopologyPtr::CThreadLockedCurrentMonitorTopologyPtr(
    (CThreadLockedCurrentMonitorTopologyPtr *)v29,
    v10);
  v12 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v13 = 0;
  }
  v14 = &WPP_RECORDER_INITIALIZED;
  v30 = v13;
  v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v15 = *((_DWORD *)v29[0] + 3);
    v16 = *(_DWORD *)(*((_QWORD *)v9 + 2) + 12LL);
    v17 = *(_QWORD *)this[2];
    LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    UserSessionState = W32GetUserSessionState(v14, v11);
    WPP_RECORDER_AND_TRACE_SF_qdd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v30,
      v28,
      *(_QWORD *)(UserSessionState + 69152),
      4u,
      7u,
      0x79u,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v17,
      v16,
      v15);
    v12 = 1;
  }
  *((_DWORD *)a5 + 3) = *((_DWORD *)v29[0] + 3);
  *((_DWORD *)a5 + 4) = *(_DWORD *)(*((_QWORD *)v9 + 2) + 12LL);
  if ( CRecalcProp::ShouldSkipRecalcForWindow((const struct tagWND *)a2, v9) )
  {
    *(_DWORD *)a5 = 2;
  }
  else if ( (unsigned int)IsImmersiveBand((__int64)a2) )
  {
    CRecalcState::xxxImmersiveZBandDpiChange(v20, a2);
    *(_DWORD *)a5 = 9;
  }
  else
  {
    if ( ((_DWORD)a2[48] & 0x10) != 0 )
    {
      CRecalcProp::ReattachRecalcState((CRecalcProp *)this, v9);
      DesktopRecalc::SetLastInterceptedTopology((DesktopRecalc *)a2, v29[0], v21);
    }
    if ( a3 )
    {
      if ( *((_BYTE *)a3 + 61) )
        CRecalcState::xxxFullscreenRestore(a3, a2, *((const struct CMonitorTopology **)v9 + 2), a5);
      else
        CRecalcState::xxxRestore(a3, (struct tagWND *)a2, a5);
    }
    if ( *(_DWORD *)a5 != 7 )
    {
      if ( *((_QWORD *)v9 + 9) )
      {
        v27 = 0LL;
        if ( DesktopRecalcSettings::RestoreStateSettingEnabled(v20) && a4 )
        {
          if ( CRecalcProp::ShouldMigrateFromAnchor(this) )
          {
            v27 = this[10];
            v5 = (struct tagRECT *)((char *)this + 60);
          }
          else
          {
            CRecalcProp::SetAnchorPosition((CRecalcProp *)this, (volatile signed __int32 **)v9);
          }
        }
        else
        {
          CRecalcProp::ClearAnchorPosition((CRecalcProp *)this);
        }
        CRecalcState::xxxMigrate(v9, (struct tagWND *)a2, v5, v27, a5);
      }
      else
      {
        *(_DWORD *)a5 = 2;
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
          || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v22 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          v12 = 0;
        }
        if ( v22 || v12 )
        {
          v23 = *a2;
          v24 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
          LOBYTE(v25) = v12;
          LOBYTE(v26) = v22;
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v26,
            v25,
            *(_QWORD *)(v24 + 69152),
            5,
            7,
            122,
            (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
            (char)v23);
        }
        if ( ((_DWORD)a2[48] & 0x10) != 0 )
        {
          CRecalcProp::SetStateBeforeProcessing((CRecalcProp *)this);
          CRecalcProp::ClearLastInterceptedTopology((CRecalcProp *)this);
        }
      }
    }
    if ( *(_DWORD *)a5 == 3 )
      CRecalcProp::ReattachRecalcState((CRecalcProp *)this, v9);
  }
  if ( ((_DWORD)a2[48] & 0x10) == 0 || *(_DWORD *)a5 == 2 || *(_DWORD *)a5 == 9 )
    CRecalcProp::SetStateAfterProcessing((CRecalcProp *)this, v29[0]);
  CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr((CThreadLockedCurrentMonitorTopologyPtr *)v29);
}
