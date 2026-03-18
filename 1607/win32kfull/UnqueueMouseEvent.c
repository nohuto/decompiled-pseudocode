/*
 * XREFs of UnqueueMouseEvent @ 0x1C00E14C8
 * Callers:
 *     ProcessQueuedMouseEvents @ 0x1C00E11B4 (ProcessQueuedMouseEvents.c)
 * Callees:
 *     ?CancelDitMouseFlushTimer@@YAXXZ @ 0x1C00E158C (-CancelDitMouseFlushTimer@@YAXXZ.c)
 *     MonotonicTick @ 0x1C00E15A4 (MonotonicTick.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall UnqueueMouseEvent(_OWORD *a1)
{
  int v2; // edi
  unsigned int v3; // ebx
  _OWORD *v4; // rcx

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresMouseEventQueue);
  MonotonicTick();
  v2 = gdwMouseEvents;
  v3 = 0;
  if ( !gdwMouseEvents )
    goto LABEL_3;
  v3 = 1;
  v4 = &gMouseEventQueue[24 * (((_BYTE)gdwMouseQueueHead - (_BYTE)gdwMouseEvents + 1) & 0xF)];
  *a1 = *v4;
  a1[1] = v4[1];
  a1[2] = v4[2];
  a1[3] = v4[3];
  a1[4] = v4[4];
  a1[5] = v4[5];
  memset(v4, 0, 0x60uLL);
  gdwMouseEvents = v2 - 1;
  if ( v2 == 1 )
LABEL_3:
    CancelDitMouseFlushTimer();
  ExReleaseResourceAndLeaveCriticalRegion(gpresMouseEventQueue);
  return v3;
}
