/*
 * XREFs of _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x140162C0C
 * Callers:
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV5@W4MigrateWindowOptions@@PEAKPEAU6@@Z @ 0x14016294C (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 *     ?xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x14025FAE8 (-xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 * Callees:
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x140032708 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x14015FB64 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     _anonymous_namespace_::xxxNormalizeRect_0 @ 0x1401623E8 (_anonymous_namespace_--xxxNormalizeRect_0.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14016320C (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetRestoreToArrangeRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@@Z @ 0x1402134D4 (-SetRestoreToArrangeRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@@Z.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEBUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x14022CAD4 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14025F6A4 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x140292398 (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::GetArrangedOptions @ 0x1402E78AC (_anonymous_namespace_--GetArrangedOptions.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall anonymous_namespace_::xxxMigrateWindowCheckpoint(
        struct tagWND *a1,
        CHECKPOINT *this,
        __int64 a3,
        CMonitorTopology *a4,
        struct tagRECT *a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v9; // r9
  struct tagRECT *v11; // rdx
  unsigned int v12; // r14d
  char v14; // r12
  _DWORD *v15; // rax
  int v16; // r14d
  int v17; // edi
  int v18; // esi
  int v19; // ebx
  __int64 UserSessionState; // rax
  struct tagRECT v21; // xmm0
  CMonitorTopology *v22; // rcx
  const struct CMonitorTopology::MonitorData *v23; // rax
  __int64 v24; // rdx
  CMonitorTopology::MonitorData *v25; // rbx
  char v26; // si
  char v27; // di
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  __int64 v31; // rdx
  char v33; // bl
  bool v34; // di
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  char ArrangedOptions; // al
  char v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  struct tagRECT v41; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  CMonitorTopology *v44; // [rsp+A0h] [rbp-60h]
  __m128i v45; // [rsp+A8h] [rbp-58h] BYREF
  struct tagRECT v46; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v47; // [rsp+D0h] [rbp-30h] BYREF
  struct tagRECT v48; // [rsp+E0h] [rbp-20h] BYREF

  v9 = a6;
  v11 = a5;
  v12 = 0;
  v43 = (__int64)a5;
  *(_QWORD *)&v41.left = a6;
  v44 = a4;
  v40 = a3;
  v45.m128i_i64[0] = a8;
  v42 = 0;
  v14 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v15 = *(_DWORD **)(a3 + 40);
    v16 = v15[8];
    v17 = v15[10];
    v18 = v15[7];
    v19 = v15[9];
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a5);
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v39,
      *(_QWORD *)(UserSessionState + 69152),
      4u,
      4u,
      0x1Du,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      v18,
      v16,
      v19,
      v17,
      v19 - v18,
      v17 - v16);
    v11 = (struct tagRECT *)v43;
    v9 = *(_QWORD *)&v41.left;
    a4 = v44;
    v12 = v42;
  }
  *((_DWORD *)this + 4) &= ~0x10u;
  if ( v11 )
  {
    v21 = *v11;
    v22 = (CMonitorTopology *)v9;
  }
  else
  {
    v21 = *(struct tagRECT *)((char *)this + 20);
    v22 = a4;
  }
  v47 = v21;
  v41 = v21;
  v23 = CMonitorTopology::MonitorDataFromRect(v22, a1, &v41);
  if ( v23 )
  {
    v47 = (struct tagRECT)*anonymous_namespace_::xxxNormalizeRect_0(
                             (__m128i *)&v41,
                             a1,
                             (__m128i *)&v47,
                             v40,
                             (__int64)v23,
                             1);
    CHECKPOINT::SetNormalRect(this, a1, &v47, 0);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
    return 0LL;
  if ( (*((_DWORD *)this + 4) & 8) == 0 )
    return 0LL;
  v46 = *(struct tagRECT *)((char *)this + 36);
  v41 = v46;
  v25 = CMonitorTopology::MonitorDataFromRect(a4, a1, &v41);
  if ( !v25 )
    return 0LL;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v26 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v27 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v27 = 0;
  }
  if ( v26 || v27 )
  {
    v28 = W32GetUserSessionState(WPP_GLOBAL_Control, v24);
    LOBYTE(v29) = v27;
    LOBYTE(v30) = v26;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v30,
      v29,
      *(_QWORD *)(v28 + 69152),
      5,
      4,
      30,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
  }
  CMonitorTopology::MonitorData::LogicalWorkArea(v25, &v48, a1);
  if ( (a7 & 1) != 0
    && (v41 = v46, (unsigned __int8)CallShell::xxxMigrateWindowHandler(a1, 2LL, (char *)v25 + 24, &v48)) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v33 = 0;
    }
    v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v33 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v35 = W32GetUserSessionState(WPP_GLOBAL_Control, v31);
      LOBYTE(v36) = v34;
      LOBYTE(v37) = v33;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v37,
        v36,
        *(_QWORD *)(v35 + 69152),
        4,
        4,
        33,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
    *((_DWORD *)this + 4) &= 0xFFFFFFF5;
    return 1LL;
  }
  else
  {
    ArrangedOptions = anonymous_namespace_::GetArrangedOptions((struct tagWND *)&v46, a1, v25);
    v46 = (struct tagRECT)*anonymous_namespace_::xxxNormalizeRect_0(
                             &v45,
                             a1,
                             (__m128i *)&v46,
                             v40,
                             (__int64)v25,
                             ArrangedOptions | 1u);
    CHECKPOINT::SetRestoreToArrangeRect(this, a1, &v46);
    return v12;
  }
}
