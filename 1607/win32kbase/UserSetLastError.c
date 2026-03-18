/*
 * XREFs of UserSetLastError @ 0x1C0020A94
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0014378 (xxxCreateThreadInfo.c)
 *     HMAssignmentLock @ 0x1C0015370 (HMAssignmentLock.c)
 *     InitClientInfo @ 0x1C0015480 (InitClientInfo.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C001FAD0 (NtUserGetProcessDpiAwarenessContext.c)
 *     ValidateHwndEx @ 0x1C0020B00 (ValidateHwndEx.c)
 *     ReleaseCacheDC @ 0x1C0024AF0 (ReleaseCacheDC.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0035710 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C0038A6C (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     HMAllocObject @ 0x1C0038CC0 (HMAllocObject.c)
 *     NtUserQueryDisplayConfig @ 0x1C0049810 (NtUserQueryDisplayConfig.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C0049BD0 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0049F30 (NtUserDisplayConfigGetDeviceInfo.c)
 *     UserAddAtomToAtomTableEx @ 0x1C0053CF0 (UserAddAtomToAtomTableEx.c)
 *     IsPrivileged @ 0x1C0054150 (IsPrivileged.c)
 *     _RegisterLogonProcess @ 0x1C00548F0 (_RegisterLogonProcess.c)
 *     CheckDesktopPolicy @ 0x1C0054FF0 (CheckDesktopPolicy.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C0057A18 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     UserGetHDevFromMonitor @ 0x1C0057EA8 (UserGetHDevFromMonitor.c)
 *     ValidateHmonitor @ 0x1C0057F30 (ValidateHmonitor.c)
 *     NtUserGetDpiForMonitor @ 0x1C0057FA0 (NtUserGetDpiForMonitor.c)
 *     GetHDevName @ 0x1C0058200 (GetHDevName.c)
 *     NtUserEnumDisplayMonitors @ 0x1C0058780 (NtUserEnumDisplayMonitors.c)
 *     NtUserSetSysColors @ 0x1C005CBB0 (NtUserSetSysColors.c)
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C005E32C (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     NtUserChangeDisplaySettings @ 0x1C0061670 (NtUserChangeDisplaySettings.c)
 *     NtUserRegisterSessionPort @ 0x1C0071340 (NtUserRegisterSessionPort.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007156C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     NtUserSystemParametersInfo @ 0x1C0072430 (NtUserSystemParametersInfo.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C00742C0 (NtUserSetProcessDpiAwarenessContext.c)
 *     UserGetAtomName @ 0x1C0074700 (UserGetAtomName.c)
 *     UserFindAtom @ 0x1C0074940 (UserFindAtom.c)
 *     ValidateHmenu @ 0x1C0076AD0 (ValidateHmenu.c)
 *     HMValidateHandle @ 0x1C0076B18 (HMValidateHandle.c)
 *     UserDeleteAtomFromAtomTable @ 0x1C0076DC0 (UserDeleteAtomFromAtomTable.c)
 *     UserGetAtomNameFromAtomTable @ 0x1C0079870 (UserGetAtomNameFromAtomTable.c)
 *     ValidateHdesk @ 0x1C007A780 (ValidateHdesk.c)
 *     ValidateHwinsta @ 0x1C007B650 (ValidateHwinsta.c)
 *     NtUserCheckProcessSession @ 0x1C007CCE0 (NtUserCheckProcessSession.c)
 *     UserFindAtomFromAtomTable @ 0x1C007FB20 (UserFindAtomFromAtomTable.c)
 *     UserAddAtom @ 0x1C0082660 (UserAddAtom.c)
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C00897F4 (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 *     ValidatePwndDesktop @ 0x1C00B1840 (ValidatePwndDesktop.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00B9A80 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C00B9ED0 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjection @ 0x1C00BA280 (NtUserInitializePointerDeviceInjection.c)
 *     NtUserInjectDeviceInput @ 0x1C00BA550 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C00BA7F0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00BAAC0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C00BAD80 (NtUserInjectPointerInput.c)
 *     NtUserSetDisplayConfig @ 0x1C00BB200 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00BBA90 (NtUserSetFeatureReportResponse.c)
 *     NtUserUnregisterSessionPort @ 0x1C00BBF90 (NtUserUnregisterSessionPort.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C00D6AF8 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     UserSetLastStatus @ 0x1C00E30B4 (UserSetLastStatus.c)
 *     InitCreateUserCrit @ 0x1C0154458 (InitCreateUserCrit.c)
 *     InitCreateSharedSection @ 0x1C0155458 (InitCreateSharedSection.c)
 * Callees:
 *     <none>
 */

struct _NT_TIB *__fastcall UserSetLastError(__int64 a1)
{
  int v1; // ebx
  struct _NT_TIB *result; // rax

  v1 = a1;
  if ( (_DWORD)a1 == dword_1C0119A3C
    && (!qword_1C01211F0 || qword_1C01211F0 == PsGetCurrentProcess(a1))
    && (_BYTE)KdDebuggerEnabled )
  {
    __debugbreak();
  }
  result = (struct _NT_TIB *)KeIsAttachedProcess();
  if ( !(_BYTE)result )
  {
    LODWORD(KeGetPcr()->NtTib.Self[1].Self) = v1;
    result = (struct _NT_TIB *)PsGetCurrentProcessWow64Process();
    if ( result )
    {
      result = KeGetPcr()->NtTib.Self;
      HIDWORD(result[147].StackBase) = v1;
    }
  }
  return result;
}
