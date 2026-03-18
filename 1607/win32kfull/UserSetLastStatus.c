/*
 * XREFs of UserSetLastStatus @ 0x1C000C524
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C000D650 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserUpdateLayeredWindow @ 0x1C0053B90 (NtUserUpdateLayeredWindow.c)
 *     NtUserSetLayeredWindowAttributes @ 0x1C0061960 (NtUserSetLayeredWindowAttributes.c)
 *     NtUserCreateDCompositionHwndTarget @ 0x1C0098400 (NtUserCreateDCompositionHwndTarget.c)
 *     NtUserConsoleControl @ 0x1C009A870 (NtUserConsoleControl.c)
 *     NtUserFindExistingCursorIcon @ 0x1C00A07D0 (NtUserFindExistingCursorIcon.c)
 *     NtUserRegisterWindowMessage @ 0x1C00F9B30 (NtUserRegisterWindowMessage.c)
 *     NtUserSetWindowCompositionTransition @ 0x1C0126030 (NtUserSetWindowCompositionTransition.c)
 *     NtUserDestroyDCompositionHwndTarget @ 0x1C0129150 (NtUserDestroyDCompositionHwndTarget.c)
 *     NtUserDwmGetRemoteSessionOcclusionEvent @ 0x1C01330C0 (NtUserDwmGetRemoteSessionOcclusionEvent.c)
 *     NtUserDwmKernelStartup @ 0x1C01348C0 (NtUserDwmKernelStartup.c)
 *     NtUserDwmKernelShutdown @ 0x1C0212110 (NtUserDwmKernelShutdown.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0215C30 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserSetAutoRotation @ 0x1C02192B0 (NtUserSetAutoRotation.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C021A2F0 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1C021B900 (NtUserUpdateDefaultDesktopThumbnail.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
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
