/*
 * XREFs of xxxDefWindowProc @ 0x14012D860
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x140037AA0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     xxxGetControlColor @ 0x140125958 (xxxGetControlColor.c)
 *     ?DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1401F01A0 (-DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1401F04C0 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1401FFD98 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxValidateClassAndSize @ 0x1402001D4 (xxxValidateClassAndSize.c)
 *     xxxEventWndProc @ 0x140216850 (xxxEventWndProc.c)
 *     ?xxxDoSend@@YA_JPEAUtagWND@@I_K_J@Z @ 0x14023F3C8 (-xxxDoSend@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1402F4654 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 * Callees:
 *     SfnGETDBCSTEXTLENGTHS @ 0x140005B30 (SfnGETDBCSTEXTLENGTHS.c)
 *     SfnPOWERBROADCAST @ 0x140006240 (SfnPOWERBROADCAST.c)
 *     SfnINCBOXSTRING @ 0x140006720 (SfnINCBOXSTRING.c)
 *     SfnINLBOXSTRING @ 0x140006780 (SfnINLBOXSTRING.c)
 *     SfnINSTRING @ 0x140006900 (SfnINSTRING.c)
 *     SfnINSTRINGNULL @ 0x140007400 (SfnINSTRINGNULL.c)
 *     SfnINDEVICECHANGE @ 0x140007A60 (SfnINDEVICECHANGE.c)
 *     SfnCOPYDATA @ 0x1400082D0 (SfnCOPYDATA.c)
 *     SfnOUTSTRING @ 0x140035930 (SfnOUTSTRING.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SfnDWORD @ 0x140039C80 (SfnDWORD.c)
 *     SfnOUTCBOXSTRING @ 0x1400462F0 (SfnOUTCBOXSTRING.c)
 *     SfnOUTLBOXSTRING @ 0x140129FE0 (SfnOUTLBOXSTRING.c)
 *     IsPseudoPwnd @ 0x14012E280 (IsPseudoPwnd.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x14012ED78 (-IsInsideUserApiHook@@YAHXZ.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
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
 *     SfnINOUTLPMEASUREITEMSTRUCT @ 0x140205810 (SfnINOUTLPMEASUREITEMSTRUCT.c)
 *     SfnOUTLPRECT @ 0x1402078E0 (SfnOUTLPRECT.c)
 *     SfnOUTDWORDINDWORD @ 0x1402093D0 (SfnOUTDWORDINDWORD.c)
 *     SfnOUTLPTITLEBARINFOEX @ 0x14020B4F0 (SfnOUTLPTITLEBARINFOEX.c)
 *     SfnINCNTOUTSTRING @ 0x14020E220 (SfnINCNTOUTSTRING.c)
 *     SfnSHELLSYNCDISPLAYCHANGED @ 0x140211740 (SfnSHELLSYNCDISPLAYCHANGED.c)
 *     SfnIMECONTROL @ 0x140214380 (SfnIMECONTROL.c)
 *     SfnOUTLPSCROLLBARINFO @ 0x1402164F0 (SfnOUTLPSCROLLBARINFO.c)
 *     SfnINLPCOMPAREITEMSTRUCT @ 0x140216FF0 (SfnINLPCOMPAREITEMSTRUCT.c)
 *     SfnINWPARAMCHAR @ 0x14021F710 (SfnINWPARAMCHAR.c)
 *     SfnSHELLWINDOWMANAGEMENTCALLOUT @ 0x140220170 (SfnSHELLWINDOWMANAGEMENTCALLOUT.c)
 *     SfnINDESTROYCLIPBRD @ 0x140224AC0 (SfnINDESTROYCLIPBRD.c)
 *     SfnTOUCH @ 0x140226C20 (SfnTOUCH.c)
 *     SfnINOUTLPSIZE @ 0x140228930 (SfnINOUTLPSIZE.c)
 *     SfnTOUCHHITTESTING @ 0x140228D10 (SfnTOUCHHITTESTING.c)
 *     SfnINWPARAMDBCSCHAR @ 0x140232CE0 (SfnINWPARAMDBCSCHAR.c)
 *     SfnCOPYGLOBALDATA @ 0x1402458F0 (SfnCOPYGLOBALDATA.c)
 *     SfnGESTURE @ 0x1402468E0 (SfnGESTURE.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1402486B0 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x14024CF30 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPCREATESTRUCT @ 0x14027BFE0 (SfnINLPCREATESTRUCT.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     xxxLoadUserApiHook @ 0x140292FB4 (xxxLoadUserApiHook.c)
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

__int64 __fastcall xxxDefWindowProc(struct tagTHREADINFO **a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(int, int, int, int, __int64, __int64); // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(int, int, int, int, __int64, __int64); // rbx
  __int64 v20; // rcx

  if ( !(unsigned int)IsPseudoPwnd() && a1[2] != PtiCurrent(v8) && (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1583LL);
  if ( a2 == 397 || a2 == 325 )
    return 0LL;
  v9 = 0LL;
  if ( a2 != 60 )
    v9 = a4;
  if ( !(unsigned int)IsInsideUserApiHook() )
    return xxxRealDefWindowProc((struct tagWND *)a1);
  v10 = (__int64)a1[5];
  if ( *(char *)(v10 + 19) < 0 && (a2 != 130 || (*(_BYTE *)(v10 + 18) & 4) == 0 || *(__int16 *)(v10 + 42) < 0) )
    return xxxRealDefWindowProc((struct tagWND *)a1);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v10) + 130, 0, 0) & 1) != 0
    || !(unsigned int)xxxLoadUserApiHook() )
  {
    return xxxRealDefWindowProc((struct tagWND *)a1);
  }
  v13 = a2 & 0x1FFFF;
  if ( (*((_BYTE *)a1[5] + 18) & 8) != 0 )
  {
    if ( (unsigned int)v13 < 0x400 )
    {
      v18 = (unsigned __int8)MessageTable[(unsigned __int16)a2];
      v19 = gapfnScSendMessage[v18];
      v20 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v18, v13) + 19904) + 552LL);
      return ((__int64 (__fastcall *)(struct tagTHREADINFO **, _QWORD, __int64, __int64, _QWORD, __int64, int, _QWORD))v19)(
               a1,
               a2,
               a3,
               v9,
               0LL,
               v20,
               1,
               0LL);
    }
    v17 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v12, v13) + 19904) + 552LL);
    return SfnDWORD((__int64 *)a1, a2, a3, v9, 0LL, v17);
  }
  if ( (unsigned int)v13 >= 0x400 )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v12, v13) + 19904) + 744LL);
    return SfnDWORD((__int64 *)a1, a2, a3, v9, 0LL, v17);
  }
  v14 = (unsigned __int8)MessageTable[(unsigned __int16)a2];
  v15 = gapfnScSendMessage[v14];
  v16 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v14, v13) + 19904) + 744LL);
  return ((__int64 (__fastcall *)(struct tagTHREADINFO **, _QWORD, __int64, __int64, _QWORD, __int64, _DWORD, _QWORD))v15)(
           a1,
           a2,
           a3,
           v9,
           0LL,
           v16,
           0,
           0LL);
}
