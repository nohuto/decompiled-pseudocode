/*
 * XREFs of ?xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAUtagRECT@@PEAVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1401624F0
 * Callers:
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402E01BC (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 * Callees:
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x14015F6F8 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140162868 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV5@W4MigrateWindowOptions@@PEAKPEAU6@@Z @ 0x14016294C (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitorData@CMonitorTopology@@@Z @ 0x1402876C4 (-GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitor.c)
 */

void __fastcall CRecalcState::xxxMigrate(
        CRecalcState *this,
        struct tagWND *a2,
        struct tagRECT *a3,
        struct CMonitorTopology *a4,
        struct CRecalcContext *a5)
{
  char v7; // si
  bool v8; // bp
  bool v9; // r14
  __int64 v10; // rdi
  int v11; // ebx
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r12
  int v20; // ebx
  int v21; // eax
  __int64 v22; // rdx
  char v23; // r15
  char v24; // bl
  bool v25; // bp
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  char v29; // bl
  bool v30; // bp
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  __int64 v34; // rdx
  char v35; // bl
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  struct CRecalcContext *MigrateMonitor; // [rsp+B0h] [rbp+28h]

  v7 = 1;
  v8 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v10 = *(_QWORD *)a2;
    v11 = *(_DWORD *)(*((_QWORD *)this + 2) + 12LL);
    UserSessionState = W32GetUserSessionState(this, a2);
    LOBYTE(v13) = v9;
    LOBYTE(v14) = v8;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      7,
      55,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v10,
      v11);
  }
  v16 = (*((_DWORD *)a5 + 8) != 3) + 1;
  MigrateMonitor = CRecalcState::GetMigrateMonitor(this, a2, a5, 0LL);
  if ( MigrateMonitor )
  {
    v19 = *((_QWORD *)this + 2);
    v20 = v16;
    if ( (*(_DWORD *)(W32GetUserSessionState(v18, v17) + 66792) & 0x10000) != 0
      && !*((_DWORD *)this + 16)
      && !*((_DWORD *)a5 + 8) )
    {
      v21 = CMonitorTopology::CompareToCurrent(v19, 0LL);
      v23 = v21;
      if ( v21 == 16 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
          || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v24 = 0;
        }
        v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v24 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v26 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
          LOBYTE(v27) = v25;
          LOBYTE(v28) = v24;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v28,
            v27,
            *(_QWORD *)(v26 + 69152),
            4,
            7,
            56,
            (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
        }
        v20 = v16 | 0xC;
      }
      else
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
          || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v29 = 0;
        }
        v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v29 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v31 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
          LOBYTE(v32) = v30;
          LOBYTE(v33) = v29;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v33,
            v32,
            *(_QWORD *)(v31 + 69152),
            4,
            7,
            57,
            (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
            v23);
        }
        v20 = v16;
      }
    }
    if ( (AdvancedWindowPos::xxxMigrateWindow(a2, MigrateMonitor, v19, a3, a4, v20, (char *)a5 + 4, *((_QWORD *)a5 + 3)) & 1) != 0 )
    {
      *((_BYTE *)a5 + 8) = 1;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v35 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v35 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        v7 = 0;
      }
      if ( v35 || v7 )
      {
        v36 = W32GetUserSessionState(WPP_GLOBAL_Control, v34);
        LOBYTE(v37) = v7;
        LOBYTE(v38) = v35;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v38,
          v37,
          *(_QWORD *)(v36 + 69152),
          5,
          7,
          58,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
      }
    }
    *(_DWORD *)a5 = 4;
  }
}
