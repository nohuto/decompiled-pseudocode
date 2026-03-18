/*
 * XREFs of ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14008E350
 * Callers:
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x14008982C (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 *     ?xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14008E2E8 (-xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140038250 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140039400 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140047DD0 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     ?DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x14008C6E8 (-DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x14008DB28 (-DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14008F290 (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 *     ?IsCompositionInputWindowForHitTest@@YA_NPEAUtagWND@@@Z @ 0x14008FA04 (-IsCompositionInputWindowForHitTest@@YA_NPEAUtagWND@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x14012D424 (IsToplevelWindowDesktopComposed.c)
 *     DwmSyncHitTestQuery @ 0x14014C4C4 (DwmSyncHitTestQuery.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddd @ 0x140199D38 (WPP_RECORDER_AND_TRACE_SF_qddd.c)
 *     IsMessageOnlyWindow @ 0x14019D910 (IsMessageOnlyWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     Feature_HtTransparentDisabledFix__private_IsEnabledDeviceUsageNoInline @ 0x1402271BC (Feature_HtTransparentDisabledFix__private_IsEnabledDeviceUsageNoInline.c)
 *     SizeBoxHwnd @ 0x140258834 (SizeBoxHwnd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddq @ 0x14025E018 (WPP_RECORDER_AND_TRACE_SF_ddq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddqd @ 0x140266964 (WPP_RECORDER_AND_TRACE_SF_ddqd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddds @ 0x14028EE74 (WPP_RECORDER_AND_TRACE_SF_ddds.c)
 */

HWND __fastcall xxxDCEWindowHitTestIndirect(
        struct tagWND *a1,
        struct tagPOINT a2,
        char a3,
        struct tagDCE_WINDOW_HIT_TEST_ARGS *a4)
{
  struct tagWND *v6; // r14
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v8; // rdx
  char v9; // si
  char v10; // r12
  char v11; // r15
  struct tagWND *v12; // rdx
  char v13; // r12
  int v14; // r13d
  int v15; // ebx
  struct tagWND *v16; // r8
  char v17; // r15
  __int64 v18; // rdx
  bool v19; // bl
  bool v20; // bl
  struct tagWND *v22; // rax
  struct tagDCE_WINDOW_HIT_TEST_ARGS *v23; // r15
  __int64 v24; // rdx
  unsigned __int64 v25; // r9
  struct tagWND *v26; // r8
  const struct _D3DMATRIX *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  struct tagTHREADINFO *v34; // rax
  __int64 v35; // rdx
  char v36; // r15
  __int64 v37; // rcx
  __int64 v38; // r9
  struct tagDCE_WINDOW_HIT_TEST_ARGS *v39; // r8
  int *v40; // rax
  LONG y; // ecx
  _BYTE *v42; // rdx
  bool v43; // di
  __int64 v44; // rdx
  char v45; // r15
  char v46; // bl
  struct tagTHREADINFO *v47; // rbx
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  bool v51; // di
  ULONG_PTR *v52; // rcx
  __int64 v53; // rax
  int v54; // edx
  int v55; // r8d
  struct tagTHREADINFO *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  char v60; // bl
  void *v61; // r15
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rdx
  char v67; // r15
  int v68; // r13d
  int v69; // edx
  struct tagTHREADINFO *v70; // rbx
  __int64 UserSessionState; // rax
  int v72; // r8d
  int v73; // edx
  char v74; // bl
  __int64 v75; // rax
  int v76; // edx
  int v77; // r8d
  const char *v78; // rbx
  __int64 v79; // rax
  int v80; // r8d
  int v81; // edx
  struct tagTHREADINFO *v82; // rbx
  __int64 v83; // rax
  int v84; // r8d
  int v85; // edx
  struct tagTHREADINFO *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rax
  bool v89; // di
  struct tagTHREADINFO *v90; // rbx
  __int64 v91; // rax
  int v92; // r8d
  int v93; // edx
  struct tagTHREADINFO *v94; // rbx
  __int64 v95; // rax
  int v96; // r8d
  int v97; // edx
  __int64 v98; // rax
  int v99; // r8d
  int v100; // edx
  int v101; // [rsp+28h] [rbp-69h]
  int v102; // [rsp+28h] [rbp-69h]
  int v103; // [rsp+30h] [rbp-61h]
  int v104; // [rsp+30h] [rbp-61h]
  int v105; // [rsp+38h] [rbp-59h]
  __int16 v106; // [rsp+38h] [rbp-59h]
  int v107; // [rsp+38h] [rbp-59h]
  __int16 v108; // [rsp+38h] [rbp-59h]
  int v109; // [rsp+40h] [rbp-51h]
  int v110; // [rsp+40h] [rbp-51h]
  struct tagPOINT v111; // [rsp+68h] [rbp-29h] BYREF
  struct tagWND *v112; // [rsp+70h] [rbp-21h]
  struct tagWND *v113; // [rsp+78h] [rbp-19h]
  struct tagPOINT v114; // [rsp+80h] [rbp-11h] BYREF
  __int64 v115; // [rsp+88h] [rbp-9h] BYREF
  int v116; // [rsp+90h] [rbp-1h] BYREF
  unsigned int v117; // [rsp+94h] [rbp+3h]
  ULONG_PTR v118[2]; // [rsp+98h] [rbp+7h] BYREF
  ULONG_PTR BugCheckParameter3[8]; // [rsp+A8h] [rbp+17h] BYREF
  char v120; // [rsp+F8h] [rbp+67h]

