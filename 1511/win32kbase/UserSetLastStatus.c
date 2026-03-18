/*
 * XREFs of UserSetLastStatus @ 0x1C00D5A5C
 * Callers:
 *     NtUserGetDpiForMonitor @ 0x1C0047150 (NtUserGetDpiForMonitor.c)
 * Callees:
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall UserSetLastStatus(NTSTATUS Status)
{
  NTSTATUS v2; // ebx
  struct _NT_TIB *result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  ULONG v7; // eax
  __int64 v8; // rdx

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
    if ( PsGetCurrentProcessWow64Process(v5, v4, v6) )
      HIDWORD(KeGetPcr()->NtTib.Self[200].Self) = Status;
    v7 = RtlNtStatusToDosError(v2);
    return UserSetLastError(v7, v8);
  }
  return result;
}
