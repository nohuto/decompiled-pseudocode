/*
 * XREFs of TransitionCursorSuppressionState @ 0x1C00987A0
 * Callers:
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@K0HH@Z @ 0x1C0087E90 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@K0HH@Z.c)
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C0098A7C (-HandlePointerCursorSideOp@@YAXXZ.c)
 *     NtUserEnableMouseInputForCursorSuppression @ 0x1C0099D90 (NtUserEnableMouseInputForCursorSuppression.c)
 *     RawInputThread @ 0x1C009B5A0 (RawInputThread.c)
 *     xxxRemoteReconnect @ 0x1C014DAC0 (xxxRemoteReconnect.c)
 *     PowerOnGdi @ 0x1C014F210 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1C014F490 (PowerOffGdi.c)
 *     ?xxxRenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DB920 (-xxxRenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?xxxSwitchCursors@@YAXH@Z @ 0x1C01DBD4C (-xxxSwitchCursors@@YAXH@Z.c)
 * Callees:
 *     SetPointerMetaVisibility @ 0x1C0098764 (SetPointerMetaVisibility.c)
 *     ReadCursorSuppressionConfig @ 0x1C009B53C (ReadCursorSuppressionConfig.c)
 */

LONG __fastcall TransitionCursorSuppressionState(int a1, int a2)
{
  LONG result; // eax
  HDEV HDEV; // rax
  HDEV v4; // rax
  HDEV v5; // rax
  HDEV v6; // rax
  HDEV v7; // rax

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
            if ( a2 )
            {
              gCursorSuppressionState = 4;
LABEL_9:
              _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 2u);
              return KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
            }
            HDEV = (HDEV)UserGetHDEV();
            result = SetPointerMetaVisibility(HDEV, 1u);
LABEL_12:
            gCursorSuppressionState = 8;
            return result;
          }
LABEL_33:
          gCursorSuppressionState = 3;
          return result;
        }
LABEL_13:
        gCursorSuppressionState = 2;
        return result;
      }
LABEL_19:
      gCursorSuppressionState = 1;
      return result;
    }
    if ( gCursorSuppressionState <= 6 || gCursorSuppressionState == 8 )
    {
      switch ( a1 )
      {
        case 8:
          goto LABEL_12;
        case 2:
          if ( a2 )
          {
            gCursorSuppressionState = 6;
            goto LABEL_9;
          }
          v5 = (HDEV)UserGetHDEV();
          result = SetPointerMetaVisibility(v5, 0);
          goto LABEL_13;
        case 1:
          if ( a2 )
          {
            gCursorSuppressionState = 5;
            goto LABEL_9;
          }
          v6 = (HDEV)UserGetHDEV();
          result = SetPointerMetaVisibility(v6, 0);
          goto LABEL_19;
        case 3:
          if ( a2 )
          {
            gCursorSuppressionState = 7;
            goto LABEL_9;
          }
          v7 = (HDEV)UserGetHDEV();
          result = SetPointerMetaVisibility(v7, 0);
          goto LABEL_33;
      }
    }
    else if ( gCursorSuppressionState == 9 )
    {
      result = ReadCursorSuppressionConfig();
      gCursorSuppressionState = result;
      if ( result )
      {
        v4 = (HDEV)UserGetHDEV();
        return SetPointerMetaVisibility(v4, 0);
      }
    }
  }
  return result;
}
