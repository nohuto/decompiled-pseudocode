/*
 * XREFs of HMValidateHandle @ 0x1C004AD4C
 * Callers:
 *     NtUserGetRawInputData @ 0x1C00039F0 (NtUserGetRawInputData.c)
 *     NtUserDrawIconEx @ 0x1C0014F60 (NtUserDrawIconEx.c)
 *     NtUserGetIconInfo @ 0x1C004A220 (NtUserGetIconInfo.c)
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 *     fnHkINLPMSG @ 0x1C005CBA0 (fnHkINLPMSG.c)
 *     xxxInterSendMsgEx @ 0x1C005DAE0 (xxxInterSendMsgEx.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C005FAE0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserSetCursor @ 0x1C0073910 (NtUserSetCursor.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C00755B0 (NtUserDeferWindowPosAndBand.c)
 *     NtUserUnhookWindowsHookEx @ 0x1C00821B0 (NtUserUnhookWindowsHookEx.c)
 *     NtUserTranslateAccelerator @ 0x1C0092DB0 (NtUserTranslateAccelerator.c)
 *     _MapDesktopObject @ 0x1C00CF460 (_MapDesktopObject.c)
 *     NtUserUnhookWinEvent @ 0x1C00DCB70 (NtUserUnhookWinEvent.c)
 *     NtUserCopyAcceleratorTable @ 0x1C00E2620 (NtUserCopyAcceleratorTable.c)
 *     NtUserGetIconSize @ 0x1C00EBAE0 (NtUserGetIconSize.c)
 *     NtUserUpdateInputContext @ 0x1C00F54C0 (NtUserUpdateInputContext.c)
 *     NtUserQueryInputContext @ 0x1C00F5DD0 (NtUserQueryInputContext.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C00F83E0 (NtUserEndDeferWindowPosEx.c)
 *     NtUserRegisterEdgy @ 0x1C00FDEE0 (NtUserRegisterEdgy.c)
 *     NtUserAssociateInputContext @ 0x1C0100CC0 (NtUserAssociateInputContext.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C0102C20 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserDestroyAcceleratorTable @ 0x1C0109DA0 (NtUserDestroyAcceleratorTable.c)
 *     NtUserSetCursorIconData @ 0x1C011B8C0 (NtUserSetCursorIconData.c)
 *     _SetCursorIconData @ 0x1C011BB5C (_SetCursorIconData.c)
 *     NtUserFindExistingCursorIcon @ 0x1C011DBB0 (NtUserFindExistingCursorIcon.c)
 *     NtUserDestroyCursor @ 0x1C0123C50 (NtUserDestroyCursor.c)
 *     _DuplicateCursor @ 0x1C014C640 (_DuplicateCursor.c)
 *     NtUserCreateLocalMemHandle @ 0x1C014D110 (NtUserCreateLocalMemHandle.c)
 *     NtUserGetCursorFrameInfo @ 0x1C014D950 (NtUserGetCursorFrameInfo.c)
 *     ?AddSimulatedPointerDeviceData@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@KPEAUtagPOINTEREVENTINT@@PEAPEAEPEAK@Z @ 0x1C01C5D88 (-AddSimulatedPointerDeviceData@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@KPEAUtagPOINTEREVENTINT@@PEAP.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E8530 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F05A0 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01FC05C (xxxGeneratePointerInputMessages.c)
 *     SfnGESTURE @ 0x1C020E7B0 (SfnGESTURE.c)
 *     SfnTOUCH @ 0x1C0213160 (SfnTOUCH.c)
 *     NtUserDestroyInputContext @ 0x1C0218B30 (NtUserDestroyInputContext.c)
 *     NtUserDragObject @ 0x1C0218DB0 (NtUserDragObject.c)
 *     NtUserDrawCaptionTemp @ 0x1C0219150 (NtUserDrawCaptionTemp.c)
 *     NtUserGetGestureExtArgs @ 0x1C021A4B0 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C021A600 (NtUserGetGestureInfo.c)
 *     NtUserGetRawInputBuffer @ 0x1C021B860 (NtUserGetRawInputBuffer.c)
 *     NtUserGetTouchInputInfo @ 0x1C021BED0 (NtUserGetTouchInputInfo.c)
 *     NtUserGetTouchValidationStatus @ 0x1C021C020 (NtUserGetTouchValidationStatus.c)
 *     NtUserLinkDpiCursor @ 0x1C021D1C0 (NtUserLinkDpiCursor.c)
 *     NtUserSetCalibrationData @ 0x1C021F6C0 (NtUserSetCalibrationData.c)
 *     NtUserSetCursorContents @ 0x1C021FC60 (NtUserSetCursorContents.c)
 *     NtUserSetDisplayMapping @ 0x1C021FCE0 (NtUserSetDisplayMapping.c)
 *     NtUserSetSystemCursor @ 0x1C02207E0 (NtUserSetSystemCursor.c)
 *     NtUserUserHandleGrantAccess @ 0x1C0221BB0 (NtUserUserHandleGrantAccess.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C023C8CC (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

__int64 __fastcall HMValidateHandle(__int64 a1, char a2)
{
  __int64 v3; // rbx
  __int64 *v5; // rdi
  char v6; // al
  __int64 v7; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rcx

  v3 = 0LL;
  PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v5 = (__int64 *)(*((_QWORD *)&gSharedInfo + 1) + (unsigned int)(unsigned __int16)a1 * *((_DWORD *)&gSharedInfo + 4));
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
  if ( (*(_DWORD *)(v7 + 440) & 0x20000000) != 0 )
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
      v10 = 1400LL;
      break;
    case 2:
      v10 = 1401LL;
      break;
    case 3:
      v10 = 1402LL;
      break;
    case 4:
      v10 = 1405LL;
      break;
    case 5:
      v10 = 1404LL;
      break;
    case 8:
      v10 = 1403LL;
      break;
    default:
      v10 = 6LL;
      break;
  }
  UserSetLastError(v10);
  return 0LL;
}
