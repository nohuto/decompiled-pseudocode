/*
 * XREFs of NtUserEnableMouseInputForCursorSuppression @ 0x1C0099D90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     TransitionCursorSuppressionState @ 0x1C00987A0 (TransitionCursorSuppressionState.c)
 */

__int64 __fastcall NtUserEnableMouseInputForCursorSuppression(int a1)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v7; // ecx
  __int64 v8; // rax

  EnterCrit(0LL, 1LL);
  v3 = 0;
  if ( (a1 != 0) != a1 )
  {
    UserSetLastError(87);
    goto LABEL_6;
  }
  v4 = (unsigned int)(gCursorSuppressionState - 1);
  if ( gCursorSuppressionState == 1 )
    goto LABEL_12;
  v4 = (unsigned int)(gCursorSuppressionState - 2);
  if ( gCursorSuppressionState == 2 )
    goto LABEL_4;
  v4 = (unsigned int)(gCursorSuppressionState - 4);
  if ( gCursorSuppressionState == 4 )
    goto LABEL_4;
  v4 = (unsigned int)(gCursorSuppressionState - 5);
  if ( gCursorSuppressionState == 5 )
  {
LABEL_12:
    if ( !a1 )
      goto LABEL_5;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    v7 = 2;
    *(_DWORD *)(CurrentProcessWin32Process + 776) &= ~0x100000u;
LABEL_14:
    TransitionCursorSuppressionState(v7, 1);
    goto LABEL_5;
  }
  v4 = (unsigned int)(gCursorSuppressionState - 6);
  if ( gCursorSuppressionState != 6 && gCursorSuppressionState != 8 )
    goto LABEL_5;
LABEL_4:
  if ( !a1 )
  {
    v8 = PsGetCurrentProcessWin32Process(v4);
    v7 = 1;
    *(_DWORD *)(v8 + 776) |= 0x100000u;
    goto LABEL_14;
  }
LABEL_5:
  v3 = 1;
LABEL_6:
  UserSessionSwitchLeaveCrit(v4, v2);
  return v3;
}
