/*
 * XREFs of xxxRealInternalGetMessage @ 0x1C0059620
 * Callers:
 *     NtUserRealInternalGetMessage @ 0x1C0057740 (NtUserRealInternalGetMessage.c)
 *     NtUserPeekMessage @ 0x1C0058C80 (NtUserPeekMessage.c)
 *     NtUserGetMessage @ 0x1C0059520 (NtUserGetMessage.c)
 *     xxxInternalGetMessage @ 0x1C00D0420 (xxxInternalGetMessage.c)
 *     xxxMNLoop @ 0x1C0137990 (xxxMNLoop.c)
 * Callees:
 *     IsShellFrameHangResilient @ 0x1C0001C50 (IsShellFrameHangResilient.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C0001CBC (IsAdaptiveQueueDetachExempted.c)
 *     FreeHidData @ 0x1C00076D0 (FreeHidData.c)
 *     ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x1C00095E4 (-TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z.c)
 *     SlowAppThreadInShellFrame @ 0x1C0009E1C (SlowAppThreadInShellFrame.c)
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C000B1DC (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C000B25C (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     xxxPointerCallHook @ 0x1C000B9B8 (xxxPointerCallHook.c)
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     zzzCalcStartCursorHide @ 0x1C0053820 (zzzCalcStartCursorHide.c)
 *     xxxDoPaint @ 0x1C0055FF8 (xxxDoPaint.c)
 *     xxxCallCtfHook @ 0x1C00575D0 (xxxCallCtfHook.c)
 *     AllocQEntry @ 0x1C0057810 (AllocQEntry.c)
 *     CalcWakeMask @ 0x1C005AAD0 (CalcWakeMask.c)
 *     ?HandleProcessSpinning@@YAHXZ @ 0x1C005AD60 (-HandleProcessSpinning@@YAHXZ.c)
 *     xxxUpdateInputHangInfo @ 0x1C005ADE0 (xxxUpdateInputHangInfo.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C005AF00 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     xxxSleepThread2 @ 0x1C005B500 (xxxSleepThread2.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C005B640 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     zzzWakeInputIdle @ 0x1C005BC10 (zzzWakeInputIdle.c)
 *     xxxCallHook2 @ 0x1C005BCC0 (xxxCallHook2.c)
 *     xxxReceiveMessage @ 0x1C005D110 (xxxReceiveMessage.c)
 *     StoreQMessage @ 0x1C0060180 (StoreQMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     PhkFirstGlobalValid @ 0x1C0064BC4 (PhkFirstGlobalValid.c)
 *     FreeQEntry @ 0x1C0064D1C (FreeQEntry.c)
 *     HMValidateHandleNoRip @ 0x1C00809E4 (HMValidateHandleNoRip.c)
 *     PhkNextValid @ 0x1C0084AA4 (PhkNextValid.c)
 *     zzzReattachThreads @ 0x1C008B6B4 (zzzReattachThreads.c)
 *     xxxDoSysExpunge @ 0x1C00F0D2C (xxxDoSysExpunge.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C00FC6FC (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     WaitMaskIncludesUserInput @ 0x1C0102764 (WaitMaskIncludesUserInput.c)
 *     _IsChild @ 0x1C01115EC (_IsChild.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C013F3DC (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     xxxClientCallDelegateThread @ 0x1C01422E0 (xxxClientCallDelegateThread.c)
 *     _FreeTouchInputInfo @ 0x1C01DCFC0 (_FreeTouchInputInfo.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E218C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     IsTouchpadPointerInputMessage @ 0x1C01E24F8 (IsTouchpadPointerInputMessage.c)
 *     TryDetachShellFrame @ 0x1C01E276C (TryDetachShellFrame.c)
 *     ?GetPTPShellListener@@YAPEAUtagWND@@XZ @ 0x1C01F1978 (-GetPTPShellListener@@YAPEAUtagWND@@XZ.c)
 *     ?PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01F98B4 (-PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01F9AE4 (-UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01FAC0C (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 *     _FreeGestureInfo @ 0x1C02044A0 (_FreeGestureInfo.c)
 *     xxxClientCallDefaultInputHandler @ 0x1C0213BD4 (xxxClientCallDefaultInputHandler.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C023A194 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C023ABBC (-xxxProcessMousePromotionQueue@@YAXXZ.c)
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
  __int64 v14; // rcx
  unsigned int v15; // esi
  int v16; // r9d
  __int64 *v17; // r10
  unsigned int *v18; // r11
  __int64 v19; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v21; // ecx
  __int64 v22; // rcx
  unsigned int v23; // edx
  unsigned int v24; // ebx
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 GlobalValid; // rax
  __int64 v29; // rdx
  int v30; // ecx
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
  __int64 v48; // rdx
  _DWORD *v49; // r10
  __int64 v50; // rcx
  int v51; // edx
  __int64 v52; // r8
  int v53; // edx
  __int64 v54; // rax
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // r8
  _QWORD *v58; // rcx
  _QWORD *v60; // rbx
  __int64 v61; // rcx
  _QWORD *v62; // rax
  _QWORD *v63; // rcx
  int v64; // ebx
  int v65; // edi
  unsigned int v66; // ebx
  __int64 v67; // rcx
  __int64 v68; // rsi
  struct tagTHREADINFO *v69; // r14
  __int64 v70; // rax
  __int64 v71; // rax
  BOOL v72; // r14d
  int v73; // ebx
  int v74; // eax
  __int64 v75; // r8
  int v76; // eax
  __int64 v77; // r9
  __int64 v78; // rax
  unsigned int v79; // r10d
  int v80; // ecx
  __int64 v81; // rdx
  __int64 v82; // rcx
  int v83; // eax
  _QWORD **v84; // rsi
  _QWORD *v85; // rbx
  struct _LIST_ENTRY *Blink; // rdi
  struct tagQMSG *v87; // rbx
  int v88; // eax
  unsigned int v89; // edi
  int v90; // ecx
  __int64 v91; // r8
  struct _LIST_ENTRY *ThreadPointerData; // r9
  struct tagTHREADINFO *v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rcx
  int v97; // eax
  unsigned int v98; // ebx
  __int64 v99; // rbx
  __int64 v100; // rax
  int v101; // eax
  _DWORD *v102; // rdx
  unsigned int v103; // [rsp+70h] [rbp-B8h]
  unsigned int v104; // [rsp+78h] [rbp-B0h]
  unsigned int v105; // [rsp+7Ch] [rbp-ACh]
  unsigned int v106; // [rsp+80h] [rbp-A8h]
  int v107; // [rsp+84h] [rbp-A4h] BYREF
  int v108; // [rsp+88h] [rbp-A0h]
  int v109; // [rsp+8Ch] [rbp-9Ch]
  struct tagQMSG *v110; // [rsp+90h] [rbp-98h] BYREF
  _DWORD v111[6]; // [rsp+98h] [rbp-90h] BYREF
  unsigned int v112; // [rsp+B0h] [rbp-78h]
  int v113; // [rsp+B4h] [rbp-74h]
  _QWORD v114[11]; // [rsp+D0h] [rbp-58h] BYREF
  __int16 v116; // [rsp+138h] [rbp+10h]
  unsigned int v118; // [rsp+148h] [rbp+20h]

  v111[0] = 0;
  v106 = 0;
  v104 = 0;
  v105 = 0;
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
  v114[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v114;
  v114[1] = v10;
  ++*(_DWORD *)(v10 + 8);
  v13 = 1;
LABEL_8:
  v109 = v13;
  ++*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 8LL);
  if ( !a4 )
    a4 = -1;
  v118 = a4;
  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 400LL) + 12LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v15 = CalcWakeMask(a3, a4, HIWORD(a5));
  v103 = v15;
  v113 = v15 & 0x1C07;
  if ( (v15 & 0x1C07) != 0 )
  {
    v14 = *v17;
    *(_DWORD *)(gptiCurrent + 1240LL) = (*v17 * (unsigned __int64)*v18) >> 24;
  }
  if ( (v15 & 7) != 7 )
  {
    if ( (v15 & 6) == 0 )
      goto LABEL_21;
    v14 = gptiCurrent;
    if ( !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 64LL) )
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
    zzzCalcStartCursorHide(0LL, 0);
  }
  v22 = *(_QWORD *)(gptiCurrent + 376LL);
  v23 = gcSysExpunge;
  if ( *(_DWORD *)(v22 + 376) != gcSysExpunge )
  {
    *(_DWORD *)(v22 + 376) = gcSysExpunge;
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 380LL) & gdwSysExpungeMask) != 0 )
      xxxDoSysExpunge(gptiCurrent);
  }
  v24 = a5;
  v108 = a5 & 1;
  if ( (a5 & 1) != 0 )
  {
    if ( gfShellFrameHangResilient )
    {
      if ( (v15 & 0x1CBF) != 0
        && (*(_DWORD *)(gptiCurrent + 1072LL) & 0x80000) != 0
        && (*(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & (unsigned __int16)v15) != 0 )
      {
        v25 = *(_QWORD *)(gptiCurrent + 416LL);
        if ( !*(_QWORD *)(v25 + 48) && !*(_QWORD *)(v25 + 40) )
          TryAttachShellFrame(gptiCurrent, v23);
      }
    }
  }
  v26 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_QWORD *)(gptiCurrent + 464LL)
    || (v27 = *(_QWORD *)(v26 + 24), v27 == gptiCurrent) && *(_QWORD *)(v26 + 32) == *(_QWORD *)(gptiCurrent + 496LL) )
  {
    v29 = 0LL;
    *(_QWORD *)(v26 + 24) = 0LL;
  }
  else if ( !v27 || *(_DWORD *)(v27 + 776) )
  {
    v29 = 0LL;
  }
  else
  {
    GlobalValid = PhkFirstGlobalValid(gptiCurrent, 1LL);
    v29 = 0LL;
    if ( GlobalValid )
      *(_QWORD *)(v26 + 24) = 0LL;
  }
  if ( *(_QWORD *)(v26 + 24) != gptiCurrent )
    **(_DWORD **)(gptiCurrent + 400LL) &= ~1u;
  *(_WORD *)(gptiCurrent + 752LL) = 0;
  if ( (a5 & 2) == 0 )
  {
    v30 = *(_DWORD *)(gptiCurrent + 440LL);
    if ( (v30 & 0x80000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 28LL) = v30 & 0xFFF7FFFF;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) |= 0x2000u;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 4LL) |= 0x2000u;
      *(_DWORD *)(gptiCurrent + 440LL) &= ~0x80000u;
    }
  }
  v112 = v15 & 0xFFFFFFBF;
  v116 = ~(v15 & 0xFFBF);
  v31 = (struct tagMSG *)a1;
  while ( 1 )
  {
    v110 = 0LL;
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) |= *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 8LL);
    if ( *(_QWORD *)(gptiCurrent + 408LL) == gpdeskRecalcQueueAttach )
    {
      gpdeskRecalcQueueAttach = 0LL;
      if ( *(_QWORD *)(gptiCurrent + 408LL) )
      {
        v32 = *(_QWORD *)(gptiCurrent + 416LL);
        if ( !*(_QWORD *)(v32 + 40) && !*(_QWORD *)(v32 + 48) )
          zzzReattachThreads(2LL, 0LL, 0LL);
      }
    }
    v33 = *(_QWORD *)(gptiCurrent + 400LL);
    *(_WORD *)(gptiCurrent + 752LL) |= *(_WORD *)(v33 + 4) & (unsigned __int16)v112;
    *(_WORD *)(v33 + 4) &= v116;
    v34 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL);
    if ( ((unsigned __int8)v15 & (unsigned __int8)*(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 )
    {
      if ( (v34 & 0x40) != 0 )
      {
        do
          xxxReceiveMessage(gptiCurrent, v29);
        while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 );
      }
    }
    else if ( (v34 & 0x40) != 0 )
    {
      v9 |= 0x80u;
      v35 = a5 & 2;
      goto LABEL_151;
    }
    LOBYTE(v34) = v113 != 0;
    if ( v113 != 0 && (v15 & 0x40) != 0 && *(_DWORD *)(gptiCurrent + 996LL) )
    {
      do
      {
        *(_DWORD *)(gptiCurrent + 996LL) = 0;
        for ( i = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 960LL));
              i;
              i = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 960LL)) )
        {
          xxxNotifyCaptureChangeIfCaptured(i, (struct tagWND *)v29, v37);
        }
      }
      while ( *(_DWORD *)(gptiCurrent + 996LL) );
      v24 = a5;
    }
    v38 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL);
    if ( (v38 & v15) == 0 )
    {
      v9 |= 0x100u;
LABEL_150:
      v35 = a5 & 2;
      goto LABEL_151;
    }
    v34 = *(_QWORD *)(gptiCurrent + 384LL);
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
                         v118,
                         (struct _QMSG_POSTCHAR_FLAGS *)v111,
                         v108) )
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
      v41 = xxxScanSysQueue(gptiCurrent, a1, v11, a3, v118, a5, v39 & 0x3C07, &v110);
      if ( v41 == 2 )
      {
        if ( (unsigned int)IsShellFrameHangResilient(gptiCurrent) && (v39 & 1) != 0 && a6 )
        {
          v42 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          v43 = v106;
          if ( v106 )
          {
            v44 = v105;
            v29 = v104;
          }
          else
          {
            v29 = (unsigned int)v42;
            v104 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            v43 = v104;
            v106 = v104;
            v44 = 0;
            v105 = 0;
          }
          if ( (unsigned int)v42 - v43 < 0xFA )
          {
            xxxSleepThread2(v15, 0xAu, 1, 0, (enum SLEEP_STATUS *)&v107);
            v105 = v44 + 1;
            v31 = (struct tagMSG *)a1;
LABEL_49:
            v24 = a5;
            goto LABEL_50;
          }
          if ( (_DWORD)v29 == v43 )
          {
            TraceLoggingSysQueueLockedRetryFailed((const struct _TlgProvider_t *)v44);
            v104 = 0;
          }
        }
      }
      else
      {
        v104 = 0;
        v105 = 0;
        v106 = 0;
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
    v34 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL);
    if ( ((unsigned __int8)v15 & (unsigned __int8)*(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 )
    {
      if ( (v34 & 0x40) != 0 )
      {
        do
          xxxReceiveMessage(gptiCurrent, v29);
        while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 );
      }
    }
    else if ( (v34 & 0x40) != 0 )
    {
      v9 |= 0x1000u;
      goto LABEL_150;
    }
    v45 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL);
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
    v35 = a5 & 2;
    if ( (a5 & 2) != 0 )
      goto LABEL_119;
    zzzWakeInputIdle(gptiCurrent);
    while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 )
      xxxReceiveMessage(gptiCurrent, v29);
    v34 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL);
    if ( ((unsigned __int8)v15 & (unsigned __int8)*(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 )
    {
      if ( (v34 & 0x40) != 0 )
      {
        do
          xxxReceiveMessage(gptiCurrent, v29);
        while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 );
      }
    }
    else if ( (v34 & 0x40) != 0 )
    {
      v9 |= 0x4000u;
      goto LABEL_151;
    }
    v45 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL);
    if ( (v45 & v15) != 0 )
    {
LABEL_119:
      if ( ((unsigned __int8)v15 & (unsigned __int8)v45 & 0x10) != 0 )
      {
        v46 = gptiCurrent + 1056LL;
        for ( j = *(_QWORD **)(gptiCurrent + 1056LL); j != (_QWORD *)v46; j = (_QWORD *)*j )
        {
          v48 = j[4];
          if ( !v11 || v11 == v48 || (unsigned int)IsChild(v11, v48) )
          {
            v49 = AllocQEntry(gptiCurrent + 728LL);
            if ( v49 )
            {
              v50 = *(_QWORD *)(gpsi + 3976LL);
              v51 = 0;
              v52 = *(_QWORD *)(gptiCurrent + 408LL);
              if ( v52 )
                v51 = *(_DWORD *)(*(_QWORD *)(v52 + 8) + 244LL) & 1;
              if ( v51 )
              {
                v53 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 776LL);
                if ( (v53 & 0x2000) != 0 )
                {
                  v50 = *(_QWORD *)(gpsi + 3960LL);
                }
                else if ( (v53 & 0x6000) == 0 )
                {
                  v50 = *(_QWORD *)(gpsi + 3952LL);
                }
              }
              v54 = 280LL;
              if ( (*(_DWORD *)(j - 1) & 2) == 0 )
                v54 = *(j - 3);
              v55 = 275LL;
              if ( (*(_DWORD *)(j - 1) & 2) != 0 )
                v55 = 280LL;
              StoreQMessage(v49, j[4], v55, j[5], v54, 0, 0LL, 0, 0LL, 0, 0LL, v50, 0LL, 0LL);
              if ( (*(_DWORD *)(gptiCurrent + 440LL) & 1) == 0 )
              {
                *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) |= 0x108u;
                *(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 4LL) |= 0x108u;
                if ( (*(_WORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 10LL) & 0x108) != 0 )
                  KeSetEvent(*(PRKEVENT *)(gptiCurrent + 648LL), 2, 0);
              }
            }
            *((_DWORD *)j - 2) &= ~1u;
            v56 = *(j - 4);
            v57 = *j;
            v58 = (_QWORD *)j[1];
            if ( *(_QWORD **)(*j + 8LL) != j || (_QWORD *)*v58 != j )
              __fastfail(3u);
            *v58 = v57;
            *(_QWORD *)(v57 + 8) = v58;
            if ( (*(_DWORD *)(v56 + 524))-- == 1 )
              *(_WORD *)(*(_QWORD *)(v56 + 400) + 6LL) &= ~0x10u;
            v60 = j + 2;
            v61 = *v60;
            v62 = (_QWORD *)v60[1];
            if ( *(_QWORD **)(*v60 + 8LL) != v60 || (_QWORD *)*v62 != v60 )
              __fastfail(3u);
            *v62 = v61;
            *(_QWORD *)(v61 + 8) = v62;
            v63 = (_QWORD *)gtmrListHead[1];
            *v60 = gtmrListHead[0];
            v60[1] = v63;
            if ( *v63 != gtmrListHead[0] )
              __fastfail(3u);
            *v63 = v60;
            gtmrListHead[1] = v60;
            v9 |= 8u;
            goto LABEL_149;
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
      v99 = PsGetCurrentProcessWin32Process(v34);
      *(_DWORD *)(gptiCurrent + 440LL) &= ~0x2000u;
      if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x1000) != 0 )
      {
        v34 = *(_QWORD *)(gptiCurrent + 536LL);
        if ( *(_QWORD *)(v34 + 24) )
        {
          EtwTraceWakeInputIdle(0LL, gptiCurrent);
          v29 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 536LL) + 24LL);
          v34 = *(_QWORD *)(v29 + 32);
          if ( v34 )
          {
            if ( v34 != -1 )
            {
              KeSetEvent((PRKEVENT)v34, 1, 0);
              ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 536LL) + 24LL) + 32LL));
              v34 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 536LL) + 24LL);
              *(_QWORD *)(v34 + 32) = -1LL;
            }
          }
          else
          {
            *(_QWORD *)(v29 + 32) = -1LL;
          }
        }
        goto LABEL_328;
      }
      v100 = *(_QWORD *)(gptiCurrent + 376LL);
      if ( !*(_QWORD *)(v100 + 304) )
        *(_QWORD *)(v100 + 304) = gptiCurrent;
      if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 304LL) != gptiCurrent )
        goto LABEL_328;
      EtwTraceWakeInputIdle(0LL, gptiCurrent);
      v34 = *(_QWORD *)(v99 + 16);
      if ( v34 )
      {
        if ( v34 != -1 )
        {
          KeSetEvent((PRKEVENT)v34, 1, 0);
          ObfDereferenceObject(*(PVOID *)(v99 + 16));
          goto LABEL_327;
        }
      }
      else
      {
LABEL_327:
        *(_QWORD *)(v99 + 16) = -1LL;
      }
LABEL_328:
      v101 = *(_DWORD *)(v99 + 12);
      if ( (v101 & 4) != 0 )
      {
        *(_DWORD *)(v99 + 12) = v101 & 0xFFFFFFFB;
        zzzCalcStartCursorHide(0LL, 0);
      }
      while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 400LL) + 6LL) & 0x40) != 0 )
        xxxReceiveMessage(gptiCurrent, v29);
      goto LABEL_332;
    }
    if ( v109 )
    {
      v64 = 0;
      if ( (unsigned int)WaitMaskIncludesUserInput(v15, v29) && *(_QWORD *)(v11 + 16) == gptiCurrent )
      {
        v64 = 1;
        xxxUpdateInputHangInfo(v11, 0LL);
      }
      v65 = xxxRealSleepThread(v15, 0, 1, 0, 0LL);
      if ( v64 )
        xxxUpdateInputHangInfo(v11, 1LL);
LABEL_175:
      if ( !v65 )
      {
        v9 |= 0x10000u;
        goto LABEL_332;
      }
      v29 = 0LL;
      v9 = 0;
      v31 = (struct tagMSG *)a1;
      v24 = a5;
    }
    else
    {
      v66 = 0;
      v107 = 0;
      v67 = *(_QWORD *)(gptiCurrent + 384LL);
      v68 = *(_QWORD *)(v67 + 32);
      v69 = *(struct tagTHREADINFO **)(v67 + 24);
      if ( gfShellFrameHangResilient )
      {
        if ( (*(_DWORD *)(gptiCurrent + 1072LL) & 0x40000) != 0 && *(_DWORD *)(v67 + 336) > 1u )
        {
          v70 = *(_QWORD *)(gptiCurrent + 416LL);
          if ( !*(_QWORD *)(v70 + 40) && !*(_QWORD *)(v70 + 48) && !IsAdaptiveQueueDetachExempted(gptiCurrent) )
          {
            v66 = gdwMDAQTimeoutDefenseInDepth;
            v104 = 0;
            v105 = 0;
            v106 = 0;
          }
        }
      }
      v65 = xxxSleepThread2(v103, v66, 1, 0, (enum SLEEP_STATUS *)&v107);
      v34 = gfShellFrameHangResilient;
      if ( !gfShellFrameHangResilient
        || (*(_DWORD *)(gptiCurrent + 1072LL) & 0x40000) == 0
        || (v34 = *(_QWORD *)(gptiCurrent + 384LL), *(_DWORD *)(v34 + 336) <= 1u)
        || (v34 = gptiCurrent, v29 = gptiCurrent, v71 = *(_QWORD *)(gptiCurrent + 416LL), *(_QWORD *)(v71 + 40))
        || *(_QWORD *)(v71 + 48)
        || IsAdaptiveQueueDetachExempted(gptiCurrent)
        || (v34 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL), v34 != *(_QWORD *)(gptiCurrent + 1224LL)) && v34
        || !v107 )
      {
        v15 = v103;
        goto LABEL_175;
      }
      v93 = SlowAppThreadInShellFrame(gptiCurrent, v69, v68, v107 == 2);
      v15 = v103;
      v31 = (struct tagMSG *)a1;
      v24 = a5;
      if ( v93 )
        TryDetachShellFrame(gptiCurrent, v93, v107 == 2, 0LL);
LABEL_50:
      v29 = 0LL;
    }
  }
  EtwTraceInputQueueNoRemoveLocker(v34, v29);
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
                       v118,
                       v24,
                       (unsigned __int16)v15 & (unsigned __int16)v38 & 0x3C07,
                       &v110) != 1 )
    goto LABEL_77;
  v9 |= 2u;
  v40 = a1;
LABEL_181:
  v34 = *(unsigned int *)(v40 + 8);
  if ( (_DWORD)v34 == 595 && *(_QWORD *)(v40 + 24) == -1LL )
    v29 = -1LL;
  else
    v29 = 0LL;
  v72 = (unsigned int)(v34 - 571) <= 1
     || ((unsigned int)(v34 - 577) <= 3 || (unsigned int)(v34 - 581) <= 5 || (unsigned int)(v34 - 593) <= 2)
     && (unsigned int)IsPointerMessageTouchpad(gptiCurrent, v29, *(_WORD *)(v40 + 16));
  v73 = v108;
  if ( (!v108 || !v110 || !*(_QWORD *)(gptiCurrent + 1088LL)) && !v72 )
  {
    if ( v108 )
    {
      if ( *(_DWORD *)(v40 + 8) == 258 && (*(_DWORD *)(gptiCurrent + 1176LL) & 1) != 0 )
      {
        v29 = v111[0];
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
    v75 = 582LL;
    goto LABEL_212;
  }
LABEL_202:
  if ( !v73 )
    goto LABEL_211;
  v74 = *(_DWORD *)(v40 + 8);
  if ( v74 == 258 || v74 == 80 || (v75 = 582LL, v74 == 582) || v74 == 578 || *(_WORD *)(v40 + 8) >= 0xC000u )
  {
    v76 = xxxCallCtfHook(3, 0, a5, v40);
    v77 = 0LL;
    v75 = 582LL;
    if ( v76 && *(_DWORD *)(v40 + 8) == 258 )
    {
      *(_DWORD *)(v40 + 8) = 0;
      *(_QWORD *)(v40 + 16) = 0LL;
      *(_QWORD *)(v40 + 24) = 0LL;
    }
  }
  else
  {
LABEL_212:
    v77 = 0LL;
  }
  if ( (!v73 || !v110 || !*(_QWORD *)(gptiCurrent + 1088LL)) && !v72 )
  {
    v78 = *(_QWORD *)(gptiCurrent + 416LL);
    v29 = (unsigned int)(*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(v78 + 24));
    if ( ((*(_BYTE *)(gptiCurrent + 600LL) | *(_BYTE *)(v78 + 24)) & 0x10) != 0 )
    {
      v79 = a5;
      v80 = *(_DWORD *)(v40 + 8);
      v81 = *(_QWORD *)(v40 + 16);
      if ( (unsigned int)(v80 - 577) > 3 && ((unsigned int)(v80 - 581) > 0x12 || v80 == 589) )
      {
        if ( v80 == 528 && (_WORD)v81 == 582 )
        {
LABEL_225:
          xxxPointerCallHook(0, a5, v40, 3u, 0);
          goto LABEL_231;
        }
      }
      else if ( v80 != 595 )
      {
        goto LABEL_225;
      }
      v82 = *(_QWORD *)(gptiCurrent + 816LL);
      if ( (v82 || (v82 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 64LL)) != 0)
        && (*(_DWORD *)(v82 + 64) & 0x80u) != 0 )
      {
        LODWORD(v82) = PhkNextValid(v82, v81, 582LL, 0LL);
      }
      xxxCallHook2(v82, 0, v79, v40, v77);
    }
  }
LABEL_231:
  if ( v73 )
  {
    v83 = *(_DWORD *)(gptiCurrent + 992LL);
    if ( !v83 )
      goto LABEL_238;
    if ( word_1C03235F0 && qword_1C03235F8 == gptiCurrent && dword_1C03235F4 == v83 )
    {
      ForceCompletePendingPromotion();
      xxxProcessMousePromotionQueue();
LABEL_238:
      v75 = 0LL;
    }
    else
    {
      v75 = 0LL;
      *(_DWORD *)(gptiCurrent + 992LL) = 0;
    }
    if ( *(_DWORD *)(v40 + 8) == 583
      && (*(_WORD *)(v40 + 18) & 0x2000) != 0
      && word_1C03235F0
      && word_1C03235F0 == *(_WORD *)(v40 + 16)
      && qword_1C03235F8 == gptiCurrent )
    {
      *(_DWORD *)(gptiCurrent + 992LL) = dword_1C03235F4;
    }
    v29 = 0LL;
    v34 = *(unsigned int *)(v40 + 8);
    if ( ((unsigned int)(v34 - 577) <= 3 || (unsigned int)(v34 - 581) <= 0x12 && (_DWORD)v34 != 589)
      && (_DWORD)v34 != 595 )
    {
      v29 = *(unsigned __int16 *)(v40 + 16);
    }
    v84 = (_QWORD **)(gptiCurrent + 960LL);
    if ( (_WORD)v29 != 1 )
    {
      v85 = *v84;
      if ( *v84 != v84 )
      {
        Blink = 0LL;
        if ( (_WORD)v29 )
          Blink = FindThreadPointerData((struct _LIST_ENTRY *)(gptiCurrent + 960LL), v29)[1].Blink;
        do
        {
          v29 = (__int64)v85;
          v85 = (_QWORD *)*v85;
          v34 = *(_QWORD *)(v29 + 24);
          if ( Blink == (struct _LIST_ENTRY *)v34 )
          {
            *(_DWORD *)(v29 + 48) |= 2u;
          }
          else if ( (*(_DWORD *)(v29 + 48) & 2) != 0
                 && (!v34 || !Blink || *(_DWORD *)(v34 + 28) != HIDWORD(Blink[1].Blink))
                 && (*(_QWORD *)v34 == *(_QWORD *)(v34 + 8) && *(_DWORD *)(*(_QWORD *)v34 - 76LL) == 3
                  || (*(_DWORD *)(v34 + 36) & 0x10) != 0) )
          {
            UnlinkAndFreeThreadPointerData(
              (struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 960LL),
              (struct tagTHREADPOINTERDATA *)v29);
          }
        }
        while ( v85 != v84 );
        v40 = a1;
      }
    }
    v15 = v103;
  }
  v87 = v110;
  if ( v110 )
  {
    v88 = *((_DWORD *)v110 + 23);
    if ( (v88 & 0x100) != 0 )
    {
      if ( v108 && *(_QWORD *)(gptiCurrent + 1088LL) )
      {
        EtwTraceBeginDelegateInputCallback(v110, v40, v75, v77);
        v89 = xxxClientCallDelegateThread(*(_QWORD *)(gptiCurrent + 1088LL), v40, *(_QWORD *)(gptiCurrent + 1096LL));
        v31 = (struct tagMSG *)a1;
        EtwTraceEndDelegateInputCallback(v87, a1);
        *((_DWORD *)v87 + 23) &= ~0x100u;
        v90 = *((_DWORD *)v87 + 23);
        if ( (v90 & 0x80u) == 0 )
        {
          if ( (v90 & 0x20) != 0 )
            _HandleDelegatedInputWorker(gptiCurrent, v89, v110);
        }
        else
        {
          FreeQEntry(v87);
        }
        v9 = 0x20000;
        goto LABEL_49;
      }
      *((_DWORD *)v110 + 23) = v88 & 0xFFFFFEFF;
    }
  }
  if ( v72 && (*(_DWORD *)(gptiCurrent + 1072LL) & 0x2000) == 0 )
  {
    if ( !(unsigned int)IsPointerMessageTouchpad(gptiCurrent, 0LL, *(_WORD *)(v40 + 16))
      || !(unsigned int)IsTouchpadPointerInputMessage(*(unsigned int *)(v40 + 8))
      || (ThreadPointerData = FindThreadPointerData((struct _LIST_ENTRY *)(gptiCurrent + 960LL), *(_WORD *)(v40 + 16))) == 0LL
      || (GetPTPShellListener() ? (v34 = *(_QWORD *)GetPTPShellListener()) : (v34 = 0LL),
          ThreadPointerData[2].Blink != (struct _LIST_ENTRY *)v34) )
    {
      xxxClientCallDefaultInputHandler(v40, v29, v91, ThreadPointerData);
LABEL_149:
      v31 = (struct tagMSG *)a1;
      goto LABEL_49;
    }
  }
  if ( a6 && *(_DWORD *)(v40 + 8) == 18 )
  {
    v9 |= 0x40000u;
LABEL_332:
    v98 = 0;
    goto LABEL_334;
  }
  if ( !v108 )
  {
LABEL_333:
    v98 = 1;
    goto LABEL_334;
  }
  v94 = *(_QWORD *)(gptiCurrent + 936LL);
  if ( v94 )
  {
    LOBYTE(v29) = 18;
    v95 = HMValidateHandleNoRip(v94, v29);
    if ( v95 )
      FreeHidData(v95);
    *(_QWORD *)(gptiCurrent + 936LL) = 0LL;
  }
  v96 = *(_QWORD *)(gptiCurrent + 944LL);
  if ( v96 )
  {
    FreeTouchInputInfo(v96, 1LL);
    *(_QWORD *)(gptiCurrent + 944LL) = 0LL;
  }
  v34 = *(_QWORD *)(gptiCurrent + 952LL);
  if ( v34 )
  {
    FreeGestureInfo(v34, 1LL);
    *(_QWORD *)(gptiCurrent + 952LL) = 0LL;
  }
  v97 = *(_DWORD *)(v40 + 8);
  if ( v97 != 255 )
  {
    if ( v97 == 576 && HMValidateHandle(*(_QWORD *)(v40 + 24), 20) )
    {
      *(_QWORD *)(gptiCurrent + 944LL) = *(_QWORD *)(v40 + 24);
    }
    else if ( ((*(_DWORD *)(v40 + 8) - 281) & 0xFFFFFFFD) == 0 && HMValidateHandle(*(_QWORD *)(v40 + 24), 21) )
    {
      *(_QWORD *)(gptiCurrent + 952LL) = *(_QWORD *)(v40 + 24);
    }
    goto LABEL_333;
  }
  v98 = 1;
  if ( *(_QWORD *)(v40 + 16) <= 1uLL )
    *(_QWORD *)(gptiCurrent + 936LL) = *(_QWORD *)(v40 + 24);
LABEL_334:
  if ( v109 )
    ThreadUnlock1(v34, v29);
  if ( (unsigned int)HandleProcessSpinning() )
  {
    if ( v98 )
    {
      if ( *(_DWORD *)(a1 + 8) == 512 && (*(_DWORD *)(gptiCurrent + 1072LL) & 0x40000) != 0 )
      {
        v102 = *(_DWORD **)(gptiCurrent + 592LL);
        if ( v102 )
        {
          if ( (v102[45] & 0x100000) != 0 )
          {
            if ( v102[76] )
            {
              v102[77] += ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v102[76];
              ++v102[78];
              v102[76] = 0;
            }
          }
        }
      }
      *(_QWORD *)(gptiCurrent + 1024LL) = *(_QWORD *)a1;
      *(_DWORD *)(gptiCurrent + 1032LL) = *(_DWORD *)(a1 + 8);
      *(_QWORD *)(gptiCurrent + 1040LL) = *(_QWORD *)(a1 + 16);
    }
  }
  else
  {
    v98 = 0;
  }
  EtwTraceBeginAppMessageProcessing(a6, v9, a1);
  return v98;
}
