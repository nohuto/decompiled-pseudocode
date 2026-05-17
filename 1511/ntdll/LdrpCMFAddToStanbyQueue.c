/*
 * XREFs of LdrpCMFAddToStanbyQueue @ 0x1800D3CC8
 * Callers:
 *     LdrpUnmapCMFSegmentIfUnreferenced @ 0x1800D45B8 (LdrpUnmapCMFSegmentIfUnreferenced.c)
 * Callees:
 *     LdrpCMFRemoveFromStandbyQueue @ 0x180086498 (LdrpCMFRemoveFromStandbyQueue.c)
 *     LdrpUnmapCMFSegment @ 0x1800D4588 (LdrpUnmapCMFSegment.c)
 */

char __fastcall LdrpCMFAddToStanbyQueue(int a1)
{
  unsigned __int16 v1; // ax
  char v3; // bl
  unsigned __int16 v4; // di
  unsigned __int16 v5; // r9
  int v6; // r8d
  __int64 v7; // rcx

  v1 = CMFQueueRear;
  v3 = 1;
  if ( CMFQueueRear == 5 )
  {
    v4 = 0;
    if ( (unsigned __int8)LdrpUnmapCMFSegment((unsigned int)CMFStandbyQueue[0]) )
    {
      v5 = CMFQueueRear;
      v6 = (unsigned __int16)CMFQueueRear - 1;
      if ( v6 > 0 )
      {
        do
        {
          v7 = v4++;
          CMFStandbyQueue[v7] = CMFStandbyQueue[v7 + 1];
        }
        while ( v4 < v6 );
      }
      CMFStandbyQueue[v5 - 1] = a1;
    }
    else
    {
      LdrpCMFRemoveFromStandbyQueue(CMFStandbyQueue[0]);
      return 0;
    }
  }
  else
  {
    ++CMFQueueRear;
    CMFStandbyQueue[v1] = a1;
  }
  return v3;
}
