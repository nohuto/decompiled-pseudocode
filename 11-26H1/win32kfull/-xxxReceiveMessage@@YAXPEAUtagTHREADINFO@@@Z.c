/*
 * XREFs of ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1400237A0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z @ 0x14002457C (-xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     SfnGETDBCSTEXTLENGTHS @ 0x140005B30 (SfnGETDBCSTEXTLENGTHS.c)
 *     SfnPOWERBROADCAST @ 0x140006240 (SfnPOWERBROADCAST.c)
 *     SfnINCBOXSTRING @ 0x140006720 (SfnINCBOXSTRING.c)
 *     SfnINLBOXSTRING @ 0x140006780 (SfnINLBOXSTRING.c)
 *     SfnINSTRING @ 0x140006900 (SfnINSTRING.c)
 *     SfnINSTRINGNULL @ 0x140007400 (SfnINSTRINGNULL.c)
 *     SfnINDEVICECHANGE @ 0x140007A60 (SfnINDEVICECHANGE.c)
 *     SfnCOPYDATA @ 0x1400082D0 (SfnCOPYDATA.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ @ 0x14000F15C (--1-$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x140028818 (-FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     SfnOUTSTRING @ 0x140035930 (SfnOUTSTRING.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1400378B8 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     FreeDelayedHooks @ 0x140037910 (FreeDelayedHooks.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x140037AA0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     SfnDWORD @ 0x140039C80 (SfnDWORD.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x140039FC0 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     FreeHidData @ 0x14003ABB0 (FreeHidData.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14003ACCC (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x14003BDE8 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     SfnOUTCBOXSTRING @ 0x1400462F0 (SfnOUTCBOXSTRING.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140046914 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14004D1E0 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     xxxInterSendMsgEx @ 0x140051EE4 (xxxInterSendMsgEx.c)
 *     ?ShouldCallWndProcHook@@YA_NPEBUtagTHREADINFO@@IIPEAUtagWND@@@Z @ 0x140053800 (-ShouldCallWndProcHook@@YA_NPEBUtagTHREADINFO@@IIPEAUtagWND@@@Z.c)
 *     SetWakeBit @ 0x140055960 (SetWakeBit.c)
 *     UnlinkSendListSms @ 0x140056568 (UnlinkSendListSms.c)
 *     ?ProcessLowLevelHook@Keyboard@InputTraceLogging@@SAXXZ @ 0x140090CA0 (-ProcessLowLevelHook@Keyboard@InputTraceLogging@@SAXXZ.c)
 *     SfnOUTLBOXSTRING @ 0x140129FE0 (SfnOUTLBOXSTRING.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 *     ?DeBoostHook@@YAXPEAUtagHOOK@@@Z @ 0x140190964 (-DeBoostHook@@YAXPEAUtagHOOK@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     SfnINLPUAHNCPAINTMENUPOPUP @ 0x1401A6950 (SfnINLPUAHNCPAINTMENUPOPUP.c)
 *     SfnINLPUAHDRAWMENU @ 0x1401A6BF0 (SfnINLPUAHDRAWMENU.c)
 *     SfnINOUTLPUAHMEASUREMENUITEM @ 0x1401A6EB0 (SfnINOUTLPUAHMEASUREMENUITEM.c)
 *     SfnINLPUAHINITMENU @ 0x1401A72D0 (SfnINLPUAHINITMENU.c)
 *     SfnINLPUAHDRAWMENUITEM @ 0x1401A7590 (SfnINLPUAHDRAWMENUITEM.c)
 *     SfnOPTOUTLPDWORDOPTOUTLPDWORD @ 0x1401A7C80 (SfnOPTOUTLPDWORDOPTOUTLPDWORD.c)
 *     SfnINOUTLPWINDOWPOS @ 0x1401AC2D0 (SfnINOUTLPWINDOWPOS.c)
 *     SfnDWORDOPTINLPMSG @ 0x1401B4A10 (SfnDWORDOPTINLPMSG.c)
 *     SfnINOUTNCCALCSIZE @ 0x1401B6510 (SfnINOUTNCCALCSIZE.c)
 *     SfnINLPWINDOWPOS @ 0x1401B9C00 (SfnINLPWINDOWPOS.c)
 *     SfnINOUTSTYLECHANGE @ 0x1401BB580 (SfnINOUTSTYLECHANGE.c)
 *     SfnEMPTY @ 0x1401BE9D0 (SfnEMPTY.c)
 *     SfnNCDESTROY @ 0x1401C44D0 (SfnNCDESTROY.c)
 *     ?HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ @ 0x1401C8B94 (-HandleLowLevelHook@Mouse@InputTraceLogging@@SAXXZ.c)
 *     SfnINOUTLPPOINT5 @ 0x1401D0EB0 (SfnINOUTLPPOINT5.c)
 *     SfnINOUTLPSCROLLINFO @ 0x1401E03E0 (SfnINOUTLPSCROLLINFO.c)
 *     SfnOUTLPCOMBOBOXINFO @ 0x1401E1A70 (SfnOUTLPCOMBOBOXINFO.c)
 *     SfnINLPDRAWITEMSTRUCT @ 0x1401E8830 (SfnINLPDRAWITEMSTRUCT.c)
 *     ?UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z @ 0x1401E9D20 (-UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z.c)
 *     SfnINOUTLPRECT @ 0x1401EC570 (SfnINOUTLPRECT.c)
 *     SfnINLPDELETEITEMSTRUCT @ 0x1401EF590 (SfnINLPDELETEITEMSTRUCT.c)
 *     SfnSHELLWINDOWMANAGEMENTNOTIFY @ 0x1401FF420 (SfnSHELLWINDOWMANAGEMENTNOTIFY.c)
 *     xxxDesktopWndProc @ 0x1401FFCC0 (xxxDesktopWndProc.c)
 *     SfnINOUTLPMEASUREITEMSTRUCT @ 0x140205810 (SfnINOUTLPMEASUREITEMSTRUCT.c)
 *     SfnOUTLPRECT @ 0x1402078E0 (SfnOUTLPRECT.c)
 *     SfnOUTDWORDINDWORD @ 0x1402093D0 (SfnOUTDWORDINDWORD.c)
 *     SfnOUTLPTITLEBARINFOEX @ 0x14020B4F0 (SfnOUTLPTITLEBARINFOEX.c)
 *     SfnINCNTOUTSTRING @ 0x14020E220 (SfnINCNTOUTSTRING.c)
 *     SfnSHELLSYNCDISPLAYCHANGED @ 0x140211740 (SfnSHELLSYNCDISPLAYCHANGED.c)
 *     SfnIMECONTROL @ 0x140214380 (SfnIMECONTROL.c)
 *     SfnOUTLPSCROLLBARINFO @ 0x1402164F0 (SfnOUTLPSCROLLBARINFO.c)
 *     xxxEventWndProc @ 0x140216850 (xxxEventWndProc.c)
 *     SfnINLPCOMPAREITEMSTRUCT @ 0x140216FF0 (SfnINLPCOMPAREITEMSTRUCT.c)
 *     ?LockKernelStack@@YAXPEAU_ETHREAD@@PEAU_TL@@@Z @ 0x14021CDD8 (-LockKernelStack@@YAXPEAU_ETHREAD@@PEAU_TL@@@Z.c)
 *     SfnINWPARAMCHAR @ 0x14021F710 (SfnINWPARAMCHAR.c)
 *     SfnSHELLWINDOWMANAGEMENTCALLOUT @ 0x140220170 (SfnSHELLWINDOWMANAGEMENTCALLOUT.c)
 *     SfnINDESTROYCLIPBRD @ 0x140224AC0 (SfnINDESTROYCLIPBRD.c)
 *     SfnTOUCH @ 0x140226C20 (SfnTOUCH.c)
 *     SfnINOUTLPSIZE @ 0x140228930 (SfnINOUTLPSIZE.c)
 *     SfnTOUCHHITTESTING @ 0x140228D10 (SfnTOUCHHITTESTING.c)
 *     SfnINWPARAMDBCSCHAR @ 0x140232CE0 (SfnINWPARAMDBCSCHAR.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     SfnCOPYGLOBALDATA @ 0x1402458F0 (SfnCOPYGLOBALDATA.c)
 *     SfnGESTURE @ 0x1402468E0 (SfnGESTURE.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1402486B0 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x14024CF30 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPCREATESTRUCT @ 0x14027BFE0 (SfnINLPCREATESTRUCT.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     SfnGETWINDOWDATA @ 0x1402D5160 (SfnGETWINDOWDATA.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1402D52D0 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHLPSTRUCT @ 0x1402D5740 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1402D5A80 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINOUTDRAG @ 0x1402D5FF0 (SfnINOUTDRAG.c)
 *     SfnINOUTMENUGETOBJECT @ 0x1402D62E0 (SfnINOUTMENUGETOBJECT.c)
 *     SfnINOUTNEXTMENU @ 0x1402D6590 (SfnINOUTNEXTMENU.c)
 *     SfnINPAINTCLIPBRD @ 0x1402D6840 (SfnINPAINTCLIPBRD.c)
 *     SfnINSIZECLIPBRD @ 0x1402D6B20 (SfnINSIZECLIPBRD.c)
 *     SfnINTERCEPTEDWINDOWACTION @ 0x1402D6D90 (SfnINTERCEPTEDWINDOWACTION.c)
 *     SfnPOPTINLPUINT @ 0x1402D7010 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1402D73B0 (SfnPOUTLPINT.c)
 *     SfnSENTDDEMSG @ 0x1402D77F0 (SfnSENTDDEMSG.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall xxxReceiveMessage(struct tagTHREADINFO *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // r13
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  int *v7; // rbx
  __int64 v8; // r15
  bool v9; // cf
  _QWORD *v10; // rax
  __int64 v11; // rdx
  unsigned int *v12; // r15
  struct tagTHREADINFO *v13; // rax
  int v14; // eax
  PVOID *v15; // r13
  struct tagTHREADINFO *v16; // r14
  _DWORD *v17; // rdx
  int v18; // r12d
  _DWORD *v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 (__fastcall *v23)(int, int, int, int, __int64, __int64); // rbx
  __int64 v24; // rax
  unsigned int *v25; // rdx
  unsigned int v26; // ecx
  __int64 *v27; // rax
  __int64 v28; // rcx
  _DWORD *v29; // rax
  _QWORD *v30; // r12
  __int64 v31; // r15
  int v32; // r13d
  __int64 v33; // rdx
  char v34; // r12
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  const struct tagUIPI_INFO *v38; // r8
  const struct tagUIPI_INFO *v39; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 *v44; // r9
  __int64 v45; // rcx
  struct tagHOOK *v46; // rdx
  char v47; // r12
  int v48; // ebx
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  int v52; // r13d
  int v53; // r13d
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // r8
  int v58; // ecx
  int v59; // ecx
  int v60; // eax
  __int64 v61; // r9
  struct tagTHREADINFO *v62; // r8
  unsigned int *v63; // rdx
  unsigned int v64; // ecx
  unsigned int *v65; // rdx
  unsigned int v66; // ecx
  __int64 v67; // rdx
  __int64 v68; // rax
  struct tagHIDDATA *v69; // rax
  int v70; // ebx
  _QWORD *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 *v74; // rax
  ULONG_PTR v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rbx
  __int64 v79; // rdx
  __int64 v80; // rcx
  unsigned int v81; // r15d
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rdx
  char v85; // r15
  __int64 v86; // rcx
  int v87; // eax
  __int64 v88; // rcx
  unsigned __int64 v89; // rax
  __int64 v90; // rax
  int v91; // ebx
  struct tagTHREADINFO *v92; // rax
  int v93; // ebx
  struct tagTHREADINFO *v94; // rax
  _QWORD *v95; // rax
  __int64 v96; // rax
  __int64 v97; // rdx
  struct tagHOOK *v98; // r14
  char v99; // r15
  bool v100; // r12
  int v101; // ebx
  __int64 UserSessionState; // rax
  int v103; // r8d
  int v104; // edx
  unsigned int v105; // ecx
  bool v106; // [rsp+50h] [rbp-148h]
  bool v107; // [rsp+50h] [rbp-148h]
  _QWORD *v108; // [rsp+58h] [rbp-140h]
  int v109; // [rsp+58h] [rbp-140h]
  PVOID *v110; // [rsp+60h] [rbp-138h]
  __int64 v111; // [rsp+68h] [rbp-130h] BYREF
  __int64 v112; // [rsp+70h] [rbp-128h]
  struct tagHOOK *v113; // [rsp+78h] [rbp-120h]
  __int64 v114; // [rsp+80h] [rbp-118h]
  char *v115; // [rsp+88h] [rbp-110h]
  __int64 v116; // [rsp+90h] [rbp-108h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+98h] [rbp-100h] BYREF
  ULONG_PTR v118[2]; // [rsp+A8h] [rbp-F0h] BYREF
  __int64 v119; // [rsp+B8h] [rbp-E0h]
  __int128 v120; // [rsp+C8h] [rbp-D0h] BYREF
  __int64 v121; // [rsp+D8h] [rbp-C0h]
  int v122; // [rsp+E0h] [rbp-B8h]
  __int64 v123; // [rsp+E8h] [rbp-B0h]
  struct tagTHREADINFO *v124; // [rsp+F0h] [rbp-A8h]
  __int64 v125[2]; // [rsp+100h] [rbp-98h] BYREF
  __int128 v126; // [rsp+110h] [rbp-88h]
  __int128 v127; // [rsp+120h] [rbp-78h]
  _BYTE v128[56]; // [rsp+130h] [rbp-68h] BYREF

  v124 = a1;
  v111 = 0LL;
  Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  v2 = (_QWORD *)*((_QWORD *)a1 + 69);
  if ( v2 == (_QWORD *)((char *)a1 + 552) )
  {
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)a1 + 60) + 8LL), 0xFFFFFFBF);
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)a1 + 60) + 4LL), 0xFFFFFFBF);
    goto LABEL_3;
  }
  v3 = v2 - 2;
  v113 = (struct tagHOOK *)(v2 - 2);
  v4 = v2 - 2;
  --*((_DWORD *)a1 + 142);
  v5 = *v2;
  v6 = (_QWORD *)v2[1];
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v6 != v2 )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *v2 = 0LL;
  EtwTraceBeginRetrieveSendMessage(v2 - 2);
  v7 = (int *)v3 + 21;
  v115 = (char *)v3 + 84;
  *((_DWORD *)v3 + 21) |= 0x4010u;
  if ( *((struct tagTHREADINFO **)a1 + 69) == (struct tagTHREADINFO *)((char *)a1 + 552) )
  {
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)a1 + 60) + 8LL), 0xFFFFFFBF);
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)a1 + 60) + 4LL), 0xFFFFFFBF);
  }
  v8 = v3[4];
  v110 = (PVOID *)v8;
  v112 = v8;
  if ( v8 )
  {
    v9 = (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 520), 0, 0) & 0x100) != 0;
    v10 = (_QWORD *)*((_QWORD *)a1 + 64);
    if ( v9 )
      *v10 |= 0x1000uLL;
    else
      *v10 &= ~0x1000uLL;
  }
  if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline() )
  {
    v12 = (unsigned int *)(v3 + 13);
    if ( *((_DWORD *)v3 + 26) == 255 && (*v7 & 0x200) == 0 )
    {
      v13 = PtiCurrent();
      FlushPostedRawInput(v13);
    }
  }
  else
  {
    v12 = (unsigned int *)(v4 + 13);
  }
  v14 = *v7;
  if ( (*v7 & 0x200) == 0 )
  {
    if ( (v14 & 7) != 0 )
    {
      if ( (v14 & 0x20004) == 0x20004 )
      {
        LOBYTE(v11) = 5;
        v96 = HMValidateHandleNoSecure(v3[15], v11);
        v98 = (struct tagHOOK *)v96;
        if ( v96 )
        {
          if ( (*(_DWORD *)(v96 + 64) & 0x2000) != 0 )
          {
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) == 0
              || (v99 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v99 = 0;
            }
            v100 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v99 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v101 = *(_DWORD *)(v96 + 48);
              UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v97);
              LOBYTE(v103) = v100;
              LOBYTE(v104) = v99;
              WPP_RECORDER_AND_TRACE_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v104,
                v103,
                *(_QWORD *)(UserSessionState + 69152),
                4,
                5,
                12,
                (__int64)&WPP_45eb214c783f3d45e2f167060f0951f6_Traceguids,
                v101);
            }
            DeBoostHook(v98);
          }
        }
      }
      v15 = v110;
      goto LABEL_165;
    }
    v29 = (_DWORD *)*((_QWORD *)a1 + 60);
    LODWORD(v115) = *v29 & 8;
    v123 = *((_QWORD *)a1 + 68);
    *((_QWORD *)a1 + 68) = v3;
    *v29 |= 2u;
    **((_DWORD **)a1 + 60) |= 8u;
    v15 = v110;
    if ( !v110 )
      Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>(BugCheckParameter3, v3[14]);
    if ( *v12 == 788 )
    {
      *(_OWORD *)v125 = 0LL;
      v126 = 0LL;
      *(_QWORD *)&v127 = 0LL;
      v114 = 0LL;
      v119 = 0LL;
      v112 = 0LL;
      *(_QWORD *)&v120 = 0LL;
      v30 = (_QWORD *)v3[12];
      v108 = v30;
      v31 = v30[2];
      v32 = *(_DWORD *)(*v30 + 48LL);
      v116 = *((_QWORD *)a1 + 196);
      switch ( v32 )
      {
        case 2:
          goto LABEL_43;
        case 7:
          if ( v31 )
          {
            *(_OWORD *)v125 = *(_OWORD *)v31;
            v126 = *(_OWORD *)(v31 + 16);
            *(_QWORD *)&v127 = *(_QWORD *)(v31 + 32);
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process((unsigned int)(v32 - 7));
            if ( CurrentProcessWin32Process )
              CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
            if ( (((unsigned __int16)(*((_DWORD *)v3 + 33) >> 8) ^ (unsigned __int16)(*(_DWORD *)(CurrentProcessWin32Process
                                                                                                + 268) >> 8)) & 0x1FF) != 0 )
            {
              LogicalToPhysicalDPIPoint(v125, v125, *((unsigned int *)v3 + 33), 0LL);
              v42 = PsGetCurrentProcessWin32Process(v41);
              v43 = v42;
              if ( v42 )
                v43 = -(__int64)(*(_QWORD *)v42 != 0LL) & v42;
              PhysicalToLogicalDPIPoint(v125, v125, *(unsigned int *)(v43 + 268), 0LL);
            }
          }
          goto LABEL_44;
        case 10:
          goto LABEL_43;
        case 13:
          InputTraceLogging::Keyboard::ProcessLowLevelHook();
          if ( v31 )
          {
            *(_OWORD *)v125 = *(_OWORD *)v31;
            *(_QWORD *)&v126 = *(_QWORD *)(v31 + 16);
            if ( *((_DWORD *)v30 + 7) != -1
              && !UIPrivilegeIsolation::CheckAccess(
                    (UIPrivilegeIsolation *)((char *)v30 + 28),
                    (const struct tagUIPI_INFO *)(*((_QWORD *)a1 + 57) + 864LL),
                    v39) )
            {
              LODWORD(v125[1]) |= 2u;
            }
          }
          break;
        case 14:
          InputTraceLogging::Mouse::HandleLowLevelHook();
          if ( v31 )
          {
            *(_OWORD *)v125 = *(_OWORD *)v31;
            v126 = *(_OWORD *)(v31 + 16);
            if ( *((_DWORD *)v30 + 7) != -1
              && !UIPrivilegeIsolation::CheckAccess(
                    (UIPrivilegeIsolation *)((char *)v30 + 28),
                    (const struct tagUIPI_INFO *)(*((_QWORD *)a1 + 57) + 864LL),
                    v38) )
            {
              HIDWORD(v125[1]) |= 2u;
            }
          }
          break;
        default:
          UserSetLastError(87);
LABEL_43:
          v31 = 0LL;
LABEL_44:
          v113 = (struct tagHOOK *)*v30;
          Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(v118, a1, v113);
          if ( (*((_DWORD *)v113 + 16) & 0x2000) != 0 )
          {
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) == 0
              || (v34 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v34 = 0;
            }
            v106 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v34 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v35 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v33);
              LOBYTE(v36) = v106;
              LOBYTE(v37) = v34;
              WPP_RECORDER_AND_TRACE_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v37,
                v36,
                *(_QWORD *)(v35 + 69152),
                4,
                5,
                10,
                (__int64)&WPP_45eb214c783f3d45e2f167060f0951f6_Traceguids,
                v32);
            }
            v30 = v108;
          }
          if ( (*((_DWORD *)v3 + 21) & 4) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4132LL);
          v44 = v125;
          if ( !v31 )
            v44 = (__int64 *)v30[2];
          v111 = xxxCallHook2(v113, *((unsigned int *)v30 + 2), v3[11], v44, 0);
          if ( (unsigned int)(v32 - 13) <= 1 )
          {
            *((_QWORD *)a1 + 193) = v119;
            *((_DWORD *)a1 + 388) = v114;
            *(_QWORD *)((char *)a1 + 1556) = v120;
            *((_DWORD *)a1 + 391) = v112;
            *((_QWORD *)a1 + 196) = v116;
          }
          v45 = 131076LL;
          if ( (*((_DWORD *)v3 + 21) & 0x20004) == 0x20004 )
          {
            v46 = v113;
            if ( (*((_DWORD *)v113 + 16) & 0x2000) != 0 )
            {
              if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) == 0
                || (v47 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
              {
                v47 = 0;
              }
              v107 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( v47 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                v48 = *((_DWORD *)v113 + 12);
                v49 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v113);
                LOBYTE(v50) = v107;
                LOBYTE(v51) = v47;
                WPP_RECORDER_AND_TRACE_SF_d(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v51,
                  v50,
                  *(_QWORD *)(v49 + 69152),
                  4,
                  5,
                  11,
                  (__int64)&WPP_45eb214c783f3d45e2f167060f0951f6_Traceguids,
                  v48);
                v46 = v113;
              }
              DeBoostHook(v46);
            }
          }
          if ( (*((_DWORD *)v3 + 21) & 5) == 0 && v31 )
          {
            v52 = v32 - 7;
            if ( v52 )
            {
              v53 = v52 - 6;
              if ( v53 )
              {
                if ( v53 == 1 )
                {
                  *(_OWORD *)v31 = *(_OWORD *)v125;
                  *(_OWORD *)(v31 + 16) = v126;
                }
              }
              else
              {
                *(_OWORD *)v31 = *(_OWORD *)v125;
                *(_QWORD *)(v31 + 16) = v126;
              }
            }
            else
            {
              v54 = PsGetCurrentProcessWin32Process(v45);
              if ( v54 )
                v54 &= -(__int64)(*(_QWORD *)v54 != 0LL);
              v55 = *(_DWORD *)(v54 + 268) >> 8;
              LOWORD(v55) = (*((_DWORD *)v3 + 33) >> 8) ^ v55;
              if ( (v55 & 0x1FF) != 0 )
              {
                v56 = PsGetCurrentProcessWin32Process(v55);
                v57 = v56;
                if ( v56 )
                  v57 = -(__int64)(*(_QWORD *)v56 != 0LL) & v56;
                LogicalToPhysicalDPIPoint(v125, v125, *(unsigned int *)(v57 + 268), 0LL);
                PhysicalToLogicalDPIPoint(v125, v125, *((unsigned int *)v3 + 33), 0LL);
              }
              *(_OWORD *)v31 = *(_OWORD *)v125;
              *(_OWORD *)(v31 + 16) = v126;
              *(_QWORD *)(v31 + 32) = v127;
            }
          }
          Win32HMThreadLockAlways<tagACCELTABLE>::~Win32HMThreadLockAlways<tagACCELTABLE>((ULONG_PTR)v118);
          v15 = v110;
LABEL_100:
          v58 = *((_DWORD *)v3 + 21);
          if ( (v58 & 0x101) == 0x100 )
          {
            HIDWORD(v125[0]) = 0;
            v127 = 0LL;
            v59 = v58 | 1;
            *((_DWORD *)v3 + 21) = v59;
            if ( (v59 & 4) == 0 )
            {
              v60 = 33;
              if ( (v59 & 0x400) != 0 )
                v60 = 289;
              LODWORD(v125[0]) = v60;
              v125[1] = v3[6];
              *(_QWORD *)&v126 = v3[7];
              *((_QWORD *)&v126 + 1) = v111;
              Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v118, v3[14]);
              xxxInterSendMsgEx(
                (struct tagWND *)v3[14],
                *((_DWORD *)v3 + 26),
                0,
                v3[8],
                (__int64)v125,
                1,
                *((_DWORD *)v3 + 21) & 0x10000);
              Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v118);
            }
          }
          if ( !v15 )
            Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>((ULONG_PTR)BugCheckParameter3);
          v61 = v123;
          *((_QWORD *)a1 + 68) = v123;
          v62 = v124;
          v63 = (unsigned int *)*((_QWORD *)v124 + 60);
          v64 = *v63 | 2;
          if ( !v61 )
            v64 = *v63 & 0xFFFFFFFD;
          *v63 = v64;
          v65 = (unsigned int *)*((_QWORD *)v62 + 60);
          v66 = *v65 | 8;
          if ( !(_DWORD)v115 )
            v66 = *v65 & 0xFFFFFFF7;
          *v65 = v66;
          if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( *((_DWORD *)v3 + 26) == 255 )
            {
              LOBYTE(v67) = 18;
              v68 = HMValidateHandleNoSecure(v3[12], v67);
              if ( v68 )
              {
                if ( *(struct tagTHREADINFO **)(v68 + 16) == a1 )
                {
                  v69 = UnlinkHidData(a1, (struct tagHIDDATA *)v68, 0LL);
                  if ( v69 )
                    FreeHidData(v69);
                }
                else
                {
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4430LL);
                }
              }
            }
          }
          goto LABEL_165;
      }
      v119 = *((_QWORD *)a1 + 193);
      LODWORD(v114) = *((_DWORD *)a1 + 388);
      *(_QWORD *)&v120 = *(_QWORD *)((char *)a1 + 1556);
      LODWORD(v112) = *((_DWORD *)a1 + 391);
      *((_QWORD *)a1 + 193) = *(_QWORD *)((char *)v30 + 28);
      *((_DWORD *)a1 + 388) = *((_DWORD *)v30 + 9);
      *(_QWORD *)((char *)a1 + 1556) = v30[5];
      *((_DWORD *)a1 + 391) = *((_DWORD *)v30 + 12);
      *((_QWORD *)a1 + 196) = v125;
      goto LABEL_44;
    }
    v109 = *((_DWORD *)PtiCurrent() + 401);
    v70 = *((_DWORD *)v3 + 32);
    *((_DWORD *)PtiCurrent() + 401) = v70;
    SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(v128);
    if ( ShouldCallWndProcHook(a1, 0x20u, *v12, (struct tagWND *)v3[14]) )
    {
      DWORD1(v126) = 0;
      v71 = (_QWORD *)v3[14];
      if ( v71 )
        *((_QWORD *)&v126 + 1) = *v71;
      else
        *((_QWORD *)&v126 + 1) = 0LL;
      LODWORD(v126) = *((_DWORD *)v3 + 26);
      v125[1] = v3[11];
      v125[0] = v3[12];
      *(_QWORD *)&v127 = v3;
      xxxCallHook(0, 1uLL, (__int64)v125, 4);
    }
    SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v128);
    FreeDelayedHooks();
    if ( (*((_DWORD *)v3 + 21) & 7) != 0 )
      goto LABEL_100;
    v74 = (__int64 *)v3[14];
    if ( !v74 )
      goto LABEL_100;
    v75 = 0LL;
    v116 = 0LL;
    v112 = *v74;
    v122 = (unsigned __int16)v112;
    v77 = *(_QWORD *)(W32GetUserSessionState(v73, v72) + 19904);
    if ( (unsigned __int64)(unsigned __int16)v112 >= *(_QWORD *)(v77 + 8)
      || (v78 = W32GetUserSessionState(v77, v76),
          v81 = *(_DWORD *)(W32GetUserSessionState(v80, v79) + 19928) * (unsigned __int16)v112,
          v75 = v81 + *(_QWORD *)(v78 + 19920),
          v83 = W32GetUserSessionState(v81, v82),
          v84 = v3[14],
          *(_QWORD *)(*(_QWORD *)(v83 + 19864) + 40LL * (unsigned __int16)v112) != v84)
      || *(_BYTE *)(v75 + 24) != 1 )
    {
      KeBugCheckEx(0x197u, 1uLL, v3[14], v75, 1uLL);
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v84 + 40) + 18LL) & 4) == 0 )
    {
      Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v118, v84);
      v91 = **((_DWORD **)PtiCurrent() + 60);
      v92 = PtiCurrent();
      **((_DWORD **)v92 + 60) |= 0x10u;
      xxxSendMessageToClient(
        (struct tagWND *)v3[14],
        *((_DWORD *)v3 + 26),
        v3[11],
        v3[12],
        (struct tagSMS *)v3,
        1,
        &v111);
      v93 = (**((_DWORD **)PtiCurrent() + 60) ^ v91) & 0x10;
      v94 = PtiCurrent();
      **((_DWORD **)v94 + 60) ^= v93;
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v118);
LABEL_144:
      SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(v128);
      if ( (*((_DWORD *)v3 + 21) & 4) == 0
        && ShouldCallWndProcHook(a1, 0x2000u, *((_DWORD *)v3 + 26), (struct tagWND *)v3[14]) )
      {
        HIDWORD(v126) = 0;
        v95 = (_QWORD *)v3[14];
        if ( v95 )
          *(_QWORD *)&v127 = *v95;
        else
          *(_QWORD *)&v127 = 0LL;
        DWORD2(v126) = *((_DWORD *)v3 + 26);
        *(_QWORD *)&v126 = v3[11];
        v125[1] = v3[12];
        v125[0] = v111;
        *((_QWORD *)&v127 + 1) = v3;
        xxxCallHook(0, 1uLL, (__int64)v125, 12);
      }
      SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v128);
      FreeDelayedHooks();
      *((_DWORD *)PtiCurrent() + 401) = v109;
      goto LABEL_100;
    }
    v120 = 0LL;
    v121 = 0LL;
    v85 = 0;
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v118, v84);
    v86 = *((unsigned int *)v3 + 26);
    if ( (unsigned int)v86 >= 0x400 )
    {
      v87 = 0;
    }
    else
    {
      if ( (MessageTable[v86] & 0x200) == 0 && ((_DWORD)v86 != 537 || (v3[11] & 0x8000LL) == 0) )
      {
LABEL_137:
        v88 = v3[14];
        v89 = *(_QWORD *)(*(_QWORD *)(v88 + 40) + 120LL);
        if ( v89 < 4 )
          v90 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))(&gServerHandlers)[v89])(
                  v88,
                  *((unsigned int *)v3 + 26),
                  v3[11],
                  v3[12]);
        else
          v90 = 0LL;
        v111 = v90;
        if ( v85 )
          PopAndFreeW32ThreadLock(&v120);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v118);
        goto LABEL_144;
      }
      v87 = 1;
    }
    if ( v87 )
    {
      *((_DWORD *)v3 + 21) |= 0x20u;
      if ( v110 )
      {
        v85 = 1;
        LockKernelStack(*v110, (struct _TL *)&v120);
      }
    }
    goto LABEL_137;
  }
  v15 = v110;
  if ( !v110 )
    Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>(BugCheckParameter3, v3[14]);
  if ( (*v7 & 0x400) != 0 )
  {
    v16 = PtiCurrent();
    v17 = (_DWORD *)*((_QWORD *)v16 + 60);
    v18 = *v17 & 8;
    *v17 |= 4u;
    v19 = (_DWORD *)*((_QWORD *)v16 + 60);
    *v19 |= 8u;
    v20 = *v12;
    if ( *v12 == 576 || v20 == 281 )
    {
      v22 = (unsigned __int8)MessageTable[(unsigned __int16)v20];
      v23 = gapfnScSendMessage[v22];
      v24 = W32GetUserSessionState(v22, v17);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, int, _QWORD))v23)(
        v3[14],
        *((unsigned int *)v3 + 26),
        v3[7],
        v3[9],
        v3[6],
        *(_QWORD *)(*(_QWORD *)(v24 + 19904) + 752LL),
        1,
        0LL);
    }
    else
    {
      v21 = W32GetUserSessionState(v19, v17);
      SfnDWORD(v3[14], *v12, v3[7], v3[9], v3[6], *(_QWORD *)(*(_QWORD *)(v21 + 19904) + 752LL));
    }
    **((_DWORD **)v16 + 60) &= ~4u;
    v25 = (unsigned int *)*((_QWORD *)v16 + 60);
    v26 = *v25 | 8;
    if ( !v18 )
      v26 = *v25 & 0xFFFFFFF7;
    *v25 = v26;
  }
  else
  {
    v27 = (__int64 *)v3[14];
    v28 = 0LL;
    if ( v27 )
      v28 = *v27;
    ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))v3[6])(v28, *v12, v3[7], v3[9]);
  }
  if ( !v110 )
    Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>((ULONG_PTR)BugCheckParameter3);
LABEL_165:
  EtwTraceEndRetrieveSendMessage(v3);
  v105 = *((_DWORD *)v3 + 21) & 0xFFFFBFFF;
  *((_DWORD *)v3 + 21) = v105;
  if ( (v105 & 8) != 0 )
  {
    UnlinkSendListSms(v3);
  }
  else if ( (v105 & 1) == 0 )
  {
    v3[9] = v111;
    *((_DWORD *)v3 + 21) = v105 | 1;
    if ( v15 )
      SetWakeBit(v15, 512LL);
  }
LABEL_3:
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>((ULONG_PTR)BugCheckParameter3);
}
