/*
 * XREFs of ReadCursorSuppressionConfig @ 0x1400F7E68
 * Callers:
 *     _anonymous_namespace_::RenderCursor @ 0x1400F8A80 (_anonymous_namespace_--RenderCursor.c)
 *     TransitionCursorSuppressionState @ 0x1400F8F50 (TransitionCursorSuppressionState.c)
 *     _anonymous_namespace_::xxxSwitchCursors @ 0x1400F9310 (_anonymous_namespace_--xxxSwitchCursors.c)
 *     NtUserEnableMouseInputForCursorSuppression @ 0x140224070 (NtUserEnableMouseInputForCursorSuppression.c)
 *     PowerOnGdi @ 0x140248020 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x140253020 (PowerOffGdi.c)
 * Callees:
 *     IsCurrentSessionServiceSession @ 0x1400FC60C (IsCurrentSessionServiceSession.c)
 */

__int64 ReadCursorSuppressionConfig()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  v4 = 0;
  if ( !(unsigned int)IsCurrentSessionServiceSession() && !*(_WORD *)(W32GetUserSessionState(v2, v1) + 68744) )
    FastGetProfileDword(0LL, 49LL, L"EnableCursorSuppression", 0LL, &v4);
  LOBYTE(v0) = v4 != 0;
  return v0;
}