  v6 = a1;
  if ( a1 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
    v8 = *((unsigned int *)a4 + 8);
    v117 = CurrentThreadDpiAwarenessContext;
    v114 = a2;
    if ( (v8 & 2) != 0 )
      LogicalToPhysicalDPIPoint(&v114, &v114, CurrentThreadDpiAwarenessContext, 0LL);
    v9 = 1;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x4000) == 0
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
      v70 = *(struct tagTHREADINFO **)v6;
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
      LOBYTE(v72) = v11;
      LOBYTE(v73) = v10;
      WPP_RECORDER_AND_TRACE_SF_ddq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v73,
        v72,
        *(_QWORD *)(UserSessionState + 69152),
        5,
        15,
        10,
        (__int64)&WPP_1438f2a5ce8b301fefff07164e1e1908_Traceguids,
        v114.x,
        v114.y,
        (char)v70);
    }
    v12 = (struct tagWND *)*((_QWORD *)v6 + 13);
    v13 = 0;
    v14 = -2;
    v113 = v12;
    v15 = 0;
    v111 = v114;
    v16 = 0LL;
    v112 = 0LL;
    v17 = 0;
    v120 = 0;
    while ( v15 )
    {
      if ( v15 == 1 || v15 == 2 )
      {
        LODWORD(v115) = -2;
        if ( IsCompositionInputWindowForHitTest(v6) )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x4000) == 0
            || (v45 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            v45 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v46 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
          {
            v46 = 0;
          }
          if ( v45 || v46 )
          {
            v53 = W32GetUserSessionState(WPP_GLOBAL_Control, v31);
            v106 = 11;
            goto LABEL_126;
          }
        }
        else
        {
          if ( *((struct tagTHREADINFO **)v6 + 2) == PtiCurrent(v32) )
          {
            if ( !(unsigned int)IsToplevelWindowDesktopComposed(v6)
              || (*(_BYTE *)(*((_QWORD *)v6 + 5) + 26LL) & 8) == 0
              || v15 == 2 )
            {
              goto LABEL_53;
            }
            v56 = PtiCurrent(v33);
            Win32HM_LockIntoThread<1>((__int64)v56, (__int64)v6, (__int64 *)v118);
            v59 = ReferenceDwmApiPort(v58, v57);
            v116 = 1;
            v60 = 0;
            v61 = (void *)v59;
            v64 = W32GetUserSessionState(v63, v62);
            if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(v64 + 16)) == 1 )
            {
              v60 = 1;
              LeaveMitRitHazardCrit();
            }
            UserSessionSwitchLeaveCrit(v65);
            DwmSyncHitTestQuery(
              v61,
              *((_QWORD *)a4 + 1),
              (LOWORD(v111.y) << 16) | LOWORD(v111.x),
              -2,
              (__int64)&v115,
              (__int64)&v116);
            EnterCrit(1LL, 0LL);
            if ( v60 )
              EnterMitRitHazardCrit();
            if ( !Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v118)
              || (*(_BYTE *)(_HMPheFromObject(v6) + 25) & 1) != 0 )
            {
              if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x4000) == 0
                || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
              {
                v9 = 0;
              }
              v89 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                v90 = *(struct tagTHREADINFO **)v6;
                v91 = W32GetUserSessionState(WPP_GLOBAL_Control, v66);
                LOBYTE(v92) = v89;
                LOBYTE(v93) = v9;
                WPP_RECORDER_AND_TRACE_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v93,
                  v92,
                  *(_QWORD *)(v91 + 69152),
                  3,
                  15,
                  15,
                  (__int64)&WPP_1438f2a5ce8b301fefff07164e1e1908_Traceguids,
                  (char)v90);
              }
              v52 = v118;
              goto LABEL_117;
            }
            if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x4000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
            {
              v13 = 1;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || (v67 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
            {
              v67 = 0;
            }
            v68 = v116;
            v115 = (unsigned int)v115;
            if ( v13 || v67 )
            {
              v78 = "no";
              if ( !v116 )
                v78 = "yes";
              v79 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
              LOBYTE(v80) = v67;
              LOBYTE(v81) = v13;
              WPP_RECORDER_AND_TRACE_SF_ddds(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v81,
                v80,
                *(_QWORD *)(v79 + 69152),
                v102,
                v104,
                v107,
                v110,
                v111.x,
                v111.y,
                v115,
                (__int64)v78);
            }
            Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v118);
            v13 = 0;
            if ( v68 )
            {
              v14 = v115;
            }
            else
            {
LABEL_53:
              v34 = PtiCurrent(v33);
              Win32HM_LockIntoThread<1>((__int64)v34, (__int64)v6, (__int64 *)BugCheckParameter3);
              v14 = xxxSendTransformableMessageTimeout(
                      (struct tagTHREADINFO **)v6,
                      132LL,
                      0LL,
                      LOWORD(v111.x) | (LOWORD(v111.y) << 16),
                      0,
                      0,
                      0LL,
                      1u,
                      0);
              if ( !Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3)
                || (*(_BYTE *)(_HMPheFromObject(v6) + 25) & 1) != 0 )
              {
                if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                  || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x4000) == 0
                  || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
                {
                  v9 = 0;
                }
                v51 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  v94 = *(struct tagTHREADINFO **)v6;
                  v95 = W32GetUserSessionState(WPP_GLOBAL_Control, v35);
                  LOBYTE(v96) = v51;
                  LOBYTE(v97) = v9;
                  WPP_RECORDER_AND_TRACE_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v97,
                    v96,
                    *(_QWORD *)(v95 + 69152),
                    3,
                    15,
                    17,
                    (__int64)&WPP_1438f2a5ce8b301fefff07164e1e1908_Traceguids,
                    (char)v94);
                }
                v52 = BugCheckParameter3;
