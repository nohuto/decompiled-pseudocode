/*
 * XREFs of UserSetLastStatus @ 0x1C0005C30
 * Callers:
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0005B40 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C00399F0 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserSetLayeredWindowAttributes @ 0x1C0056ED0 (NtUserSetLayeredWindowAttributes.c)
 *     NtUserUpdateLayeredWindow @ 0x1C0058BB0 (NtUserUpdateLayeredWindow.c)
 *     NtUserFindExistingCursorIcon @ 0x1C005E210 (NtUserFindExistingCursorIcon.c)
 *     NtUserConsoleControl @ 0x1C0080380 (NtUserConsoleControl.c)
 *     NtUserRegisterWindowMessage @ 0x1C00D6040 (NtUserRegisterWindowMessage.c)
 *     NtUserDestroyDCompositionHwndTarget @ 0x1C00E95B0 (NtUserDestroyDCompositionHwndTarget.c)
 *     NtUserCreateDCompositionHwndTarget @ 0x1C00E9730 (NtUserCreateDCompositionHwndTarget.c)
 *     NtUserSetWindowCompositionTransition @ 0x1C00FC640 (NtUserSetWindowCompositionTransition.c)
 *     NtUserDwmGetRemoteSessionOcclusionEvent @ 0x1C0131490 (NtUserDwmGetRemoteSessionOcclusionEvent.c)
 *     NtUserDwmKernelStartup @ 0x1C0149770 (NtUserDwmKernelStartup.c)
 *     NtUserDwmKernelShutdown @ 0x1C0219680 (NtUserDwmKernelShutdown.c)
 *     NtUserSetAutoRotation @ 0x1C021F840 (NtUserSetAutoRotation.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C02206F0 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1C02217A0 (NtUserUpdateDefaultDesktopThumbnail.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
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
