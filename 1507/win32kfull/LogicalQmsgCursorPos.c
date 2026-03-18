/*
 * XREFs of LogicalQmsgCursorPos @ 0x1C008E59C
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     PostInputMessage @ 0x1C008C718 (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall LogicalQmsgCursorPos(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 ThreadWin32Thread; // rax

  if ( a1 )
    return LogicalCursorPos(*(_QWORD *)(a1 + 16));
  if ( a2 )
  {
    v2 = *(_QWORD *)(a2 + 80);
    if ( !v2 )
      return LogicalCursorPos(*(_QWORD *)(a2 + 56));
    ThreadWin32Thread = *(_QWORD *)(v2 + 16);
  }
  else
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  }
  return LogicalCursorPos(ThreadWin32Thread);
}
