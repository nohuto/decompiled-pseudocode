/*
 * XREFs of ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C011E870
 * Callers:
 *     NtUserInternalClipCursor @ 0x1C011E790 (NtUserInternalClipCursor.c)
 *     NtUserGetClipboardData @ 0x1C0150380 (NtUserGetClipboardData.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x1C0210F20 (NtUserCheckProcessForClipboardAccess.c)
 * Callees:
 *     IsDebuggerAttached @ 0x1C00AAB24 (IsDebuggerAttached.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C011E8E8 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall InForegroundQueue(__int64 **a1, int a2)
{
  unsigned int v5; // r11d

  if ( (unsigned int)IsDebuggerAttached(a1[47]) )
    return 1LL;
  if ( gpqForeground )
  {
    if ( a1[48] != (__int64 *)gpqForeground && (*((_DWORD *)a1[47] + 3) & 0x4080000) != 0x4080000 )
    {
      LOBYTE(v5) = (unsigned int)ForegroundInputOwnerMatch((const struct tagTHREADINFO *)a1, a2) != 0;
      return v5;
    }
    return 1LL;
  }
  return 0LL;
}
