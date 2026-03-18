/*
 * XREFs of UserSetLastError @ 0x1C00436EC
 * Callers:
 *     NtUserGetProcessDpiAwareness @ 0x1C0021610 (NtUserGetProcessDpiAwareness.c)
 *     ReleaseCacheDC @ 0x1C0034430 (ReleaseCacheDC.c)
 *     InitClientInfo @ 0x1C003F27C (InitClientInfo.c)
 *     xxxCreateThreadInfo @ 0x1C003F3A0 (xxxCreateThreadInfo.c)
 *     HMAssignmentLock @ 0x1C0041430 (HMAssignmentLock.c)
 *     ValidateHmenu @ 0x1C0041540 (ValidateHmenu.c)
 *     HMValidateHandle @ 0x1C0041588 (HMValidateHandle.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C00417B8 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     HMAllocObject @ 0x1C0041A20 (HMAllocObject.c)
 *     ValidateHwndEx @ 0x1C0043480 (ValidateHwndEx.c)
 *     UserGetHDevFromMonitor @ 0x1C0047058 (UserGetHDevFromMonitor.c)
 *     ValidateHmonitor @ 0x1C00470E0 (ValidateHmonitor.c)
 *     NtUserGetDpiForMonitor @ 0x1C0047150 (NtUserGetDpiForMonitor.c)
 *     GetHDevName @ 0x1C00475E0 (GetHDevName.c)
 *     NtUserQueryDisplayConfig @ 0x1C004B650 (NtUserQueryDisplayConfig.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C004BF80 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C004C340 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserChangeDisplaySettings @ 0x1C0053400 (NtUserChangeDisplaySettings.c)
 *     NtUserEnumDisplayMonitors @ 0x1C005E310 (NtUserEnumDisplayMonitors.c)
 *     NtUserSystemParametersInfo @ 0x1C005EBE0 (NtUserSystemParametersInfo.c)
 *     IsPrivileged @ 0x1C0068C60 (IsPrivileged.c)
 *     _RegisterLogonProcess @ 0x1C0069300 (_RegisterLogonProcess.c)
 *     CheckDesktopPolicy @ 0x1C006C1A0 (CheckDesktopPolicy.c)
 *     UserAddAtomEx @ 0x1C006CE00 (UserAddAtomEx.c)
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C006D720 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     UserGetAtomName @ 0x1C006E810 (UserGetAtomName.c)
 *     UserFindAtom @ 0x1C0070670 (UserFindAtom.c)
 *     UserDeleteAtomFromAtomTable @ 0x1C0072680 (UserDeleteAtomFromAtomTable.c)
 *     UserGetAtomNameFromAtomTable @ 0x1C0075E10 (UserGetAtomNameFromAtomTable.c)
 *     UserAddAtomToAtomTableEx @ 0x1C0076760 (UserAddAtomToAtomTableEx.c)
 *     ValidateHdesk @ 0x1C0076F70 (ValidateHdesk.c)
 *     ValidateHwinsta @ 0x1C0077D10 (ValidateHwinsta.c)
 *     NtUserCheckProcessSession @ 0x1C0078D40 (NtUserCheckProcessSession.c)
 *     NtUserSetSysColors @ 0x1C007A510 (NtUserSetSysColors.c)
 *     UserAddAtom @ 0x1C007EDF0 (UserAddAtom.c)
 *     NtUserRegisterSessionPort @ 0x1C007FD00 (NtUserRegisterSessionPort.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007FFC0 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C0088584 (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 *     ValidatePwndDesktop @ 0x1C00A90C0 (ValidatePwndDesktop.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00AFDD0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C00B01A0 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjection @ 0x1C00B0550 (NtUserInitializePointerDeviceInjection.c)
 *     NtUserInjectDeviceInput @ 0x1C00B0820 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C00B0AC0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00B0D90 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C00B1050 (NtUserInjectPointerInput.c)
 *     NtUserSetDisplayConfig @ 0x1C00B14D0 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00B1CA0 (NtUserSetFeatureReportResponse.c)
 *     NtUserUnregisterSessionPort @ 0x1C00B2190 (NtUserUnregisterSessionPort.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C00C7400 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     UserSetLastStatus @ 0x1C00D5A5C (UserSetLastStatus.c)
 *     InitCreateUserCrit @ 0x1C013AEF8 (InitCreateUserCrit.c)
 *     InitCreateSharedSection @ 0x1C013C56C (InitCreateSharedSection.c)
 * Callees:
 *     <none>
 */

struct _NT_TIB *__fastcall UserSetLastError(__int64 a1, __int64 a2)
{
  int v2; // ebx
  struct _NT_TIB *result; // rax

  v2 = a1;
  if ( (_DWORD)a1 == dword_1C0102468
    && (!qword_1C0109E68 || qword_1C0109E68 == PsGetCurrentProcess(a1, a2))
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
