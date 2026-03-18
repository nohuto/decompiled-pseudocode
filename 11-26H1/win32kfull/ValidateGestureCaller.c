/*
 * XREFs of ValidateGestureCaller @ 0x1402D4BAC
 * Callers:
 *     NtUserInjectGesture @ 0x1402B6830 (NtUserInjectGesture.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 */

__int64 __fastcall ValidateGestureCaller(__int64 a1, __int64 a2)
{
  const struct tagUIPI_INFO *v4; // r8
  const struct tagUIPI_INFO *v5; // rax

  v4 = *(const struct tagUIPI_INFO **)(W32GetUserSessionState(a1, a2) + 19176);
  v5 = *(const struct tagUIPI_INFO **)(a1 + 488);
  if ( v5 == v4 && v5 == *(const struct tagUIPI_INFO **)(a2 + 24) )
  {
    if ( UIPrivilegeIsolation::CheckAccess(
           (UIPrivilegeIsolation *)(*(_QWORD *)(a1 + 456) + 864LL),
           (const struct tagUIPI_INFO *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 456LL) + 864LL),
           v4) )
    {
      return 1LL;
    }
    UserSetLastError(5);
    EtwTraceUIPIMsgError(*(_QWORD *)(a1 + 456), *(_QWORD *)(*(_QWORD *)(a2 + 16) + 456LL), 281LL, 0LL, 0LL);
  }
  else
  {
    UserSetLastError(5);
  }
  return 0LL;
}
