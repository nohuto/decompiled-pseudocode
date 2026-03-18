/*
 * XREFs of UserSetLastStatus @ 0x1C0007BB0
 * Callers:
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0007AC0 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C000BB60 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserUpdateLayeredWindow @ 0x1C0069CF0 (NtUserUpdateLayeredWindow.c)
 *     NtUserConsoleControl @ 0x1C0073130 (NtUserConsoleControl.c)
 *     NtUserSetLayeredWindowAttributes @ 0x1C0079330 (NtUserSetLayeredWindowAttributes.c)
 *     NtUserDestroyDCompositionHwndTarget @ 0x1C00D1980 (NtUserDestroyDCompositionHwndTarget.c)
 *     NtUserCreateDCompositionHwndTarget @ 0x1C00D1DE0 (NtUserCreateDCompositionHwndTarget.c)
 *     NtUserDwmKernelStartup @ 0x1C00D5860 (NtUserDwmKernelStartup.c)
 *     NtUserRegisterWindowMessage @ 0x1C00DB4D0 (NtUserRegisterWindowMessage.c)
 *     NtUserSetWindowCompositionTransition @ 0x1C0104760 (NtUserSetWindowCompositionTransition.c)
 *     NtUserDwmGetRemoteSessionOcclusionEvent @ 0x1C0112910 (NtUserDwmGetRemoteSessionOcclusionEvent.c)
 *     NtUserFindExistingCursorIcon @ 0x1C011DBB0 (NtUserFindExistingCursorIcon.c)
 *     NtUserDwmKernelShutdown @ 0x1C0219510 (NtUserDwmKernelShutdown.c)
 *     NtUserSetAutoRotation @ 0x1C021F660 (NtUserSetAutoRotation.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C0220520 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1C02217C0 (NtUserUpdateDefaultDesktopThumbnail.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall UserSetLastStatus(NTSTATUS Status, int a2)
{
  NTSTATUS v4; // ebx
  struct _NT_TIB *result; // rax
  ULONG v6; // eax

  if ( ((Status >> 16) & 0x1FFFu) - 62 <= 1 )
  {
    v4 = 0;
    if ( Status < 0 )
      v4 = -1073741823;
  }
  else
  {
    v4 = Status;
  }
  result = (struct _NT_TIB *)KeIsAttachedProcess();
  if ( !(_BYTE)result )
  {
    LODWORD(KeGetPcr()->NtTib.Self[83].ArbitraryUserPointer) = Status;
    result = (struct _NT_TIB *)PsGetCurrentProcessWow64Process();
    if ( result )
    {
      result = KeGetPcr()->NtTib.Self;
      HIDWORD(result[200].Self) = Status;
    }
    if ( a2 )
    {
      v6 = RtlNtStatusToDosError(v4);
      return (struct _NT_TIB *)UserSetLastError(v6);
    }
  }
  return result;
}
