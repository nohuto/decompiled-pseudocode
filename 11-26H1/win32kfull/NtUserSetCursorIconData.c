/*
 * XREFs of NtUserSetCursorIconData @ 0x1402BC750
 * Callers:
 *     <none>
 * Callees:
 *     NtUserSetCursorIconDataEx @ 0x140027F50 (NtUserSetCursorIconDataEx.c)
 */

_BOOL8 __fastcall NtUserSetCursorIconData(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4)
{
  return NtUserSetCursorIconDataEx(a1, a2, a3, a4, 0);
}
