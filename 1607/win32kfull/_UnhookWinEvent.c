/*
 * XREFs of _UnhookWinEvent @ 0x1C00A95A4
 * Callers:
 *     NtUserUnhookWinEvent @ 0x1C00A9550 (NtUserUnhookWinEvent.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     DestroyEventHook @ 0x1C00A95F0 (DestroyEventHook.c)
 */

__int64 __fastcall UnhookWinEvent(__int64 a1)
{
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 17LL) & 1) != 0
    || *(_QWORD *)(a1 + 16) != gptiCurrent )
  {
    UserSetLastError(6LL);
    return 0LL;
  }
  else
  {
    DestroyEventHook();
    return 1LL;
  }
}
