/*
 * XREFs of _anonymous_namespace_::xxxRestoreMouseCursors @ 0x1402504BC
 * Callers:
 *     _anonymous_namespace_::HandlePointerCursorSideOp @ 0x1400F8920 (_anonymous_namespace_--HandlePointerCursorSideOp.c)
 * Callees:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x14000886C (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 *     SetPointerMetaVisibility @ 0x1400F7ED0 (SetPointerMetaVisibility.c)
 */

char anonymous_namespace_::xxxRestoreMouseCursors()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax

  EtwTraceContactVisualizationInfo(3LL);
  v2 = *(_QWORD *)(W32GetUserSessionState(v1, v0) + 36344);
  *(_DWORD *)(v2 + 88) = 0;
  v4 = 0LL;
  v5 = *(_QWORD *)(W32GetUserSessionState(v2, v3) + 36344);
  *(_DWORD *)(v5 + 92) = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(v5, v6) + 63512) )
    v4 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 63512) + 168LL;
  if ( *(_QWORD *)(v4 + 8) )
  {
    xxxUpdateSystemCursorFromRegistry(v4, 0, 4u);
    xxxUpdateSystemCursorFromRegistry(v4, 2, 4u);
    xxxUpdateSystemCursorFromRegistry(v4, 11, 4u);
    xxxUpdateSystemCursorFromRegistry(v4, 12, 4u);
  }
  UserSessionState = W32GetUserSessionState(v8, v7);
  if ( *(_DWORD *)(UserSessionState + 36372) != 1 )
    LOBYTE(UserSessionState) = SetPointerMetaVisibility(1LL);
  return UserSessionState;
}
