/*
 * XREFs of EditionShowSystemCursor @ 0x1400F9FE0
 * Callers:
 *     NtUserShowSystemCursor @ 0x1402C0020 (NtUserShowSystemCursor.c)
 * Callees:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1400FA110 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 */

_BOOL8 __fastcall EditionShowSystemCursor(__int64 a1, __int64 a2)
{
  bool v2; // bl
  __int64 UserSessionState; // rax

  v2 = (_DWORD)a1 == 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  return CursorApiRouter::HidePointer(*(CursorApiRouter **)(UserSessionState + 36336), v2);
}
