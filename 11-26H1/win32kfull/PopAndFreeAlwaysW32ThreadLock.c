/*
 * XREFs of PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C
 * Callers:
 *     SfnGETDBCSTEXTLENGTHS @ 0x140005B30 (SfnGETDBCSTEXTLENGTHS.c)
 *     SfnPOWERBROADCAST @ 0x140006240 (SfnPOWERBROADCAST.c)
 *     SfnINSTRING @ 0x140006900 (SfnINSTRING.c)
 *     xxxClientAddFontResourceW @ 0x14000714C (xxxClientAddFontResourceW.c)
 *     ClientLoadLibrary @ 0x140007F48 (ClientLoadLibrary.c)
 *     xxxClientExpandStringW @ 0x140008DFC (xxxClientExpandStringW.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x140009398 (fnHkINLPCBTCREATESTRUCT.c)
 *     xxxClientLoadMenu @ 0x14000A328 (xxxClientLoadMenu.c)
 *     UserOnGreTextReady @ 0x1400CBFE0 (UserOnGreTextReady.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1400CC45C (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     ??1?$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1400CC710 (--1-$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     xxxInitWindowStation @ 0x1400CC898 (xxxInitWindowStation.c)
 *     xxxClientLoadStringW @ 0x1400CCAE8 (xxxClientLoadStringW.c)
 *     xxxClientLpkDrawTextEx @ 0x140121E74 (xxxClientLpkDrawTextEx.c)
 *     xxxClientGetTextExtentPointW @ 0x140122668 (xxxClientGetTextExtentPointW.c)
 *     xxxClientPSMTextOut @ 0x1401FBB08 (xxxClientPSMTextOut.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1401FFD98 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtUserfnDDEINIT @ 0x140210450 (NtUserfnDDEINIT.c)
 *     SfnIMECONTROL @ 0x140214380 (SfnIMECONTROL.c)
 *     SfnTOUCHHITTESTING @ 0x140228D10 (SfnTOUCHHITTESTING.c)
 *     xxxWaitForInputIdle @ 0x14022D64C (xxxWaitForInputIdle.c)
 *     xxxSetProcessWindowStation @ 0x14022F3A0 (xxxSetProcessWindowStation.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14023F980 (xxxUpdatePerUserSystemParameters.c)
 *     SfnCOPYGLOBALDATA @ 0x1402458F0 (SfnCOPYGLOBALDATA.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1402486B0 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x14024CF30 (SfnINLPHELPINFOSTRUCT.c)
 *     ?xxxSetIMEShowStatus@@YAHHHPEAH@Z @ 0x140250050 (-xxxSetIMEShowStatus@@YAHHHPEAH@Z.c)
 *     SfnINLPCREATESTRUCT @ 0x14027BFE0 (SfnINLPCREATESTRUCT.c)
 *     PrepareForLogoff @ 0x140292110 (PrepareForLogoff.c)
 *     xxxGetDeviceChangeInfo @ 0x1402A023C (xxxGetDeviceChangeInfo.c)
 *     ClientEventCallback @ 0x1402D4E5C (ClientEventCallback.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1402D52D0 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHLPSTRUCT @ 0x1402D5740 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1402D5A80 (SfnINLPMDICREATESTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1402D7010 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1402D73B0 (SfnPOUTLPINT.c)
 *     xxxClientFindMnemChar @ 0x1402D7F58 (xxxClientFindMnemChar.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopAndFreeAlwaysW32ThreadLock(__int64 a1)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rdx

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  v3 = 0LL;
  if ( CurrentThreadWin32Thread )
    v3 = *CurrentThreadWin32Thread;
  *(_QWORD *)(v3 + 376) = *(_QWORD *)a1;
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 16))(*(_QWORD *)(a1 + 8));
}
