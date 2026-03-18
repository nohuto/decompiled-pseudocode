/*
 * XREFs of ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C003A414
 * Callers:
 *     xxxDesktopThread @ 0x1C0142CC0 (xxxDesktopThread.c)
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C003A4A0 (TransitionCursorSuppressionState.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01DB6B8 (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 *     ?xxxSwitchCursors@@YAXH@Z @ 0x1C01DB748 (-xxxSwitchCursors@@YAXH@Z.c)
 *     xxxEnsureMonitorCursors @ 0x1C01E6A14 (xxxEnsureMonitorCursors.c)
 */

void HandlePointerCursorSideOp(void)
{
  signed __int32 v0; // eax
  signed __int32 v1; // ett
  __int16 v2; // bx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  Feedback *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx

  _m_prefetchw(&Feedback::gdwPointerCursorOps);
  v0 = Feedback::gdwPointerCursorOps;
  do
  {
    v1 = v0;
    v0 = _InterlockedCompareExchange((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 0, v0);
  }
  while ( v1 != v0 );
  v2 = v0;
  if ( (v0 & 1) != 0 )
  {
    EnterCrit(1LL);
    Feedback::xxxRestoreMouseCursors(v6);
    UserSessionSwitchLeaveCrit(v8, v7);
  }
  if ( (v2 & 0x300) != 0 )
  {
    EnterCrit(1LL);
    xxxSwitchCursors((v2 & 0x100) != 0);
    Feedback::gfInRange = 0;
    UserSessionSwitchLeaveCrit(v10, v9);
  }
  if ( (v2 & 2) != 0 )
  {
    EnterCrit(1LL);
    if ( gCursorSuppressionState == 4 )
    {
      v4 = 8LL;
    }
    else if ( gCursorSuppressionState == 5 )
    {
      v4 = 1LL;
    }
    else
    {
      v5 = (unsigned int)(gCursorSuppressionState - 6);
      if ( gCursorSuppressionState == 6 )
      {
        v4 = 2LL;
      }
      else
      {
        if ( gCursorSuppressionState != 7 )
          goto LABEL_11;
        v4 = 3LL;
      }
    }
    TransitionCursorSuppressionState(v4, 0LL);
LABEL_11:
    UserSessionSwitchLeaveCrit(v5, v3);
  }
  if ( (v2 & 4) != 0 )
  {
    EnterCrit(1LL);
    xxxEnsureMonitorCursors();
    UserSessionSwitchLeaveCrit(v12, v11);
  }
}
