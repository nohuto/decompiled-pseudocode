/*
 * XREFs of xxxRealInternalGetMessage @ 0x140057CC8
 * Callers:
 *     NtUserRealInternalGetMessage @ 0x1400578B0 (NtUserRealInternalGetMessage.c)
 *     xxxInternalGetMessage @ 0x140057C40 (xxxInternalGetMessage.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x14000A29C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14001EA30 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14001F398 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     xxxSleepThread2 @ 0x140022590 (xxxSleepThread2.c)
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x140023380 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     xxxDoSysExpungeIfNeeded @ 0x140024000 (xxxDoSysExpungeIfNeeded.c)
 *     ?xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z @ 0x14002457C (-xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     zzzWakeInputIdle @ 0x140025990 (zzzWakeInputIdle.c)
 *     ?SaveMessageInfoHandle@@YAXPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x140028500 (-SaveMessageInfoHandle@@YAXPEAUtagTHREADINFO@@PEAUtagMSG@@@Z.c)
 *     ?FlushPostedRawInputAndUnlinkThisOne@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z @ 0x140028738 (-FlushPostedRawInputAndUnlinkThisOne@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z.c)
 *     ?FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x140028818 (-FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxSendPostedMessage@@YAXAEBUtagMSG@@PEAU1@@Z @ 0x140036ADC (-xxxSendPostedMessage@@YAXAEBUtagMSG@@PEAU1@@Z.c)
 *     ?FreeSavedMessageInfoHandles@@YAXPEAUtagTHREADINFO@@@Z @ 0x14003A090 (-FreeSavedMessageInfoHandles@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14003ACCC (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 *     xxxCallCtfHook @ 0x14003CF78 (xxxCallCtfHook.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14004D1E0 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     xxxDoPaint @ 0x14004F698 (xxxDoPaint.c)
 *     IsMiPEnabledForWindow @ 0x140054BA0 (IsMiPEnabledForWindow.c)
 *     ?WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z @ 0x140055200 (-WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z.c)
 *     CalcWakeMask @ 0x140055540 (CalcWakeMask.c)
 *     IsShellFrameHangResilient @ 0x1400598D4 (IsShellFrameHangResilient.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x14005991C (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?TraceLoggingMiPSuppressedForWindow@@YAXQEBUtagWND@@IH@Z @ 0x140090AF0 (-TraceLoggingMiPSuppressedForWindow@@YAXQEBUtagWND@@IH@Z.c)
 *     ?CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x140094ED4 (-CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1400951E4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBWND@@_N@Z @ 0x1400961C0 (-GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBW.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x140096B60 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     DoTimer @ 0x1400983E4 (DoTimer.c)
 *     xxxDrainQueueCompletions @ 0x140131AD0 (xxxDrainQueueCompletions.c)
 *     xxxCheckPendingPromotePointer @ 0x140135CB0 (xxxCheckPendingPromotePointer.c)
 *     IsMiPPointerMessage @ 0x1401362D0 (IsMiPPointerMessage.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1401497E4 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     UpdateThreadInputPointerList @ 0x140155F10 (UpdateThreadInputPointerList.c)
 *     ?WaitMaskIncludesUserInput@@YA_NI@Z @ 0x140155F90 (-WaitMaskIncludesUserInput@@YA_NI@Z.c)
 *     ?HasCoreMessagingWindow@tagTHREADINFO@@QEBA_NXZ @ 0x140155FF0 (-HasCoreMessagingWindow@tagTHREADINFO@@QEBA_NXZ.c)
 *     xxxProcessDelegateCapturedPointers @ 0x140159BE0 (xxxProcessDelegateCapturedPointers.c)
 *     ?HandleProcessSpinning@@YAHXZ @ 0x140159D80 (-HandleProcessSpinning@@YAHXZ.c)
 *     IsTouchpadPointerInputMessage @ 0x1401886A0 (IsTouchpadPointerInputMessage.c)
 *     ?StrugglingInputQueueStop@Mouse@InputTraceLogging@@SAXPEBUtagQ@@@Z @ 0x14018A704 (-StrugglingInputQueueStop@Mouse@InputTraceLogging@@SAXPEBUtagQ@@@Z.c)
 *     Feature_YieldInputQueue2__private_GetVariant @ 0x14018AA6C (Feature_YieldInputQueue2__private_GetVariant.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     xxxSleepThreadWithPwnd @ 0x1401B9E80 (xxxSleepThreadWithPwnd.c)
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1401C47FC (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     xxxClientCallDelegateThread @ 0x1401D39EC (xxxClientCallDelegateThread.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x1401DAF58 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     ?CallShellHandwritingDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1401E8EE0 (-CallShellHandwritingDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1401E9238 (-_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z @ 0x1401E9D20 (-UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z.c)
 *     ?UnblockDeferredInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x1401EA144 (-UnblockDeferredInput@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxClientCallDefaultInputHandler @ 0x1401F4C00 (xxxClientCallDefaultInputHandler.c)
 *     xxxClientCallDefWindowProc @ 0x1401FCEE4 (xxxClientCallDefWindowProc.c)
 *     Feature_MTestAbSh1__private_ReportDeviceUsage @ 0x1402061AC (Feature_MTestAbSh1__private_ReportDeviceUsage.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1402084C8 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z @ 0x1402089BC (-ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z.c)
 *     SlowAppThreadInShellFrame @ 0x14020BCAC (SlowAppThreadInShellFrame.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x14020E730 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U1@U1@U2@U?$_tlgWrapperByVal@$01@@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4334AEBU?$_tlgWrapperByVal@$01@@53@Z @ 0x14023EA40 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U1@U1@U2@U-$_tlgWrapperByVal@$01@@.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     zzzReattachThreads @ 0x140277664 (zzzReattachThreads.c)
 *     zzzCalcStartCursorHide @ 0x14028AAB0 (zzzCalcStartCursorHide.c)
 *     TryDetachShellFrame @ 0x140292DFC (TryDetachShellFrame.c)
 *     ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x1402946C8 (-TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z.c)
 *     ?HijackHidData@RawInput@InputTraceLogging@@SAXPEAX@Z @ 0x140296E08 (-HijackHidData@RawInput@InputTraceLogging@@SAXPEAX@Z.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x1402A08EC (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall xxxRealInternalGetMessage(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned int v9; // r12d
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rsi
  unsigned int v12; // r13d
  struct tagWND *v13; // rax
  struct tagTHREADINFO **v14; // r15
  unsigned int v15; // ebx
  unsigned int v17; // edx
  unsigned int v18; // eax
  _QWORD *v19; // r11
  unsigned int v20; // r13d
  __int64 v21; // rcx
  struct tagWND *v22; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v24; // ecx
  char v25; // bl
  __int64 v26; // rdx
  __int64 v27; // rdi
  struct tagTHREADINFO *v28; // rcx
  char v29; // r15
  bool v30; // r12
  __int64 v31; // rbx
  __int64 UserSessionState; // rax
  int v33; // r8d
  int v34; // edx
  __int64 v35; // rcx
  unsigned __int32 v36; // eax
  __int16 v37; // bx
  unsigned int v38; // r15d
  int v39; // edi
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // eax
  const struct tagQ *v43; // rcx
  LARGE_INTEGER PerformanceCounter; // r15
  __int64 v45; // rdx
  __int64 v46; // rcx
  LARGE_INTEGER *v47; // rax
  LARGE_INTEGER *v48; // rbx
  LONG HighPart; // ecx
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rdi
  int v52; // r8d
  int v53; // r9d
  int v54; // r12d
  __int64 v55; // rax
  bool v56; // r15
  int v57; // ebx
  __int64 v58; // rcx
  struct tagWND *v59; // rdi
  int v60; // eax
  __int64 v61; // rcx
  int PostMessage; // eax
  int v63; // eax
  int v64; // r8d
  int v65; // r9d
  unsigned int v66; // ebx
  int v67; // ebx
  bool v68; // r12
  __int64 v69; // rdi
  __int64 v70; // rbx
  __int64 v71; // rax
  int v72; // r8d
  int v73; // edx
  __int64 v74; // r8
  __int64 v75; // rcx
  struct tagTHREADINFO *v76; // rax
  int v77; // ebx
  __int64 v78; // rax
  __int64 v79; // rdi
  __int64 v80; // r15
  int v81; // eax
  __int64 v82; // rax
  unsigned __int64 v83; // rbx
  int IsEnabledDeviceUsageNoInline; // eax
  int v85; // ecx
  bool v86; // zf
  int v87; // r13d
  int v88; // eax
  int v89; // ecx
  int v90; // r15d
  int v91; // eax
  int v92; // eax
  int v93; // r12d
  void *v94; // rdi
  __int64 v95; // rbx
  __int64 v96; // r15
  struct tagHIDDATA *v97; // rax
  __int64 v98; // rax
  struct tagHIDDATA **v99; // r8
  int v100; // eax
  unsigned int v101; // ebx
  __int64 v102; // rdx
  __int64 v103; // rax
  struct CEResourceLock *TouchProcessorLock; // rax
  void *v105; // r8
  __int64 **v106; // rcx
  unsigned int v107; // ebx
  __int64 v108; // rdx
  __int64 v109; // rax
  struct CEResourceLock *v110; // rax
  void *v111; // r8
  bool v112; // r12
  char v113; // r15
  __int16 v114; // bx
  int v115; // edi
  __int64 v116; // rax
  int v117; // r8d
  int v118; // edx
  __int64 v119; // rcx
  const struct tagWND *v120; // rcx
  __int64 v121; // rax
  _DWORD *v122; // rdx
  struct tagWND *v123; // rax
  struct tagBWND *v124; // r9
  int v125; // [rsp+70h] [rbp-148h]
  __int16 v126; // [rsp+74h] [rbp-144h]
  int v127; // [rsp+78h] [rbp-140h]
  unsigned int v128; // [rsp+7Ch] [rbp-13Ch]
  int v129; // [rsp+80h] [rbp-138h]
  struct tagQMSG *v130; // [rsp+88h] [rbp-130h] BYREF
  int v131; // [rsp+90h] [rbp-128h]
  unsigned int v132; // [rsp+94h] [rbp-124h]
  int v133; // [rsp+98h] [rbp-120h] BYREF
  unsigned int v134; // [rsp+9Ch] [rbp-11Ch]
  int v135; // [rsp+A0h] [rbp-118h]
  unsigned int v136; // [rsp+A4h] [rbp-114h]
  int v137; // [rsp+A8h] [rbp-110h]
  __int16 QuadPart; // [rsp+ACh] [rbp-10Ch] BYREF
  int v139; // [rsp+B0h] [rbp-108h]
  struct tagWND *v140; // [rsp+B8h] [rbp-100h]
  LONG v141; // [rsp+C0h] [rbp-F8h] BYREF
  LONG v142; // [rsp+C4h] [rbp-F4h] BYREF
  DWORD v143[10]; // [rsp+C8h] [rbp-F0h] BYREF
  struct tagHIDDATA **v144; // [rsp+F0h] [rbp-C8h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+F8h] [rbp-C0h] BYREF
  __int64 *v146; // [rsp+108h] [rbp-B0h] BYREF
  __int64 *v147; // [rsp+110h] [rbp-A8h] BYREF
  unsigned __int64 v148; // [rsp+118h] [rbp-A0h] BYREF
  unsigned __int64 v149; // [rsp+120h] [rbp-98h] BYREF
  unsigned __int64 v150; // [rsp+128h] [rbp-90h] BYREF
  __int64 v151; // [rsp+130h] [rbp-88h] BYREF
  __int64 *v152; // [rsp+138h] [rbp-80h] BYREF
  __int64 *v153; // [rsp+140h] [rbp-78h] BYREF
  __int64 *v154; // [rsp+148h] [rbp-70h] BYREF
  _OWORD v155[6]; // [rsp+150h] [rbp-68h] BYREF
  __int16 LowPart_high; // [rsp+1C8h] [rbp+10h] BYREF
  unsigned int v157; // [rsp+1D0h] [rbp+18h]

  v157 = a3;
  Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  v133 = 0;
  v135 = 0;
  v131 = 0;
  v132 = 0;
  v9 = 0;
  v125 = 0;
  v11 = PtiCurrent(v10);
  v12 = a6;
  EtwTraceEndAppMessageProcessing(a6);
  if ( ((a2 + 1) & 0xFFFFFFFFFFFEFFFFuLL) == 0 )
    a2 = 1LL;
  if ( a2 < 2 )
  {
    v14 = (struct tagTHREADINFO **)a2;
    v140 = (struct tagWND *)a2;
    v137 = 0;
  }
  else
  {
    v13 = (struct tagWND *)ValidateHwnd(a2);
    v14 = (struct tagTHREADINFO **)v13;
    v140 = v13;
    if ( !v13 )
    {
      v15 = 0;
      *(_QWORD *)a1 = 0LL;
      *(_DWORD *)(a1 + 8) = 0;
      EtwTraceBeginAppMessageProcessing(v12, 16LL, a1);
      if ( v12 )
        v15 = -1;
      goto LABEL_7;
    }
    Win32HM_LockIntoThread<0>((__int64)v11, (__int64)v13, BugCheckParameter3);
    v137 = 1;
  }
  ++*(_QWORD *)(*((_QWORD *)v11 + 64) + 8LL);
  v17 = -1;
  if ( a4 )
    v17 = a4;
  v134 = v17;
  _InterlockedExchange(
    (volatile __int32 *)(*((_QWORD *)v11 + 60) + 20LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v18 = CalcWakeMask(v157, v17, WORD1(a5));
  v20 = v18;
  v136 = v18;
  if ( (v18 & 0x1C07) != 0 )
    *((_DWORD *)v11 + 400) = (*v19 * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( WaitMaskIncludesUserInput(v18) )
  {
    if ( v137 )
    {
      if ( v14[2] != v11 )
        goto LABEL_21;
      v22 = (struct tagWND *)v14;
    }
    else
    {
      if ( a2 )
        goto LABEL_21;
      v22 = 0LL;
    }
    xxxUpdateInputHangInfo(v22, 1);
  }
LABEL_21:
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v24 = *(_DWORD *)(CurrentProcessWin32Process + 12);
  if ( (v24 & 4) != 0 )
  {
    *(_DWORD *)(CurrentProcessWin32Process + 12) = v24 & 0xFFFFFFFB;
    zzzCalcStartCursorHide(0LL, 0LL);
  }
  xxxDoSysExpungeIfNeeded((__int64)v11);
  v25 = a5;
  v26 = 1LL;
  v129 = a5 & 1;
  if ( (a5 & 1) != 0
    && (v20 & 0x1CBF) != 0
    && (*((_DWORD *)v11 + 340) & 0x80000) != 0
    && (*(_DWORD *)(*((_QWORD *)v11 + 60) + 8LL) & v20) != 0 )
  {
    TryAttachShellFrame(v11, 1u);
    v26 = 1LL;
  }
  v27 = *((_QWORD *)v11 + 58);
  if ( *((_QWORD *)v11 + 68) )
  {
LABEL_33:
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
      || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v29 = 0;
    }
    v26 = (__int64)&WPP_RECORDER_INITIALIZED;
    v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v29 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v31 = *(_QWORD *)(v27 + 72);
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v33) = v30;
      LOBYTE(v34) = v29;
      WPP_RECORDER_AND_TRACE_SF_qqq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v34,
        v33,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        18,
        20,
        (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
        v27,
        (char)v11,
        v31);
      v25 = a5;
    }
    *(_QWORD *)(v27 + 72) = 0LL;
    v28 = 0LL;
    v9 = 0;
LABEL_41:
    if ( v28 == v11 )
      goto LABEL_43;
    goto LABEL_42;
  }
  v28 = *(struct tagTHREADINFO **)(v27 + 72);
  if ( v28 == v11 )
  {
    if ( *(_QWORD *)(v27 + 80) != *((_QWORD *)v11 + 76) )
      goto LABEL_41;
    goto LABEL_33;
  }
LABEL_42:
  **((_DWORD **)v11 + 60) &= ~1u;
LABEL_43:
  *((_WORD *)v11 + 456) = 0;
  v35 = v25 & 2;
  v139 = v25 & 2;
  if ( (v25 & 2) == 0 )
  {
    v139 = v25 & 2;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v11 + 130, 0, 0) & 0x80000) != 0 )
    {
      v26 = 4294443007LL;
      v36 = _InterlockedCompareExchange((volatile signed __int32 *)v11 + 130, 0, 0) & 0xFFF7FFFF;
      v35 = *((_QWORD *)v11 + 64);
      *(_DWORD *)(v35 + 28) = v36;
      _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)v11 + 60) + 8LL), 0x2000u);
      _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)v11 + 60) + 4LL), 0x2000u);
      _InterlockedAnd((volatile signed __int32 *)v11 + 130, 0xFFF7FFFF);
      v139 = v25 & 2;
    }
  }
  v37 = v20 & 0xFFBF;
  v126 = v20 & 0xFFBF;
  v38 = ~(v20 & 0xFFFFFFBF);
  v128 = v38;
  v39 = v20 & 0x1C07;
  v127 = v39;
  while ( 1 )
  {
    v130 = 0LL;
    v40 = *(_QWORD *)(W32GetUserSessionState(v35, v26) + 16904);
    if ( *((_QWORD *)v11 + 61) == v40 )
    {
      *(_QWORD *)(W32GetUserSessionState(v40, v26) + 16904) = 0LL;
      if ( *((_QWORD *)v11 + 61) )
        zzzReattachThreads(2LL, 0LL, 0LL);
    }
    *((_WORD *)v11 + 456) |= v37 & (unsigned __int16)*(_DWORD *)(*((_QWORD *)v11 + 60) + 4LL);
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)v11 + 60) + 4LL), v38);
    if ( ((unsigned __int8)v20 & *(_BYTE *)(*((_QWORD *)v11 + 60) + 8LL) & 0x40) != 0 )
    {
      xxxReceiveMessages(v11);
    }
    else if ( (*(_DWORD *)(*((_QWORD *)v11 + 60) + 8LL) & 0x40) != 0 )
    {
      v54 = v9 | 0x80;
LABEL_75:
      v125 = v54;
      goto LABEL_76;
    }
    if ( v39 != 0 && (v20 & 0x40) != 0 )
      xxxProcessDelegateCapturedPointers(v11);
    if ( tagTHREADINFO::HasCoreMessagingWindow(v11) && (v20 & 8) != 0 )
      xxxDrainQueueCompletions(0x80000000uLL);
    v41 = *((_QWORD *)v11 + 58);
    v42 = *(_DWORD *)(v41 + 436);
    if ( (v42 & 0x1000) != 0 && !*(_DWORD *)(v41 + 40) && (v42 & 0x20) == 0 )
    {
      *(_DWORD *)(v41 + 436) = v42 & 0xFFFFEFFF;
      if ( (unsigned int)Feature_YieldInputQueue2__private_GetVariant() == 3 )
      {
        v43 = (const struct tagQ *)*((_QWORD *)v11 + 58);
        if ( *((_WORD *)v43 + 274) > 1u )
        {
          InputTraceLogging::Mouse::StrugglingInputQueueStop(v43);
          if ( dword_1403AAA30 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1403AAA30, 0x400000000000LL) )
            {
              PerformanceCounter = KeQueryPerformanceCounter(0LL);
              v47 = (LARGE_INTEGER *)W32GetUserSessionState(v46, v45);
              v48 = v47;
              HighPart = v47[8646].HighPart;
              if ( !HighPart )
                v47[8647] = PerformanceCounter;
              v47[8646].HighPart = HighPart + 1;
              v50 = PerformanceCounter.QuadPart - *(_QWORD *)(*((_QWORD *)v11 + 58) + 552LL);
              v48[8648].QuadPart += v50;
              if ( v50 > v48[8649].QuadPart )
              {
                v48[8649].QuadPart = v50;
                v48[8650].LowPart = *(_DWORD *)(*((_QWORD *)v11 + 57) + 56LL);
                v48[8650].HighPart = *(_DWORD *)(*((_QWORD *)v11 + 58) + 544LL);
                LOWORD(v48[8651].LowPart) = *(_WORD *)(*((_QWORD *)v11 + 58) + 550LL);
                HIWORD(v48[8651].u.LowPart) = *(_WORD *)(*((_QWORD *)v11 + 58) + 548LL);
              }
              v51 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
              if ( (unsigned int)(v51 - v48[8646].LowPart) >= 0xEA60 )
              {
                if ( (unsigned int)dword_1403AAA30 > 5
                  && (unsigned __int8)tlgKeywordOn(&dword_1403AAA30, 0x400000000000LL) )
                {
                  v148 = (unsigned __int64)(1000 * v48[8649].QuadPart) / gliQpcFreq;
                  LowPart_high = HIWORD(v48[8651].u.LowPart);
                  QuadPart = v48[8651].QuadPart;
                  v141 = v48[8650].HighPart;
                  v149 = (unsigned __int64)(1000 * v48[8648].QuadPart) / gliQpcFreq;
                  v150 = (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - v48[8647].QuadPart)) / gliQpcFreq;
                  v142 = v48[8646].HighPart;
                  v143[0] = v48[8650].LowPart;
                  v151 = 0x1000000LL;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>>(
                    gliQpcFreq,
                    (unsigned int)&unk_1403750FC,
                    v52,
                    v53,
                    (__int64)&v151,
                    (__int64)v143,
                    (__int64)&v142,
                    (__int64)&v150,
                    (__int64)&v149,
                    (__int64)&v141,
                    (__int64)&QuadPart,
                    (__int64)&LowPart_high,
                    (__int64)&v148);
                }
                v48[8646].LowPart = v51;
                v48[8649].QuadPart = 0LL;
                v48[8646].HighPart = 0;
                v48[8648].QuadPart = 0LL;
              }
            }
          }
        }
      }
    }
    if ( (*(_DWORD *)(*((_QWORD *)v11 + 60) + 8LL) & v20) == 0 )
    {
      v54 = v9 | 0x100;
      goto LABEL_75;
    }
    v57 = *(_DWORD *)(*((_QWORD *)v11 + 60) + 8LL);
    v58 = *((_QWORD *)v11 + 58);
    if ( *(struct tagTHREADINFO **)(v58 + 72) != v11 || (*(_DWORD *)(v58 + 436) & 0x400) == 0 )
      goto LABEL_91;
    EtwTraceInputQueueNoRemoveLocker();
    if ( ((unsigned __int16)v57 & (unsigned __int16)v20 & 0x3C07) == 0 )
    {
      if ( (v57 & 0x2000) != 0 )
      {
        v54 = v9 | 0x200;
        goto LABEL_75;
      }
LABEL_91:
      v59 = v140;
      goto LABEL_92;
    }
    v59 = v140;
    v60 = xxxScanSysQueue(v11, a1, v140, v157, v134, a5, (unsigned __int16)v57 & (unsigned __int16)v20 & 0x3C07, &v130);
    if ( v60 == 1 )
    {
      v9 |= 2u;
      goto LABEL_171;
    }
    if ( !v60 )
      UnblockDeferredInput(v11);
LABEL_92:
    if ( ((unsigned __int8)v57 & (unsigned __int8)v20 & 8) == 0 )
      goto LABEL_104;
    PostMessage = xxxReadPostMessage(v11, (struct tagMSG *)a1, v59, v157, v134, v129);
    v61 = 0LL;
    if ( PostMessage )
      break;
    if ( (v59 || v157 <= v134 && v134 >= 0x200 && v157 <= 0x20E && (v157 || v134 != -1) && v157 > 0x60)
      && (*((_DWORD *)v11 + 340) & 0x20000000) != 0 )
    {
      memset(v155, 0, 48);
      if ( (unsigned int)xxxReadPostMessage(v11, (struct tagMSG *)v155, 0LL, 0x60u, 0x60u, 1) )
        xxxSendPostedMessage((const struct tagMSG *)v155, (struct tagMSG *)v155);
    }
LABEL_104:
    if ( v59 == (struct tagWND *)1 )
    {
      v54 = v9 | 0x400;
      goto LABEL_75;
    }
    if ( ((unsigned __int16)v57 & (unsigned __int16)v20 & 0x3C07) != 0 )
    {
      v63 = xxxScanSysQueue(v11, a1, v59, v157, v134, a5, (unsigned __int16)v57 & (unsigned __int16)v20 & 0x3C07, &v130);
      if ( v63 == 2 )
      {
        if ( (unsigned int)IsShellFrameHangResilient(v11)
          && ((unsigned __int8)v57 & (unsigned __int8)v20 & 1) != 0
          && a6 )
        {
          v64 = v135;
          if ( v135 )
          {
            v66 = v132;
            v65 = v131;
          }
          else
          {
            v65 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            v131 = v65;
            v64 = v65;
            v135 = v65;
            v66 = 0;
            v132 = 0;
          }
          v26 = (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v64;
          if ( (unsigned int)v26 < 0xFA )
          {
            xxxSleepThread2(v20, 0xAu, 1, 0, (ULONG)&v133);
            v132 = v66 + 1;
            goto LABEL_236;
          }
          if ( v65 == v64 )
          {
            TraceLoggingSysQueueLockedRetryFailed(v66, v26);
            v131 = 0;
          }
        }
      }
      else
      {
        v131 = 0;
        v132 = 0;
        v135 = 0;
        v61 = 1LL;
        if ( v63 == 1 )
        {
          v9 |= 2u;
          goto LABEL_171;
        }
      }
    }
    else if ( (v57 & 0x2000) != 0 )
    {
      v54 = v9 | 0x800;
      goto LABEL_75;
    }
    if ( ((unsigned __int8)v20 & *(_BYTE *)(*((_QWORD *)v11 + 60) + 8LL) & 0x40) != 0 )
    {
      xxxReceiveMessages(v11);
    }
    else if ( (*(_DWORD *)(*((_QWORD *)v11 + 60) + 8LL) & 0x40) != 0 )
    {
      v54 = v9 | 0x1000;
      goto LABEL_75;
    }
    if ( (*(_DWORD *)(*((_QWORD *)v11 + 60) + 8LL) & v20) == 0 )
    {
      v54 = v9 | 0x2000;
      goto LABEL_75;
    }
    v67 = *(_DWORD *)(*((_QWORD *)v11 + 60) + 8LL);
    if ( ((unsigned __int8)v67 & (unsigned __int8)v20 & 0x20) != 0 && (unsigned int)xxxDoPaint(v59, a1) )
    {
      v9 |= 4u;
      goto LABEL_171;
    }
    if ( !v139 )
    {
      zzzWakeInputIdle((__int64)v11);
      xxxReceiveMessages(v11);
      if ( ((unsigned __int8)v20 & *(_BYTE *)(*((_QWORD *)v11 + 60) + 8LL) & 0x40) != 0 )
      {
        xxxReceiveMessages(v11);
      }
      else if ( (*(_DWORD *)(*((_QWORD *)v11 + 60) + 8LL) & 0x40) != 0 )
      {
        v54 = v9 | 0x4000;
        goto LABEL_75;
      }
      if ( (*(_DWORD *)(*((_QWORD *)v11 + 60) + 8LL) & v20) == 0 )
      {
        v54 = v9 | 0x8000;
        goto LABEL_75;
      }
      v67 = *(_DWORD *)(*((_QWORD *)v11 + 60) + 8LL);
    }
    if ( ((unsigned __int8)v67 & (unsigned __int8)v20 & 0x10) != 0 && (unsigned int)DoTimer(v59) )
    {
      v9 |= 8u;
      v125 = v9;
      goto LABEL_236;
    }
LABEL_76:
    v55 = *((_QWORD *)v11 + 58);
    if ( *(struct tagTHREADINFO **)(v55 + 72) == v11 )
    {
      *(_QWORD *)(v55 + 80) = 0LL;
      v56 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v68 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v56 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v69 = *((_QWORD *)v11 + 58);
        v70 = *(_QWORD *)(v69 + 72);
        v71 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v26);
        LOBYTE(v72) = v68;
        LOBYTE(v73) = v56;
        WPP_RECORDER_AND_TRACE_SF_qqq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v73,
          v72,
          *(_QWORD *)(v71 + 69152),
          4,
          18,
          21,
          (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
          v69,
          (char)v11,
          v70);
      }
      *(_QWORD *)(*((_QWORD *)v11 + 58) + 72LL) = 0LL;
      **((_DWORD **)v11 + 60) &= ~1u;
    }
    if ( tagQ::AreMultipleThreadsAttached(*((tagQ **)v11 + 58)) )
    {
      v75 = *(_QWORD *)(v74 + 24);
      if ( v75 )
      {
        if ( (*(_DWORD *)(v75 + 100) & 0x10) == 0 )
        {
          v76 = *(struct tagTHREADINFO **)(v75 + 104);
          if ( v76 )
          {
            if ( v76 != v11 )
              WakeSomeoneAfterUnlockingOrUndeferring((struct tagQMSG *)v75);
          }
        }
      }
    }
    if ( !a6 )
    {
      if ( (a5 & 2) == 0 )
      {
        zzzWakeInputIdle((__int64)v11);
        xxxReceiveMessages(v11);
      }
      v9 = v125;
LABEL_273:
      LOBYTE(v90) = v129;
LABEL_274:
      v15 = 0;
      goto LABEL_275;
    }
    if ( v137 )
    {
      v77 = xxxSleepThreadWithPwnd(v140, v20);
LABEL_161:
      if ( !v77 )
      {
        v9 = v125 | 0x10000;
        goto LABEL_273;
      }
      v9 = 0;
      v125 = 0;
LABEL_236:
      v39 = v127;
      v38 = v128;
      goto LABEL_237;
    }
    v133 = 0;
    v78 = *((_QWORD *)v11 + 58);
    v79 = *(_QWORD *)(v78 + 80);
    v80 = *(_QWORD *)(v78 + 72);
    v81 = IsShellFrameHangResilient(v11);
    if ( v81 )
    {
      v131 = 0;
      v132 = 0;
      v135 = 0;
    }
    v77 = xxxSleepThread2(v20, v81 != 0 ? 0x7530 : 0, 1, 0, (ULONG)&v133);
    if ( !(unsigned int)IsShellFrameHangResilient(v11) )
      goto LABEL_161;
    v35 = *(_QWORD *)(*((_QWORD *)v11 + 58) + 128LL);
    if ( v35 != *((_QWORD *)v11 + 198) )
    {
      if ( v35 )
        goto LABEL_161;
    }
    if ( !v133 )
      goto LABEL_161;
    v121 = SlowAppThreadInShellFrame(v11, v80, v79, v133 == 2);
    v9 = v125;
    v37 = v126;
    v39 = v127;
    v38 = v128;
    if ( v121 )
    {
      TryDetachShellFrame(v11, v121, v133 == 2);
LABEL_237:
      v37 = v126;
    }
  }
  if ( v129 )
  {
    v82 = *(unsigned int *)(a1 + 8);
    if ( (unsigned int)v82 < 0x400 )
      v61 = (unsigned __int16)MessageTable[v82] >> 15;
    if ( (_DWORD)v61 )
      xxxSendPostedMessage((const struct tagMSG *)a1, (struct tagMSG *)a1);
  }
  v9 |= 1u;
LABEL_171:
  v125 = v9;
  if ( *(_DWORD *)(a1 + 8) != 595 || (v83 = -1LL, *(_QWORD *)(a1 + 24) != -1LL) )
    v83 = 0LL;
  IsEnabledDeviceUsageNoInline = Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline(v61);
  v85 = *(_DWORD *)(a1 + 8);
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( v85 == 571 || v85 == 572 )
    {
      if ( (*((_QWORD *)v11 + 170) & 0x2000002000LL) == 0 )
      {
        v86 = *(_QWORD *)(a1 + 24) == 1LL;
        goto LABEL_184;
      }
      goto LABEL_185;
    }
LABEL_181:
    if ( !(unsigned int)IsTouchpadPointerInputMessage()
      || !(unsigned int)IsPointerMessageTouchpad(v11, v83, *(_WORD *)(a1 + 16)) )
    {
      goto LABEL_185;
    }
  }
  else if ( v85 != 571 && v85 != 572 )
  {
    goto LABEL_181;
  }
  v86 = !ShouldReceiveTouchpadMessages(v11, *(HWND *)a1);
LABEL_184:
  v87 = 1;
  if ( !v86 )
LABEL_185:
    v87 = 0;
  v88 = *(_DWORD *)(a1 + 8);
  if ( v88 == 842 || v88 == 537 || v88 == 568 )
  {
    Feature_MTestAbSh1__private_ReportDeviceUsage();
    v89 = 1;
  }
  else
  {
    v89 = 0;
  }
  v90 = v129;
  if ( !v129 )
    goto LABEL_205;
  v91 = *(_DWORD *)(a1 + 8);
  if ( (v91 == 258 || ((v91 - 578) & 0xFFFFFFFA) == 0 || v89 || *(_WORD *)(a1 + 8) >= 0xC000u)
    && (unsigned int)xxxCallCtfHook(3LL, 0LL, (unsigned int)a5, (__int128 *)a1) )
  {
    v92 = *(_DWORD *)(a1 + 8);
    if ( v92 == 258 )
    {
      *(_DWORD *)(a1 + 8) = 0;
      goto LABEL_200;
    }
    if ( v92 == 842 )
    {
LABEL_200:
      *(_QWORD *)(a1 + 24) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
    }
  }
  if ( !v130 || !*((_QWORD *)v11 + 183) && !*((_QWORD *)v11 + 185) )
  {
LABEL_205:
    if ( !v87 && ((*((_BYTE *)v11 + 712) | *(_BYTE *)(**((_QWORD **)v11 + 62) + 16LL)) & 0x10) != 0 )
    {
      v93 = *(_DWORD *)(a1 + 8);
      v94 = *(void **)(a1 + 24);
      v95 = 0LL;
      v96 = 0LL;
      v144 = 0LL;
      if ( v93 == 255 )
      {
        if ( v94 )
        {
          v95 = HMValidateHandleNoSecure((__int64)v94, 18);
          if ( v95 )
          {
            if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline() )
            {
              FlushPostedRawInput((union _SLIST_HEADER *)v11);
              v97 = UnlinkHidData(v11, (struct tagHIDDATA *)v95, &v144);
            }
            else
            {
              v97 = FlushPostedRawInputAndUnlinkThisOne((union _SLIST_HEADER *)v11, (struct tagHIDDATA *)v95, &v144);
            }
            v95 = (__int64)v97;
            if ( v97 )
            {
              if ( !(unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline() )
                *(_DWORD *)(v95 + 48) |= 1u;
              v96 = *((_QWORD *)v11 + 142);
              *((_QWORD *)v11 + 142) = v95;
            }
          }
        }
      }
      xxxCallHook(0LL, (unsigned int)a5, a1, 3);
      if ( v95 )
      {
        *((_QWORD *)v11 + 142) = v96;
        if ( *(_DWORD *)(a1 + 8) == 255 )
        {
          v98 = HMValidateHandleNoSecure((__int64)v94, 18);
          if ( v98 )
          {
            *(_DWORD *)(v98 + 48) &= ~1u;
            v99 = v144;
            *(_QWORD *)(v98 + 32) = *v144;
            *v99 = (struct tagHIDDATA *)v98;
          }
        }
      }
      if ( v93 == 255 && v94 && !*(_DWORD *)(a1 + 8) )
        InputTraceLogging::RawInput::HijackHidData(v94);
      v90 = v129;
      v9 = v125;
    }
  }
  if ( v90 )
  {
    xxxCheckPendingPromotePointer(v11);
    UpdateThreadInputPointerList(v11, a1);
  }
  if ( v130 )
  {
    v100 = *((_DWORD *)v130 + 25);
    if ( (v100 & 0x100) != 0 )
    {
      if ( v90 )
      {
        if ( *((_QWORD *)v11 + 185) )
        {
          InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v146, "ShellHandwriting Delegation", 0LL);
          InputTraceLogging::Delivery::CallShellHandwritingDelegateThread(v130);
          InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
            &v152,
            "ShellHandwriting DelegationCallout",
            (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v146);
          v101 = xxxClientCallDelegateThread(*((_QWORD *)v11 + 185), a1, *((_QWORD *)v11 + 184));
          InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v152);
          v102 = *((unsigned int *)v130 + 25);
          if ( (v102 & 0x20) != 0 )
          {
            v103 = W32GetUserSessionState(v130, v102);
            TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(*(CTouchProcessor **)(v103 + 3256));
            CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v155, TouchProcessorLock, v105);
            *((_DWORD *)v130 + 25) &= ~0x100u;
            _HandleShellHandwritingDelegatedInputWorker(v11, v101, v130);
            CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v155);
          }
          v106 = &v146;
          goto LABEL_234;
        }
        if ( *((_QWORD *)v11 + 183) )
        {
          InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v147, "Delegation", 0LL);
          EtwTraceBeginDelegateInputCallback(v130, a1);
          InputTraceLogging::Delivery::CallDelegateThread(v130);
          InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
            &v153,
            "DelegationCallout",
            (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v147);
          v107 = xxxClientCallDelegateThread(*((_QWORD *)v11 + 183), a1, *((_QWORD *)v11 + 184));
          InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v153);
          EtwTraceEndDelegateInputCallback(v130, a1);
          v108 = *((unsigned int *)v130 + 25);
          if ( (v108 & 0x20) != 0 )
          {
            v109 = W32GetUserSessionState(v130, v108);
            v110 = CTouchProcessor::GetTouchProcessorLock(*(CTouchProcessor **)(v109 + 3256));
            CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v155, v110, v111);
            *((_DWORD *)v130 + 25) &= ~0x100u;
            _HandleDelegatedInputWorker(v11, v107, v130);
            CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v155);
          }
          v106 = &v147;
LABEL_234:
          v9 = 0x20000;
          v125 = 0x20000;
          InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v106);
LABEL_235:
          v20 = v136;
          goto LABEL_236;
        }
      }
      *((_DWORD *)v130 + 25) = v100 & 0xFFFFFEFF;
    }
  }
  if ( v87 )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v154, "PTPDownleveling", 0LL);
    v112 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v113 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v113 = 0;
    }
    if ( v112 || v113 )
    {
      v114 = *(_WORD *)(a1 + 16);
      v115 = *(_DWORD *)(a1 + 8);
      v116 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v117) = v113;
      LOBYTE(v118) = v112;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v118,
        v117,
        *(_QWORD *)(v116 + 69152),
        5,
        10,
        22,
        (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
        v115,
        v114);
    }
    xxxClientCallDefaultInputHandler(a1);
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_OWORD *)(a1 + 32) = 0LL;
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v154);
    v9 = v125;
    goto LABEL_235;
  }
  if ( (unsigned int)IsMiPPointerMessage(*(unsigned int *)(a1 + 8), *(_QWORD *)(a1 + 16)) )
  {
    v119 = HMValidateHandleNoSecure(*(_QWORD *)a1, 1);
    if ( v119 )
    {
      if ( !IsMiPEnabledForWindow(v119) )
      {
        TraceLoggingMiPSuppressedForWindow(v120, *(_DWORD *)(a1 + 8), v90);
        if ( v90 )
          xxxClientCallDefWindowProc(a1);
        *(_OWORD *)a1 = 0LL;
        *(_OWORD *)(a1 + 16) = 0LL;
        *(_OWORD *)(a1 + 32) = 0LL;
        goto LABEL_235;
      }
    }
  }
  if ( a6 && *(_DWORD *)(a1 + 8) == 18 )
  {
    v9 |= 0x40000u;
    goto LABEL_274;
  }
  v15 = 1;
  if ( v90 )
  {
    FreeSavedMessageInfoHandles(v11);
    SaveMessageInfoHandle(v11, (struct tagMSG *)a1);
  }
LABEL_275:
  if ( v137 )
    Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(BugCheckParameter3);
  if ( (unsigned int)HandleProcessSpinning() )
  {
    if ( v15 )
    {
      if ( *(_DWORD *)(a1 + 8) == 512 && (*((_DWORD *)v11 + 340) & 0x40000LL) != 0 )
      {
        v122 = (_DWORD *)*((_QWORD *)v11 + 88);
        if ( v122 )
        {
          if ( (v122[50] & 0x8000) != 0 && v122[67] )
          {
            v122[68] += ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v122[67];
            ++v122[69];
            v122[67] = 0;
          }
        }
      }
      *((_QWORD *)v11 + 164) = *(_QWORD *)a1;
      *((_DWORD *)v11 + 330) = *(_DWORD *)(a1 + 8);
      *((_QWORD *)v11 + 166) = *(_QWORD *)(a1 + 16);
      v123 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)a1, 1);
      InputTraceLogging::Delivery::GetMessageW((const struct tagMSG *)a1, v11, v123, v124, v90);
    }
  }
  else
  {
    v15 = 0;
  }
  EtwTraceBeginAppMessageProcessing(a6, v9, a1);
LABEL_7:
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  return v15;
}
