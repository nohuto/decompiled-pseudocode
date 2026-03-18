/*
 * XREFs of UnqueueMouseEvent @ 0x1C0085604
 * Callers:
 *     ProcessQueuedMouseEvents @ 0x1C00852E0 (ProcessQueuedMouseEvents.c)
 * Callees:
 *     ?CancelDitMouseFlushTimer@@YAXXZ @ 0x1C00856CC (-CancelDitMouseFlushTimer@@YAXXZ.c)
 *     MonotonicTick @ 0x1C00856E4 (MonotonicTick.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall UnqueueMouseEvent(_OWORD *a1)
{
  unsigned int v2; // eax
  int v3; // edi
  unsigned int v4; // ebx
  _OWORD *v5; // rcx

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresMouseEventQueue);
  v2 = MonotonicTick();
  v3 = gdwMouseEvents;
  v4 = 0;
  gMouseUnqueueMouseEventTime = v2;
  if ( !gdwMouseEvents )
    goto LABEL_3;
  v4 = 1;
  v5 = &gMouseEventQueue[24 * (((_BYTE)gdwMouseQueueHead - (_BYTE)gdwMouseEvents + 1) & 0xF)];
  *a1 = *v5;
  a1[1] = v5[1];
  a1[2] = v5[2];
  a1[3] = v5[3];
  a1[4] = v5[4];
  a1[5] = v5[5];
  memset(v5, 0, 0x60uLL);
  gdwMouseEvents = v3 - 1;
  if ( v3 == 1 )
LABEL_3:
    CancelDitMouseFlushTimer();
  ExReleaseResourceAndLeaveCriticalRegion(gpresMouseEventQueue);
  return v4;
}