LABEL_117:
                Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v52);
                return 0LL;
              }
              if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x4000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
              {
                v13 = 1;
              }
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                || (v36 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
              {
                v36 = 0;
              }
              if ( v13 || v36 )
              {
                v82 = *(struct tagTHREADINFO **)v6;
                v83 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
                LOBYTE(v84) = v36;
                LOBYTE(v85) = v13;
                WPP_RECORDER_AND_TRACE_SF_ddqd(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v85,
                  v84,
                  *(_QWORD *)(v83 + 69152),
                  v101,
                  v103,
                  v105,
                  v109,
                  v111.x,
                  v111.y,
                  (char)v82,
                  v14);
              }
              Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3);
              v13 = 0;
            }
            if ( v14 != -1 )
            {
LABEL_62:
              v15 = 4;
              goto LABEL_37;
            }
            v17 = 1;
            v120 = 1;
            v15 = 3;
            if ( (unsigned int)((__int64 (*)(void))Feature_HtTransparentDisabledFix__private_IsEnabledDeviceUsageNoInline)() )
              v14 = -2;
LABEL_16:
            v16 = v112;
LABEL_17:
            v12 = v113;
            goto LABEL_18;
          }
          if ( (unsigned int)((__int64 (*)(void))Feature_HtTransparentDisabledFix__private_IsEnabledDeviceUsageNoInline)() )
          {
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x4000) == 0
              || (v45 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
            {
              v45 = 0;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || (v46 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
            {
              v46 = 0;
            }
            if ( v45 || v46 )
            {
              v53 = W32GetUserSessionState(WPP_GLOBAL_Control, v44);
              v106 = 12;
              goto LABEL_126;
            }
          }
          else
          {
            if ( v17 && (*((_DWORD *)a4 + 8) & 8) != 0 )
            {
              if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x4000) == 0
                || (v74 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
              {
                v74 = 0;
              }
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                || !*((_WORD *)WPP_GLOBAL_Control + 36) )
              {
                v9 = 0;
              }
              if ( v74 || v9 )
              {
                v75 = W32GetUserSessionState(WPP_GLOBAL_Control, v44);
                v108 = 13;
LABEL_169:
                LOBYTE(v77) = v9;
                LOBYTE(v76) = v74;
                WPP_RECORDER_AND_TRACE_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v76,
                  v77,
                  *(_QWORD *)(v75 + 69152),
                  5,
                  15,
                  v108,
                  (__int64)&WPP_1438f2a5ce8b301fefff07164e1e1908_Traceguids);
                return 0LL;
              }
              return 0LL;
            }
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x4000) == 0
              || (v45 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
            {
              v45 = 0;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || (v46 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
            {
              v46 = 0;
            }
            if ( !v45 && !v46 )
              goto LABEL_97;
            v53 = W32GetUserSessionState(WPP_GLOBAL_Control, v44);
            v106 = 14;
LABEL_126:
            LOBYTE(v55) = v46;
            LOBYTE(v54) = v45;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v54,
              v55,
              *(_QWORD *)(v53 + 69152),
              5,
              15,
              v106,
              (__int64)&WPP_1438f2a5ce8b301fefff07164e1e1908_Traceguids);
          }
        }
