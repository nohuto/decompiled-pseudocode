/*
 * XREFs of LogicalCursorPos @ 0x1C0056358
 * Callers:
 *     SetWakeBit @ 0x1C00535C0 (SetWakeBit.c)
 *     LogicalQmsgCursorPos @ 0x1C0053D48 (LogicalQmsgCursorPos.c)
 *     xxxDoPaint @ 0x1C0055FF8 (xxxDoPaint.c)
 *     _PostThreadMessageEx @ 0x1C0065470 (_PostThreadMessageEx.c)
 *     zzzSetFMouseMovedWorker @ 0x1C0065D9C (zzzSetFMouseMovedWorker.c)
 *     xxxGetCursorPos @ 0x1C008AC40 (xxxGetCursorPos.c)
 *     _GetCursorInfo @ 0x1C008ADC8 (_GetCursorInfo.c)
 *     xxxSystemTimerProc @ 0x1C00C6990 (xxxSystemTimerProc.c)
 *     StoreMessage @ 0x1C00FF530 (StoreMessage.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142CB0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01E2DC0 (zzzActiveCursorTracking.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E7198 (xxxCallJournalPlaybackHook.c)
 *     xxxDrawDragRectEx @ 0x1C020BDC8 (xxxDrawDragRectEx.c)
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
    v2 = *(_QWORD *)(a1 + 408);
    if ( v2 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v2 + 8) + 244LL) & 1) != 0 )
      {
        v3 = *(_DWORD *)(*(_QWORD *)(a1 + 376) + 776LL);
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
