/*
 * XREFs of NtUserGetClipboardSequenceNumber @ 0x140203F70
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1400573B0 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 NtUserGetClipboardSequenceNumber()
{
  __int64 v0; // rcx
  struct tagWINDOWSTATION *v1; // rax
  __int64 v2; // rcx
  unsigned int v3; // ebx

  EnterSharedCrit(0LL, 1LL);
  v1 = CheckClipboardAccess(v0);
  v3 = 0;
  if ( v1 )
    v3 = *((_DWORD *)v1 + 28);
  UserSessionSwitchLeaveCrit(v2);
  return v3;
}
