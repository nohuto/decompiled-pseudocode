/*
 * XREFs of ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402ED554
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x1400305B4 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140046914 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     PWInsertAfter @ 0x140048268 (PWInsertAfter.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x140049970 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     _MonitorFromPoint @ 0x14008A650 (_MonitorFromPoint.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     InternalBeginDeferWindowPos @ 0x140179454 (InternalBeginDeferWindowPos.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z @ 0x1401B7DA0 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ @ 0x1401EE9DC (--1-$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ.c)
 *     ??1DwmNotifyMoveReason@@QEAA@XZ @ 0x14025A64C (--1DwmNotifyMoveReason@@QEAA@XZ.c)
 *     ?MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402E805C (-MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall AdvancedWindowPos::xxxUpdatePosAndStateForAction(
        __int64 a1,
        struct tagWND *a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned __int8 a6,
        ULONG_PTR a7,
        char a8,
        struct tagRECT *a9,
        __int64 a10)
{
  struct tagWND *v10; // rsi
  int v12; // r15d
  int v13; // eax
  int v14; // r13d
  char v15; // bl
  __int64 v16; // rdx
  int v17; // r14d
  char v18; // si
  char v19; // di
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  __int64 v23; // rdx
  bool v24; // cl
  struct tagRECT *v25; // r15
  bool v26; // al
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdi
  _OWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  char v36; // r15
  char v37; // r14
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  __int64 v41; // rdx
  bool v42; // si
  __int64 v43; // rax
  int v44; // edx
  int v45; // r8d
  __int64 v46; // r13
  char v47; // r15
  char v48; // si
  __int64 v49; // rax
  int v50; // edx
  int v51; // r8d
  struct tagMONITOR *v52; // rsi
  __int64 v53; // rax
  int *v54; // rbx
  int v55; // eax
  char v56; // r15
  char v57; // si
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  __int16 v61; // [rsp+30h] [rbp-A9h]
  __int16 v62; // [rsp+30h] [rbp-A9h]
  int v63; // [rsp+50h] [rbp-89h]
  unsigned int v64; // [rsp+50h] [rbp-89h]
  struct tagRECT v67; // [rsp+68h] [rbp-71h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+78h] [rbp-61h] BYREF
  __int64 v69; // [rsp+88h] [rbp-51h] BYREF
  __int16 v70; // [rsp+90h] [rbp-49h]
  ULONG_PTR v71[2]; // [rsp+98h] [rbp-41h] BYREF
  struct tagMONITOR *v72; // [rsp+A8h] [rbp-31h] BYREF
  ULONG_PTR v73; // [rsp+B0h] [rbp-29h]
  __int64 v74; // [rsp+B8h] [rbp-21h]
  int v75; // [rsp+C0h] [rbp-19h]
  char v76; // [rsp+C4h] [rbp-15h]
  __int128 v77; // [rsp+C8h] [rbp-11h]

  v10 = (struct tagWND *)a1;
  v12 = (int)a2;
  BugCheckParameter3[0] = a7;
  v13 = *(_DWORD *)(a10 + 4);
  v69 = a1;
  v14 = v13 & 0x20000;
  v63 = a4;
  v70 = 0;
  v15 = 1;
  if ( (v13 & 0x1000) != 0 )
  {
    *(_DWORD *)(a1 + 380) |= 0x200u;
    HIBYTE(v70) = 1;
  }
  if ( a3 == 3 )
  {
    if ( !v14 )
    {
      *(_DWORD *)(a1 + 380) |= 0x200000u;
      LOBYTE(v70) = 1;
    }
    AdvancedWindowPos::MarkWindowAsArranged((AdvancedWindowPos *)a1, a2);
    if ( !v12 )
      CHECKPOINT::Restore(v10, a9);
  }
  if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline()
    || (*(_DWORD *)(a10 + 4) & 1) == 0 )
  {
    v17 = a5;
  }
  else
  {
    v63 = a4 | 0x400000;
    v17 = a5 | 0x100;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v18 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v19 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v19 = 0;
    }
    if ( v18 || v19 )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
      LOBYTE(v21) = v19;
      LOBYTE(v22) = v18;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(UserSessionState + 69152),
        5,
        4,
        87,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
    v10 = (struct tagWND *)a1;
  }
  v23 = a3;
  v24 = a3 != v12 && (a3 != 3 || v12);
  v25 = (struct tagRECT *)BugCheckParameter3[0];
  v26 = a3 == 1 && (BugCheckParameter3[0] || a8);
  if ( v24 || v26 )
  {
    if ( !v14 )
      v17 |= 0x10000u;
    v74 = *(_QWORD *)(a10 + 32);
    v73 = 0LL;
    v75 = 0;
    v76 = 0;
    v77 = 0LL;
    if ( BugCheckParameter3[0] )
    {
      v73 = BugCheckParameter3[0];
      if ( a3 == 3 )
      {
        v17 |= 8u;
        if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
          v17 |= 0x800000u;
        goto LABEL_78;
      }
      v17 |= 0x200000u;
    }
    else if ( a8 )
    {
      if ( !a3 )
      {
        v17 |= 8u;
        v73 = (ULONG_PTR)a9;
        goto LABEL_78;
      }
LABEL_112:
      if ( a3 != 3 )
      {
        if ( a3 == 1 )
        {
          v64 = 3;
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || (v56 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            v56 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v57 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
          {
            v57 = 0;
          }
          if ( v56 || v57 )
          {
            v58 = W32GetUserSessionState(WPP_GLOBAL_Control, a3);
            LOBYTE(v59) = v57;
            LOBYTE(v60) = v56;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v60,
              v59,
              *(_QWORD *)(v58 + 69152),
              5,
              4,
              89,
              (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
          }
          v17 |= 2u;
        }
        else
        {
          v64 = 6;
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || (v47 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            v47 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v48 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
          {
            v48 = 0;
          }
          if ( v47 || v48 )
          {
            v49 = W32GetUserSessionState(WPP_GLOBAL_Control, a3);
            v62 = 90;
            goto LABEL_88;
          }
        }
LABEL_89:
        v71[1] = 0LL;
        v52 = 0LL;
        v71[0] = -1LL;
        if ( a3 != 2 )
        {
          if ( (*(_DWORD *)a10 & 0x100) != 0 )
          {
            v53 = MonitorFromPoint(*(_QWORD *)(a10 + 100), 2LL, 0x12u);
LABEL_92:
            v52 = (struct tagMONITOR *)v53;
            goto LABEL_93;
          }
          if ( BugCheckParameter3[0] )
          {
            v53 = MonitorFromRect((__int32 *)BugCheckParameter3[0], 2LL, 0x12u);
            goto LABEL_92;
          }
          if ( a3 == 1 )
          {
            v46 = a1;
            if ( a8 )
              v52 = (struct tagMONITOR *)MonitorFromRect(&a9->left, 2LL, *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL));
            goto LABEL_94;
          }
        }
LABEL_93:
        v46 = a1;
LABEL_94:
        if ( (*(_DWORD *)(a10 + 4) & 0x200) != 0 )
        {
          v52 = (struct tagMONITOR *)MonitorFromPoint(*(_QWORD *)(a10 + 100), 2LL, 0x12u);
          if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
            v17 |= 0x80u;
        }
        if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() && v52 )
          v17 |= 0x80u;
        Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)v71, (__int64)v52);
        v72 = v52;
        v54 = (int *)(a10 + 132);
        if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
          v75 = *v54;
        xxxMinMaximizeEx(v46, v64, v17, &v72);
        if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() && v76 )
        {
          *(_DWORD *)a10 |= 0x400u;
          v55 = v75;
          *(_DWORD *)(a10 + 108) |= 2u;
          *v54 = v55;
        }
        Win32HMThreadLockBase<tagMONITOR,1,1>::~Win32HMThreadLockBase<tagMONITOR,1,1>(v71);
        goto LABEL_106;
      }
LABEL_78:
      v64 = 9;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v47 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v47 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v48 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v48 = 0;
      }
      if ( v47 || v48 )
      {
        v49 = W32GetUserSessionState(WPP_GLOBAL_Control, v23);
        v62 = 88;
LABEL_88:
        LOBYTE(v51) = v48;
        LOBYTE(v50) = v47;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v50,
          v51,
          *(_QWORD *)(v49 + 69152),
          5,
          4,
          v62,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
        goto LABEL_89;
      }
      goto LABEL_89;
    }
    if ( !a3 )
      goto LABEL_78;
    goto LABEL_112;
  }
  v27 = PWInsertAfter(*(_QWORD *)(a10 + 32));
  v29 = v27;
  BugCheckParameter3[0] = -1LL;
  BugCheckParameter3[1] = 0LL;
  if ( (unsigned __int64)(v27 - 2) <= 0xFFFFFFFFFFFFFFFBuLL )
    Win32HMThreadLockBase<tagWND,0,1>::ManualLock<void>(BugCheckParameter3, v27);
  v67 = *a9;
  if ( v25 )
    v67 = *v25;
  v30 = InternalBeginDeferWindowPos(1LL, v28);
  if ( !v30
    || (v32 = _DeferWindowPos(
                (__int64)v30,
                (__int64)v10,
                v29,
                v67.left,
                v67.top,
                v67.right - v67.left,
                v67.bottom - v67.top,
                v63,
                0),
        (v33 = v32) == 0) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v15 = 0;
    }
    v42 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v15 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_71;
    v43 = W32GetUserSessionState(WPP_GLOBAL_Control, v31);
    v61 = 93;
    goto LABEL_70;
  }
  *(_DWORD *)(*(_QWORD *)(v32 + 40) + 156LL) = *(_DWORD *)(*(_QWORD *)(v32 + 40) + 156LL) & 0xFFFFFBFF | (a6 << 10);
  if ( (*(_DWORD *)(a10 + 4) & 0x200) != 0 )
  {
    if ( MonitorFromPoint(*(_QWORD *)(a10 + 100), 2LL, 0x12u) )
      v35 = *(_QWORD *)MonitorFromPoint(*(_QWORD *)(a10 + 100), 2LL, 0x12u);
    else
      v35 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v33 + 40) + 128LL) = v35;
    *(_DWORD *)(*(_QWORD *)(v33 + 40) + 156LL) |= 0x200u;
    *(_DWORD *)(*(_QWORD *)(v33 + 40) + 32LL) |= 0x80000u;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v36 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v36 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v37 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v37 = 0;
    }
    if ( v36 || v37 )
    {
      v38 = W32GetUserSessionState(WPP_GLOBAL_Control, v34);
      LOBYTE(v39) = v37;
      LOBYTE(v40) = v36;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v40,
        v39,
        *(_QWORD *)(v38 + 69152),
        5,
        4,
        91,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
  }
  if ( !(unsigned int)xxxEndDeferWindowPosEx((struct tagSMWP *)v33, 0) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v15 = 0;
    }
    v42 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v15 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_71;
    v43 = W32GetUserSessionState(WPP_GLOBAL_Control, v41);
    v61 = 92;
LABEL_70:
    LOBYTE(v45) = v42;
    LOBYTE(v44) = v15;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v44,
      v45,
      *(_QWORD *)(v43 + 69152),
      2,
      4,
      v61,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
LABEL_71:
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
    goto LABEL_109;
  }
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  v46 = a1;
LABEL_106:
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() && a3 == 3 )
    *(_DWORD *)(v46 + 380) |= 0x4000000u;
LABEL_109:
  DwmNotifyMoveReason::~DwmNotifyMoveReason((DwmNotifyMoveReason *)&v69);
}
