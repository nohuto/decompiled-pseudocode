/*
 * XREFs of SetPointerMetaVisibility @ 0x1400F7ED0
 * Callers:
 *     _anonymous_namespace_::RenderCursor @ 0x1400F8A80 (_anonymous_namespace_--RenderCursor.c)
 *     TransitionCursorSuppressionState @ 0x1400F8F50 (TransitionCursorSuppressionState.c)
 *     _anonymous_namespace_::xxxSwitchCursors @ 0x1400F9310 (_anonymous_namespace_--xxxSwitchCursors.c)
 *     NtUserEnableMouseInputForCursorSuppression @ 0x140224070 (NtUserEnableMouseInputForCursorSuppression.c)
 *     PowerOnGdi @ 0x140248020 (PowerOnGdi.c)
 *     _anonymous_namespace_::xxxRestoreMouseCursors @ 0x1402504BC (_anonymous_namespace_--xxxRestoreMouseCursors.c)
 *     PowerOffGdi @ 0x140253020 (PowerOffGdi.c)
 * Callees:
 *     zzzEnableDwmPointerSupport @ 0x1400F8118 (zzzEnableDwmPointerSupport.c)
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1400FA110 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 */

bool __fastcall SetPointerMetaVisibility(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax

  v1 = a1;
  zzzEnableDwmPointerSupport(a1, 1LL);
  UserSessionState = W32GetUserSessionState(v3, v2);
  return CursorApiRouter::HidePointer(*(CursorApiRouter **)(UserSessionState + 36336), v1 == 0);
}
