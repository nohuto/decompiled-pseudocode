/*
 * XREFs of xxxDispatchMessage @ 0x140035320
 * Callers:
 *     xxxSetCsrssThreadDesktop @ 0x140056850 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x140057630 (xxxRestoreCsrssThreadDesktop.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140057734 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxMNLoop @ 0x14005AD84 (xxxMNLoop.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxTrackCaptionButton @ 0x140149F00 (xxxTrackCaptionButton.c)
 *     xxxDCETrackCaptionButton @ 0x14014B2F4 (xxxDCETrackCaptionButton.c)
 *     NtUserDispatchMessage @ 0x1401D2590 (NtUserDispatchMessage.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402F4BF4 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxHelpLoop @ 0x1402FAAB4 (xxxHelpLoop.c)
 * Callees:
 *     SfnGETDBCSTEXTLENGTHS @ 0x140005B30 (SfnGETDBCSTEXTLENGTHS.c)
 *     SfnPOWERBROADCAST @ 0x140006240 (SfnPOWERBROADCAST.c)
 *     SfnINCBOXSTRING @ 0x140006720 (SfnINCBOXSTRING.c)
 *     SfnINLBOXSTRING @ 0x140006780 (SfnINLBOXSTRING.c)
 *     SfnINSTRING @ 0x140006900 (SfnINSTRING.c)
 *     SfnINSTRINGNULL @ 0x140007400 (SfnINSTRINGNULL.c)
 *     SfnINDEVICECHANGE @ 0x140007A60 (SfnINDEVICECHANGE.c)
 *     SfnCOPYDATA @ 0x1400082D0 (SfnCOPYDATA.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SfnOUTSTRING @ 0x140035930 (SfnOUTSTRING.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SfnDWORD @ 0x140039C80 (SfnDWORD.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     RtlWCSMessageWParamCharToMB @ 0x14003DEC4 (RtlWCSMessageWParamCharToMB.c)
 *     RtlMBMessageWParamCharToWCS @ 0x14003E354 (RtlMBMessageWParamCharToWCS.c)
 *     SfnOUTCBOXSTRING @ 0x1400462F0 (SfnOUTCBOXSTRING.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x14004F06C (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x14004F51C (DirtyVisRgnTrackers.c)
 *     xxxSimpleDoSyncPaint @ 0x140050370 (xxxSimpleDoSyncPaint.c)
 *     SfnOUTLBOXSTRING @ 0x140129FE0 (SfnOUTLBOXSTRING.c)
 *     DwmAsyncChildStyleChange @ 0x14012C0D4 (DwmAsyncChildStyleChange.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 *     ValidateTimerCallback @ 0x140149E20 (ValidateTimerCallback.c)
 *     ?FindSystemTimer@@YAPEAUtagTIMER@@PEAUtagMSG@@PEAUtagWND@@@Z @ 0x140198A68 (-FindSystemTimer@@YAPEAUtagTIMER@@PEAUtagMSG@@PEAUtagWND@@@Z.c)
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
 *     ??1CEtwTraceDispatchMessage@@QEAA@XZ @ 0x1401D030C (--1CEtwTraceDispatchMessage@@QEAA@XZ.c)
 *     SfnINOUTLPPOINT5 @ 0x1401D0EB0 (SfnINOUTLPPOINT5.c)
 *     SfnINOUTLPSCROLLINFO @ 0x1401E03E0 (SfnINOUTLPSCROLLINFO.c)
 *     SfnOUTLPCOMBOBOXINFO @ 0x1401E1A70 (SfnOUTLPCOMBOBOXINFO.c)
 *     SfnINLPDRAWITEMSTRUCT @ 0x1401E8830 (SfnINLPDRAWITEMSTRUCT.c)
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
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxDispatchMessage(struct tagMSG *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  struct tagWND *v4; // r14
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rax
  int v11; // ecx
  int v12; // edi
  int v13; // r12d
  unsigned int *v14; // rax
  unsigned int v15; // r15d
  unsigned int v16; // eax
  int v17; // r15d
  __int64 v18; // r15
  char v19; // r8
  __int64 v20; // r15
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rcx
  struct tagTIMER *SystemTimer; // rax
  struct tagTIMER *v30; // rbp
  void (__fastcall *v31)(struct tagWND *, __int64, _QWORD, _QWORD); // rax
  __int64 v32; // rcx
  __int64 (__fastcall *v33)(int, int, int, int, __int64, __int64, char); // rax
  unsigned __int64 v34; // rax
  _QWORD *v35; // r12
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // eax
  struct tagTHREADINFO *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 UserSessionState; // rax
  __int64 v43; // rax
  void *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 (__fastcall *v47)(int, int, int, int, __int64, __int64); // rdi
  __int64 v48; // rcx
  __int64 (__fastcall *v49)(int, int, int, int, __int64, __int64); // rdi
  __int64 v50; // [rsp+28h] [rbp-70h]
  __int64 v51; // [rsp+28h] [rbp-70h]
  ULONG_PTR BugCheckParameter3[9]; // [rsp+50h] [rbp-48h] BYREF
  int v53; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v54; // [rsp+A8h] [rbp+10h]

  v53 = *((_DWORD *)a1 + 2);
  v1 = v53;
  LOBYTE(v3) = *((_BYTE *)PtiCurrent() + 1456);
  EtwTraceBeginDispatchMessage(v3, v1);
  v4 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v4 = (struct tagWND *)ValidateHwnd(*(_QWORD *)a1);
    if ( !v4 )
    {
      LOBYTE(v45) = *((_BYTE *)PtiCurrent() + 1456);
      EtwTraceEndDispatchMessage(v45, v1);
      return 0LL;
    }
  }
  v5 = *((unsigned int *)a1 + 2);
  if ( (unsigned int)v5 >= 0x400 )
  {
LABEL_6:
    if ( (_DWORD)v5 != 536 )
      goto LABEL_7;
LABEL_60:
    if ( (*((_DWORD *)a1 + 4) & 0x8000LL) == 0 )
    {
LABEL_7:
      v6 = PtiCurrent();
      BugCheckParameter3[0] = *((_QWORD *)v6 + 56);
      v8 = (unsigned __int64)BugCheckParameter3;
      *((_QWORD *)v6 + 56) = BugCheckParameter3;
      BugCheckParameter3[1] = (ULONG_PTR)v4;
      if ( v4 )
        HMLockObject(v4);
      v9 = *((_DWORD *)a1 + 2);
      if ( (v9 == 275 || v9 == 280) && *((_QWORD *)a1 + 3) )
      {
        if ( v9 == 280 )
        {
          v26 = 0LL;
          SystemTimer = FindSystemTimer(a1, v4);
          v30 = SystemTimer;
          if ( SystemTimer )
          {
            if ( !*((_QWORD *)SystemTimer + 4) )
            {
              v53 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3454LL);
            }
            v31 = (void (__fastcall *)(struct tagWND *, __int64, _QWORD, _QWORD))*((_QWORD *)v30 + 4);
            if ( v31 )
              v31(
                v4,
                280LL,
                *((unsigned int *)a1 + 4),
                (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24));
          }
          goto LABEL_27;
        }
        v39 = PtiCurrent();
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)v39 + 130, 0, 0) & 4) == 0
          && (unsigned int)ValidateTimerCallback(v39, *((_QWORD *)a1 + 3)) )
        {
          UserSessionState = W32GetUserSessionState(v41, v40);
          v43 = SfnDWORD(
                  (_DWORD)v4,
                  275,
                  *((_QWORD *)a1 + 2),
                  (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
                  *((_QWORD *)a1 + 3),
                  *(_QWORD *)(*(_QWORD *)(UserSessionState + 19904) + 752LL));
LABEL_55:
          v26 = v43;
          goto LABEL_27;
        }
        goto LABEL_39;
      }
      if ( !v4 )
        goto LABEL_39;
      if ( v9 != 15
        || (v10 = *((_QWORD *)v4 + 5),
            v11 = *(_DWORD *)(v10 + 232),
            v12 = *(_DWORD *)(v10 + 28),
            v13 = *(_DWORD *)(v10 + 24),
            *(_BYTE *)(v10 + 18) |= 0x40u,
            v53 = v11,
            !(unsigned int)IsWindowDesktopComposed(v4)) )
      {
LABEL_17:
        v18 = *((_QWORD *)v4 + 5);
        v19 = *(_BYTE *)(v18 + 18);
        if ( (v19 & 4) != 0 )
        {
          v32 = *((unsigned int *)a1 + 2);
          if ( (unsigned int)v32 >= 0x400 )
            v33 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))SfnDWORD;
          else
            v33 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gapfnScSendMessage[(unsigned __int8)MessageTable[v32]];
          if ( v33 == SfnINWPARAMCHAR && (v19 & 8) != 0 )
            RtlMBMessageWParamCharToWCS(v32, (char *)a1 + 16);
          v34 = *(_QWORD *)(*((_QWORD *)v4 + 5) + 120LL);
          if ( v34 < 4 )
          {
            v43 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, _QWORD, _QWORD))(&gServerHandlers)[v34])(
                    v4,
                    *((unsigned int *)a1 + 2),
                    *((_QWORD *)a1 + 2),
                    *((_QWORD *)a1 + 3));
            goto LABEL_55;
          }
LABEL_39:
          v26 = 0LL;
LABEL_27:
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3);
          LOBYTE(v27) = *((_BYTE *)PtiCurrent() + 1456);
          EtwTraceEndDispatchMessage(v27, v1);
          return v26;
        }
        v20 = *(_QWORD *)(v18 + 120);
        v21 = *((_DWORD *)a1 + 2);
        if ( (v19 & 8) != 0 )
        {
          v35 = (_QWORD *)((char *)a1 + 16);
          RtlWCSMessageWParamCharToMB(v21, (char *)a1 + 16);
          v38 = *((_DWORD *)a1 + 2);
          if ( v38 == 576 || v38 == 281 )
          {
            v48 = (unsigned __int8)MessageTable[(unsigned __int16)v38];
            v49 = gapfnScSendMessage[v48];
            v51 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v48, v36) + 19904) + 752LL);
            v24 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, _QWORD, _QWORD, __int64, __int64, int, _QWORD))v49)(
                    v4,
                    *((unsigned int *)a1 + 2),
                    *v35,
                    *((_QWORD *)a1 + 3),
                    v20,
                    v51,
                    1,
                    0LL);
            goto LABEL_23;
          }
          v22 = W32GetUserSessionState(v37, v36);
          v23 = *v35;
        }
        else
        {
          if ( v21 == 576 || v21 == 281 )
          {
            v46 = (unsigned __int8)MessageTable[(unsigned __int16)v21];
            v47 = gapfnScSendMessage[v46];
            v50 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v46, v7) + 19904) + 752LL);
            v24 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, _QWORD, _QWORD, __int64, __int64, int, _QWORD))v47)(
                    v4,
                    *((unsigned int *)a1 + 2),
                    *((_QWORD *)a1 + 2),
                    *((_QWORD *)a1 + 3),
                    v20,
                    v50,
                    1,
                    0LL);
            goto LABEL_23;
          }
          v22 = W32GetUserSessionState(v8, v7);
          v23 = *((_QWORD *)a1 + 2);
        }
        v24 = SfnDWORD(
                (_DWORD)v4,
                *((_DWORD *)a1 + 2),
                v23,
                *((_QWORD *)a1 + 3),
                v20,
                *(_QWORD *)(*(_QWORD *)(v22 + 19904) + 752LL));
LABEL_23:
        v26 = v24;
        if ( *((_DWORD *)a1 + 2) == 15 )
        {
          LOBYTE(v25) = 1;
          if ( HMValidateHandleNoSecure(*(_QWORD *)a1, v25) )
          {
            if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 18LL) & 0x40) != 0 )
            {
              SetOrClrWF(0LL, v4, 1025LL, 1LL);
              xxxSimpleDoSyncPaint(v4);
            }
          }
        }
        goto LABEL_27;
      }
      v14 = (unsigned int *)*((_QWORD *)v4 + 5);
      v7 = v14[6];
      v8 = v12 ^ v14[7];
      v15 = v14[6];
      LODWORD(v14) = v14[58];
      v54 = v8;
      v16 = v53 ^ (unsigned int)v14;
      v17 = v13 ^ v15;
      if ( !(_DWORD)v8 )
      {
        if ( v17 )
        {
LABEL_51:
          if ( (v17 & 0x4E27A9) == 0 && (v16 & 0x372C0) == 0 )
          {
LABEL_49:
            if ( (v8 & 0x1C40000) != 0 || (v17 & 0x200A0381) != 0 )
              WindowMargins::CheckForChanges(v4, 1LL);
            goto LABEL_17;
          }
LABEL_48:
          DirtyVisRgnTrackers(v4);
          v44 = (void *)ReferenceDwmApiPort();
          DwmAsyncChildStyleChange(v44);
          v8 = v54;
          goto LABEL_49;
        }
        if ( !v16 )
          goto LABEL_17;
      }
      if ( (v8 & 0xB9CF0000) != 0 )
        goto LABEL_48;
      goto LABEL_51;
    }
    goto LABEL_56;
  }
  if ( !_bittest16(&MessageTable[v5], 9u) )
  {
    if ( (_DWORD)v5 == 537 )
      goto LABEL_60;
    goto LABEL_6;
  }
LABEL_56:
  UserSetLastError(1159);
  CEtwTraceDispatchMessage::~CEtwTraceDispatchMessage((CEtwTraceDispatchMessage *)&v53);
  return 0LL;
}
