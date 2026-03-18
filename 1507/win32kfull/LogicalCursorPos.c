/*
 * XREFs of LogicalCursorPos @ 0x1C0090A74
 * Callers:
 *     _GetCursorInfo @ 0x1C003DD88 (_GetCursorInfo.c)
 *     xxxSystemTimerProc @ 0x1C00775B0 (xxxSystemTimerProc.c)
 *     zzzSetFMouseMovedWorker @ 0x1C008D08C (zzzSetFMouseMovedWorker.c)
 *     LogicalQmsgCursorPos @ 0x1C008E59C (LogicalQmsgCursorPos.c)
 *     xxxDoPaint @ 0x1C008FE9C (xxxDoPaint.c)
 *     SetWakeBit @ 0x1C00904B0 (SetWakeBit.c)
 *     _PostThreadMessageEx @ 0x1C0090C10 (_PostThreadMessageEx.c)
 *     xxxGetCursorPos @ 0x1C00D8460 (xxxGetCursorPos.c)
 *     StoreMessage @ 0x1C00F901C (StoreMessage.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117CEC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01E2930 (zzzActiveCursorTracking.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E6D28 (xxxCallJournalPlaybackHook.c)
 *     xxxDrawDragRectEx @ 0x1C020B728 (xxxDrawDragRectEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LogicalCursorPos(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  int v3; // edx

  result = *(_QWORD *)(gpsi + 3976LL);
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 416);
    if ( v2 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v2 + 8) + 260LL) & 1) != 0 )
      {
        v3 = *(_DWORD *)(*(_QWORD *)(a1 + 384) + 776LL);
        if ( (v3 & 0x2000) != 0 )
        {
          return *(_QWORD *)(gpsi + 3960LL);
        }
        else if ( (v3 & 0x6000) == 0 )
        {
          return *(_QWORD *)(gpsi + 3952LL);
        }
      }
    }
  }
  return result;
}
