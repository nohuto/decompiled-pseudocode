/*
 * XREFs of UserGetLastError @ 0x1401B0B24
 * Callers:
 *     xxxLoadHmodIndex @ 0x1400396C0 (xxxLoadHmodIndex.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     NtUserOpenClipboard @ 0x1401AF7E0 (NtUserOpenClipboard.c)
 *     NtUserCloseClipboard @ 0x1401B0120 (NtUserCloseClipboard.c)
 *     NtUserSetCursorPos @ 0x1401DD8F0 (NtUserSetCursorPos.c)
 *     NtUserGetClipboardData @ 0x1402B27A0 (NtUserGetClipboardData.c)
 *     NtUserInjectTouchInput @ 0x1402B6AF0 (NtUserInjectTouchInput.c)
 *     NtUserSendInput @ 0x1402BB4D0 (NtUserSendInput.c)
 *     NtUserSetClipboardData @ 0x1402BC050 (NtUserSetClipboardData.c)
 * Callees:
 *     <none>
 */

__int64 UserGetLastError()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentProcessWow64Process; // rax
  struct _NT_TIB *Self; // rcx

  if ( (unsigned __int8)KeIsAttachedProcess() )
    return 0LL;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v1, v0);
  Self = KeGetPcr()->NtTib.Self;
  if ( CurrentProcessWow64Process )
    return HIDWORD(Self[147].StackBase);
  else
    return LODWORD(Self[1].Self);
}
