/*
 * XREFs of _GetProcessDefaultLayout @ 0x14029185C
 * Callers:
 *     NtUserGetProcessDefaultLayout @ 0x140252760 (NtUserGetProcessDefaultLayout.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall GetProcessDefaultLayout(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax

  v2 = 0;
  v3 = *(_QWORD *)(W32GetUserGdiSessionState(a1) + 40);
  if ( PsGetCurrentProcess(v4) == v3 )
  {
    UserSetLastError(12);
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    RtlWriteULongToUser(a1, *(unsigned int *)(CurrentProcessWin32Process + 816));
    return 1;
  }
  return v2;
}
