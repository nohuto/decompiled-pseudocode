/*
 * XREFs of ?xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402E6284
 * Callers:
 *     ?xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402E4C80 (-xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402E510C (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14000F174 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z @ 0x14003139C (-Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400326CC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z @ 0x14015FDDC (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z.c)
 *     CalculateLogicalMonitorRect @ 0x140160158 (CalculateLogicalMonitorRect.c)
 *     ?xxxUpdateActionForArrangeMigrate@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_REASON@@U3@PEAKPEAU_WINDOW_ACTION@@@Z @ 0x14028F9F4 (-xxxUpdateActionForArrangeMigrate@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRA.c)
 *     WPP_RECORDER_AND_TRACE_SF_sq @ 0x140299C30 (WPP_RECORDER_AND_TRACE_SF_sq.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

char __fastcall xxxResolveArrangePosition(
        struct tagWND *a1,
        const struct CMonitorTopology *a2,
        struct _WINDOW_ACTION *a3)
{
  int v3; // eax
  struct CHECKPOINT *v6; // rdx
  char v7; // si
  bool v8; // r15
  bool v9; // al
  char v10; // r13
  char v11; // r12
  __int64 v12; // rbx
  __int64 v13; // r9
  const char *v14; // rax
  BOOL v15; // r12d
  CMonitorTopology *v16; // r15
  unsigned int v17; // r12d
  LONG v18; // ecx
  const struct CMonitorTopology::MonitorData *v19; // rax
  __int64 v20; // rcx
  const struct CMonitorTopology::MonitorData *v21; // rbx
  struct tagRECT v22; // xmm6
  const struct CMonitorTopology::MonitorData *v23; // rax
  int v24; // ecx
  __m128i v25; // xmm0
  unsigned __int16 v26; // r15
  __int64 v27; // rbx
  __int64 v28; // rcx
  struct tagTHREADINFO *v29; // rax
  struct tagRECT v31; // [rsp+58h] [rbp-49h] BYREF
  CMonitorTopology *v32; // [rsp+68h] [rbp-39h] BYREF
  struct CHECKPOINT *v33; // [rsp+70h] [rbp-31h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+78h] [rbp-29h] BYREF
  __m128i v35; // [rsp+88h] [rbp-19h] BYREF
  __m128i v36; // [rsp+98h] [rbp-9h] BYREF

  v3 = *(_DWORD *)a3;
  v32 = a2;
  if ( (v3 & 0xC0) == 0 || (v3 & 0x20) != 0 && *((_DWORD *)a3 + 10) == 3 || (*((_DWORD *)a3 + 1) & 0xE0) != 0 )
    return 1;
  v8 = (v6 = CHECKPOINT::Get(a1, (__int64)a2), v33 = v6, v7 = 0, (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0)
    && (*((_DWORD *)v6 + 4) & 8) != 0
    || IsArranged(a1) && (*(_DWORD *)a3 & 0x20) != 0 && *((_DWORD *)a3 + 10) == 2;
  v9 = (*(_DWORD *)a3 & 0x20) != 0 ? *((_DWORD *)a3 + 10) == 3 : IsArranged(a1);
  if ( !v9 && !v8 || (*(_DWORD *)a3 & 0x400) != 0 )
    return 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v10 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v11 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v11 = 0;
  }
  if ( v10 || v11 )
  {
    v12 = *(_QWORD *)a1;
    v13 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v6) + 69152);
    v14 = "minimized";
    if ( !v8 )
      v14 = (const char *)&unk_14035E7E1;
    WPP_RECORDER_AND_TRACE_SF_sq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v11,
      v13,
      5u,
      4u,
      0x62u,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
      v14,
      v12);
  }
  v15 = v8;
  v16 = v32;
  v17 = v15 + 1;
  if ( (*(_DWORD *)a3 & 0x80u) == 0 )
  {
    v31 = *(struct tagRECT *)((char *)a3 + 44);
  }
  else
  {
    v18 = *((_DWORD *)a3 + 21);
    v31.left = *((_DWORD *)a3 + 20);
    v31.top = v18;
    v31.right = v31.left;
    v31.bottom = v18;
  }
  v19 = CMonitorTopology::MonitorDataFromRect(v32, &v31, 2, 0x12u);
  v20 = *((_QWORD *)a1 + 5);
  v21 = v19;
  if ( (*(_BYTE *)(v20 + 31) & 0x20) != 0 )
    v22 = *(struct tagRECT *)((char *)v33 + 36);
  else
    v22 = *(struct tagRECT *)(v20 + 88);
  v31 = v22;
  v23 = CMonitorTopology::MonitorDataFromRect(v16, &v31, 2, 0x12u);
  v24 = *((_DWORD *)a3 + 1);
  v35 = 0LL;
  if ( (v24 & 0x100) != 0 )
    v25 = *(__m128i *)((char *)a3 + 60);
  else
    v25 = *(__m128i *)((char *)v23 + 24);
  v35 = v25;
  if ( (v24 & 0x200) != 0 )
    v26 = *((_WORD *)a3 + 38);
  else
    v26 = *((_WORD *)v23 + 20);
  v36 = *CalculateLogicalMonitorRect(
           (__m128i *)&v31,
           &v35,
           v26,
           (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) >> 8) & 0x1FF,
           0);
  v27 = ValidateHmonitor(*(_QWORD *)v21);
  v29 = PtiCurrent(v28);
  Win32HM_LockIntoThread<0>((__int64)v29, v27, BugCheckParameter3);
  LODWORD(v32) = 0;
  v31 = v22;
  if ( xxxUpdateActionForArrangeMigrate(
         (struct tagRECT *)a1,
         v27,
         v36.m128i_i64,
         v35.m128i_i64,
         v26,
         v17,
         &v31,
         (unsigned int *)&v32,
         (int *)a3) )
  {
    *(_DWORD *)a3 &= ~0x80u;
    *((_QWORD *)a3 + 10) = 0LL;
    v7 = 1;
  }
  Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(BugCheckParameter3);
  return v7;
}
