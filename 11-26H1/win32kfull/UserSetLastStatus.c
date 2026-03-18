/*
 * XREFs of UserSetLastStatus @ 0x14001F7CC
 * Callers:
 *     NtUserSetLayeredWindowAttributes @ 0x140012290 (NtUserSetLayeredWindowAttributes.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x14001E5B0 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserFindExistingCursorIcon @ 0x14001FB40 (NtUserFindExistingCursorIcon.c)
 *     NtUserRegisterWindowMessage @ 0x140189D40 (NtUserRegisterWindowMessage.c)
 *     NtUserDestroyDCompositionHwndTarget @ 0x1401D2000 (NtUserDestroyDCompositionHwndTarget.c)
 *     NtUserCreateDCompositionHwndTarget @ 0x1401F6750 (NtUserCreateDCompositionHwndTarget.c)
 *     NtUserOpenWindowStation @ 0x1401F79D0 (NtUserOpenWindowStation.c)
 *     NtUserUpdateLayeredWindow @ 0x140234060 (NtUserUpdateLayeredWindow.c)
 *     NtUserDwmGetRemoteSessionOcclusionEvent @ 0x1402512F0 (NtUserDwmGetRemoteSessionOcclusionEvent.c)
 *     NtUserDwmKernelStartup @ 0x140257770 (NtUserDwmKernelStartup.c)
 *     NtUserConsoleControl @ 0x14025F390 (NtUserConsoleControl.c)
 *     NtUserDwmKernelShutdown @ 0x1402B1860 (NtUserDwmKernelShutdown.c)
 *     NtUserGetResizeDCompositionSynchronizationObject @ 0x1402B4750 (NtUserGetResizeDCompositionSynchronizationObject.c)
 *     NtUserRegisterCoreMessagingEndPoint @ 0x1402B9F20 (NtUserRegisterCoreMessagingEndPoint.c)
 *     NtUserSetAutoRotation @ 0x1402BBAA0 (NtUserSetAutoRotation.c)
 *     NtUserSetWindowCompositionTransition @ 0x1402BE3D0 (NtUserSetWindowCompositionTransition.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1402C08A0 (NtUserUpdateDefaultDesktopThumbnail.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall UserSetLastStatus(NTSTATUS Status, int a2)
{
  NTSTATUS v4; // ebx
  struct _NT_TIB *result; // rax
  ULONG v6; // eax

  if ( (Status & 0x1FFF0000) == 0x3F0000 || (Status & 0x1FFF0000) == 0x3E0000 )
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
