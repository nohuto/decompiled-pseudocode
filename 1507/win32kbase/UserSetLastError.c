/*
 * XREFs of UserSetLastError @ 0x1C003333C
 * Callers:
 *     NtUserSystemParametersInfo @ 0x1C0008450 (NtUserSystemParametersInfo.c)
 *     UserGetAtomName @ 0x1C000B6E0 (UserGetAtomName.c)
 *     UserFindAtom @ 0x1C000BB10 (UserFindAtom.c)
 *     UserGetHDevFromMonitor @ 0x1C000DA50 (UserGetHDevFromMonitor.c)
 *     NtUserGetDpiForMonitor @ 0x1C000DAD0 (NtUserGetDpiForMonitor.c)
 *     ValidateHmonitor @ 0x1C000E000 (ValidateHmonitor.c)
 *     GetHDevName @ 0x1C000E070 (GetHDevName.c)
 *     UserAddAtomEx @ 0x1C000EB00 (UserAddAtomEx.c)
 *     UserDeleteAtomFromAtomTable @ 0x1C000FE70 (UserDeleteAtomFromAtomTable.c)
 *     UserGetAtomNameFromAtomTable @ 0x1C0012B80 (UserGetAtomNameFromAtomTable.c)
 *     CheckDesktopPolicy @ 0x1C0012BC0 (CheckDesktopPolicy.c)
 *     UserAddAtomToAtomTableEx @ 0x1C0013D40 (UserAddAtomToAtomTableEx.c)
 *     ValidateHdesk @ 0x1C00140F0 (ValidateHdesk.c)
 *     ValidateHwinsta @ 0x1C0014DF0 (ValidateHwinsta.c)
 *     NtUserCheckProcessSession @ 0x1C00157C0 (NtUserCheckProcessSession.c)
 *     NtUserSetSysColors @ 0x1C0017420 (NtUserSetSysColors.c)
 *     _RegisterLogonProcess @ 0x1C00193D0 (_RegisterLogonProcess.c)
 *     NtUserReleaseDwmHitTestWaiters @ 0x1C0019540 (NtUserReleaseDwmHitTestWaiters.c)
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C001AAB8 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     NtUserQueryDisplayConfig @ 0x1C001E110 (NtUserQueryDisplayConfig.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C001E670 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C001EA00 (NtUserDisplayConfigGetDeviceInfo.c)
 *     ValidateHwndEx @ 0x1C0033450 (ValidateHwndEx.c)
 *     ReleaseCacheDC @ 0x1C00357B0 (ReleaseCacheDC.c)
 *     NtUserGetProcessDpiAwareness @ 0x1C0044F50 (NtUserGetProcessDpiAwareness.c)
 *     HMAssignmentLock @ 0x1C004D0A0 (HMAssignmentLock.c)
 *     xxxCreateThreadInfo @ 0x1C004D110 (xxxCreateThreadInfo.c)
 *     ValidateHmenu @ 0x1C004F690 (ValidateHmenu.c)
 *     HMValidateHandle @ 0x1C004F6D8 (HMValidateHandle.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C004F908 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     HMAllocObject @ 0x1C004FB70 (HMAllocObject.c)
 *     InitClientInfo @ 0x1C0050180 (InitClientInfo.c)
 *     NtUserEnumDisplayMonitors @ 0x1C00557F0 (NtUserEnumDisplayMonitors.c)
 *     NtUserChangeDisplaySettings @ 0x1C0059F90 (NtUserChangeDisplaySettings.c)
 *     NtUserRegisterSessionPort @ 0x1C007F6A0 (NtUserRegisterSessionPort.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007F924 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     IsPrivileged @ 0x1C00840A0 (IsPrivileged.c)
 *     UserAddAtom @ 0x1C0084170 (UserAddAtom.c)
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C0085524 (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 *     ValidatePwndDesktop @ 0x1C00A4650 (ValidatePwndDesktop.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00AB8D0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C00ABD50 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjection @ 0x1C00AC1B0 (NtUserInitializePointerDeviceInjection.c)
 *     NtUserInjectDeviceInput @ 0x1C00AC530 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C00AC890 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00ACC30 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C00ACFB0 (NtUserInjectPointerInput.c)
 *     NtUserSetDisplayConfig @ 0x1C00AD300 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00ADB60 (NtUserSetFeatureReportResponse.c)
 *     NtUserUnregisterSessionPort @ 0x1C00AE000 (NtUserUnregisterSessionPort.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C00C652C (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     UserSetLastStatus @ 0x1C00D3B9C (UserSetLastStatus.c)
 *     InitCreateUserCrit @ 0x1C01370AC (InitCreateUserCrit.c)
 *     InitCreateSharedSection @ 0x1C0139750 (InitCreateSharedSection.c)
 * Callees:
 *     <none>
 */

struct _NT_TIB *__fastcall UserSetLastError(__int64 a1, __int64 a2)
{
  int v2; // ebx
  struct _NT_TIB *result; // rax

  v2 = a1;
  if ( (_DWORD)a1 == dword_1C00FF3E8
    && (!qword_1C0106B38 || qword_1C0106B38 == PsGetCurrentProcess(a1, a2))
    && (_BYTE)KdDebuggerEnabled )
  {
    __debugbreak();
  }
  result = (struct _NT_TIB *)KeIsAttachedProcess();
  if ( !(_BYTE)result )
  {
    LODWORD(KeGetPcr()->NtTib.Self[1].Self) = v2;
    result = (struct _NT_TIB *)PsGetCurrentProcessWow64Process();
    if ( result )
    {
      result = KeGetPcr()->NtTib.Self;
      HIDWORD(result[147].StackBase) = v2;
    }
  }
  return result;
}
