/*
 * XREFs of UnqueueMouseEvent @ 0x1C004B444
 * Callers:
 *     ProcessQueuedMouseEvents @ 0x1C004B12C (ProcessQueuedMouseEvents.c)
 * Callees:
 *     ?CancelDitMouseFlushTimer@@YAXXZ @ 0x1C004B4FC (-CancelDitMouseFlushTimer@@YAXXZ.c)
 *     MonotonicTick @ 0x1C004B514 (MonotonicTick.c)
 */

__int64 __fastcall UnqueueMouseEvent(_OWORD *a1)
{
  __int64 v2; // rax
  int v3; // edx
  unsigned int v4; // ebx
  __int64 v5; // rcx

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresMouseEventQueue);
  v2 = MonotonicTick();
  v3 = gdwMouseEvents;
  v4 = 0;
  gqwMouseUnqueueMouseEventTime = v2;
  if ( !gdwMouseEvents )
    goto LABEL_3;
  v4 = 1;
  v5 = 24LL * (((_BYTE)gdwMouseQueueHead - (_BYTE)gdwMouseEvents-- + 1) & 0xF);
  *a1 = *(_OWORD *)&gMouseEventQueue[v5];
  a1[1] = *(_OWORD *)&gMouseEventQueue[v5 + 4];
  a1[2] = *(_OWORD *)&gMouseEventQueue[v5 + 8];
  a1[3] = *(_OWORD *)&gMouseEventQueue[v5 + 12];
  a1[4] = *(_OWORD *)&gMouseEventQueue[v5 + 16];
  a1[5] = *(_OWORD *)&gMouseEventQueue[v5 + 20];
  if ( v3 == 1 )
LABEL_3:
    CancelDitMouseFlushTimer();
  ExReleaseResourceAndLeaveCriticalRegion(gpresMouseEventQueue);
  return v4;
}
