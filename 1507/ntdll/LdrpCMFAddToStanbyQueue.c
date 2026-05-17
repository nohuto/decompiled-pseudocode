/*
 * XREFs of LdrpCMFAddToStanbyQueue @ 0x1800CB2F8
 * Callers:
 *     LdrpUnmapCMFSegmentIfUnreferenced @ 0x1800CBD7C (LdrpUnmapCMFSegmentIfUnreferenced.c)
 * Callees:
 *     LdrpCMFRemoveFromStandbyQueue @ 0x1800CB3A4 (LdrpCMFRemoveFromStandbyQueue.c)
 *     LdrpUnmapCMFSegment @ 0x1800CBD4C (LdrpUnmapCMFSegment.c)
 */

char __fastcall LdrpCMFAddToStanbyQueue(int a1)
{
  unsigned __int16 v1; // ax
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int16 v6; // di
  unsigned __int16 v7; // r9
  int v8; // r8d
  __int64 v9; // rcx

  v1 = CMFQueueRear;
  v3 = 1;
  if ( CMFQueueRear == 5 )
  {
    v6 = 0;
    if ( (unsigned __int8)LdrpUnmapCMFSegment((unsigned int)CMFStandbyQueue[0]) )
    {
      v7 = CMFQueueRear;
      v8 = (unsigned __int16)CMFQueueRear - 1;
      if ( v8 > 0 )
      {
        do
        {
          v9 = v6++;
          CMFStandbyQueue[v9] = CMFStandbyQueue[v9 + 1];
        }
        while ( v6 < v8 );
      }
      CMFStandbyQueue[v7 - 1] = a1;
    }
    else
    {
      LdrpCMFRemoveFromStandbyQueue((unsigned int)CMFStandbyQueue[0], v4, v5);
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
