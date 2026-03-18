/*
 * XREFs of QueryAutoRotationState @ 0x1400F9850
 * Callers:
 *     ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x1400F87BC (-TraceLoggingAutoRotationStateEvent@@YAXXZ.c)
 *     NtUserGetAutoRotationState @ 0x1402B23D0 (NtUserGetAutoRotationState.c)
 * Callees:
 *     ?QueryAutoRotationState@CRotationMgr@@QEAA?AW4tagAR_STATE@@XZ @ 0x1400F9948 (-QueryAutoRotationState@CRotationMgr@@QEAA-AW4tagAR_STATE@@XZ.c)
 */

__int64 __fastcall QueryAutoRotationState(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return CRotationMgr::QueryAutoRotationState(*(_QWORD *)(UserSessionState + 66064));
}
