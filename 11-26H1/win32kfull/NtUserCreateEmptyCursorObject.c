/*
 * XREFs of NtUserCreateEmptyCursorObject @ 0x140029580
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z @ 0x1400295C4 (-_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z.c)
 */

HICON __fastcall NtUserCreateEmptyCursorObject(int a1)
{
  HICON EmptyCursorObject; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  EmptyCursorObject = _CreateEmptyCursorObject(a1 != 0);
  UserSessionSwitchLeaveCrit(v3);
  return EmptyCursorObject;
}
