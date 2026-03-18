/*
 * XREFs of LogicalQmsgCursorPos @ 0x1C0053D48
 * Callers:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     PostInputMessage @ 0x1C0064D5C (PostInputMessage.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall LogicalQmsgCursorPos(__int64 a1, __int64 a2)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rax

  if ( a1 )
  {
    ThreadWin32Thread = *(_QWORD *)(a1 + 16);
    return LogicalCursorPos(ThreadWin32Thread);
  }
  if ( !a2 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    return LogicalCursorPos(ThreadWin32Thread);
  }
  v4 = *(_QWORD *)(a2 + 80);
  if ( v4 )
    return LogicalCursorPos(*(_QWORD *)(v4 + 16));
  else
    return LogicalCursorPos(*(_QWORD *)(a2 + 56));
}