LABEL_97:
        v14 = 1;
        goto LABEL_62;
      }
      if ( v15 != 3 )
      {
        if ( (unsigned int)Feature_HtTransparentDisabledFix__private_IsEnabledDeviceUsageNoInline(
                             (unsigned int)(v15 - 3),
                             v12,
                             v16)
          && v17 )
        {
          v86 = PtiCurrent(v37);
          v39 = a4;
          if ( *((struct tagTHREADINFO **)v6 + 2) != v86 && (*((_DWORD *)a4 + 8) & 8) != 0 )
          {
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x4000) == 0
              || (v74 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
            {
              v74 = 0;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || !*((_WORD *)WPP_GLOBAL_Control + 36) )
            {
              v9 = 0;
            }
            if ( v74 || v9 )
            {
              v75 = W32GetUserSessionState(WPP_GLOBAL_Control, v87);
              v108 = 19;
              goto LABEL_169;
            }
            return 0LL;
          }
        }
        else
        {
          v39 = a4;
        }
        v40 = (int *)*((_QWORD *)v39 + 3);
        if ( v40 )
        {
          *v40 = v14;
          *((_BYTE *)v39 + 36) = 1;
        }
        y = v111.y;
        if ( v111 != v114 )
        {
          y = LOWORD(v111.x);
          v69 = LOWORD(v111.x) | (LOWORD(v111.y) << 16);
          *((_BYTE *)v39 + 48) = 1;
          *((_QWORD *)v39 + 2) = v69;
        }
        v42 = (_BYTE *)*((_QWORD *)v6 + 5);
        LOBYTE(y) = ~v42[25];
        if ( v14 == ((((unsigned __int8)v42[26] ^ (unsigned int)y) >> 6) & 1) + 16 && (v42[30] & 4) == 0 )
        {
          v88 = SizeBoxHwnd(v6, v42, v39, v38);
          if ( v88 )
            v6 = (struct tagWND *)v88;
        }
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x4000) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v9 = 0;
        }
        v43 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v47 = *(struct tagTHREADINFO **)v6;
          v48 = W32GetUserSessionState(WPP_GLOBAL_Control, v42);
          LOBYTE(v49) = v43;
          LOBYTE(v50) = v9;
          WPP_RECORDER_AND_TRACE_SF_qddd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v50,
            v49,
            *(_QWORD *)(v48 + 69152),
            4,
            15,
            20,
            (__int64)&WPP_1438f2a5ce8b301fefff07164e1e1908_Traceguids,
            (char)v47,
            v111.x,
            v111.y,
            v14);
        }
        return *(HWND *)v6;
      }
      if ( *((_QWORD *)v6 + 27) || v6 == v16 )
      {
        v111 = v114;
        RestoreLogicalPoint(*((struct tagWND **)v6 + 13), &v111, a4);
        v12 = v113;
      }
      v22 = (struct tagWND *)*((_QWORD *)v6 + 11);
      v16 = 0LL;
      v112 = 0LL;
      if ( v22 )
      {
        v15 = 0;
        v6 = v22;
        if ( *((struct tagWND **)v22 + 13) == v12 && a3 )
        {
LABEL_19:
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x4000) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
          {
            v9 = 0;
          }
          v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v98 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
            LOBYTE(v99) = v20;
            LOBYTE(v100) = v9;
            WPP_RECORDER_AND_TRACE_SF_Dd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v100,
              v99,
              *(_QWORD *)(v98 + 69152),
              4,
              15,
              21,
              (__int64)&WPP_1438f2a5ce8b301fefff07164e1e1908_Traceguids,
              v114.x,
              v114.y);
          }
          return 0LL;
        }
      }
      else
      {
        v6 = (struct tagWND *)*((_QWORD *)v6 + 13);
        v15 = 2;
      }
