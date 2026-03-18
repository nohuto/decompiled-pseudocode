/*
 * XREFs of NtUserGetClipboardViewer @ 0x1C0212CE0
 * Callers:
 *     <none>
 * Callees:
 *     CheckClipboardAccess @ 0x1C00F9194 (CheckClipboardAccess.c)
 */

__int64 NtUserGetClipboardViewer()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 *v8; // rax

  EnterSharedCrit(0LL, 1LL);
  v4 = CheckClipboardAccess(v1, v0, v2, v3);
  v7 = 0LL;
  if ( v4 )
  {
    v8 = *(__int64 **)(v4 + 72);
    if ( v8 )
      v7 = *v8;
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
