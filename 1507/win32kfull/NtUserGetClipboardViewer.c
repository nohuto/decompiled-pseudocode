/*
 * XREFs of NtUserGetClipboardViewer @ 0x1C021A1A0
 * Callers:
 *     <none>
 * Callees:
 *     CheckClipboardAccess @ 0x1C00D6580 (CheckClipboardAccess.c)
 */

__int64 NtUserGetClipboardViewer()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 *v4; // rax

  EnterSharedCrit(1LL);
  v0 = CheckClipboardAccess();
  v3 = 0LL;
  if ( v0 )
  {
    v4 = *(__int64 **)(v0 + 72);
    if ( v4 )
      v3 = *v4;
  }
  UserSessionSwitchLeaveCrit(v2, v1);
  return v3;
}
