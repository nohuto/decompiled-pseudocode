/*
 * XREFs of xxxRealInternalGetMessage @ 0x1C00698F0
 * Callers:
 *     NtUserRealInternalGetMessage @ 0x1C0067B80 (NtUserRealInternalGetMessage.c)
 *     NtUserPeekMessage @ 0x1C0068FB0 (NtUserPeekMessage.c)
 *     NtUserGetMessage @ 0x1C00697F0 (NtUserGetMessage.c)
 *     xxxInternalGetMessage @ 0x1C007C720 (xxxInternalGetMessage.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C007C798 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxMNLoop @ 0x1C010B494 (xxxMNLoop.c)
 * Callees:
 *     IsShellFrameHangResilient @ 0x1C000344C (IsShellFrameHangResilient.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C00034B8 (IsAdaptiveQueueDetachExempted.c)
 *     FreeHidData @ 0x1C0007460 (FreeHidData.c)
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C0007FB4 (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C0008034 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     xxxPointerCallHook @ 0x1C0008204 (xxxPointerCallHook.c)
 *     SlowAppThreadInShellFrame @ 0x1C00091C4 (SlowAppThreadInShellFrame.c)
 *     ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x1C00098E8 (-TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z.c)
 *     LogMDAQueueOp @ 0x1C00433CC (LogMDAQueueOp.c)
 *     zzzReattachThreads @ 0x1C004392C (zzzReattachThreads.c)
 *     PhkNextValid @ 0x1C004A350 (PhkNextValid.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxCallCtfHook @ 0x1C0067860 (xxxCallCtfHook.c)
 *     AllocQEntry @ 0x1C0067C50 (AllocQEntry.c)
 *     CalcWakeMask @ 0x1C006AE00 (CalcWakeMask.c)
 *     ?HandleProcessSpinning@@YAHXZ @ 0x1C006B090 (-HandleProcessSpinning@@YAHXZ.c)
 *     xxxUpdateInputHangInfo @ 0x1C006B110 (xxxUpdateInputHangInfo.c)
 *     xxxSleepThread2 @ 0x1C006B230 (xxxSleepThread2.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C006B340 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     zzzWakeInputIdle @ 0x1C006B920 (zzzWakeInputIdle.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C006B9D0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     xxxCallHook2 @ 0x1C006C0B0 (xxxCallHook2.c)
 *     xxxReceiveMessage @ 0x1C006D6A0 (xxxReceiveMessage.c)
 *     StoreQMessage @ 0x1C00707A0 (StoreQMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     HMValidateHandleNoRip @ 0x1C007E714 (HMValidateHandleNoRip.c)
 *     PhkFirstGlobalValid @ 0x1C008C504 (PhkFirstGlobalValid.c)
 *     xxxDoPaint @ 0x1C008FE9C (xxxDoPaint.c)
 *     zzzCalcStartCursorHide @ 0x1C0090590 (zzzCalcStartCursorHide.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     xxxDoSysExpunge @ 0x1C00EBC3C (xxxDoSysExpunge.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C00F7FE8 (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     WaitMaskIncludesUserInput @ 0x1C00F9328 (WaitMaskIncludesUserInput.c)
 *     _IsChild @ 0x1C0100A28 (_IsChild.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0115CC4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     xxxClientCallDelegateThread @ 0x1C0118130 (xxxClientCallDelegateThread.c)
 *     FreeQEntry @ 0x1C01D1558 (FreeQEntry.c)
 *     _FreeTouchInputInfo @ 0x1C01DC920 (_FreeTouchInputInfo.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E1B7C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     IsTouchpadPointerInputMessage @ 0x1C01E1FDC (IsTouchpadPointerInputMessage.c)
 *     TryDetachShellFrame @ 0x1C01E2248 (TryDetachShellFrame.c)
 *     ?GetPTPShellListener@@YAPEAUtagWND@@XZ @ 0x1C01F1828 (-GetPTPShellListener@@YAPEAUtagWND@@XZ.c)
 *     ?PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01F9404 (-PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01F9640 (-UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01FA76C (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 *     _FreeGestureInfo @ 0x1C0204130 (_FreeGestureInfo.c)
 *     xxxClientCallDefaultInputHandler @ 0x1C0213D30 (xxxClientCallDefaultInputHandler.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C0239FBC (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C023A9E8 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
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
  unsigned __int64 v11; // r13
  int v13; // r9d
  __int64 v14; // rcx
  unsigned int v15; // esi
  int v16; // r9d
  __int64 *v17; // r10
  unsigned int *v18; // r11
  unsigned __int64 v19; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v21; // ecx
  __int64 v22; // rcx
  char v23; // r10
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 GlobalValid; // rax
  __int64 v28; // rdx
  int v29; // ecx
  __int16 v30; // bx
  struct tagMSG *v31; // r14
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // r14d
  unsigned __int64 i; // rax
  int v37; // r8d
  int v38; // edi
  __int16 v39; // bx
  __int64 v40; // rdi
  int v41; // eax
  unsigned __int64 v42; // rcx
  unsigned int v43; // eax
  unsigned int v44; // ebx
  int v45; // ebx
  __int64 v46; // r8
  _QWORD *j; // rbx
  _DWORD *v48; // r10
  __int64 v49; // rcx
  int v50; // edx
  __int64 v51; // r8
  int v52; // edx
  __int64 v53; // rax
  int v54; // r8d
  __int64 v55; // rdx
  __int64 v56; // r8
  _QWORD *v57; // rcx
  _QWORD *v59; // rbx
  __int64 v60; // rcx
  _QWORD *v61; // rax
  _QWORD *v62; // rcx
  int v63; // ebx
  __int64 v64; // rdi
  unsigned int v65; // ebx
  __int64 v66; // rcx
  __int64 v67; // rsi
  struct tagTHREADINFO *v68; // r14
  __int64 v69; // rax
  __int64 v70; // rax
  BOOL v71; // r14d
  int v72; // ebx
  int v73; // eax
  __int64 v74; // r8
  int v75; // eax
  __int64 v76; // r9
  __int64 v77; // rax
  unsigned int v78; // r10d
  int v79; // ecx
  __int64 v80; // rcx
  int v81; // eax
  _QWORD **v82; // rsi
  _QWORD *v83; // rbx
  struct _LIST_ENTRY *Blink; // rdi
  struct tagQMSG *v85; // rbx
  int v86; // eax
  unsigned int v87; // edi
  int v88; // ecx
  __int64 v89; // r8
  struct _LIST_ENTRY *ThreadPointerData; // r9
  struct tagTHREADINFO *v91; // rbx
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rcx
  int v95; // eax
  __int64 v96; // rbx
  __int64 v97; // rax
  int v98; // eax
  unsigned int v99; // edi
  _DWORD *v100; // rdx
  unsigned int v101; // [rsp+70h] [rbp-B8h]
  int v102; // [rsp+74h] [rbp-B4h]
  __int16 v103; // [rsp+78h] [rbp-B0h]
  int v104; // [rsp+7Ch] [rbp-ACh] BYREF
  unsigned int v105; // [rsp+80h] [rbp-A8h]
  unsigned int v106; // [rsp+84h] [rbp-A4h]
  int v107; // [rsp+88h] [rbp-A0h]
  unsigned int v108; // [rsp+8Ch] [rbp-9Ch]
  int v109; // [rsp+90h] [rbp-98h]
  struct tagQMSG *v110; // [rsp+98h] [rbp-90h] BYREF
  unsigned int v111[6]; // [rsp+A0h] [rbp-88h] BYREF
  int v112; // [rsp+B8h] [rbp-70h]
  _QWORD v113[10]; // [rsp+D8h] [rbp-50h] BYREF
  __int16 v115; // [rsp+138h] [rbp+10h]
  unsigned int v117; // [rsp+148h] [rbp+20h]

  v111[0] = 0;
  v108 = 0;
  v105 = 0;
  v106 = 0;
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
  v113[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v113;
  v113[1] = v10;
  ++*(_DWORD *)(v10 + 8);
  v13 = 1;
LABEL_8:
  v109 = v13;
  ++*(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 8LL);
  if ( !a4 )
    a4 = -1;
  v117 = a4;
  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 408LL) + 12LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v15 = CalcWakeMask(a3, a4, HIWORD(a5));
  v101 = v15;
  v112 = v15 & 0x1C07;
  if ( (v15 & 0x1C07) != 0 )
  {
    v14 = *v17;
    *(_DWORD *)(gptiCurrent + 1248LL) = (*v17 * (unsigned __int64)*v18) >> 24;
  }
  if ( (v15 & 7) != 7 )
  {
    if ( (v15 & 6) == 0 )
      goto LABEL_21;
    v14 = gptiCurrent;
    if ( !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 64LL) )
      goto LABEL_21;
  }
  if ( v16 )
  {
    if ( *(_QWORD *)(v11 + 16) == gptiCurrent )
    {
      v19 = v11;
LABEL_20:
      xxxUpdateInputHangInfo(v19, 1LL);
    }
  }
  else if ( !a2 )
  {
    v19 = 0LL;
    goto LABEL_20;
  }
LABEL_21:
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
  v21 = *(_DWORD *)(CurrentProcessWin32Process + 12);
  if ( (v21 & 4) != 0 )
  {
    *(_DWORD *)(CurrentProcessWin32Process + 12) = v21 & 0xFFFFFFFB;
    zzzCalcStartCursorHide(0LL, 0LL);
  }
  v22 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_DWORD *)(v22 + 376) != gcSysExpunge )
  {
    *(_DWORD *)(v22 + 376) = gcSysExpunge;
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 380LL) & gdwSysExpungeMask) != 0 )
      xxxDoSysExpunge(gptiCurrent);
  }
  v23 = a5;
  v107 = a5 & 1;
  if ( (a5 & 1) != 0 )
  {
    if ( gfShellFrameHangResilient )
    {
      if ( (v15 & 0x1CBF) != 0
        && (*(_DWORD *)(gptiCurrent + 1080LL) & 0x80000) != 0
        && (*(_WORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 6LL) & (unsigned __int16)v15) != 0 )
      {
        v24 = *(_QWORD *)(gptiCurrent + 424LL);
        if ( !*(_QWORD *)(v24 + 48) && !*(_QWORD *)(v24 + 40) )
        {
          TryAttachShellFrame(gptiCurrent, v15);
          v23 = a5;
        }
      }
    }
  }
  v25 = *(_QWORD *)(gptiCurrent + 392LL);
  if ( *(_QWORD *)(gptiCurrent + 472LL)
    || (v26 = *(_QWORD *)(v25 + 24), v26 == gptiCurrent) && *(_QWORD *)(v25 + 32) == *(_QWORD *)(gptiCurrent + 504LL) )
  {
    v28 = 0LL;
    *(_QWORD *)(v25 + 24) = 0LL;
  }
  else if ( !v26 || *(_DWORD *)(v26 + 784) )
  {
    v28 = 0LL;
  }
  else
  {
    GlobalValid = PhkFirstGlobalValid(gptiCurrent, 1LL);
    v28 = 0LL;
    if ( GlobalValid )
      *(_QWORD *)(v25 + 24) = 0LL;
  }
  if ( *(_QWORD *)(v25 + 24) != gptiCurrent )
    **(_DWORD **)(gptiCurrent + 408LL) &= ~1u;
  *(_WORD *)(gptiCurrent + 760LL) = 0;
  v102 = v23 & 2;
  if ( (v23 & 2) == 0 )
  {
    v29 = *(_DWORD *)(gptiCurrent + 448LL);
    if ( (v29 & 0x80000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 28LL) = v29 & 0xFFF7FFFF;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 6LL) |= 0x2000u;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 4LL) |= 0x2000u;
      *(_DWORD *)(gptiCurrent + 448LL) &= ~0x80000u;
    }
  }
  v30 = v15 & 0xFFBF;
  v103 = v15 & 0xFFBF;
  v115 = ~(v15 & 0xFFBF);
  v31 = (struct tagMSG *)a1;
  while ( 1 )
  {
    v110 = 0LL;
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 6LL) |= *(_WORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL);
    if ( *(_QWORD *)(gptiCurrent + 416LL) == gpdeskRecalcQueueAttach )
    {
      gpdeskRecalcQueueAttach = 0LL;
      if ( *(_QWORD *)(gptiCurrent + 416LL) )
      {
        v32 = *(_QWORD *)(gptiCurrent + 424LL);
        if ( !*(_QWORD *)(v32 + 40) && !*(_QWORD *)(v32 + 48) )
          zzzReattachThreads(2, 0LL, 0LL);
      }
    }
    v33 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_WORD *)(gptiCurrent + 760LL) |= *(_WORD *)(v33 + 4) & v30;
    *(_WORD *)(v33 + 4) &= v115;
    v34 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 408LL) + 6LL);
    if ( ((unsigned __int8)v15 & (unsigned __int8)*(_WORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 6LL) & 0x40) != 0 )
    {
      if ( (v34 & 0x40) != 0 )
      {
        do
          xxxReceiveMessage(gptiCurrent, v28);
        while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 408LL) + 6LL) & 0x40) != 0 );
      }
    }
    else if ( (v34 & 0x40) != 0 )
    {
      v9 |= 0x80u;
      v35 = v102;
      goto LABEL_151;
    }
    LOBYTE(v34) = v112 != 0;
    if ( v112 != 0 && (v15 & 0x40) != 0 && *(_DWORD *)(gptiCurrent + 1004LL) )
    {
      do
      {
        *(_DWORD *)(gptiCurrent + 1004LL) = 0;
        for ( i = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 968LL));
              i;
              i = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 968LL)) )
        {
          xxxNotifyCaptureChangeIfCaptured(i, (struct tagWND *)v28, v37);
        }
      }
      while ( *(_DWORD *)(gptiCurrent + 1004LL) );
    }
    v38 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 408LL) + 6LL);
    if ( (v38 & v15) == 0 )
    {
      v9 |= 0x100u;
LABEL_150:
      v35 = v102;
      goto LABEL_151;
    }
    v34 = *(_QWORD *)(gptiCurrent + 392LL);
    if ( *(_QWORD *)(v34 + 24) == gptiCurrent && (*(_DWORD *)(v34 + 332) & 0x400) != 0 )
      break;
LABEL_77:
    v39 = v15 & v38;
    if ( ((unsigned __int8)v15 & (unsigned __int8)v38 & 8) != 0
      && (unsigned int)xxxReadPostMessage(
                         gptiCurrent,
                         v31,
                         (struct tagWND *)v11,
                         a3,
                         v117,
                         (struct _QMSG_POSTCHAR_FLAGS *)v111,
                         v107) )
    {
      v9 |= 1u;
      v40 = a1;
      goto LABEL_181;
    }
    if ( v11 == 1 )
    {
      v9 |= 0x400u;
      goto LABEL_150;
    }
    if ( (v39 & 0x3C07) != 0 )
    {
      v40 = a1;
      v41 = xxxScanSysQueue(gptiCurrent, a1, v11, a3, v117, a5, v39 & 0x3C07, &v110);
      if ( v41 == 2 )
      {
        if ( (unsigned int)IsShellFrameHangResilient(gptiCurrent) && (v39 & 1) != 0 && a6 )
        {
          v42 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          v43 = v108;
          if ( v108 )
          {
            v44 = v106;
            v28 = v105;
          }
          else
          {
            v28 = (unsigned int)v42;
            v105 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            v43 = v105;
            v108 = v105;
            v44 = 0;
            v106 = 0;
          }
          if ( (unsigned int)v42 - v43 < 0xFA )
          {
            xxxSleepThread2(v15, 0xAu, 1, 0, (enum SLEEP_STATUS *)&v104);
            v106 = v44 + 1;
            goto LABEL_49;
          }
          if ( (_DWORD)v28 == v43 )
          {
            TraceLoggingSysQueueLockedRetryFailed((const struct _TlgProvider_t *)v44);
            v105 = 0;
          }
        }
      }
      else
      {
        v105 = 0;
        v106 = 0;
        v108 = 0;
        if ( v41 == 1 )
        {
          v9 |= 2u;
          goto LABEL_181;
        }
      }
    }
    else
    {
      if ( (v38 & 0x2000) != 0 )
      {
        v9 |= 0x800u;
        goto LABEL_150;
      }
      v40 = a1;
    }
    v34 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 408LL) + 6LL);
    if ( ((unsigned __int8)v15 & (unsigned __int8)*(_WORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 6LL) & 0x40) != 0 )
    {
      if ( (v34 & 0x40) != 0 )
      {
        do
          xxxReceiveMessage(gptiCurrent, v28);
        while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 408LL) + 6LL) & 0x40) != 0 );
      }
    }
    else if ( (v34 & 0x40) != 0 )
    {
      v9 |= 0x1000u;
      goto LABEL_150;
    }
    v45 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 408LL) + 6LL);
    if ( (v45 & v15) == 0 )
    {
      v9 |= 0x2000u;
      goto LABEL_150;
    }
    if ( ((unsigned __int8)v15 & (unsigned __int8)v45 & 0x20) != 0 && (unsigned int)xxxDoPaint(v11, v40) )
    {
      v9 |= 4u;
      goto LABEL_181;
    }
    v35 = v102;
    if ( v102 )
      goto LABEL_119;
    zzzWakeInputIdle(gptiCurrent);
    while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 408LL) + 6LL) & 0x40) != 0 )
      xxxReceiveMessage(gptiCurrent, v28);
    v34 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 408LL) + 6LL);
    if ( ((unsigned __int8)v15 & (unsigned __int8)*(_WORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 6LL) & 0x40) != 0 )
    {
      if ( (v34 & 0x40) != 0 )
      {
        do
          xxxReceiveMessage(gptiCurrent, v28);
        while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 408LL) + 6LL) & 0x40) != 0 );
      }
    }
    else if ( (v34 & 0x40) != 0 )
    {
      v9 |= 0x4000u;
      goto LABEL_151;
    }
    v45 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 408LL) + 6LL);
    if ( (v45 & v15) != 0 )
    {
LABEL_119:
      if ( ((unsigned __int8)v15 & (unsigned __int8)v45 & 0x10) != 0 )
      {
        v46 = gptiCurrent + 1064LL;
        for ( j = *(_QWORD **)(gptiCurrent + 1064LL); j != (_QWORD *)v46; j = (_QWORD *)*j )
        {
          if ( !v11 || v11 == j[4] || (unsigned int)IsChild(v11) )
          {
            v48 = AllocQEntry(gptiCurrent + 736LL);
            if ( v48 )
            {
              v49 = *(_QWORD *)(gpsi + 3976LL);
              v50 = 0;
              v51 = *(_QWORD *)(gptiCurrent + 416LL);
              if ( v51 )
                v50 = *(_DWORD *)(*(_QWORD *)(v51 + 8) + 260LL) & 1;
              if ( v50 )
              {
                v52 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 776LL);
                if ( (v52 & 0x2000) != 0 )
                {
                  v49 = *(_QWORD *)(gpsi + 3960LL);
                }
                else if ( (v52 & 0x6000) == 0 )
                {
                  v49 = *(_QWORD *)(gpsi + 3952LL);
                }
              }
              if ( (*(_DWORD *)(j - 1) & 2) == 0 || (v53 = 280LL, !*(j - 3)) )
                v53 = *(j - 3);
              v54 = 275;
              if ( (*(_DWORD *)(j - 1) & 2) != 0 )
                v54 = 280;
              StoreQMessage((_DWORD)v48, j[4], v54, j[5], v53, 0, 0, 0, 0LL, 0, 0LL, v49, 0LL, 0LL);
              if ( (*(_DWORD *)(gptiCurrent + 448LL) & 1) == 0 )
              {
                *(_WORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 6LL) |= 0x108u;
                *(_WORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 4LL) |= 0x108u;
                if ( (*(_WORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 10LL) & 0x108) != 0 )
                  KeSetEvent(*(PRKEVENT *)(gptiCurrent + 656LL), 2, 0);
              }
            }
            *((_DWORD *)j - 2) &= ~1u;
            v55 = *(j - 4);
            v56 = *j;
            v57 = (_QWORD *)j[1];
            if ( *(_QWORD **)(*j + 8LL) != j || (_QWORD *)*v57 != j )
              __fastfail(3u);
            *v57 = v56;
            *(_QWORD *)(v56 + 8) = v57;
            if ( (*(_DWORD *)(v55 + 532))-- == 1 )
              *(_WORD *)(*(_QWORD *)(v55 + 408) + 6LL) &= ~0x10u;
            v59 = j + 2;
            v60 = *v59;
            v61 = (_QWORD *)v59[1];
            if ( *(_QWORD **)(*v59 + 8LL) != v59 || (_QWORD *)*v61 != v59 )
              __fastfail(3u);
            *v61 = v60;
            *(_QWORD *)(v60 + 8) = v61;
            v62 = (_QWORD *)gtmrListHead[1];
            *v59 = gtmrListHead[0];
            v59[1] = v62;
            if ( *v62 != gtmrListHead[0] )
              __fastfail(3u);
            *v62 = v59;
            gtmrListHead[1] = v59;
            v9 |= 8u;
            goto LABEL_49;
          }
        }
      }
    }
    else
    {
      v9 |= 0x8000u;
    }
LABEL_151:
    if ( !a6 )
    {
      if ( v35 )
        goto LABEL_332;
      v96 = PsGetCurrentProcessWin32Process(v34);
      *(_DWORD *)(gptiCurrent + 448LL) &= ~0x2000u;
      if ( (*(_DWORD *)(gptiCurrent + 448LL) & 0x1000) != 0 )
      {
        v34 = *(_QWORD *)(gptiCurrent + 544LL);
        if ( *(_QWORD *)(v34 + 24) )
        {
          EtwTraceWakeInputIdle(0LL, gptiCurrent);
          v28 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 544LL) + 24LL);
          v34 = *(_QWORD *)(v28 + 32);
          if ( v34 )
          {
            if ( v34 != -1 )
            {
              KeSetEvent((PRKEVENT)v34, 1, 0);
              ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 544LL) + 24LL) + 32LL));
              v34 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 544LL) + 24LL);
              *(_QWORD *)(v34 + 32) = -1LL;
            }
          }
          else
          {
            *(_QWORD *)(v28 + 32) = -1LL;
          }
        }
        goto LABEL_328;
      }
      v97 = *(_QWORD *)(gptiCurrent + 384LL);
      if ( !*(_QWORD *)(v97 + 304) )
        *(_QWORD *)(v97 + 304) = gptiCurrent;
      if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 304LL) != gptiCurrent )
        goto LABEL_328;
      EtwTraceWakeInputIdle(0LL, gptiCurrent);
      v34 = *(_QWORD *)(v96 + 16);
      if ( v34 )
      {
        if ( v34 != -1 )
        {
          KeSetEvent((PRKEVENT)v34, 1, 0);
          ObfDereferenceObject(*(PVOID *)(v96 + 16));
          goto LABEL_327;
        }
      }
      else
      {
LABEL_327:
        *(_QWORD *)(v96 + 16) = -1LL;
      }
LABEL_328:
      v98 = *(_DWORD *)(v96 + 12);
      if ( (v98 & 4) != 0 )
      {
        *(_DWORD *)(v96 + 12) = v98 & 0xFFFFFFFB;
        zzzCalcStartCursorHide(0LL, 0LL);
      }
      while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 408LL) + 6LL) & 0x40) != 0 )
        xxxReceiveMessage(gptiCurrent, v28);
      goto LABEL_332;
    }
    if ( v109 )
    {
      v63 = 0;
      if ( (unsigned int)WaitMaskIncludesUserInput(v15, v28) && *(_QWORD *)(v11 + 16) == gptiCurrent )
      {
        v63 = 1;
        xxxUpdateInputHangInfo(v11, 0LL);
      }
      LODWORD(v64) = xxxRealSleepThread(v15, 0, 1, 0, 0LL);
      if ( v63 )
        xxxUpdateInputHangInfo(v11, 1LL);
    }
    else
    {
      v65 = 0;
      v104 = 0;
      v66 = *(_QWORD *)(gptiCurrent + 392LL);
      v67 = *(_QWORD *)(v66 + 32);
      v68 = *(struct tagTHREADINFO **)(v66 + 24);
      if ( gfShellFrameHangResilient )
      {
        if ( (*(_DWORD *)(gptiCurrent + 1080LL) & 0x40000) != 0 && *(_DWORD *)(v66 + 336) > 1u )
        {
          v69 = *(_QWORD *)(gptiCurrent + 424LL);
          if ( !*(_QWORD *)(v69 + 40) && !*(_QWORD *)(v69 + 48) && !IsAdaptiveQueueDetachExempted(gptiCurrent) )
          {
            v65 = gdwMDAQTimeoutDefenseInDepth;
            v105 = 0;
            v106 = 0;
            v108 = 0;
          }
        }
      }
      v64 = (int)xxxSleepThread2(v101, v65, 1, 0, (enum SLEEP_STATUS *)&v104);
      v34 = gfShellFrameHangResilient;
      if ( gfShellFrameHangResilient )
      {
        if ( (*(_DWORD *)(gptiCurrent + 1080LL) & 0x40000) != 0 )
        {
          v34 = *(_QWORD *)(gptiCurrent + 392LL);
          if ( *(_DWORD *)(v34 + 336) > 1u )
          {
            v34 = gptiCurrent;
            v28 = gptiCurrent;
            v70 = *(_QWORD *)(gptiCurrent + 424LL);
            if ( !*(_QWORD *)(v70 + 40) && !*(_QWORD *)(v70 + 48) && !IsAdaptiveQueueDetachExempted(gptiCurrent) )
            {
              v34 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL);
              if ( v34 == *(_QWORD *)(gptiCurrent + 1232LL) || !v34 )
              {
                LogMDAQueueOp(0xCAu, v64, v104, v65);
                if ( v104 )
                {
                  v91 = SlowAppThreadInShellFrame(gptiCurrent, v68, v67, v104 == 2);
                  LogMDAQueueOp(0xC8u, (__int64)v91, v104, 0);
                  v15 = v101;
                  v31 = (struct tagMSG *)a1;
                  if ( v91 )
                  {
                    TryDetachShellFrame(gptiCurrent, v91, v104 == 2, 0LL);
LABEL_49:
                    v31 = (struct tagMSG *)a1;
                  }
LABEL_50:
                  v28 = 0LL;
                  goto LABEL_51;
                }
              }
            }
          }
        }
      }
      v15 = v101;
    }
    if ( !(_DWORD)v64 )
    {
      v9 |= 0x10000u;
      goto LABEL_332;
    }
    v28 = 0LL;
    v9 = 0;
    v31 = (struct tagMSG *)a1;
LABEL_51:
    v30 = v103;
  }
  EtwTraceInputQueueNoRemoveLocker(v34, v28);
  if ( ((unsigned __int16)v15 & (unsigned __int16)v38 & 0x3C07) == 0 )
  {
    if ( (v38 & 0x2000) != 0 )
    {
      v9 |= 0x200u;
      goto LABEL_150;
    }
    goto LABEL_77;
  }
  if ( (unsigned int)xxxScanSysQueue(
                       gptiCurrent,
                       v31,
                       v11,
                       a3,
                       v117,
                       a5,
                       (unsigned __int16)v15 & (unsigned __int16)v38 & 0x3C07,
                       &v110) != 1 )
    goto LABEL_77;
  v9 |= 2u;
  v40 = a1;
LABEL_181:
  v34 = *(unsigned int *)(v40 + 8);
  if ( (_DWORD)v34 == 595 && *(_QWORD *)(v40 + 24) == -1LL )
    v28 = -1LL;
  else
    v28 = 0LL;
  v71 = (unsigned int)(v34 - 571) <= 1
     || ((unsigned int)(v34 - 577) <= 3 || (unsigned int)(v34 - 581) <= 5 || (unsigned int)(v34 - 593) <= 2)
     && (unsigned int)IsPointerMessageTouchpad(gptiCurrent, v28, *(_WORD *)(v40 + 16));
  v72 = v107;
  if ( (!v107 || !v110 || !*(_QWORD *)(gptiCurrent + 1096LL)) && !v71 )
  {
    if ( v107 )
    {
      if ( *(_DWORD *)(v40 + 8) == 258 && (*(_DWORD *)(gptiCurrent + 1184LL) & 1) != 0 )
      {
        v28 = v111[0];
        if ( (v111[0] & 1) != 0 && (unsigned int)xxxKeyboardCorrectionCallout(v40) == 1296 )
        {
          *(_DWORD *)(v40 + 8) = 0;
          *(_QWORD *)(v40 + 16) = 0LL;
          *(_QWORD *)(v40 + 24) = 0LL;
        }
      }
      goto LABEL_202;
    }
LABEL_211:
    v74 = 582LL;
    goto LABEL_212;
  }
LABEL_202:
  if ( !v72 )
    goto LABEL_211;
  v73 = *(_DWORD *)(v40 + 8);
  if ( v73 == 258 || v73 == 80 || (v74 = 582LL, v73 == 582) || v73 == 578 || *(_WORD *)(v40 + 8) >= 0xC000u )
  {
    v75 = xxxCallCtfHook(3, 0, a5, v40);
    v76 = 0LL;
    v74 = 582LL;
    if ( v75 && *(_DWORD *)(v40 + 8) == 258 )
    {
      *(_DWORD *)(v40 + 8) = 0;
      *(_QWORD *)(v40 + 16) = 0LL;
      *(_QWORD *)(v40 + 24) = 0LL;
    }
  }
  else
  {
LABEL_212:
    v76 = 0LL;
  }
  if ( (!v72 || !v110 || !*(_QWORD *)(gptiCurrent + 1096LL)) && !v71 )
  {
    v77 = *(_QWORD *)(gptiCurrent + 424LL);
    v28 = (unsigned int)(*(_DWORD *)(gptiCurrent + 608LL) | *(_DWORD *)(v77 + 24));
    if ( ((*(_BYTE *)(gptiCurrent + 608LL) | *(_BYTE *)(v77 + 24)) & 0x10) != 0 )
    {
      v78 = a5;
      v79 = *(_DWORD *)(v40 + 8);
      if ( (unsigned int)(v79 - 577) > 3 && ((unsigned int)(v79 - 581) > 0x12 || v79 == 589) )
      {
        if ( v79 == 528 && (unsigned __int16)*(_QWORD *)(v40 + 16) == 582 )
        {
LABEL_225:
          xxxPointerCallHook(0, a5, v40, 3u, 0);
          goto LABEL_231;
        }
      }
      else if ( v79 != 595 )
      {
        goto LABEL_225;
      }
      v80 = *(_QWORD *)(gptiCurrent + 824LL);
      if ( (v80 || (v80 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 64LL)) != 0)
        && (*(_DWORD *)(v80 + 64) & 0x80u) != 0 )
      {
        LODWORD(v80) = PhkNextValid(v80);
      }
      xxxCallHook2(v80, 0, v78, v40, v76);
    }
  }
LABEL_231:
  if ( v72 )
  {
    v81 = *(_DWORD *)(gptiCurrent + 1000LL);
    if ( !v81 )
      goto LABEL_238;
    if ( word_1C0322D00 && qword_1C0322D08 == gptiCurrent && dword_1C0322D04 == v81 )
    {
      ForceCompletePendingPromotion();
      xxxProcessMousePromotionQueue();
LABEL_238:
      v74 = 0LL;
    }
    else
    {
      v74 = 0LL;
      *(_DWORD *)(gptiCurrent + 1000LL) = 0;
    }
    if ( *(_DWORD *)(v40 + 8) == 583
      && (*(_WORD *)(v40 + 18) & 0x2000) != 0
      && word_1C0322D00
      && word_1C0322D00 == *(_WORD *)(v40 + 16)
      && qword_1C0322D08 == gptiCurrent )
    {
      *(_DWORD *)(gptiCurrent + 1000LL) = dword_1C0322D04;
    }
    v28 = 0LL;
    v34 = *(unsigned int *)(v40 + 8);
    if ( ((unsigned int)(v34 - 577) <= 3 || (unsigned int)(v34 - 581) <= 0x12 && (_DWORD)v34 != 589)
      && (_DWORD)v34 != 595 )
    {
      v28 = *(unsigned __int16 *)(v40 + 16);
    }
    v82 = (_QWORD **)(gptiCurrent + 968LL);
    if ( (_WORD)v28 != 1 )
    {
      v83 = *v82;
      if ( *v82 != v82 )
      {
        Blink = 0LL;
        if ( (_WORD)v28 )
          Blink = FindThreadPointerData((struct _LIST_ENTRY *)(gptiCurrent + 968LL), v28)[1].Blink;
        do
        {
          v28 = (__int64)v83;
          v83 = (_QWORD *)*v83;
          v34 = *(_QWORD *)(v28 + 24);
          if ( Blink == (struct _LIST_ENTRY *)v34 )
          {
            *(_DWORD *)(v28 + 48) |= 2u;
          }
          else if ( (*(_DWORD *)(v28 + 48) & 2) != 0
                 && (!v34 || !Blink || *(_DWORD *)(v34 + 28) != HIDWORD(Blink[1].Blink))
                 && (*(_QWORD *)v34 == *(_QWORD *)(v34 + 8) && *(_DWORD *)(*(_QWORD *)v34 - 76LL) == 3
                  || (*(_DWORD *)(v34 + 36) & 0x10) != 0) )
          {
            UnlinkAndFreeThreadPointerData(
              (struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 968LL),
              (struct tagTHREADPOINTERDATA *)v28);
          }
        }
        while ( v83 != v82 );
        v40 = a1;
      }
    }
    v15 = v101;
  }
  v85 = v110;
  if ( v110 )
  {
    v86 = *((_DWORD *)v110 + 23);
    if ( (v86 & 0x100) != 0 )
    {
      if ( v107 && *(_QWORD *)(gptiCurrent + 1096LL) )
      {
        EtwTraceBeginDelegateInputCallback(v110, v40, v74, v76);
        v87 = xxxClientCallDelegateThread(*(_QWORD *)(gptiCurrent + 1096LL), v40, *(_QWORD *)(gptiCurrent + 1104LL));
        v31 = (struct tagMSG *)a1;
        EtwTraceEndDelegateInputCallback(v85, a1);
        *((_DWORD *)v85 + 23) &= ~0x100u;
        v88 = *((_DWORD *)v85 + 23);
        if ( (v88 & 0x80u) == 0 )
        {
          if ( (v88 & 0x20) != 0 )
            _HandleDelegatedInputWorker(gptiCurrent, v87, v110);
        }
        else
        {
          FreeQEntry(v85);
        }
        v9 = 0x20000;
        goto LABEL_50;
      }
      *((_DWORD *)v110 + 23) = v86 & 0xFFFFFEFF;
    }
  }
  if ( v71 && (*(_DWORD *)(gptiCurrent + 1080LL) & 0x2000) == 0 )
  {
    if ( !(unsigned int)IsPointerMessageTouchpad(gptiCurrent, 0LL, *(_WORD *)(v40 + 16))
      || !(unsigned int)IsTouchpadPointerInputMessage(*(unsigned int *)(v40 + 8))
      || (ThreadPointerData = FindThreadPointerData((struct _LIST_ENTRY *)(gptiCurrent + 968LL), *(_WORD *)(v40 + 16))) == 0LL
      || (GetPTPShellListener() ? (v34 = *(_QWORD *)GetPTPShellListener()) : (v34 = 0LL),
          ThreadPointerData[2].Blink != (struct _LIST_ENTRY *)v34) )
    {
      xxxClientCallDefaultInputHandler(v40, v28, v89, ThreadPointerData);
      goto LABEL_49;
    }
  }
  if ( a6 && *(_DWORD *)(v40 + 8) == 18 )
  {
    v9 |= 0x40000u;
LABEL_332:
    v99 = 0;
    goto LABEL_334;
  }
  if ( v107 )
  {
    v92 = *(_QWORD *)(gptiCurrent + 944LL);
    if ( v92 )
    {
      LOBYTE(v28) = 18;
      v93 = HMValidateHandleNoRip(v92, v28);
      if ( v93 )
        FreeHidData(v93);
      *(_QWORD *)(gptiCurrent + 944LL) = 0LL;
    }
    v94 = *(_QWORD *)(gptiCurrent + 952LL);
    if ( v94 )
    {
      FreeTouchInputInfo(v94, 1LL);
      *(_QWORD *)(gptiCurrent + 952LL) = 0LL;
    }
    v34 = *(_QWORD *)(gptiCurrent + 960LL);
    if ( v34 )
    {
      FreeGestureInfo(v34, 1LL);
      *(_QWORD *)(gptiCurrent + 960LL) = 0LL;
    }
    v95 = *(_DWORD *)(v40 + 8);
    if ( v95 == 255 )
    {
      if ( *(_QWORD *)(v40 + 16) <= 1uLL )
        *(_QWORD *)(gptiCurrent + 944LL) = *(_QWORD *)(v40 + 24);
    }
    else if ( v95 == 576 && (LOBYTE(v28) = 20, HMValidateHandle(*(_QWORD *)(v40 + 24), v28)) )
    {
      *(_QWORD *)(gptiCurrent + 952LL) = *(_QWORD *)(v40 + 24);
    }
    else if ( ((*(_DWORD *)(v40 + 8) - 281) & 0xFFFFFFFD) == 0 )
    {
      LOBYTE(v28) = 21;
      if ( HMValidateHandle(*(_QWORD *)(v40 + 24), v28) )
        *(_QWORD *)(gptiCurrent + 960LL) = *(_QWORD *)(v40 + 24);
    }
  }
  v99 = 1;
LABEL_334:
  if ( v109 )
    ThreadUnlock1(v34, v28);
  if ( (unsigned int)HandleProcessSpinning() )
  {
    if ( v99 )
    {
      if ( *(_DWORD *)(a1 + 8) == 512 && (*(_DWORD *)(gptiCurrent + 1080LL) & 0x40000) != 0 )
      {
        v100 = *(_DWORD **)(gptiCurrent + 600LL);
        if ( v100 )
        {
          if ( (v100[45] & 0x100000) != 0 && v100[76] )
          {
            v100[77] += ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v100[76];
            ++v100[78];
            v100[76] = 0;
          }
          else
          {
            LogMDAQueueOp(0xD4u, 0LL, 0LL, 0);
          }
        }
      }
      *(_QWORD *)(gptiCurrent + 1032LL) = *(_QWORD *)a1;
      *(_DWORD *)(gptiCurrent + 1040LL) = *(_DWORD *)(a1 + 8);
      *(_QWORD *)(gptiCurrent + 1048LL) = *(_QWORD *)(a1 + 16);
    }
  }
  else
  {
    v99 = 0;
  }
  EtwTraceBeginAppMessageProcessing(a6, v9, a1);
  return v99;
}
