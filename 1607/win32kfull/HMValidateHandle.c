/*
 * XREFs of HMValidateHandle @ 0x1C003BC68
 * Callers:
 *     NtUserGetRawInputData @ 0x1C00079C0 (NtUserGetRawInputData.c)
 *     NtUserGetIconInfo @ 0x1C003BA50 (NtUserGetIconInfo.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00805A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     fnHkINLPMSG @ 0x1C0084D00 (fnHkINLPMSG.c)
 *     xxxInterSendMsgEx @ 0x1C0085BE0 (xxxInterSendMsgEx.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserDestroyCursor @ 0x1C008FE20 (NtUserDestroyCursor.c)
 *     NtUserTranslateAccelerator @ 0x1C0094F90 (NtUserTranslateAccelerator.c)
 *     _MapDesktopObject @ 0x1C009A0C0 (_MapDesktopObject.c)
 *     NtUserSetCursorIconData @ 0x1C009FC70 (NtUserSetCursorIconData.c)
 *     _SetCursorIconData @ 0x1C009FF18 (_SetCursorIconData.c)
 *     NtUserFindExistingCursorIcon @ 0x1C00A07D0 (NtUserFindExistingCursorIcon.c)
 *     NtUserUnhookWindowsHookEx @ 0x1C00A4650 (NtUserUnhookWindowsHookEx.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C00A5A00 (NtUserDeferWindowPosAndBand.c)
 *     NtUserUnhookWinEvent @ 0x1C00A9550 (NtUserUnhookWinEvent.c)
 *     NtUserDrawIconEx @ 0x1C00B0AD0 (NtUserDrawIconEx.c)
 *     NtUserCopyAcceleratorTable @ 0x1C01011D0 (NtUserCopyAcceleratorTable.c)
 *     NtUserGetIconSize @ 0x1C010BDE0 (NtUserGetIconSize.c)
 *     NtUserSetCursor @ 0x1C0115870 (NtUserSetCursor.c)
 *     NtUserUpdateInputContext @ 0x1C0117B60 (NtUserUpdateInputContext.c)
 *     NtUserQueryInputContext @ 0x1C0117F40 (NtUserQueryInputContext.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C011CC00 (NtUserEndDeferWindowPosEx.c)
 *     NtUserRegisterEdgy @ 0x1C01214A0 (NtUserRegisterEdgy.c)
 *     NtUserAssociateInputContext @ 0x1C0122470 (NtUserAssociateInputContext.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C0124FC0 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserDestroyAcceleratorTable @ 0x1C0129EA0 (NtUserDestroyAcceleratorTable.c)
 *     NtUserCreateLocalMemHandle @ 0x1C01527E0 (NtUserCreateLocalMemHandle.c)
 *     NtUserGetCursorFrameInfo @ 0x1C01528C0 (NtUserGetCursorFrameInfo.c)
 *     _DuplicateCursor @ 0x1C01536CC (_DuplicateCursor.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01DEDA8 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01E62E0 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01F222C (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 *     SfnGESTURE @ 0x1C0205B90 (SfnGESTURE.c)
 *     SfnTOUCH @ 0x1C020BAD0 (SfnTOUCH.c)
 *     NtUserDestroyInputContext @ 0x1C02117F0 (NtUserDestroyInputContext.c)
 *     NtUserDragObject @ 0x1C0211A70 (NtUserDragObject.c)
 *     NtUserDrawCaptionTemp @ 0x1C0211E10 (NtUserDrawCaptionTemp.c)
 *     NtUserGetGestureExtArgs @ 0x1C0213280 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C02133D0 (NtUserGetGestureInfo.c)
 *     NtUserGetRawInputBuffer @ 0x1C0214720 (NtUserGetRawInputBuffer.c)
 *     NtUserGetTouchInputInfo @ 0x1C0214FF0 (NtUserGetTouchInputInfo.c)
 *     NtUserGetTouchValidationStatus @ 0x1C0215140 (NtUserGetTouchValidationStatus.c)
 *     NtUserLinkDpiCursor @ 0x1C0216DC0 (NtUserLinkDpiCursor.c)
 *     NtUserSetCalibrationData @ 0x1C0219310 (NtUserSetCalibrationData.c)
 *     NtUserSetCursorContents @ 0x1C02198B0 (NtUserSetCursorContents.c)
 *     NtUserSetDisplayMapping @ 0x1C0219950 (NtUserSetDisplayMapping.c)
 *     NtUserSetSystemCursor @ 0x1C021A670 (NtUserSetSystemCursor.c)
 *     NtUserUserHandleGrantAccess @ 0x1C021BCF0 (NtUserUserHandleGrantAccess.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C02342CC (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall HMValidateHandle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  char v6; // si
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 *v10; // rdi
  char v11; // al
  __int64 v12; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rcx

  v5 = 0LL;
  v6 = a2;
  PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  v9 = gpsi;
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v7 = gSharedInfo;
    v10 = (__int64 *)(*((_QWORD *)&gSharedInfo + 1) + (unsigned int)(unsigned __int16)a1 * *((_DWORD *)&gSharedInfo + 4));
    if ( (WORD1(a1) == *((_WORD *)v10 + 9)
       || WORD1(a1) == 0xFFFF
       || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL))
      && (*((_BYTE *)v10 + 17) & 1) == 0 )
    {
      v11 = *((_BYTE *)v10 + 16);
      if ( v11 == v6 || v6 == -1 && v11 )
        v5 = *v10;
    }
  }
  v12 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v7, v9, v8);
  if ( ThreadWin32Thread )
    v12 = *ThreadWin32Thread;
  if ( (*(_DWORD *)(v12 + 440) & 0x20000000) != 0 )
  {
    if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
      v5 = 0LL;
  }
  else
  {
    v5 &= -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
  }
  if ( v5 )
    return v5;
  switch ( v6 )
  {
    case 1:
      v15 = 1400LL;
      break;
    case 2:
      v15 = 1401LL;
      break;
    case 3:
      v15 = 1402LL;
      break;
    case 4:
      v15 = 1405LL;
      break;
    case 5:
      v15 = 1404LL;
      break;
    case 8:
      v15 = 1403LL;
      break;
    default:
      v15 = 6LL;
      break;
  }
  UserSetLastError(v15);
  return 0LL;
}
