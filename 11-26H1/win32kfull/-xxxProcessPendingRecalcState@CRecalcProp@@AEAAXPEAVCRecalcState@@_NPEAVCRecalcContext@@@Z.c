/*
 * XREFs of ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402DFB54
 * Callers:
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x14028E8F0 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     IsImmersiveBand @ 0x14015E3C0 (IsImmersiveBand.c)
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x14015F6F8 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x14015FB64 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x140191A34 (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?ClearAnchorPosition@CRecalcProp@@AEAAXXZ @ 0x140210358 (-ClearAnchorPosition@CRecalcProp@@AEAAXXZ.c)
 *     ?GetCurrentMonitorDataFromId@CMonitorTopology@@SAPEBUMonitorData@1@AEBUMonitorId@1@_N@Z @ 0x14022A6FC (-GetCurrentMonitorDataFromId@CMonitorTopology@@SAPEBUMonitorData@1@AEBUMonitorId@1@_N@Z.c)
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x1402524A4 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ?GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitorData@CMonitorTopology@@@Z @ 0x1402876C4 (-GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitor.c)
 *     ??0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z @ 0x1402C3B6C (--0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z.c)
 *     ?SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z @ 0x1402C4FD4 (-SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z.c)
 *     ?GetResultString@CRecalcContext@@QEAAPEBDXZ @ 0x1402DD948 (-GetResultString@CRecalcContext@@QEAAPEBDXZ.c)
 *     ?SetPreviousMonitorData@CWindowAction@AdvancedWindowPos@@QEAAXPEBUMonitorData@CMonitorTopology@@PEAUtagWND@@@Z @ 0x1402DE638 (-SetPreviousMonitorData@CWindowAction@AdvancedWindowPos@@QEAAXPEBUMonitorData@CMonitorTopology@@.c)
 *     ?UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData@CMonitorTopology@@PEAW4Result@CRecalcContext@@PEAVCRecalcState@@_N@Z @ 0x1402DE810 (-UpdateActionForAnchor@CRecalcProp@@AEAAXPEAVCWindowAction@AdvancedWindowPos@@PEAPEBUMonitorData.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddd @ 0x1402E0A48 (WPP_RECORDER_AND_TRACE_SF_qdddd.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     ?GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z @ 0x1402EF3D0 (-GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall CRecalcProp::xxxProcessPendingRecalcState(
        CRecalcProp *this,
        struct CRecalcState *a2,
        bool a3,
        struct CRecalcContext *a4)
{
  __int64 v4; // rbx
  char v7; // si
  CRecalcContext *v8; // r13
  __int64 v9; // rcx
  struct tagWND *v10; // rdx
  int v11; // r9d
  int v12; // r13d
  char v13; // di
  char v14; // bl
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  unsigned __int16 *v18; // rdi
  const struct CMonitorTopology::MonitorData *CurrentMonitorDataFromId; // rax
  struct tagMONITOR *MigrateMonitor; // r13
  __int64 v21; // rcx
  char v22; // r14
  char v23; // bl
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  int v27; // ebx
  int v28; // ecx
  int v29; // r9d
  __int128 v30; // xmm0
  int v31; // eax
  __int64 v32; // r8
  int v33; // eax
  int v34; // ecx
  struct CHECKPOINT *IfValid; // rax
  struct tagRECT v36; // xmm0
  const struct tagWND *v37; // rdx
  CMonitorTopology *v38; // rcx
  const struct CMonitorTopology::MonitorData *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  bool v45; // r14
  bool v46; // r12
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  __int64 v50; // rax
  int v51; // ecx
  bool v52; // r14
  const char *ResultString; // rax
  __int64 *v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  char v61; // r14
  char v62; // di
  int v63; // ebx
  __int64 UserSessionState; // rax
  int v65; // r8d
  int v66; // edx
  _DWORD *v67; // r8
  int v68; // ecx
  int v69; // eax
  int v70; // ecx
  int v72; // [rsp+74h] [rbp-8Ch] BYREF
  int v73; // [rsp+78h] [rbp-88h]
  CRecalcContext *v74; // [rsp+80h] [rbp-80h]
  struct tagRECT v75; // [rsp+90h] [rbp-70h]
  struct tagRECT v76; // [rsp+A0h] [rbp-60h] BYREF
  int v77; // [rsp+B0h] [rbp-50h] BYREF
  int v78; // [rsp+B4h] [rbp-4Ch]
  int v79; // [rsp+BCh] [rbp-44h]
  int v80; // [rsp+C0h] [rbp-40h]
  int v81; // [rsp+C4h] [rbp-3Ch]
  int v82; // [rsp+C8h] [rbp-38h]
  int v83; // [rsp+D8h] [rbp-28h]
  __int128 v84; // [rsp+DCh] [rbp-24h]
  int v85; // [rsp+110h] [rbp+10h]
  __int64 v86[5]; // [rsp+168h] [rbp+68h] BYREF

  v4 = *((_QWORD *)this + 4);
  v74 = a4;
  v7 = 1;
  v8 = a4;
  v73 = *(_DWORD *)(*(_QWORD *)(v4 + 16) + 12LL);
  AdvancedWindowPos::CWindowAction::CWindowAction((__int64)&v77, 1);
  v9 = *((_QWORD *)this + 2);
  v77 |= 0x200u;
  if ( (unsigned int)IsImmersiveBand(v9) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || (v61 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v61 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v62 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v62 = 0;
    }
    if ( v61 || v62 )
    {
      v63 = *(_DWORD *)(*((_QWORD *)v10 + 5) + 236LL);
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v65) = v62;
      LOBYTE(v66) = v61;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v66,
        v65,
        *(_QWORD *)(UserSessionState + 69152),
        5,
        7,
        116,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v63);
      v11 = v77;
    }
    v27 = 9;
    v67 = *(_DWORD **)(*((_QWORD *)this + 2) + 40LL);
    v68 = v67[22];
    v69 = v67[23];
    v77 = v11 | 2;
    v79 = v68;
    v80 = v69;
    v70 = v67[25] - v67[23];
    v81 = v67[24] - v67[22];
    v77 = v11 | 6;
    v82 = v70;
  }
  else
  {
    v77 = v11 | 0x80;
    if ( a2 )
    {
      v12 = *(_DWORD *)(*((_QWORD *)a2 + 2) + 12LL);
      v73 = v12;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v13 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v14 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v14 = 0;
      }
      if ( v13 || v14 )
      {
        v15 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
        LOBYTE(v16) = v14;
        LOBYTE(v17) = v13;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v17,
          v16,
          *(_QWORD *)(v15 + 69152),
          5,
          7,
          117,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          v12);
      }
      v18 = (unsigned __int16 *)*((_QWORD *)a2 + 9);
      CurrentMonitorDataFromId = CMonitorTopology::GetCurrentMonitorDataFromId(
                                   (const struct CMonitorTopology::MonitorId *)(v18 + 24),
                                   0LL);
      MigrateMonitor = (struct tagMONITOR *)ValidateHmonitor(*(_QWORD *)CurrentMonitorDataFromId);
      CRecalcProp::ClearAnchorPosition(this);
      if ( *((_BYTE *)a2 + 61) )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (v21 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v21 & 0x40) == 0)
          || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v22 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v23 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v23 = 0;
        }
        if ( v22 || v23 )
        {
          v24 = W32GetUserSessionState(v21, WPP_GLOBAL_Control);
          LOBYTE(v25) = v23;
          LOBYTE(v26) = v22;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v26,
            v25,
            *(_QWORD *)(v24 + 69152),
            5,
            7,
            118,
            (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
        }
        v27 = 8;
        if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 31LL) & 0x20) != 0 )
        {
          v77 |= 0x20u;
          v83 = 0;
        }
      }
      else
      {
        v27 = 7;
        v28 = *((_DWORD *)a2 + 6);
        v29 = v77 | 0x60;
        v30 = *(_OWORD *)((char *)a2 + 44);
        v77 |= 0x60u;
        v83 = v28;
        v84 = v30;
        v31 = v18[20];
        v78 |= 0x100u;
        v85 = v31;
        if ( v28 == 3 )
        {
          v32 = HIDWORD(*(_QWORD *)((char *)a2 + 28));
          v33 = *(_QWORD *)((char *)a2 + 36) - *(_QWORD *)((char *)a2 + 28);
          v34 = HIDWORD(*(_QWORD *)((char *)a2 + 36)) - v32;
          v79 = *(_QWORD *)((char *)a2 + 28);
          v82 = v34;
          v80 = v32;
          v77 = v29 | 6;
          v81 = v33;
        }
      }
    }
    else
    {
      IfValid = CHECKPOINT::GetIfValid(v10);
      if ( IfValid )
        v36 = *(struct tagRECT *)((char *)IfValid + 20);
      else
        v36 = *(struct tagRECT *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 88LL);
      v37 = (const struct tagWND *)*((_QWORD *)this + 2);
      v38 = *(CMonitorTopology **)(v4 + 16);
      v75 = v36;
      v76 = v36;
      v39 = CMonitorTopology::MonitorDataFromRect(v38, v37, &v76);
      *(_QWORD *)&v76.left = v39;
      v18 = (unsigned __int16 *)v39;
      if ( v39 )
      {
        MigrateMonitor = CRecalcState::GetMigrateMonitor((CRecalcState *)v4, *((struct tagWND **)this + 2), v8, v39);
        if ( MigrateMonitor )
        {
          v72 = 4;
          if ( (*(_DWORD *)(W32GetUserSessionState(v43, v42) + 66792) & 0x10000) != 0
            && !*(_DWORD *)(v4 + 64)
            && !*((_DWORD *)v74 + 8)
            && (unsigned int)CMonitorTopology::CompareToCurrent(*(_QWORD *)(v4 + 16), 0LL) == 16 )
          {
            v78 |= 0x1000u;
          }
        }
        else
        {
          v77 |= 0x20u;
          v72 = 3;
          v83 = 2;
          MigrateMonitor = *(struct tagMONITOR **)(GetDispInfo(v43, v42) + 96);
        }
        CRecalcProp::UpdateActionForAnchor(
          this,
          (struct AdvancedWindowPos::CWindowAction *)&v77,
          (const struct CMonitorTopology::MonitorData **)&v76,
          (enum CRecalcContext::Result *)&v72,
          (struct CRecalcState *)v4,
          a3);
        v18 = *(unsigned __int16 **)&v76.left;
        v27 = v72;
      }
      else
      {
        v27 = 5;
        MigrateMonitor = *(struct tagMONITOR **)(GetDispInfo(v41, v40) + 96);
        v45 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v46 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v45 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v47 = W32GetUserSessionState(WPP_GLOBAL_Control, v44);
          LOBYTE(v48) = v46;
          LOBYTE(v49) = v45;
          WPP_RECORDER_AND_TRACE_SF_qdddd(*((_QWORD *)WPP_GLOBAL_Control + 3), v49, v48, *(_QWORD *)(v47 + 69152));
          v27 = 5;
        }
      }
    }
    if ( MigrateMonitor )
      AdvancedWindowPos::CWindowAction::SetMonitor(
        (AdvancedWindowPos::CWindowAction *)&v77,
        MigrateMonitor,
        1,
        *((const struct tagWND **)this + 2));
    if ( v18 )
      AdvancedWindowPos::CWindowAction::SetPreviousMonitorData(
        (AdvancedWindowPos::CWindowAction *)&v77,
        (const struct CMonitorTopology::MonitorData *)v18,
        *((struct tagWND **)this + 2));
    v8 = v74;
  }
  v50 = v86[0];
  *(_DWORD *)v8 = v27;
  v51 = *(_DWORD *)(v50 + 12);
  *((_DWORD *)v8 + 4) = v73;
  *((_DWORD *)v8 + 3) = v51;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v7 = 0;
  }
  v52 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    ResultString = CRecalcContext::GetResultString(v8);
    v54 = (__int64 *)*((_QWORD *)this + 2);
    v55 = (__int64)ResultString;
    v56 = *v54;
    v58 = W32GetUserSessionState(v54, v57);
    LOBYTE(v59) = v52;
    LOBYTE(v60) = v7;
    WPP_RECORDER_AND_TRACE_SF_qs(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v60,
      v59,
      *(_QWORD *)(v58 + 69152),
      4,
      7,
      120,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v56,
      v55);
  }
  AdvancedWindowPos::xxxApplyWindowAction(*((_QWORD *)this + 2), &v77, 14LL);
  CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr((CThreadLockedCurrentMonitorTopologyPtr *)v86);
}
