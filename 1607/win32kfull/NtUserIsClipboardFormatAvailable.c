/*
 * XREFs of NtUserIsClipboardFormatAvailable @ 0x1C00F90E0
 * Callers:
 *     <none>
 * Callees:
 *     FindClipFormat @ 0x1C00F9130 (FindClipFormat.c)
 *     CheckClipboardAccess @ 0x1C00F9194 (CheckClipboardAccess.c)
 */

__int64 __fastcall NtUserIsClipboardFormatAvailable(unsigned int a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx

  EnterSharedCrit(0LL, 1LL);
  v2 = CheckClipboardAccess();
  v5 = 0;
  if ( v2 )
    LOBYTE(v5) = FindClipFormat(v2, a1, 1LL) != 0;
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
