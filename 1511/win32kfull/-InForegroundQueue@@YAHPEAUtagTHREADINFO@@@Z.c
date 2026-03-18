/*
 * XREFs of ?InForegroundQueue@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C008CE08
 * Callers:
 *     NtUserInternalClipCursor @ 0x1C008CD10 (NtUserInternalClipCursor.c)
 *     NtUserGetClipboardData @ 0x1C014AE60 (NtUserGetClipboardData.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x1C0218350 (NtUserCheckProcessForClipboardAccess.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C008D488 (IsDebuggerAttached.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C0106E3C (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall InForegroundQueue(struct tagTHREADINFO *a1)
{
  unsigned int v3; // r9d

  if ( (unsigned int)IsDebuggerAttached(*((_QWORD *)a1 + 47)) )
    return 1LL;
  if ( gpqForeground )
  {
    if ( *((_QWORD *)a1 + 48) != gpqForeground && (*(_DWORD *)(*((_QWORD *)a1 + 47) + 12LL) & 0x4080000) != 0x4080000 )
    {
      LOBYTE(v3) = (unsigned int)ForegroundInputOwnerMatch(a1) != 0;
      return v3;
    }
    return 1LL;
  }
  return 0LL;
}
