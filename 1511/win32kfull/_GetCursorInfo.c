/*
 * XREFs of _GetCursorInfo @ 0x1C008ADC8
 * Callers:
 *     NtUserGetCursorInfo @ 0x1C008AB20 (NtUserGetCursorInfo.c)
 *     NtUserInternalClipCursor @ 0x1C008CD10 (NtUserInternalClipCursor.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     LogicalCursorPos @ 0x1C0056358 (LogicalCursorPos.c)
 *     UsingPenCursors @ 0x1C00885A0 (UsingPenCursors.c)
 */

__int64 __fastcall GetCursorInfo(__int64 a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // eax
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v3 = LogicalCursorPos(ThreadWin32Thread);
  v4 = 0LL;
  *(_QWORD *)(a1 + 16) = v3;
  v5 = gCursorSuppressionState;
  *(_DWORD *)(a1 + 4) = 0;
  if ( v5 > 0 && v5 != 4 && v5 < 7 || (unsigned int)UsingPenCursors() && Feedback::gfInRange == (_DWORD)v4 )
  {
    *(_DWORD *)(a1 + 4) = 2;
  }
  else if ( gpcurPhysCurrent != v4 )
  {
    *(_DWORD *)(a1 + 4) = 1;
  }
  result = gpcurLogCurrent;
  if ( gpcurLogCurrent )
    v4 = *gpcurLogCurrent;
  *(_QWORD *)(a1 + 8) = v4;
  return result;
}
