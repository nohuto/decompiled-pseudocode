/*
 * XREFs of NtUserGetClipboardViewer @ 0x1402268F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1400573B0 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 NtUserGetClipboardViewer()
{
  __int64 v0; // rcx
  struct tagWINDOWSTATION *v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 *v4; // rax

  EnterSharedCrit(0LL, 1LL);
  v1 = CheckClipboardAccess(v0);
  v3 = 0LL;
  if ( v1 )
  {
    v4 = (__int64 *)*((_QWORD *)v1 + 9);
    if ( v4 )
      v3 = *v4;
  }
  UserSessionSwitchLeaveCrit(v2);
  return v3;
}
