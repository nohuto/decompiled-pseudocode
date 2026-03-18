/*
 * XREFs of NtUserGetClipboardSequenceNumber @ 0x1C00D64A0
 * Callers:
 *     <none>
 * Callees:
 *     CheckClipboardAccess @ 0x1C00D6580 (CheckClipboardAccess.c)
 */

__int64 NtUserGetClipboardSequenceNumber()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned int v3; // ebx

  EnterSharedCrit(1LL);
  v0 = CheckClipboardAccess();
  v3 = 0;
  if ( v0 )
    v3 = *(_DWORD *)(v0 + 112);
  UserSessionSwitchLeaveCrit(v2, v1);
  return v3;
}
