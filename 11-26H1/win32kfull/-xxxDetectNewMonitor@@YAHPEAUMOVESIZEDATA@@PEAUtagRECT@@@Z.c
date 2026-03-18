/*
 * XREFs of ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x14011D65C
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140250868 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     GetMonitorRectForWindow @ 0x1400313D4 (GetMonitorRectForWindow.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     GetInheritedMonitor @ 0x14011EDF0 (GetInheritedMonitor.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x1401D77C4 (-IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ @ 0x1401EE9DC (--1-$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ.c)
 *     TransformRectAroundPoint @ 0x14021C91C (TransformRectAroundPoint.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x14022908C (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddddd @ 0x1402574E8 (WPP_RECORDER_AND_TRACE_SF_dddddddd.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x14028E0D0 (xxxAppAdjustDpiCandidateRect.c)
 *     ?RecomputeMouseOffset@MOVESIZEDATA@@QEAAXAEBUtagRECT@@AEBUtagPOINT@@@Z @ 0x1402EFE80 (-RecomputeMouseOffset@MOVESIZEDATA@@QEAAXAEBUtagRECT@@AEBUtagPOINT@@@Z.c)
 *     ?RecomputeMouseOffsetOld@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z @ 0x1402EFFDC (-RecomputeMouseOffsetOld@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxDetectNewMonitor(struct MOVESIZEDATA *this, struct tagRECT *a2)
{
  __int64 InheritedMonitor; // rax
  struct tagRECT v5; // xmm0
  __int64 v6; // rax
  __int64 v7; // r11
  char v8; // r15
  __int64 v9; // rbx
  struct tagWND *v10; // rcx
  unsigned __int64 v11; // r14
  __int64 v12; // rdx
  ULONG_PTR v13; // r11
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  __int64 v16; // rcx
  struct tagTHREADINFO *v17; // rax
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rax
  int v21; // eax
  char v22; // si
  char v23; // bl
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  INT v31; // esi
  INT v32; // r8d
  __int64 v33; // rbx
  int v34; // eax
  ULONG_PTR v35; // rbx
  int v36; // eax
  INT v37; // esi
  INT v38; // r8d
  LONG v39; // ebx
  struct tagRECT *MonitorRectForWindow; // rax
  const struct tagWND *v41; // r8
  char v43; // si
  char v44; // bl
  __int64 UserSessionState; // rax
  int v46; // r8d
  int v47; // edx
  __int64 v48; // rdx
  __int16 v49; // ax
  char v50; // si
  char v51; // bl
  __int64 v52; // rax
  int v53; // r8d
  int v54; // edx
  int v55; // r15d
  int v56; // r12d
  __int64 v57; // rax
  __int64 v58; // r8
  char right; // bl
  char bottom; // si
  bool v61; // r14
  bool v62; // r13
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  char v66; // al
  _DWORD *v67; // rax
  int v68; // r15d
  int v69; // r12d
  int v70; // r13d
  _DWORD *v71; // rcx
  int v72; // ebx
  int v73; // edi
  int v74; // esi
  int v75; // r14d
  __int64 v76; // rax
  int v77; // r8d
  int v78; // edx
  char v79; // r12
  LONG top; // r14d
  LONG v81; // edi
  LONG left; // esi
  LONG v83; // ebx
  __int64 v84; // rax
  int v85; // r8d
  int v86; // edx
  __int64 v87; // [rsp+28h] [rbp-D8h]
  char v88; // [rsp+80h] [rbp-80h]
  ULONG_PTR v89; // [rsp+88h] [rbp-78h] BYREF
  bool v90; // [rsp+90h] [rbp-70h]
  __int64 v91; // [rsp+98h] [rbp-68h] BYREF
  struct tagRECT v92; // [rsp+A0h] [rbp-60h] BYREF
  ULONG_PTR v93; // [rsp+B0h] [rbp-50h] BYREF
  ULONG_PTR v94; // [rsp+B8h] [rbp-48h] BYREF
  struct tagRECT v95; // [rsp+D0h] [rbp-30h] BYREF
  struct tagRECT *v96; // [rsp+E0h] [rbp-20h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v98; // [rsp+100h] [rbp+0h] BYREF

  v96 = a2;
  InheritedMonitor = GetInheritedMonitor(*((struct tagWND **)this + 2));
  v5 = *a2;
  v89 = InheritedMonitor;
  v91 = *((_QWORD *)this + 27);
  v6 = *((_QWORD *)this + 2);
  v98 = v5;
  v95 = v5;
  LogicalToPhysicalDPIRect(&v98, &v98, *(unsigned int *)(*(_QWORD *)(v6 + 40) + 288LL), &v91);
  v7 = v89;
  v8 = 0;
  if ( !v89 )
  {
    v7 = MonitorFromRect(&v98.left, 0LL, 0x12u);
    v89 = v7;
  }
  v9 = v91;
  if ( v91 && v7 && v91 != v7 )
  {
    v10 = (struct tagWND *)*((_QWORD *)this + 2);
    v92 = 0LL;
    LODWORD(v11) = 0;
    if ( IsWindowBroadcastingDpiToChildrenX(v10) )
    {
      v14 = *(unsigned __int16 *)(*(_QWORD *)(v13 + 40) + 60LL);
      if ( *(_WORD *)(*(_QWORD *)(v9 + 40) + 60LL) != (_WORD)v14 )
      {
        v15 = PtiCurrent(v14);
        Win32HM_LockIntoThread<1>((__int64)v15, v9, (__int64 *)&v94);
        v17 = PtiCurrent(v16);
        Win32HM_LockIntoThread<1>((__int64)v17, v89, (__int64 *)BugCheckParameter3);
        v18 = *((_QWORD *)this + 2);
        v92 = v98;
        v19 = xxxAppAdjustDpiCandidateRect(v18, *(unsigned __int16 *)(*(_QWORD *)(v89 + 40) + 60LL), &v92, &v92);
        v89 = Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3);
        v20 = Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(&v94);
        v91 = v20;
        if ( !v89 || !v20 )
        {
          Win32HMThreadLockBase<tagMONITOR,1,1>::~Win32HMThreadLockBase<tagMONITOR,1,1>((ULONG_PTR)BugCheckParameter3);
          Win32HMThreadLockBase<tagMONITOR,1,1>::~Win32HMThreadLockBase<tagMONITOR,1,1>((ULONG_PTR)&v94);
          return 0LL;
        }
        Win32HMThreadLockBase<tagMONITOR,1,1>::~Win32HMThreadLockBase<tagMONITOR,1,1>((ULONG_PTR)BugCheckParameter3);
        Win32HMThreadLockBase<tagMONITOR,1,1>::~Win32HMThreadLockBase<tagMONITOR,1,1>((ULONG_PTR)&v94);
        v13 = v89;
        v11 = (unsigned __int64)&v92 & -(__int64)(v19 != 0);
      }
    }
    v21 = *((_DWORD *)this + 44);
    if ( v21 == 9 || v21 == 10 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v43 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v43 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v44 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v44 = 0;
      }
      if ( v43 || v44 )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
        LOBYTE(v46) = v44;
        LOBYTE(v47) = v43;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v47,
          v46,
          *(_QWORD *)(UserSessionState + 69152),
          5,
          1,
          27,
          (__int64)&WPP_1438f2a5ce8b301fefff07164e1e1908_Traceguids);
        v13 = v89;
      }
      v87 = *(_QWORD *)((char *)this + 260);
      v48 = *(_QWORD *)(v91 + 40);
      v49 = *(_WORD *)(*(_QWORD *)(v13 + 40) + 60LL);
      *(_OWORD *)BugCheckParameter3 = 0LL;
      TransformRectAroundPoint(
        (unsigned int)&v98,
        *(unsigned __int16 *)(v48 + 60),
        v11,
        (unsigned int)BugCheckParameter3,
        v49,
        v87);
      if ( (unsigned int)IsNewMonitorRectMostOccupied(
                           (const struct tagRECT *)BugCheckParameter3,
                           (const struct tagRECT *)(*(_QWORD *)(v89 + 40) + 28LL),
                           (const struct tagRECT *)(*(_QWORD *)(v91 + 40) + 28LL)) )
      {
        v92 = *(struct tagRECT *)BugCheckParameter3;
        v93 = BugCheckParameter3[0];
        PhysicalToLogicalDPIPoint(
          &v93,
          &v93,
          *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 288LL),
          &v89);
        LOBYTE(v55) = v93;
        LOBYTE(v56) = BYTE4(v93);
        v94 = *(_QWORD *)((char *)this + 260);
        v57 = *((_QWORD *)this + 2);
        *(_QWORD *)&v92.left = v93;
        v58 = *(unsigned int *)(*(_QWORD *)(v57 + 40) + 288LL);
        if ( (*(_DWORD *)(*(_QWORD *)(v57 + 40) + 288LL) & 0xF) == 2 )
        {
          bottom = v92.bottom;
          right = v92.right;
        }
        else
        {
          BugCheckParameter3[0] = v89;
          PhysicalToLogicalDPIPoint(&v94, (char *)this + 260, v58, BugCheckParameter3);
          v55 = v94 + *((_DWORD *)this + 42);
          v56 = HIDWORD(v94) + *((_DWORD *)this + 43);
          right = LOBYTE(v95.right) + v55 - LOBYTE(v95.left);
          bottom = LOBYTE(v95.bottom) + v56 - LOBYTE(v95.top);
          v92.bottom = v95.bottom + v56 - v95.top;
          v92.left = v55;
          v92.top = v56;
          v92.right = v95.right + v55 - v95.left;
        }
        *a2 = v92;
        v61 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v62 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v61 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v63 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          LOBYTE(v64) = v62;
          LOBYTE(v65) = v61;
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v65,
            v64,
            *(_QWORD *)(v63 + 69152),
            4,
            1,
            29,
            (__int64)&WPP_1438f2a5ce8b301fefff07164e1e1908_Traceguids,
            v55,
            v56,
            right,
            bottom,
            right - v55,
            bottom - v56);
        }
        v8 = 0;
        if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
        {
          MOVESIZEDATA::RecomputeMouseOffset(this, v96, (const struct tagPOINT *)&v94);
        }
        else if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 384LL) & 0x10) != 0 )
        {
          MOVESIZEDATA::RecomputeMouseOffsetOld(this, v96);
        }
        goto LABEL_76;
      }
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v50 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v50 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v51 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v51 = 0;
      }
      if ( v50 || v51 )
      {
        v52 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        LOBYTE(v53) = v51;
        LOBYTE(v54) = v50;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v54,
          v53,
          *(_QWORD *)(v52 + 69152),
          5,
          1,
          28,
          (__int64)&WPP_1438f2a5ce8b301fefff07164e1e1908_Traceguids);
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
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
        v24 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        LOBYTE(v25) = v23;
        LOBYTE(v26) = v22;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v26,
          v25,
          *(_QWORD *)(v24 + 69152),
          5,
          1,
          30,
          (__int64)&WPP_1438f2a5ce8b301fefff07164e1e1908_Traceguids);
      }
      v27 = *((_QWORD *)this + 2);
      *(struct tagRECT *)BugCheckParameter3 = v98;
      PhysicalToLogicalDPIRect(
        BugCheckParameter3,
        BugCheckParameter3,
        *(unsigned int *)(*(_QWORD *)(v27 + 40) + 288LL),
        &v89);
      v30 = W32GetUserSessionState(v29, v28);
      v31 = *((_DWORD *)this + 28);
      v32 = LODWORD(BugCheckParameter3[1]) - LODWORD(BugCheckParameter3[0]);
      v33 = *(_QWORD *)(v30 + 19904);
      v34 = *((_DWORD *)this + 26);
      if ( LODWORD(BugCheckParameter3[1]) - LODWORD(BugCheckParameter3[0]) > v34 )
        v34 = LODWORD(BugCheckParameter3[1]) - LODWORD(BugCheckParameter3[0]);
      v35 = *(_QWORD *)(v33 + 4960);
      v94 = v35;
      if ( v34 < v31 )
        v31 = v34;
      if ( v31 != v32 )
      {
        LODWORD(BugCheckParameter3[0]) = v35 - EngMulDiv(v35 - v98.left, v31, v32);
        LODWORD(BugCheckParameter3[1]) = LODWORD(BugCheckParameter3[0]) + v31;
      }
      v36 = *((_DWORD *)this + 27);
      v37 = *((_DWORD *)this + 29);
      v38 = HIDWORD(BugCheckParameter3[1]) - HIDWORD(BugCheckParameter3[0]);
      if ( HIDWORD(BugCheckParameter3[1]) - HIDWORD(BugCheckParameter3[0]) > v36 )
        v36 = HIDWORD(BugCheckParameter3[1]) - HIDWORD(BugCheckParameter3[0]);
      if ( v36 < v37 )
        v37 = v36;
      if ( v37 != v38 )
      {
        v39 = HIDWORD(v94);
        HIDWORD(BugCheckParameter3[0]) = v39 - EngMulDiv(HIDWORD(v94) - v98.top, v37, v38);
        HIDWORD(BugCheckParameter3[1]) = HIDWORD(BugCheckParameter3[0]) + v37;
      }
      MonitorRectForWindow = (struct tagRECT *)GetMonitorRectForWindow(
                                                 (__m128i *)&v95,
                                                 v89,
                                                 *((const struct tagWND **)this + 2));
      v41 = (const struct tagWND *)*((_QWORD *)this + 2);
      v92 = *MonitorRectForWindow;
      v95 = (struct tagRECT)*GetMonitorRectForWindow((__m128i *)&v95, v91, v41);
      if ( (unsigned int)IsNewMonitorRectMostOccupied((const struct tagRECT *)BugCheckParameter3, &v92, &v95) )
      {
        *a2 = *(struct tagRECT *)BugCheckParameter3;
LABEL_76:
        v7 = v89;
        goto LABEL_77;
      }
    }
    v7 = v91;
    v89 = v91;
  }
LABEL_77:
  if ( v7 == *((_QWORD *)this + 27) || !v7 )
    return 0LL;
  *((_QWORD *)this + 27) = v7;
  if ( v91 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v66 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v66 = 0;
    }
    v88 = v66;
    v90 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v66 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v67 = *(_DWORD **)(v7 + 40);
      v68 = v67[10];
      v69 = v67[9];
      v70 = v67[8];
      LODWORD(v93) = v67[7];
      v71 = *(_DWORD **)(v91 + 40);
      v72 = v71[10];
      v73 = v71[9];
      v74 = v71[8];
      v75 = v71[7];
      v76 = W32GetUserSessionState(v71, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v77) = v90;
      LOBYTE(v78) = v88;
      WPP_RECORDER_AND_TRACE_SF_dddddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v78,
        v77,
        *(_QWORD *)(v76 + 69152),
        4,
        1,
        31,
        (__int64)&WPP_1438f2a5ce8b301fefff07164e1e1908_Traceguids,
        v75,
        v74,
        v73,
        v72,
        v93,
        v70,
        v69,
        v68);
      v8 = 0;
    }
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v79 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v79 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    v8 = 1;
  if ( v79 || v8 )
  {
    top = v96->top;
    v81 = v96->bottom;
    left = v96->left;
    v83 = v96->right;
    v84 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v85) = v8;
    LOBYTE(v86) = v79;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v86,
      v85,
      *(_QWORD *)(v84 + 69152),
      5,
      1,
      32,
      (__int64)&WPP_1438f2a5ce8b301fefff07164e1e1908_Traceguids,
      left,
      top,
      v83,
      v81,
      v83 - left,
      v81 - top);
  }
  return 1LL;
}
