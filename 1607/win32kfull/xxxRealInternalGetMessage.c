/*
 * XREFs of xxxRealInternalGetMessage @ 0x1C0080E80
 * Callers:
 *     NtUserPeekMessage @ 0x1C007F4F0 (NtUserPeekMessage.c)
 *     NtUserGetMessage @ 0x1C0080190 (NtUserGetMessage.c)
 *     xxxInternalGetMessage @ 0x1C00DF5A8 (xxxInternalGetMessage.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00DFFA0 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserRealInternalGetMessage @ 0x1C0106A10 (NtUserRealInternalGetMessage.c)
 *     xxxMNLoop @ 0x1C0141414 (xxxMNLoop.c)
 * Callees:
 *     IsShellFrameHangResilient @ 0x1C0006E74 (IsShellFrameHangResilient.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C0006EE0 (IsAdaptiveQueueDetachExempted.c)
 *     FreeHidData @ 0x1C000A1B0 (FreeHidData.c)
 *     SlowAppThreadInShellFrame @ 0x1C000C438 (SlowAppThreadInShellFrame.c)
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C000D13C (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C000D1EC (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     xxxPointerCallHook @ 0x1C000D47C (xxxPointerCallHook.c)
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     PhkFirstGlobalValid @ 0x1C0057C74 (PhkFirstGlobalValid.c)
 *     xxxDoPaint @ 0x1C005B83C (xxxDoPaint.c)
 *     zzzCalcStartCursorHide @ 0x1C005C530 (zzzCalcStartCursorHide.c)
 *     xxxCallCtfHook @ 0x1C007F1EC (xxxCallCtfHook.c)
 *     ?TimerStatistics@@YAXPEBUtagTIMER@@@Z @ 0x1C007F3E4 (-TimerStatistics@@YAXPEBUtagTIMER@@@Z.c)
 *     xxxReceiveMessage @ 0x1C007F630 (xxxReceiveMessage.c)
 *     StoreQMessage @ 0x1C0080C10 (StoreQMessage.c)
 *     CalcWakeMask @ 0x1C0082590 (CalcWakeMask.c)
 *     ?HandleProcessSpinning@@YAHXZ @ 0x1C00827E0 (-HandleProcessSpinning@@YAHXZ.c)
 *     xxxUpdateInputHangInfo @ 0x1C0082870 (xxxUpdateInputHangInfo.c)
 *     xxxSleepThread2 @ 0x1C0082990 (xxxSleepThread2.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0082AD0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C00831C0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     xxxCallHook2 @ 0x1C0083C30 (xxxCallHook2.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     HMValidateHandleNoRip @ 0x1C00A9D84 (HMValidateHandleNoRip.c)
 *     zzzReattachThreads @ 0x1C00DB9C8 (zzzReattachThreads.c)
 *     PhkNextValid @ 0x1C00EE6A8 (PhkNextValid.c)
 *     xxxDoSysExpunge @ 0x1C0109A1C (xxxDoSysExpunge.c)
 *     WaitMaskIncludesUserInput @ 0x1C01235E0 (WaitMaskIncludesUserInput.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C0125804 (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     _IsChild @ 0x1C012ED7C (_IsChild.c)
 *     FreeQEntry @ 0x1C0135788 (FreeQEntry.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01470D4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     xxxClientCallDelegateThread @ 0x1C014A02C (xxxClientCallDelegateThread.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     _FreeTouchInputInfo @ 0x1C01D48A0 (_FreeTouchInputInfo.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01D82EC (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01D8950 (TryDetachShellFrame.c)
 *     ?IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x1C01F018C (-IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z.c)
 *     ?PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01F0AB4 (-PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01F0D18 (-UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01F1E50 (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 *     _FreeGestureInfo @ 0x1C01FB7F0 (_FreeGestureInfo.c)
 *     xxxClientCallDefaultInputHandler @ 0x1C020C764 (xxxClientCallDefaultInputHandler.c)
 *     ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x1C021F268 (-TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C0231C94 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0232668 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRealInternalGetMessage(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // r13
  int v13; // r9d
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // esi
  int v17; // r9d
  __int64 *v18; // r10
  unsigned int *v19; // r11
  __int64 v20; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v22; // ecx
  __int64 v23; // rcx
  unsigned int v24; // edx
  unsigned int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 GlobalValid; // rax
  unsigned __int64 v30; // rdx
  int v31; // ecx
  struct tagMSG *v32; // r14
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // r14d
  unsigned __int64 i; // rax
  int v38; // r8d
  int v39; // edi
  __int16 v40; // bx
  __int64 v41; // rdi
  int v42; // eax
  unsigned __int64 v43; // rcx
  unsigned int v44; // eax
  unsigned int v45; // ebx
  unsigned int v46; // ecx
  int v47; // ebx
  __int64 v48; // rbx
  __int64 v49; // rdx
  struct _KEVENT *v50; // rcx
  __int64 v51; // rax
  struct _KEVENT *v52; // rcx
  int v53; // eax
  __int64 v54; // r9
  __int64 j; // r8
  __int64 v56; // rdi
  __int64 v57; // rdx
  __int64 *v58; // r8
  int v59; // eax
  LARGE_INTEGER *v60; // rax
  LARGE_INTEGER *v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // r8
  LARGE_INTEGER **v64; // rax
  __int64 v65; // rax
  __int64 v66; // rcx
  int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // rax
  int v70; // eax
  LONGLONG v71; // rax
  LARGE_INTEGER v72; // rcx
  DWORD v73; // r8d
  __int64 v74; // rdx
  __int64 v75; // r8
  _QWORD *v76; // rcx
  _QWORD *v78; // rax
  __int64 v79; // rdx
  _QWORD *v80; // rcx
  _QWORD *v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rdx
  unsigned int v84; // ebx
  int v85; // edi
  __int64 v86; // rcx
  __int64 v87; // rsi
  struct tagTHREADINFO *v88; // r14
  __int64 v89; // rax
  __int64 v90; // rax
  BOOL v91; // r14d
  int v92; // ebx
  int v93; // eax
  __int64 v94; // r8
  int v95; // eax
  __int64 v96; // r9
  __int64 v97; // rax
  unsigned int v98; // r10d
  int v99; // ecx
  __int64 v100; // rdx
  __int64 v101; // rcx
  int v102; // eax
  _QWORD **v103; // rsi
  _QWORD *v104; // rbx
  struct _LIST_ENTRY *Blink; // rdi
  struct tagQMSG *v106; // rbx
  int v107; // eax
  unsigned int v108; // edi
  int v109; // ecx
  struct tagTHREADINFO *v110; // rax
  __int64 v111; // rcx
  __int64 v112; // rax
  __int64 v113; // rcx
  int v114; // eax
  unsigned int v115; // ebx
  __int64 v116; // rbx
  __int64 v117; // rax
  int v118; // eax
  _DWORD *v119; // rdx
  enum SLEEP_STATUS *v120; // [rsp+20h] [rbp-138h]
  struct _QMSG_POSTCHAR_FLAGS *v121; // [rsp+28h] [rbp-130h]
  unsigned int v122; // [rsp+70h] [rbp-E8h]
  unsigned int v123; // [rsp+78h] [rbp-E0h]
  unsigned int v124; // [rsp+7Ch] [rbp-DCh]
  unsigned int v125; // [rsp+80h] [rbp-D8h]
  int v126; // [rsp+84h] [rbp-D4h] BYREF
  int v127; // [rsp+88h] [rbp-D0h]
  int v128; // [rsp+8Ch] [rbp-CCh]
  struct tagQMSG *v129; // [rsp+90h] [rbp-C8h] BYREF
  _DWORD v130[4]; // [rsp+98h] [rbp-C0h] BYREF
  unsigned int v131; // [rsp+A8h] [rbp-B0h]
  int v132; // [rsp+ACh] [rbp-ACh]
  __int128 v133; // [rsp+C0h] [rbp-98h]
  __int128 v134; // [rsp+D0h] [rbp-88h]
  __int128 v135; // [rsp+E0h] [rbp-78h]
  _QWORD v136[11]; // [rsp+100h] [rbp-58h] BYREF
  __int16 v138; // [rsp+168h] [rbp+10h]
  unsigned int v140; // [rsp+178h] [rbp+20h]

  v130[0] = 0;
  v125 = 0;
  v123 = 0;
  v124 = 0;
  v9 = 0;
  EtwTraceEndAppMessageProcessing(a6);
  if ( ((a2 + 1) & 0xFFFFFFFFFFFEFFFFuLL) == 0 )
  {
    a2 = 1LL;
LABEL_7:
    v11 = a2;
    v13 = 0;
    goto LABEL_8;
  }
  if ( a2 < 2 )
    goto LABEL_7;
  v10 = ValidateHwnd(a2);
  v11 = v10;
  if ( !v10 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
    EtwTraceBeginAppMessageProcessing(a6, 16LL, a1);
    return (unsigned int)-(a6 != 0);
  }
  v136[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v136;
  v136[1] = v10;
  ++*(_DWORD *)(v10 + 8);
  v13 = 1;
LABEL_8:
  v128 = v13;
  ++*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 8LL);
  if ( !a4 )
    a4 = -1;
  v140 = a4;
  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 400LL) + 12LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v16 = CalcWakeMask(a3, a4, HIWORD(a5));
  v122 = v16;
  v132 = v16 & 0x1C07;
  if ( (v16 & 0x1C07) != 0 )
  {
    v15 = *v18;
    v14 = (*v18 * (unsigned __int64)*v19) >> 24;
    *(_DWORD *)(gptiCurrent + 1264LL) = v14;
  }
  if ( (v16 & 7) != 7 )
  {
    if ( (v16 & 6) == 0 )
      goto LABEL_21;
    v15 = gptiCurrent;
    if ( !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) )
      goto LABEL_21;
  }
  if ( v17 )
  {
    if ( *(_QWORD *)(v11 + 16) == gptiCurrent )
    {
      v20 = v11;
LABEL_20:
      xxxUpdateInputHangInfo(v20, 1LL);
    }
  }
  else if ( !a2 )
  {
    v20 = 0LL;
    goto LABEL_20;
  }
LABEL_21:
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15, v14);
  v22 = *(_DWORD *)(CurrentProcessWin32Process + 12);
  if ( (v22 & 4) != 0 )
  {
    *(_DWORD *)(CurrentProcessWin32Process + 12) = v22 & 0xFFFFFFFB;
    zzzCalcStartCursorHide(0LL, 0);
  }
  v23 = *(_QWORD *)(gptiCurrent + 376LL);
  v24 = gcSysExpunge;
  if ( *(_DWORD *)(v23 + 368) != gcSysExpunge )
  {
    *(_DWORD *)(v23 + 368) = gcSysExpunge;
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 372LL) & gdwSysExpungeMask) != 0 )
      xxxDoSysExpunge(gptiCurrent);
  }
  v25 = a5;
  v127 = a5 & 1;
  if ( (a5 & 1) != 0 )
  {
    if ( gfShellFrameHangResilient )
    {
      if ( (v16 & 0x1CBF) != 0
        && (*(_DWORD *)(gptiCurrent + 1096LL) & 0x80000) != 0
        && (*(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & (unsigned __int16)v16) != 0 )
      {
        v26 = *(_QWORD *)(gptiCurrent + 416LL);
        if ( !*(_QWORD *)(v26 + 48) && !*(_QWORD *)(v26 + 40) )
          TryAttachShellFrame(gptiCurrent, v24);
      }
    }
  }
  v27 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_QWORD *)(gptiCurrent + 464LL)
    || (v28 = *(_QWORD *)(v27 + 32), v28 == gptiCurrent) && *(_QWORD *)(v27 + 40) == *(_QWORD *)(gptiCurrent + 496LL) )
  {
    v30 = 0LL;
    *(_QWORD *)(v27 + 32) = 0LL;
  }
  else if ( !v28 || *(_DWORD *)(v28 + 784) )
  {
    v30 = 0LL;
  }
  else
  {
    GlobalValid = PhkFirstGlobalValid(gptiCurrent, 1);
    v30 = 0LL;
    if ( GlobalValid )
      *(_QWORD *)(v27 + 32) = 0LL;
  }
  if ( *(_QWORD *)(v27 + 32) != gptiCurrent )
    **(_DWORD **)(gptiCurrent + 400LL) &= ~1u;
  *(_WORD *)(gptiCurrent + 760LL) = 0;
  if ( (a5 & 2) == 0 )
  {
    v31 = *(_DWORD *)(gptiCurrent + 440LL);
    if ( (v31 & 0x80000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 28LL) = v31 & 0xFFF7FFFF;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) |= 0x2000u;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 4LL) |= 0x2000u;
      *(_DWORD *)(gptiCurrent + 440LL) &= ~0x80000u;
    }
  }
  v131 = v16 & 0xFFFFFFBF;
  v138 = ~(v16 & 0xFFBF);
  v32 = (struct tagMSG *)a1;
  while ( 1 )
  {
    v129 = 0LL;
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) |= *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 8LL);
    if ( *(_QWORD *)(gptiCurrent + 408LL) == gpdeskRecalcQueueAttach )
    {
      gpdeskRecalcQueueAttach = 0LL;
      if ( *(_QWORD *)(gptiCurrent + 408LL) )
      {
        v33 = *(_QWORD *)(gptiCurrent + 416LL);
        if ( !*(_QWORD *)(v33 + 40) && !*(_QWORD *)(v33 + 48) )
          zzzReattachThreads(2LL, 0LL, 0LL);
      }
    }
    v34 = *(_QWORD *)(gptiCurrent + 400LL);
    *(_WORD *)(gptiCurrent + 760LL) |= *(_WORD *)(v34 + 4) & (unsigned __int16)v131;
    *(_WORD *)(v34 + 4) &= v138;
    v35 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL);
    if ( ((unsigned __int8)v16 & (unsigned __int8)*(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 )
    {
      if ( (v35 & 0x40) != 0 )
      {
        do
          xxxReceiveMessage(gptiCurrent);
        while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 );
      }
    }
    else if ( (v35 & 0x40) != 0 )
    {
      v9 |= 0x80u;
      v36 = a5 & 2;
      goto LABEL_184;
    }
    LOBYTE(v35) = v132 != 0;
    if ( v132 != 0 && (v16 & 0x40) != 0 && *(_DWORD *)(gptiCurrent + 1004LL) )
    {
      do
      {
        *(_DWORD *)(gptiCurrent + 1004LL) = 0;
        for ( i = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 968LL));
              i;
              i = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 968LL)) )
        {
          xxxNotifyCaptureChangeIfCaptured(i, (struct tagWND *)v30, v38);
        }
      }
      while ( *(_DWORD *)(gptiCurrent + 1004LL) );
      v25 = a5;
    }
    v39 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL);
    if ( (v39 & v16) == 0 )
    {
      v9 |= 0x100u;
      v36 = a5 & 2;
      goto LABEL_184;
    }
    v35 = *(_QWORD *)(gptiCurrent + 384LL);
    if ( *(_QWORD *)(v35 + 32) == gptiCurrent && (*(_DWORD *)(v35 + 340) & 0x400) != 0 )
    {
      EtwTraceInputQueueNoRemoveLocker(v35, v30);
      if ( ((unsigned __int16)v16 & (unsigned __int16)v39 & 0x3C07) == 0 )
      {
        if ( (v39 & 0x2000) != 0 )
        {
          v9 |= 0x200u;
          v36 = a5 & 2;
          goto LABEL_184;
        }
        goto LABEL_77;
      }
      LODWORD(v120) = v140;
      if ( (unsigned int)xxxScanSysQueue(
                           gptiCurrent,
                           v32,
                           v11,
                           a3,
                           v120,
                           v25,
                           (unsigned __int16)v16 & (unsigned __int16)v39 & 0x3C07,
                           &v129) == 1 )
        break;
    }
LABEL_77:
    v40 = v16 & v39;
    if ( ((unsigned __int8)v16 & (unsigned __int8)v39 & 8) != 0
      && (unsigned int)xxxReadPostMessage(
                         gptiCurrent,
                         v32,
                         (struct tagWND *)v11,
                         a3,
                         v140,
                         (struct _QMSG_POSTCHAR_FLAGS *)v130,
                         v127) )
    {
      v9 |= 1u;
      v41 = a1;
      goto LABEL_216;
    }
    if ( v11 == 1 )
    {
      v9 |= 0x400u;
      v36 = a5 & 2;
    }
    else
    {
      if ( (v40 & 0x3C07) != 0 )
      {
        LODWORD(v120) = v140;
        v41 = a1;
        v42 = xxxScanSysQueue(gptiCurrent, a1, v11, a3, v120, a5, v40 & 0x3C07, &v129);
        if ( v42 == 2 )
        {
          if ( (unsigned int)IsShellFrameHangResilient(gptiCurrent) && (v40 & 1) != 0 && a6 )
          {
            v43 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            v44 = v125;
            if ( v125 )
            {
              v45 = v124;
              v30 = v123;
            }
            else
            {
              v30 = (unsigned int)v43;
              v123 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
              v44 = v123;
              v125 = v123;
              v45 = 0;
              v124 = 0;
            }
            v46 = v43 - v44;
            if ( v46 < 0xFA )
            {
              xxxSleepThread2(v16, 0xAu, 1, 0, (enum SLEEP_STATUS *)&v126);
              v124 = v45 + 1;
              v32 = (struct tagMSG *)a1;
LABEL_49:
              v25 = a5;
              goto LABEL_50;
            }
            if ( (_DWORD)v30 == v44 )
            {
              TraceLoggingSysQueueLockedRetryFailed(v45, v46);
              v123 = 0;
            }
          }
        }
        else
        {
          v123 = 0;
          v124 = 0;
          v125 = 0;
          if ( v42 == 1 )
          {
            v9 |= 2u;
            goto LABEL_216;
          }
        }
      }
      else
      {
        if ( (v39 & 0x2000) != 0 )
        {
          v9 |= 0x800u;
          v36 = a5 & 2;
          goto LABEL_184;
        }
        v41 = a1;
      }
      v35 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL);
      if ( ((unsigned __int8)v16 & (unsigned __int8)*(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 )
      {
        if ( (v35 & 0x40) != 0 )
        {
          do
            xxxReceiveMessage(gptiCurrent);
          while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 );
        }
      }
      else if ( (v35 & 0x40) != 0 )
      {
        v9 |= 0x1000u;
        v36 = a5 & 2;
        goto LABEL_184;
      }
      v47 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL);
      if ( (v47 & v16) != 0 )
      {
        if ( ((unsigned __int8)v16 & (unsigned __int8)v47 & 0x20) != 0 && (unsigned int)xxxDoPaint(v11, v41) )
        {
          v9 |= 4u;
          goto LABEL_216;
        }
        v36 = a5 & 2;
        if ( (a5 & 2) == 0 )
        {
          v48 = PsGetCurrentProcessWin32Process(v35, v30);
          *(_DWORD *)(gptiCurrent + 440LL) &= ~0x2000u;
          if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x1000) != 0 )
          {
            if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 536LL) + 24LL) )
            {
              EtwTraceWakeInputIdle(0LL, gptiCurrent);
              v49 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 536LL) + 24LL);
              v50 = *(struct _KEVENT **)(v49 + 32);
              if ( v50 )
              {
                if ( v50 != (struct _KEVENT *)-1LL )
                {
                  KeSetEvent(v50, 1, 0);
                  ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 536LL) + 24LL) + 32LL));
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 536LL) + 24LL) + 32LL) = -1LL;
                }
              }
              else
              {
                *(_QWORD *)(v49 + 32) = -1LL;
              }
            }
          }
          else
          {
            v51 = *(_QWORD *)(gptiCurrent + 376LL);
            if ( !*(_QWORD *)(v51 + 296) )
              *(_QWORD *)(v51 + 296) = gptiCurrent;
            if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 296LL) == gptiCurrent )
            {
              EtwTraceWakeInputIdle(0LL, gptiCurrent);
              v52 = *(struct _KEVENT **)(v48 + 16);
              if ( v52 )
              {
                if ( v52 != (struct _KEVENT *)-1LL )
                {
                  KeSetEvent(v52, 1, 0);
                  ObfDereferenceObject(*(PVOID *)(v48 + 16));
                  *(_QWORD *)(v48 + 16) = -1LL;
                }
              }
              else
              {
                *(_QWORD *)(v48 + 16) = -1LL;
              }
            }
          }
          v53 = *(_DWORD *)(v48 + 12);
          if ( (v53 & 4) != 0 )
          {
            *(_DWORD *)(v48 + 12) = v53 & 0xFFFFFFFB;
            zzzCalcStartCursorHide(0LL, 0);
          }
          while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 )
            xxxReceiveMessage(gptiCurrent);
          v35 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL);
          if ( ((unsigned __int8)v16 & (unsigned __int8)*(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 )
          {
            if ( (v35 & 0x40) != 0 )
            {
              do
                xxxReceiveMessage(gptiCurrent);
              while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 );
            }
          }
          else if ( (v35 & 0x40) != 0 )
          {
            v9 |= 0x4000u;
            goto LABEL_184;
          }
          v47 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL);
          if ( (v47 & v16) == 0 )
          {
            v9 |= 0x8000u;
            goto LABEL_184;
          }
        }
        if ( ((unsigned __int8)v16 & (unsigned __int8)v47 & 0x10) != 0 )
        {
          v54 = gptiCurrent + 1080LL;
          for ( j = *(_QWORD *)(gptiCurrent + 1080LL); ; j = *v58 )
          {
            if ( j == v54 )
            {
              v16 = v122;
              goto LABEL_184;
            }
            v56 = j - 56;
            v57 = *(_QWORD *)(j - 56 + 88);
            if ( !v11 || v11 == v57 || (unsigned int)IsChild(v11, v57) )
              break;
          }
          TimerStatistics((const struct tagTIMER *)v56);
          v59 = *(_DWORD *)(v56 + 132);
          if ( *(_DWORD *)(v56 + 128) == v59 )
            *(_DWORD *)(v56 + 128) = v59;
          if ( *(_DWORD *)(gptiCurrent + 744LL) < gUserPostMessageLimit )
          {
            v60 = (LARGE_INTEGER *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
            v61 = v60;
            if ( v60 )
            {
              memset(v60, 0, 0x98uLL);
              if ( *(_DWORD *)(gptiCurrent + 748LL) == 2 )
                v61[12].HighPart |= 8u;
              else
                v61[12].HighPart |= 4u;
              v64 = *(LARGE_INTEGER ***)(gptiCurrent + 736LL);
              if ( v64 )
              {
                *v64 = v61;
                v61[1] = *(LARGE_INTEGER *)(gptiCurrent + 736LL);
              }
              else
              {
                *(_QWORD *)(gptiCurrent + 728LL) = v61;
              }
              *(_QWORD *)(gptiCurrent + 736LL) = v61;
              ++*(_DWORD *)(gptiCurrent + 744LL);
              v65 = *(_QWORD *)(gptiCurrent + 384LL);
              v66 = *(_QWORD *)(v56 + 88);
              if ( v66 )
              {
                v67 = *(_DWORD *)(v66 + 352);
              }
              else if ( v65 )
              {
                v68 = *(_QWORD *)(v65 + 88);
                if ( v68 )
                  v69 = *(_QWORD *)(v68 + 16);
                else
                  v69 = *(_QWORD *)(v65 + 64);
                v67 = *(_DWORD *)(*(_QWORD *)(v69 + 376) + 280LL);
              }
              else
              {
                LOBYTE(v67) = W32GetCurrentThreadDpiAwarenessContext(0LL, v62, v63);
              }
              v70 = v67 & 0xF;
              if ( v70 )
              {
                if ( v70 == 1 )
                  v71 = *(_QWORD *)(gpsi + 5352LL);
                else
                  v71 = *(_QWORD *)(gpsi + 5368LL);
              }
              else
              {
                v71 = *(_QWORD *)(gpsi + 5344LL);
              }
              if ( (*(_DWORD *)(v56 + 48) & 2) == 0 || (v72.QuadPart = 280LL, !*(_QWORD *)(v56 + 32)) )
                v72 = *(LARGE_INTEGER *)(v56 + 32);
              v73 = 275;
              if ( (*(_DWORD *)(v56 + 48) & 2) != 0 )
                v73 = 280;
              StoreQMessage(
                v61,
                *(InputTransform **)(v56 + 88),
                v73,
                *(LARGE_INTEGER *)(v56 + 96),
                v72,
                0,
                0LL,
                0,
                0LL,
                0,
                0LL,
                v71,
                0LL,
                0LL);
              if ( (*(_DWORD *)(gptiCurrent + 440LL) & 1) == 0 )
              {
                *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) |= 0x108u;
                *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 4LL) |= 0x108u;
                if ( (*(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 10LL) & 0x108) != 0 )
                  KeSetEvent(*(PRKEVENT *)(gptiCurrent + 648LL), 2, 0);
              }
            }
            else
            {
              UserSetLastError(8LL);
            }
          }
          else
          {
            UserSetLastError(1816LL);
          }
          *(_DWORD *)(v56 + 48) &= ~1u;
          v74 = *(_QWORD *)(v56 + 24);
          v75 = *(_QWORD *)(v56 + 56);
          v76 = *(_QWORD **)(v56 + 64);
          if ( *(_QWORD *)(v75 + 8) != v56 + 56 || *v76 != v56 + 56 )
            __fastfail(3u);
          *v76 = v75;
          *(_QWORD *)(v75 + 8) = v76;
          if ( (*(_DWORD *)(v74 + 524))-- == 1 )
            *(_WORD *)(*(_QWORD *)(v74 + 400) + 6LL) &= ~0x10u;
          v78 = (_QWORD *)(v56 + 72);
          v79 = *(_QWORD *)(v56 + 72);
          v80 = *(_QWORD **)(v56 + 80);
          if ( *(_QWORD *)(v79 + 8) != v56 + 72 || (_QWORD *)*v80 != v78 )
            __fastfail(3u);
          *v80 = v79;
          *(_QWORD *)(v79 + 8) = v80;
          v81 = (_QWORD *)gtmrListHead[1];
          if ( *v81 != gtmrListHead[0] )
            __fastfail(3u);
          *v78 = gtmrListHead[0];
          *(_QWORD *)(v56 + 80) = v81;
          *v81 = v78;
          gtmrListHead[1] = v78;
          v9 |= 8u;
          v16 = v122;
          goto LABEL_182;
        }
      }
      else
      {
        v9 |= 0x2000u;
        v36 = a5 & 2;
      }
    }
LABEL_184:
    v82 = *(_QWORD *)(gptiCurrent + 384LL);
    v83 = 0LL;
    if ( *(_QWORD *)(v82 + 32) == gptiCurrent )
    {
      *(_QWORD *)(v82 + 40) = 0LL;
      *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 32LL) = 0LL;
      **(_DWORD **)(gptiCurrent + 400LL) &= ~1u;
    }
    if ( !a6 )
    {
      if ( !v36 )
      {
        v116 = PsGetCurrentProcessWin32Process(v35, 0LL);
        *(_DWORD *)(gptiCurrent + 440LL) &= ~0x2000u;
        if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x1000) != 0 )
        {
          v35 = *(_QWORD *)(gptiCurrent + 536LL);
          if ( *(_QWORD *)(v35 + 24) )
          {
            EtwTraceWakeInputIdle(0LL, gptiCurrent);
            v83 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 536LL) + 24LL);
            v35 = *(_QWORD *)(v83 + 32);
            if ( v35 )
            {
              if ( v35 != -1 )
              {
                KeSetEvent((PRKEVENT)v35, 1, 0);
                ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 536LL) + 24LL) + 32LL));
                v35 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 536LL) + 24LL);
                *(_QWORD *)(v35 + 32) = -1LL;
              }
            }
            else
            {
              *(_QWORD *)(v83 + 32) = -1LL;
            }
          }
        }
        else
        {
          v117 = *(_QWORD *)(gptiCurrent + 376LL);
          if ( !*(_QWORD *)(v117 + 296) )
            *(_QWORD *)(v117 + 296) = gptiCurrent;
          if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 296LL) == gptiCurrent )
          {
            EtwTraceWakeInputIdle(0LL, gptiCurrent);
            v35 = *(_QWORD *)(v116 + 16);
            if ( v35 )
            {
              if ( v35 == -1 )
                goto LABEL_356;
              KeSetEvent((PRKEVENT)v35, 1, 0);
              ObfDereferenceObject(*(PVOID *)(v116 + 16));
            }
            *(_QWORD *)(v116 + 16) = -1LL;
          }
        }
LABEL_356:
        v118 = *(_DWORD *)(v116 + 12);
        if ( (v118 & 4) != 0 )
        {
          *(_DWORD *)(v116 + 12) = v118 & 0xFFFFFFFB;
          zzzCalcStartCursorHide(0LL, 0);
        }
        while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 )
          xxxReceiveMessage(gptiCurrent);
      }
LABEL_360:
      v115 = 0;
      goto LABEL_362;
    }
    v84 = 0;
    if ( v128 )
    {
      if ( (unsigned int)WaitMaskIncludesUserInput(v16, 0LL) && *(_QWORD *)(v11 + 16) == gptiCurrent )
      {
        v84 = 1;
        xxxUpdateInputHangInfo(v11, 0LL);
      }
      v85 = xxxRealSleepThread(v16, 0, 1, 0, 0LL);
      if ( v84 )
        xxxUpdateInputHangInfo(v11, 1LL);
LABEL_210:
      if ( !v85 )
      {
        v9 |= 0x10000u;
        goto LABEL_360;
      }
      v30 = 0LL;
      v9 = 0;
      v32 = (struct tagMSG *)a1;
      v25 = a5;
    }
    else
    {
      v126 = 0;
      v86 = *(_QWORD *)(gptiCurrent + 384LL);
      v87 = *(_QWORD *)(v86 + 40);
      v88 = *(struct tagTHREADINFO **)(v86 + 32);
      if ( gfShellFrameHangResilient )
      {
        if ( (*(_DWORD *)(gptiCurrent + 1096LL) & 0x40000) != 0 && *(_DWORD *)(v86 + 344) > 1u )
        {
          v89 = *(_QWORD *)(gptiCurrent + 416LL);
          if ( !*(_QWORD *)(v89 + 40) && !*(_QWORD *)(v89 + 48) && !IsAdaptiveQueueDetachExempted(gptiCurrent) )
          {
            v84 = gdwMDAQTimeoutDefenseInDepth;
            v123 = 0;
            v124 = 0;
            v125 = 0;
          }
        }
      }
      v85 = xxxSleepThread2(v122, v84, 1, 0, (enum SLEEP_STATUS *)&v126);
      v35 = gfShellFrameHangResilient;
      if ( !gfShellFrameHangResilient
        || (*(_DWORD *)(gptiCurrent + 1096LL) & 0x40000) == 0
        || (v35 = *(_QWORD *)(gptiCurrent + 384LL), *(_DWORD *)(v35 + 344) <= 1u)
        || (v35 = gptiCurrent, v83 = gptiCurrent, v90 = *(_QWORD *)(gptiCurrent + 416LL), *(_QWORD *)(v90 + 40))
        || *(_QWORD *)(v90 + 48)
        || IsAdaptiveQueueDetachExempted(gptiCurrent)
        || (v35 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL), v35 != *(_QWORD *)(gptiCurrent + 1248LL)) && v35
        || !v126 )
      {
        v16 = v122;
        goto LABEL_210;
      }
      v110 = SlowAppThreadInShellFrame(gptiCurrent, v88, v87, v126 == 2);
      v16 = v122;
      v32 = (struct tagMSG *)a1;
      v25 = a5;
      if ( v110 )
        TryDetachShellFrame(gptiCurrent, v110, v126 == 2, 0LL);
LABEL_50:
      v30 = 0LL;
    }
  }
  v9 |= 2u;
  v41 = a1;
LABEL_216:
  v35 = *(unsigned int *)(v41 + 8);
  if ( (_DWORD)v35 == 595 && *(_QWORD *)(v41 + 24) == -1LL )
    v83 = -1LL;
  else
    v83 = 0LL;
  v91 = (unsigned int)(v35 - 571) <= 1
     || ((unsigned int)(v35 - 577) <= 3 || (unsigned int)(v35 - 581) <= 5 || (unsigned int)(v35 - 593) <= 2)
     && (unsigned int)IsPointerMessageTouchpad(gptiCurrent, v83, *(_WORD *)(v41 + 16));
  v92 = v127;
  if ( (!v127 || !v129 || !*(_QWORD *)(gptiCurrent + 1112LL)) && !v91 )
  {
    if ( v127 )
    {
      if ( *(_DWORD *)(v41 + 8) == 258 && (*(_DWORD *)(gptiCurrent + 1200LL) & 1) != 0 )
      {
        v83 = v130[0];
        if ( (v130[0] & 1) != 0 && (unsigned int)xxxKeyboardCorrectionCallout(v41) == 1296 )
        {
          *(_DWORD *)(v41 + 8) = 0;
          *(_QWORD *)(v41 + 16) = 0LL;
          *(_QWORD *)(v41 + 24) = 0LL;
        }
      }
      goto LABEL_237;
    }
LABEL_245:
    v94 = 582LL;
    goto LABEL_246;
  }
LABEL_237:
  if ( !v92 )
    goto LABEL_245;
  v93 = *(_DWORD *)(v41 + 8);
  if ( v93 == 258 || (v94 = 582LL, v93 == 582) || v93 == 578 || *(_WORD *)(v41 + 8) >= 0xC000u )
  {
    v95 = xxxCallCtfHook(3, 0, a5, v41);
    v96 = 0LL;
    v94 = 582LL;
    if ( v95 && *(_DWORD *)(v41 + 8) == 258 )
    {
      *(_DWORD *)(v41 + 8) = 0;
      *(_QWORD *)(v41 + 16) = 0LL;
      *(_QWORD *)(v41 + 24) = 0LL;
    }
  }
  else
  {
LABEL_246:
    v96 = 0LL;
  }
  if ( (!v92 || !v129 || !*(_QWORD *)(gptiCurrent + 1112LL)) && !v91 )
  {
    v97 = *(_QWORD *)(gptiCurrent + 416LL);
    v83 = (unsigned int)(*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(v97 + 24));
    if ( ((*(_BYTE *)(gptiCurrent + 600LL) | *(_BYTE *)(v97 + 24)) & 0x10) != 0 )
    {
      v98 = a5;
      v99 = *(_DWORD *)(v41 + 8);
      v100 = *(_QWORD *)(v41 + 16);
      if ( (unsigned int)(v99 - 577) > 3 && ((unsigned int)(v99 - 581) > 0x12 || v99 == 589) )
      {
        if ( v99 == 528 && (_WORD)v100 == 582 )
        {
LABEL_259:
          xxxPointerCallHook(0, a5, v41, 3u, 0);
          goto LABEL_265;
        }
      }
      else if ( v99 != 595 )
      {
        goto LABEL_259;
      }
      v101 = *(_QWORD *)(gptiCurrent + 824LL);
      if ( (v101 || (v101 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 64LL)) != 0)
        && (*(_DWORD *)(v101 + 64) & 0x80u) != 0 )
      {
        LODWORD(v101) = PhkNextValid(v101, v100, 582LL);
      }
      LOBYTE(v121) = 0;
      xxxCallHook2(v101, 0, v98, v41, v96, v121);
    }
  }
LABEL_265:
  if ( v92 )
  {
    v102 = *(_DWORD *)(gptiCurrent + 1000LL);
    if ( !v102 )
      goto LABEL_272;
    if ( word_1C0328C90 && qword_1C0328C98 == gptiCurrent && dword_1C0328C94 == v102 )
    {
      ForceCompletePendingPromotion();
      xxxProcessMousePromotionQueue();
LABEL_272:
      v94 = 0LL;
    }
    else
    {
      v94 = 0LL;
      *(_DWORD *)(gptiCurrent + 1000LL) = 0;
    }
    if ( *(_DWORD *)(v41 + 8) == 583
      && (*(_WORD *)(v41 + 18) & 0x2000) != 0
      && word_1C0328C90
      && word_1C0328C90 == *(_WORD *)(v41 + 16)
      && qword_1C0328C98 == gptiCurrent )
    {
      *(_DWORD *)(gptiCurrent + 1000LL) = dword_1C0328C94;
    }
    v83 = 0LL;
    v35 = *(unsigned int *)(v41 + 8);
    if ( ((unsigned int)(v35 - 577) <= 3 || (unsigned int)(v35 - 581) <= 0x12 && (_DWORD)v35 != 589)
      && (_DWORD)v35 != 595 )
    {
      v83 = *(unsigned __int16 *)(v41 + 16);
    }
    v103 = (_QWORD **)(gptiCurrent + 968LL);
    if ( (_WORD)v83 != 1 )
    {
      v104 = *v103;
      if ( *v103 != v103 )
      {
        Blink = 0LL;
        if ( (_WORD)v83 )
          Blink = FindThreadPointerData((struct _LIST_ENTRY *)(gptiCurrent + 968LL), v83)[1].Blink;
        do
        {
          v83 = (__int64)v104;
          v104 = (_QWORD *)*v104;
          v35 = *(_QWORD *)(v83 + 24);
          if ( Blink == (struct _LIST_ENTRY *)v35 )
          {
            *(_DWORD *)(v83 + 48) |= 2u;
          }
          else if ( (*(_DWORD *)(v83 + 48) & 2) != 0
                 && (!v35 || !Blink || *(_DWORD *)(v35 + 28) != HIDWORD(Blink[1].Blink))
                 && (*(_QWORD *)v35 == *(_QWORD *)(v35 + 8) && *(_DWORD *)(*(_QWORD *)v35 - 76LL) == 3
                  || (*(_DWORD *)(v35 + 36) & 0x10) != 0) )
          {
            UnlinkAndFreeThreadPointerData(
              (struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 968LL),
              (struct tagTHREADPOINTERDATA *)v83);
          }
        }
        while ( v104 != v103 );
        v41 = a1;
      }
    }
    v16 = v122;
  }
  v106 = v129;
  if ( v129 )
  {
    v107 = *((_DWORD *)v129 + 25);
    if ( (v107 & 0x100) != 0 )
    {
      if ( v127 && *(_QWORD *)(gptiCurrent + 1112LL) )
      {
        EtwTraceBeginDelegateInputCallback(v129, v41, v94, v96);
        v108 = xxxClientCallDelegateThread(*(_QWORD *)(gptiCurrent + 1112LL), v41, *(_QWORD *)(gptiCurrent + 1120LL));
        v32 = (struct tagMSG *)a1;
        EtwTraceEndDelegateInputCallback(v106, a1);
        *((_DWORD *)v106 + 25) &= ~0x100u;
        v109 = *((_DWORD *)v106 + 25);
        if ( (v109 & 0x80u) == 0 )
        {
          if ( (v109 & 0x20) != 0 )
            _HandleDelegatedInputWorker(gptiCurrent, v108, v129);
        }
        else
        {
          FreeQEntry(v106);
        }
        v9 = 0x20000;
        goto LABEL_49;
      }
      *((_DWORD *)v129 + 25) = v107 & 0xFFFFFEFF;
    }
  }
  if ( v91
    && (*(_DWORD *)(gptiCurrent + 1096LL) & 0x2000) == 0
    && !(unsigned int)IsPTPRedirected(gptiCurrent, (struct tagMSG *)v41) )
  {
    xxxClientCallDefaultInputHandler(v41);
    v133 = 0uLL;
    v134 = 0uLL;
    v135 = 0uLL;
    *(_OWORD *)v41 = 0uLL;
    *(_OWORD *)(v41 + 16) = v134;
    *(_OWORD *)(v41 + 32) = v135;
LABEL_182:
    v32 = (struct tagMSG *)a1;
    goto LABEL_49;
  }
  if ( a6 && *(_DWORD *)(v41 + 8) == 18 )
  {
    v9 |= 0x40000u;
    goto LABEL_360;
  }
  if ( !v127 )
  {
LABEL_361:
    v115 = 1;
    goto LABEL_362;
  }
  v111 = *(_QWORD *)(gptiCurrent + 944LL);
  if ( v111 )
  {
    LOBYTE(v83) = 18;
    v112 = HMValidateHandleNoRip(v111, v83, v94);
    if ( v112 )
      FreeHidData(v112);
    *(_QWORD *)(gptiCurrent + 944LL) = 0LL;
  }
  v113 = *(_QWORD *)(gptiCurrent + 952LL);
  if ( v113 )
  {
    FreeTouchInputInfo(v113, 1LL);
    *(_QWORD *)(gptiCurrent + 952LL) = 0LL;
  }
  v35 = *(_QWORD *)(gptiCurrent + 960LL);
  if ( v35 )
  {
    FreeGestureInfo(v35, 1LL);
    *(_QWORD *)(gptiCurrent + 960LL) = 0LL;
  }
  v114 = *(_DWORD *)(v41 + 8);
  if ( v114 != 255 )
  {
    if ( v114 == 576 && (LOBYTE(v83) = 20, HMValidateHandle(*(_QWORD *)(v41 + 24), v83, v94, v96)) )
    {
      *(_QWORD *)(gptiCurrent + 952LL) = *(_QWORD *)(v41 + 24);
    }
    else if ( ((*(_DWORD *)(v41 + 8) - 281) & 0xFFFFFFFD) == 0 )
    {
      LOBYTE(v83) = 21;
      if ( HMValidateHandle(*(_QWORD *)(v41 + 24), v83, v94, v96) )
        *(_QWORD *)(gptiCurrent + 960LL) = *(_QWORD *)(v41 + 24);
    }
    goto LABEL_361;
  }
  v115 = 1;
  if ( *(_QWORD *)(v41 + 16) <= 1uLL )
    *(_QWORD *)(gptiCurrent + 944LL) = *(_QWORD *)(v41 + 24);
LABEL_362:
  if ( v128 )
    ThreadUnlock1(v35, v83);
  if ( (unsigned int)HandleProcessSpinning() )
  {
    if ( v115 )
    {
      if ( *(_DWORD *)(a1 + 8) == 512 && (*(_DWORD *)(gptiCurrent + 1096LL) & 0x40000) != 0 )
      {
        v119 = *(_DWORD **)(gptiCurrent + 592LL);
        if ( v119 )
        {
          if ( (v119[45] & 0x100000) != 0 )
          {
            if ( v119[76] )
            {
              v119[77] += ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v119[76];
              ++v119[78];
              v119[76] = 0;
            }
          }
        }
      }
      *(_QWORD *)(gptiCurrent + 1048LL) = *(_QWORD *)a1;
      *(_DWORD *)(gptiCurrent + 1056LL) = *(_DWORD *)(a1 + 8);
      *(_QWORD *)(gptiCurrent + 1064LL) = *(_QWORD *)(a1 + 16);
    }
  }
  else
  {
    v115 = 0;
  }
  EtwTraceBeginAppMessageProcessing(a6, v9, a1);
  return v115;
}
