/*
 * XREFs of MiRemoveUnusedSegments @ 0x140138B1C
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1401389A0 (MiDereferenceSegmentThread.c)
 * Callees:
 *     MiFreeExcessSegments @ 0x140015B78 (MiFreeExcessSegments.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     MiProcessDereferenceList @ 0x140113D70 (MiProcessDereferenceList.c)
 *     CcUnmapInactiveViews @ 0x140138B9C (CcUnmapInactiveViews.c)
 *     MiDeleteCachedSegment @ 0x1401D0A74 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1401D0BA0 (MiDeleteCachedSubsection.c)
 */

__int64 __fastcall MiRemoveUnusedSegments(__int64 a1)
{
  unsigned int v2; // edi
  __int64 result; // rax

  v2 = 0;
  while ( 1 )
  {
    result = MiFreeExcessSegments();
    if ( !(_DWORD)result && !dword_1402FE2B0 )
      break;
    if ( dword_1402FE2B0 )
      --dword_1402FE2B0;
    if ( (++v2 & 0x3F) == 0 )
    {
      MiProcessDereferenceList(a1);
      if ( v2 >= 0x80 )
        CcUnmapInactiveViews(50LL, 0LL, 0LL);
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    }
    if ( *(_QWORD *)(a1 + 1408) == a1 + 1408 )
    {
      if ( *(_QWORD *)(a1 + 1424) == a1 + 1424 )
      {
        dword_1402FE2B0 = 0;
        result = CcUnmapInactiveViews(50LL, 0LL, 0LL);
        if ( !(_DWORD)result )
          return result;
      }
      else
      {
        MiDeleteCachedSubsection(a1);
      }
    }
    else
    {
      MiDeleteCachedSegment(a1);
    }
  }
  return result;
}
