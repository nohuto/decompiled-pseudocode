/*
 * XREFs of LdrpCMFAddToStanbyQueue @ 0x1800DC028
 * Callers:
 *     LdrpUnmapCMFSegmentIfUnreferenced @ 0x1800DCA38 (LdrpUnmapCMFSegmentIfUnreferenced.c)
 * Callees:
 *     LdrpCMFRemoveFromStandbyQueue @ 0x18008A234 (LdrpCMFRemoveFromStandbyQueue.c)
 *     LdrpUnmapCMFSegment @ 0x1800DCA08 (LdrpUnmapCMFSegment.c)
 */

char __fastcall LdrpCMFAddToStanbyQueue(int a1)
{
  unsigned __int16 v1; // ax
  char v3; // di
  unsigned __int16 v4; // bx
  int v5; // r9d
  int v6; // eax
  __int64 v7; // rcx

  v1 = CMFQueueRear;
  v3 = 1;
  if ( CMFQueueRear == 5 )
  {
    v4 = 0;
    if ( (unsigned __int8)LdrpUnmapCMFSegment((unsigned int)CMFStandbyQueue[0]) )
    {
      v5 = (unsigned __int16)CMFQueueRear - 1;
      if ( v5 > 0 )
      {
        v6 = 0;
        do
        {
          v7 = v4++;
          CMFStandbyQueue[v7] = CMFStandbyQueue[v6 + 1];
          v6 = v4;
        }
        while ( v4 < v5 );
      }
      CMFStandbyQueue[v5] = a1;
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
