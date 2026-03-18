/*
 * XREFs of TransitionCursorSuppressionState @ 0x1C0093FF0
 * Callers:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C000D308 (-HandlePointerCursorSideOp@@YAXXZ.c)
 *     RawInputThread @ 0x1C007B620 (RawInputThread.c)
 *     NtUserEnableMouseInputForCursorSuppression @ 0x1C012F0D0 (NtUserEnableMouseInputForCursorSuppression.c)
 *     xxxRemoteReconnect @ 0x1C01537F0 (xxxRemoteReconnect.c)
 *     PowerOnGdi @ 0x1C0154B90 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1C0155010 (PowerOffGdi.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z @ 0x1C01D19A4 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z.c)
 *     ?xxxRenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01D335C (-xxxRenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?xxxSwitchCursors@@YAXH@Z @ 0x1C01D374C (-xxxSwitchCursors@@YAXH@Z.c)
 * Callees:
 *     SetPointerMetaVisibility @ 0x1C009409C (SetPointerMetaVisibility.c)
 *     ReadCursorSuppressionConfig @ 0x1C0134940 (ReadCursorSuppressionConfig.c)
 */

LONG __fastcall TransitionCursorSuppressionState(int a1, int a2)
{
  LONG result; // eax
  __int64 HDEV; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  result = gCursorSuppressionState;
  if ( gCursorSuppressionState > 0 )
  {
    if ( gCursorSuppressionState <= 4 )
    {
      if ( a1 != 1 )
      {
        if ( a1 != 2 )
        {
          if ( a1 != 3 )
          {
            if ( a1 != 8 )
              return result;
            if ( !a2 )
            {
              HDEV = UserGetHDEV();
              result = SetPointerMetaVisibility(HDEV, 1LL);
LABEL_9:
              gCursorSuppressionState = 8;
              return result;
            }
            gCursorSuppressionState = 4;
LABEL_33:
            _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 2u);
            return KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
          }
LABEL_31:
          gCursorSuppressionState = 3;
          return result;
        }
LABEL_11:
        gCursorSuppressionState = 2;
        return result;
      }
LABEL_17:
      gCursorSuppressionState = 1;
      return result;
    }
    if ( gCursorSuppressionState <= 6 || gCursorSuppressionState == 8 )
    {
      switch ( a1 )
      {
        case 8:
          goto LABEL_9;
        case 2:
          if ( a2 )
          {
            gCursorSuppressionState = 6;
            goto LABEL_33;
          }
          v5 = UserGetHDEV();
          result = SetPointerMetaVisibility(v5, 0LL);
          goto LABEL_11;
        case 1:
          if ( a2 )
          {
            gCursorSuppressionState = 5;
            goto LABEL_33;
          }
          v6 = UserGetHDEV();
          result = SetPointerMetaVisibility(v6, 0LL);
          goto LABEL_17;
        case 3:
          if ( a2 )
          {
            gCursorSuppressionState = 7;
            goto LABEL_33;
          }
          v7 = UserGetHDEV();
          result = SetPointerMetaVisibility(v7, 0LL);
          goto LABEL_31;
      }
    }
    else if ( gCursorSuppressionState == 9 )
    {
      result = ReadCursorSuppressionConfig();
      gCursorSuppressionState = result;
      if ( result )
      {
        v4 = UserGetHDEV();
        return SetPointerMetaVisibility(v4, 0LL);
      }
    }
  }
  return result;
}
