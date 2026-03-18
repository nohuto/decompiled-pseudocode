/*
 * XREFs of HMValidateHandleWithDescriptor @ 0x140028DB8
 * Callers:
 *     NtUserFindExistingCursorIcon @ 0x14001FB40 (NtUserFindExistingCursorIcon.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140021BA8 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     NtUserDrawIconEx @ 0x140027D60 (NtUserDrawIconEx.c)
 *     NtUserSetCursorIconDataEx @ 0x140027F50 (NtUserSetCursorIconDataEx.c)
 *     _MapDesktopObject @ 0x140028310 (_MapDesktopObject.c)
 *     NtUserUnhookWindowsHookEx @ 0x140028410 (NtUserUnhookWindowsHookEx.c)
 *     ?SaveMessageInfoHandle@@YAXPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x140028500 (-SaveMessageInfoHandle@@YAXPEAUtagTHREADINFO@@PEAUtagMSG@@@Z.c)
 *     NtUserGetRawInputDeviceInfo @ 0x140028870 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserDestroyCursor @ 0x140028CC0 (NtUserDestroyCursor.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x140029AD0 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     NtUserEndDeferWindowPosEx @ 0x14002A1D0 (NtUserEndDeferWindowPosEx.c)
 *     fnHkINLPMSG @ 0x14003B750 (fnHkINLPMSG.c)
 *     xxxInterSendMsgEx @ 0x140051EE4 (xxxInterSendMsgEx.c)
 *     NtUserUnhookWinEvent @ 0x14013BD30 (NtUserUnhookWinEvent.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x14013E294 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x140150B00 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     NtUserLinkDpiCursor @ 0x140151EA0 (NtUserLinkDpiCursor.c)
 *     NtUserSetSystemCursor @ 0x140152F00 (NtUserSetSystemCursor.c)
 *     NtUserGetIconSize @ 0x1401BF250 (NtUserGetIconSize.c)
 *     NtUserGetIconInfo @ 0x1401E2A80 (NtUserGetIconInfo.c)
 *     NtUserAssociateInputContext @ 0x1402016B0 (NtUserAssociateInputContext.c)
 *     NtUserUpdateInputContext @ 0x140201930 (NtUserUpdateInputContext.c)
 *     NtUserQueryInputContext @ 0x140204230 (NtUserQueryInputContext.c)
 *     NtUserCopyAcceleratorTable @ 0x1402067A0 (NtUserCopyAcceleratorTable.c)
 *     NtUserGetRequiredCursorSizes @ 0x140207820 (NtUserGetRequiredCursorSizes.c)
 *     NtUserCreateLocalMemHandle @ 0x140208270 (NtUserCreateLocalMemHandle.c)
 *     NtUserGetCursorFrameInfo @ 0x140212230 (NtUserGetCursorFrameInfo.c)
 *     NtUserDestroyInputContext @ 0x140224FC0 (NtUserDestroyInputContext.c)
 *     SfnTOUCH @ 0x140226C20 (SfnTOUCH.c)
 *     NtUserDestroyAcceleratorTable @ 0x140231E00 (NtUserDestroyAcceleratorTable.c)
 *     NtUserGetTouchInputInfo @ 0x140232A10 (NtUserGetTouchInputInfo.c)
 *     SfnGESTURE @ 0x1402468E0 (SfnGESTURE.c)
 *     NtUserGetGestureInfo @ 0x140249740 (NtUserGetGestureInfo.c)
 *     NtUserRegisterEdgy @ 0x14024B4E0 (NtUserRegisterEdgy.c)
 *     ?NtUserHandleGrantAccess@@YAHPEAX0_N@Z @ 0x1402ADF68 (-NtUserHandleGrantAccess@@YAHPEAX0_N@Z.c)
 *     NtUserDeferWindowPosAndBand @ 0x1402B0DD0 (NtUserDeferWindowPosAndBand.c)
 *     NtUserDragObject @ 0x1402B11A0 (NtUserDragObject.c)
 *     NtUserDrawCaptionTemp @ 0x1402B1520 (NtUserDrawCaptionTemp.c)
 *     NtUserGetGestureExtArgs @ 0x1402B3720 (NtUserGetGestureExtArgs.c)
 *     NtUserGetTouchValidationStatus @ 0x1402B4E70 (NtUserGetTouchValidationStatus.c)
 *     NtUserSetCalibrationData @ 0x1402BBC40 (NtUserSetCalibrationData.c)
 *     NtUserSetDisplayMapping @ 0x1402BC950 (NtUserSetDisplayMapping.c)
 *     NtUserTranslateAccelerator @ 0x1402C0630 (NtUserTranslateAccelerator.c)
 *     NtUserUserHandleGrantAccess @ 0x1402C0C90 (NtUserUserHandleGrantAccess.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CEEEC (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1402F23D0 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall HMValidateHandleWithDescriptor(__int64 a1, unsigned __int8 a2)
{
  int v2; // ebp
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 *v14; // r14
  __int16 v15; // ax
  char v16; // cl
  char v17; // al
  __int64 v18; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v20; // rdx
  __int16 v21; // r8
  _QWORD *v22; // rax
  __int64 v23; // rax
  int v25; // ecx

  v2 = a2;
  v3 = 0LL;
  PtiCurrent();
  v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19904);
  if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(v8 + 8) )
    goto LABEL_29;
  UserSessionState = W32GetUserSessionState(v8, v7);
  v12 = *(_DWORD *)(W32GetUserSessionState(v11, v10) + 19928) * (unsigned int)(unsigned __int16)a1
      + *(_QWORD *)(UserSessionState + 19920);
  v14 = (__int64 *)HMPkheFromPhe(v12);
  v15 = WORD1(a1) & 0x7FFF;
  if ( (WORD1(a1) & 0x7FFF) != *(_WORD *)(v12 + 26) && v15 != 0x7FFF && (v15 || !PsGetCurrentProcessWow64Process()) )
    goto LABEL_29;
  v16 = *(_BYTE *)(v12 + 25);
  if ( (v16 & 1) == 0 )
  {
    v17 = *(_BYTE *)(v12 + 24);
    if ( v17 == (_BYTE)v2 || (_BYTE)v2 == 0xFF && v17 )
    {
      v3 = *v14;
      if ( (v16 & 4) != 0 )
      {
        LOBYTE(v13) = v2;
        v3 &= -(__int64)((unsigned int)HMSDCheck(a1, v13, 0LL) != 0);
      }
    }
  }
  if ( (*(_BYTE *)(v12 + 25) & 4) == 0 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent() + 130, 0, 0) & 0x20000000) != 0 )
    {
      if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
        v3 = 0LL;
    }
    else
    {
      v18 = -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
      v3 &= v18;
    }
    if ( *(char *)(v12 + 25) < 0 )
    {
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v18);
      v20 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        if ( *CurrentProcessWin32Process )
        {
          v21 = gahti[12 * *(unsigned __int8 *)(v12 + 24) + 6];
          if ( (v21 & 2) != 0 )
          {
            v22 = (_QWORD *)v14[1];
LABEL_25:
            if ( v22 && v22 != v20 )
              goto LABEL_29;
            goto LABEL_27;
          }
          if ( (v21 & 1) != 0 )
          {
            v23 = v14[1];
            if ( v23 )
            {
              v22 = *(_QWORD **)(v23 + 456);
              goto LABEL_25;
            }
          }
        }
      }
    }
  }
LABEL_27:
  if ( v3 )
    return v3;
LABEL_29:
  switch ( v2 )
  {
    case 1:
      v25 = 1400;
      break;
    case 2:
      v25 = 1401;
      break;
    case 3:
      v25 = 1402;
      break;
    case 4:
      v25 = 1405;
      break;
    case 5:
      v25 = 1404;
      break;
    case 8:
      v25 = 1403;
      break;
    default:
      v25 = 6;
      break;
  }
  UserSetLastError(v25);
  return 0LL;
}