LABEL_18:
      if ( v6 == v12 )
        goto LABEL_19;
    }
    v19 = IsCompositionInputWindowForHitTest(v6);
    if ( v19 )
    {
      v23 = a4;
      if ( (*((_DWORD *)a4 + 8) & 4) == 0
        || !(unsigned int)IsMessageOnlyWindow(v6) && (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 0x10) == 0 )
      {
        goto LABEL_36;
      }
    }
    else
    {
      if ( (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 0x10) == 0 )
      {
        v15 = 3;
        goto LABEL_16;
      }
      v23 = a4;
    }
    if ( (unsigned int)CoreWindowProp::IsComponent(v6, v18) || !IsWindowCloaked(v6) )
    {
      if ( (*((_DWORD *)v23 + 8) & 2) != 0
        && IsTopLevelWindow((__int64)v6)
        && (((unsigned __int16)(v117 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*((_QWORD *)v6 + 5) + 288LL) >> 8)) & 0x1FF) == 0 )
      {
        v25 = (unsigned __int64)a2;
        v111 = a2;
        v26 = v6;
        v112 = v6;
      }
      else
      {
        v25 = (unsigned __int64)v111;
        v26 = v112;
      }
      if ( !v19 )
      {
        v27 = (const struct _D3DMATRIX *)*((_QWORD *)v6 + 27);
        if ( !v27 || v6 == v26 )
        {
          if ( !PtInRect((_DWORD *)(*((_QWORD *)v6 + 5) + 88LL), v25) )
          {
            v17 = v120;
            v15 = 3;
            goto LABEL_17;
          }
        }
        else
        {
          if ( !DCEHitTestWindow(
                  (const struct tagRECT *)(*((_QWORD *)v6 + 5) + 88LL),
                  v27,
                  &v111,
                  *((const struct _SUBPIXELS **)v23 + 5)) )
            goto LABEL_36;
          v25 = (unsigned __int64)v111;
        }
      }
      v28 = *(_QWORD *)(*((_QWORD *)v6 + 5) + 168LL);
      if ( v28 )
      {
        if ( !(unsigned int)GrePtInRegion(v28, (unsigned int)v25, (unsigned int)v111.y) )
          goto LABEL_36;
        v25 = (unsigned __int64)v111;
      }
      v29 = *((_QWORD *)v6 + 5);
      if ( (*(_BYTE *)(v29 + 26) & 8) == 0
        || (*(_DWORD *)(v29 + 232) & 2) != 0
        || DCELayerHitTest(v6, (struct tagPOINT)v25) )
      {
        if ( !(unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(v6, v24) || (*((_DWORD *)v23 + 8) & 1) == 0 )
        {
          if ( !v19 )
          {
            v30 = *((_QWORD *)v6 + 5);
            if ( (*(_BYTE *)(v30 + 31) & 0x20) == 0 && PtInRect((_DWORD *)(v30 + 104), *(_QWORD *)&v111) )
            {
              v16 = v112;
              v17 = v120;
              v12 = v113;
              if ( *((_QWORD *)v6 + 14) )
              {
                v6 = (struct tagWND *)*((_QWORD *)v6 + 14);
                v15 = 0;
              }
              else
              {
                v15 = 2;
              }
              goto LABEL_18;
            }
          }
          v15 = 1;
LABEL_37:
          v17 = v120;
          goto LABEL_16;
        }
        if ( v19 || (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 0xC0) != 0x40 )
          goto LABEL_62;
      }
    }
LABEL_36:
    v15 = 3;
    goto LABEL_37;
  }
  return 0LL;
}
