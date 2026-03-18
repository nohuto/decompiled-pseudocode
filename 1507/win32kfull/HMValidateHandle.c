/*
 * XREFs of HMValidateHandle @ 0x1C00956E8
 * Callers:
 *     NtUserGetRawInputData @ 0x1C00061B0 (NtUserGetRawInputData.c)
 *     NtUserTranslateAccelerator @ 0x1C00412F0 (NtUserTranslateAccelerator.c)
 *     NtUserUnhookWindowsHookEx @ 0x1C0049AE0 (NtUserUnhookWindowsHookEx.c)
 *     NtUserUnhookWinEvent @ 0x1C004D680 (NtUserUnhookWinEvent.c)
 *     NtUserDrawIconEx @ 0x1C00511F0 (NtUserDrawIconEx.c)
 *     NtUserFindExistingCursorIcon @ 0x1C005E210 (NtUserFindExistingCursorIcon.c)
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 *     fnHkINLPMSG @ 0x1C006CF90 (fnHkINLPMSG.c)
 *     xxxInterSendMsgEx @ 0x1C006E0C0 (xxxInterSendMsgEx.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0070100 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     _MapDesktopObject @ 0x1C007EC20 (_MapDesktopObject.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C0084040 (NtUserDeferWindowPosAndBand.c)
 *     _SetCursorIconData @ 0x1C0091DB4 (_SetCursorIconData.c)
 *     NtUserSetCursorIconData @ 0x1C00923B0 (NtUserSetCursorIconData.c)
 *     NtUserGetIconInfo @ 0x1C00936E0 (NtUserGetIconInfo.c)
 *     NtUserDestroyCursor @ 0x1C00D92C0 (NtUserDestroyCursor.c)
 *     NtUserCopyAcceleratorTable @ 0x1C00DE9C0 (NtUserCopyAcceleratorTable.c)
 *     NtUserGetIconSize @ 0x1C00E7D70 (NtUserGetIconSize.c)
 *     NtUserSetCursor @ 0x1C00EE590 (NtUserSetCursor.c)
 *     NtUserUpdateInputContext @ 0x1C00EED10 (NtUserUpdateInputContext.c)
 *     NtUserQueryInputContext @ 0x1C00F06A0 (NtUserQueryInputContext.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C00F1D60 (NtUserEndDeferWindowPosEx.c)
 *     NtUserAssociateInputContext @ 0x1C00F73F0 (NtUserAssociateInputContext.c)
 *     NtUserRegisterEdgy @ 0x1C00F7D50 (NtUserRegisterEdgy.c)
 *     NtUserDestroyAcceleratorTable @ 0x1C00FC970 (NtUserDestroyAcceleratorTable.c)
 *     _DuplicateCursor @ 0x1C012366C (_DuplicateCursor.c)
 *     NtUserCreateLocalMemHandle @ 0x1C01240A0 (NtUserCreateLocalMemHandle.c)
 *     NtUserGetCursorFrameInfo @ 0x1C0124180 (NtUserGetCursorFrameInfo.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C01275A0 (NtUserGetRawInputDeviceInfo.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C0154734 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     ?AddSimulatedPointerDeviceData@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@KPEAUtagPOINTEREVENTINT@@PEAPEAEPEAK@Z @ 0x1C01C41C8 (-AddSimulatedPointerDeviceData@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@KPEAUtagPOINTEREVENTINT@@PEAP.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F063C (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01FBBC8 (xxxGeneratePointerInputMessages.c)
 *     SfnGESTURE @ 0x1C020E3E0 (SfnGESTURE.c)
 *     SfnTOUCH @ 0x1C0213300 (SfnTOUCH.c)
 *     NtUserDestroyInputContext @ 0x1C0218CC0 (NtUserDestroyInputContext.c)
 *     NtUserDragObject @ 0x1C0218F30 (NtUserDragObject.c)
 *     NtUserDrawCaptionTemp @ 0x1C02192C0 (NtUserDrawCaptionTemp.c)
 *     NtUserGetGestureExtArgs @ 0x1C021A740 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C021A880 (NtUserGetGestureInfo.c)
 *     NtUserGetRawInputBuffer @ 0x1C021BAA0 (NtUserGetRawInputBuffer.c)
 *     NtUserGetTouchInputInfo @ 0x1C021C0F0 (NtUserGetTouchInputInfo.c)
 *     NtUserGetTouchValidationStatus @ 0x1C021C240 (NtUserGetTouchValidationStatus.c)
 *     NtUserLinkDpiCursor @ 0x1C021D3A0 (NtUserLinkDpiCursor.c)
 *     NtUserSetCalibrationData @ 0x1C021F890 (NtUserSetCalibrationData.c)
 *     NtUserSetCursorContents @ 0x1C021FE20 (NtUserSetCursorContents.c)
 *     NtUserSetDisplayMapping @ 0x1C021FEC0 (NtUserSetDisplayMapping.c)
 *     NtUserSetSystemCursor @ 0x1C02209A0 (NtUserSetSystemCursor.c)
 *     NtUserUserHandleGrantAccess @ 0x1C02219E0 (NtUserUserHandleGrantAccess.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C023C6FC (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall HMValidateHandle(__int64 a1, char a2)
{
  __int64 v3; // rbx
  __int64 *v5; // rdi
  char v6; // al
  __int64 v7; // rdi
  __int64 *ThreadWin32Thread; // rax
  int v10; // ecx

  v3 = 0LL;
  PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v5 = (__int64 *)(gSharedInfo[1] + (unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2]));
    if ( (WORD1(a1) == *((_WORD *)v5 + 9)
       || WORD1(a1) == 0xFFFF
       || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL))
      && (*((_BYTE *)v5 + 17) & 1) == 0 )
    {
      v6 = *((_BYTE *)v5 + 16);
      if ( v6 == a2 || a2 == -1 && v6 )
        v3 = *v5;
    }
  }
  v7 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v7 = *ThreadWin32Thread;
  if ( (*(_DWORD *)(v7 + 448) & 0x20000000) != 0 )
  {
    if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
      v3 = 0LL;
  }
  else
  {
    v3 &= -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
  }
  if ( v3 )
    return v3;
  switch ( a2 )
  {
    case 1:
      v10 = 1400;
      break;
    case 2:
      v10 = 1401;
      break;
    case 3:
      v10 = 1402;
      break;
    case 4:
      v10 = 1405;
      break;
    case 5:
      v10 = 1404;
      break;
    case 8:
      v10 = 1403;
      break;
    default:
      v10 = 6;
      break;
  }
  UserSetLastError(v10);
  return 0LL;
}
