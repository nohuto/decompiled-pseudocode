/*
 * XREFs of ?LogicalCursorPosFromDpiAwarenessContext@@YA?AUtagPOINT@@K@Z @ 0x1C005C35C
 * Callers:
 *     SetWakeBit @ 0x1C005B6A0 (SetWakeBit.c)
 *     xxxGetCursorPos @ 0x1C005C1B0 (xxxGetCursorPos.c)
 *     LogicalQmsgCursorPos @ 0x1C005C314 (LogicalQmsgCursorPos.c)
 *     _GetCursorInfo @ 0x1C00982F8 (_GetCursorInfo.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01DD958 (xxxCallJournalPlaybackHook.c)
 * Callees:
 *     <none>
 */

struct tagPOINT __fastcall LogicalCursorPosFromDpiAwarenessContext(char a1)
{
  int v1; // ecx

  v1 = a1 & 0xF;
  if ( !v1 )
    return *(struct tagPOINT *)(gpsi + 5344LL);
  if ( v1 == 1 )
    return *(struct tagPOINT *)(gpsi + 5352LL);
  return *(struct tagPOINT *)(gpsi + 5368LL);
}
