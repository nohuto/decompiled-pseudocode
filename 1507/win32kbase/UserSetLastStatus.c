/*
 * XREFs of UserSetLastStatus @ 0x1C00D3B9C
 * Callers:
 *     NtUserGetDpiForMonitor @ 0x1C000DAD0 (NtUserGetDpiForMonitor.c)
 * Callees:
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall UserSetLastStatus(NTSTATUS Status)
{
  NTSTATUS v2; // ebx
  struct _NT_TIB *result; // rax
  __int64 v4; // rcx
  ULONG v5; // eax
  __int64 v6; // rdx

  if ( ((Status >> 16) & 0x1FFFu) - 62 <= 1 )
  {
    v2 = 0;
    if ( Status < 0 )
      v2 = -1073741823;
  }
  else
  {
    v2 = Status;
  }
  result = (struct _NT_TIB *)KeIsAttachedProcess();
  if ( !(_BYTE)result )
  {
    LODWORD(KeGetPcr()->NtTib.Self[83].ArbitraryUserPointer) = Status;
    if ( PsGetCurrentProcessWow64Process(v4) )
      HIDWORD(KeGetPcr()->NtTib.Self[200].Self) = Status;
    v5 = RtlNtStatusToDosError(v2);
    return UserSetLastError(v5, v6);
  }
  return result;
}
