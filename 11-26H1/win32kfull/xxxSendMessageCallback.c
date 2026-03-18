/*
 * XREFs of xxxSendMessageCallback @ 0x140051930
 * Callers:
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x140004EE4 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxSendNotifyMessage @ 0x140044970 (xxxSendNotifyMessage.c)
 *     ?SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z @ 0x140046F44 (-SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z.c)
 *     ?xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140051740 (-xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxBroadcastMessageEx @ 0x140092830 (xxxBroadcastMessageEx.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x14014ABAC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
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
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1400378B8 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     FreeDelayedHooks @ 0x140037910 (FreeDelayedHooks.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x140037AA0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     SfnDWORD @ 0x140039C80 (SfnDWORD.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x140039FC0 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     SfnOUTCBOXSTRING @ 0x1400462F0 (SfnOUTCBOXSTRING.c)
 *     xxxInterSendMsgEx @ 0x140051EE4 (xxxInterSendMsgEx.c)
 *     ?ShouldCallWndProcHook@@YA_NPEBUtagTHREADINFO@@IIPEAUtagWND@@@Z @ 0x140053800 (-ShouldCallWndProcHook@@YA_NPEBUtagTHREADINFO@@IIPEAUtagWND@@@Z.c)
 *     xxxBroadcastMessage @ 0x1400927F4 (xxxBroadcastMessage.c)
 *     SfnOUTLBOXSTRING @ 0x140129FE0 (SfnOUTLBOXSTRING.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
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

__int64 __fastcall xxxSendMessageCallback(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        void (__fastcall *a5)(struct tagWND *, _QWORD, __int64, __int64),
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  __int64 *v11; // rsi
  unsigned int v12; // ecx
  ULONG_PTR v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // r14
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 UserSessionState; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  const struct tagTHREADINFO **CurrentThreadWin32Thread; // rax
  const struct tagTHREADINFO *v25; // r14
  __int64 *v26; // rcx
  __int64 v28; // r12
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r13
  int v33; // eax
  unsigned __int64 v34; // rax
  _DWORD *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 (__fastcall *v39)(int, int, int, int, __int64, __int64); // rdi
  __int64 v40; // rax
  unsigned int *v41; // rdx
  unsigned int v42; // ecx
  int v43; // [rsp+50h] [rbp-E8h]
  int v44; // [rsp+50h] [rbp-E8h]
  unsigned __int64 v46; // [rsp+58h] [rbp-E0h]
  __int64 v48[2]; // [rsp+68h] [rbp-D0h] BYREF
  __int128 v49; // [rsp+78h] [rbp-C0h]
  __int128 v50; // [rsp+88h] [rbp-B0h]
  __int64 v51; // [rsp+98h] [rbp-A0h] BYREF
  int v52; // [rsp+A0h] [rbp-98h]
  __int64 v53; // [rsp+A8h] [rbp-90h]
  ULONG_PTR BugCheckParameter3; // [rsp+B0h] [rbp-88h]
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp-80h]
  _BYTE v56[56]; // [rsp+C0h] [rbp-78h] BYREF

  BugCheckParameter2 = (ULONG_PTR)a1;
  v11 = 0LL;
  v51 = 0LL;
  *(_OWORD *)v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  if ( __PAIR128__(a6, (unsigned __int64)a5) == __PAIR128__(1LL, 0LL) )
  {
    v12 = 1;
    v43 = 1;
  }
  else
  {
    v43 = 0;
    v12 = 1;
  }
  if ( a2 < 0x400 && (_bittest16(&MessageTable[a2], 9u) || a2 == 537 && (a3 & 0x8000) != 0) )
  {
    UserSetLastError(1159);
    return 0LL;
  }
  if ( a1 == (struct tagWND *)-1LL )
  {
    if ( a5 )
    {
      v12 = 3;
      v48[0] = (__int64)a5;
      v48[1] = a6;
      LODWORD(v49) = a7;
      v11 = v48;
    }
    return xxxBroadcastMessage(0, a2, a3, a4, v12, (union tagBROADCASTMSG *)v11, a8);
  }
  else
  {
    v13 = 0LL;
    BugCheckParameter3 = 0LL;
    if ( a1 )
    {
      v14 = *(_QWORD *)a1;
      v53 = *(_QWORD *)a1;
    }
    else
    {
      v53 = 0LL;
      LOWORD(v14) = 0;
    }
    v15 = (unsigned __int16)v14;
    v52 = (unsigned __int16)v14;
    v16 = (unsigned __int16)v14;
    v18 = *(_QWORD *)(W32GetUserSessionState(1LL, a6) + 19904);
    if ( v15 >= *(_QWORD *)(v18 + 8)
      || (UserSessionState = W32GetUserSessionState(v18, v17),
          v22 = (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v21, v20) + 19928) * v15),
          v13 = v22 + *(_QWORD *)(UserSessionState + 19920),
          *(struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v22, v23) + 19864) + 40 * v16) != a1)
      || *(_BYTE *)(v13 + 24) != 1 )
    {
      KeBugCheckEx(0x197u, 1uLL, (ULONG_PTR)a1, v13, 1uLL);
    }
    CurrentThreadWin32Thread = (const struct tagTHREADINFO **)PsGetCurrentThreadWin32Thread(5 * v16);
    if ( CurrentThreadWin32Thread )
      v25 = *CurrentThreadWin32Thread;
    else
      v25 = 0LL;
    if ( !v43 && v25 == *((const struct tagTHREADINFO **)a1 + 2) )
    {
      SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)v56);
      v28 = a3;
      v29 = a4;
      if ( ShouldCallWndProcHook(v25, 0x20u, a2, a1) )
      {
        *((_QWORD *)&v49 + 1) = *(_QWORD *)a1;
        LODWORD(v49) = a2;
        v48[1] = a3;
        v48[0] = a4;
        *(_QWORD *)&v50 = 0LL;
        xxxCallHook(0LL, 0LL, (__int64)v48, 4);
      }
      SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)v56);
      FreeDelayedHooks();
      v30 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v30 + 18) & 4) != 0 )
      {
        v34 = *(_QWORD *)(v30 + 120);
        if ( v34 >= 4 )
          return 0LL;
        v31 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64))(&gServerHandlers)[v34])(
                a1,
                a2,
                a3,
                a4);
      }
      else
      {
        xxxSendMessageToClient(a1, a2, a3, a4, 0LL, 0, &v51);
        v31 = v51;
      }
      v46 = v31;
      if ( a5 )
      {
        if ( a7 )
        {
          v35 = (_DWORD *)*((_QWORD *)v25 + 60);
          v36 = *v35 & 8;
          v44 = *v35 & 8;
          *v35 |= 4u;
          **((_DWORD **)v25 + 60) |= 8u;
          if ( a2 == 576 || a2 == 281 )
          {
            v38 = (unsigned __int8)MessageTable[(unsigned __int16)a2];
            v39 = gapfnScSendMessage[v38];
            v40 = W32GetUserSessionState(v38, 0x140000000uLL);
            v32 = v46;
            ((void (__fastcall *)(struct tagWND *, _QWORD, __int64, unsigned __int64, void (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64), _QWORD, int, _QWORD))v39)(
              a1,
              a2,
              a6,
              v46,
              a5,
              *(_QWORD *)(*(_QWORD *)(v40 + 19904) + 752LL),
              1,
              0LL);
            v29 = a4;
          }
          else
          {
            v37 = W32GetUserSessionState(v35, v36);
            v32 = v46;
            SfnDWORD((__int64 *)a1, a2, a6, v46, (__int64)a5, *(_QWORD *)(*(_QWORD *)(v37 + 19904) + 752LL));
          }
          **((_DWORD **)v25 + 60) &= ~4u;
          v41 = (unsigned int *)*((_QWORD *)v25 + 60);
          v42 = *v41 | 8;
          if ( !v44 )
            v42 = *v41 & 0xFFFFFFF7;
          *v41 = v42;
          goto LABEL_27;
        }
        a5(a1, a2, a6, v31);
      }
      v32 = v46;
LABEL_27:
      SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)v56);
      if ( ShouldCallWndProcHook(v25, 0x2000u, a2, a1) )
      {
        v50 = *(unsigned __int64 *)a1;
        DWORD2(v49) = a2;
        *(_QWORD *)&v49 = v28;
        v48[1] = v29;
        v48[0] = v32;
        xxxCallHook(0LL, 0LL, (__int64)v48, 12);
      }
      SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)v56);
      FreeDelayedHooks();
      return 1LL;
    }
    v26 = 0LL;
    if ( a5 )
    {
      v33 = 257;
      if ( !a7 )
        v33 = 1;
      LODWORD(v48[0]) = v33;
      v48[1] = (__int64)a5;
      *(_QWORD *)&v49 = a6;
      v26 = v48;
    }
    return xxxInterSendMsgEx(a1, a2, 0, *((_QWORD *)a1 + 2), (__int64)v26, a8, a9);
  }
}
