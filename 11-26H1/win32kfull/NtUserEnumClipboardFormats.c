/*
 * XREFs of NtUserEnumClipboardFormats @ 0x14020C9A0
 * Callers:
 *     <none>
 * Callees:
 *     _EnumClipboardFormats @ 0x14020C9DC (_EnumClipboardFormats.c)
 */

__int64 __fastcall NtUserEnumClipboardFormats(unsigned int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = EnumClipboardFormats(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
