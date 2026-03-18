/*
 * XREFs of NtUserIsClipboardFormatAvailable @ 0x140057300
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1400573B0 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x140057518 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 */

__int64 __fastcall NtUserIsClipboardFormatAvailable(unsigned int a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct tagWINDOWSTATION *v5; // rsi
  struct tagTHREADINFO *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx

  EnterSharedCrit(0LL, 1LL);
  v2 = 0LL;
  v5 = CheckClipboardAccess();
  if ( v5 )
  {
    if ( !*(_DWORD *)(W32GetUserSessionState(v4, v3) + 66084) )
    {
      v6 = PtiCurrent(v4);
      v4 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 62968);
      if ( *((_QWORD *)v6 + 61) != v4 )
        LOBYTE(v2) = FindClipFormat(v5, a1, 1u) != 0LL;
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
