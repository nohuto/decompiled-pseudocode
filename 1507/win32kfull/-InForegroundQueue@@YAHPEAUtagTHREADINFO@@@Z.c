/*
 * XREFs of ?InForegroundQueue@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C00443C8
 * Callers:
 *     NtUserInternalClipCursor @ 0x1C00442D0 (NtUserInternalClipCursor.c)
 *     NtUserGetClipboardData @ 0x1C0121150 (NtUserGetClipboardData.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x1C0218580 (NtUserCheckProcessForClipboardAccess.c)
 * Callees:
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C00427A8 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     IsDebuggerAttached @ 0x1C00454B4 (IsDebuggerAttached.c)
 */

__int64 __fastcall InForegroundQueue(struct tagTHREADINFO *a1)
{
  unsigned int v3; // r9d

  if ( (unsigned int)IsDebuggerAttached(*((_QWORD *)a1 + 48)) )
    return 1LL;
  if ( gpqForeground )
  {
    if ( *((_QWORD *)a1 + 49) != gpqForeground && (*(_DWORD *)(*((_QWORD *)a1 + 48) + 12LL) & 0x4080000) != 0x4080000 )
    {
      LOBYTE(v3) = ForegroundInputOwnerMatch(a1);
      return v3;
    }
    return 1LL;
  }
  return 0LL;
}
