/*
 * XREFs of ?UnqueuePTPMouseEvent@@YAHPEAUtagPTPMOUSEEVENT@@@Z @ 0x1C01F2874
 * Callers:
 *     xxxOnPTPMouseOperation @ 0x1C01F65C0 (xxxOnPTPMouseOperation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnqueuePTPMouseEvent(struct tagPTPMOUSEEVENT *a1)
{
  char v2; // dl
  unsigned int v3; // ebx
  __int64 v4; // xmm1_8

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresPTPEventQueue);
  v2 = gdwPTPMouseEvents;
  v3 = 0;
  if ( gdwPTPMouseEvents )
  {
    v3 = 1;
    --gdwPTPMouseEvents;
    v4 = *((_QWORD *)&gPTPMouseEventQueue + 3 * (((unsigned __int8)gdwPTPQueueHead - v2 + 1) & 0x1F) + 2);
    *(_OWORD *)a1 = *(_OWORD *)((char *)&gPTPMouseEventQueue + 24 * (((unsigned __int8)gdwPTPQueueHead - v2 + 1) & 0x1F));
    *((_QWORD *)a1 + 2) = v4;
  }
  ExReleaseResourceAndLeaveCriticalRegion(gpresPTPEventQueue);
  return v3;
}
