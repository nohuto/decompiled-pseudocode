/*
 * XREFs of MiRemoveUnusedSegments @ 0x140167F4C
 * Callers:
 *     MiDereferenceSegmentThread @ 0x140167DD0 (MiDereferenceSegmentThread.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     MiFreeExcessSegments @ 0x140129184 (MiFreeExcessSegments.c)
 *     MiProcessDereferenceList @ 0x140145AB0 (MiProcessDereferenceList.c)
 *     CcUnmapInactiveViews @ 0x140167FCC (CcUnmapInactiveViews.c)
 *     MiDeleteCachedSegment @ 0x140210914 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140210AF8 (MiDeleteCachedSubsection.c)
 */

__int64 __fastcall MiRemoveUnusedSegments(__int64 a1)
{
  unsigned int v2; // edi
  __int64 result; // rax

  v2 = 0;
  while ( 1 )
  {
    result = MiFreeExcessSegments();
    if ( !(_DWORD)result && !dword_14034E7B0 )
      break;
    if ( dword_14034E7B0 )
      --dword_14034E7B0;
    if ( (++v2 & 0x3F) == 0 )
    {
      MiProcessDereferenceList(a1);
      if ( v2 >= 0x80 )
        CcUnmapInactiveViews(50LL, 0LL, 0LL);
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    }
    if ( *(_QWORD *)(a1 + 1360) == a1 + 1360 )
    {
      if ( *(_QWORD *)(a1 + 1376) == a1 + 1376 )
      {
        dword_14034E7B0 = 0;
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
