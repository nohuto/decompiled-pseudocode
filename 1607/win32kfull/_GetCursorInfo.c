/*
 * XREFs of _GetCursorInfo @ 0x1C00982F8
 * Callers:
 *     NtUserGetCursorInfo @ 0x1C0098170 (NtUserGetCursorInfo.c)
 *     NtUserInternalClipCursor @ 0x1C011E790 (NtUserInternalClipCursor.c)
 * Callees:
 *     ?LogicalCursorPosFromDpiAwarenessContext@@YA?AUtagPOINT@@K@Z @ 0x1C005C35C (-LogicalCursorPosFromDpiAwarenessContext@@YA-AUtagPOINT@@K@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UsingPenCursors @ 0x1C009837C (UsingPenCursors.c)
 */

__int64 __fastcall GetCursorInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char CurrentThreadDpiAwarenessContext; // al
  struct tagPOINT v6; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3, a4);
  v6 = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
  v7 = 0LL;
  *(struct tagPOINT *)(a1 + 16) = v6;
  v8 = gCursorSuppressionState;
  *(_DWORD *)(a1 + 4) = 0;
  if ( v8 > 0 && v8 < 7 && v8 != 4 || (unsigned int)UsingPenCursors() && Feedback::gfInRange == (_DWORD)v7 )
  {
    *(_DWORD *)(a1 + 4) = 2;
  }
  else if ( gpcurPhysCurrent != v7 )
  {
    *(_DWORD *)(a1 + 4) = 1;
  }
  result = gpcurLogCurrent;
  if ( gpcurLogCurrent )
    v7 = *gpcurLogCurrent;
  *(_QWORD *)(a1 + 8) = v7;
  return result;
}
