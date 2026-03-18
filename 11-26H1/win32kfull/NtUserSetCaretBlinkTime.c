/*
 * XREFs of NtUserSetCaretBlinkTime @ 0x140203860
 * Callers:
 *     <none>
 * Callees:
 *     _SetCaretBlinkTime @ 0x1402038A0 (_SetCaretBlinkTime.c)
 */

__int64 __fastcall NtUserSetCaretBlinkTime(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = (int)SetCaretBlinkTime(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
