/*
 * XREFs of ?UnqueuePTPMouseEvent@@YAHPEAUtagPTPMOUSEEVENT@@@Z @ 0x1C01E8E5C
 * Callers:
 *     xxxOnPTPMouseOperation @ 0x1C01EDC74 (xxxOnPTPMouseOperation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnqueuePTPMouseEvent(struct tagPTPMOUSEEVENT *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // xmm1_8

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresPTPEventQueue);
  v2 = 0;
  if ( gdwPTPMouseEvents )
  {
    v2 = 1;
    v3 = ((_BYTE)gdwPTPQueueHead - (_BYTE)gdwPTPMouseEvents-- + 1) & 0x3F;
    v4 = *((_QWORD *)&gPTPMouseEventQueue + 3 * v3 + 2);
    *(_OWORD *)a1 = *(_OWORD *)((char *)&gPTPMouseEventQueue + 24 * v3);
    *((_QWORD *)a1 + 2) = v4;
  }
  ExReleaseResourceAndLeaveCriticalRegion(gpresPTPEventQueue);
  return v2;
}
