/*
 * XREFs of MiRemoveUnusedSegments @ 0x140141D38
 * Callers:
 *     MiProcessDereferenceList @ 0x140122B0C (MiProcessDereferenceList.c)
 *     MiDereferenceSegmentThread @ 0x140141AC4 (MiDereferenceSegmentThread.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     MiProcessDereferenceList @ 0x140122B0C (MiProcessDereferenceList.c)
 *     CcUnmapInactiveViews @ 0x140141F0C (CcUnmapInactiveViews.c)
 *     MiDeleteCachedSegment @ 0x1401DE304 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1401DE3FC (MiDeleteCachedSubsection.c)
 *     MiShouldTrimUnusedSegments @ 0x1401DF244 (MiShouldTrimUnusedSegments.c)
 */

__int64 __fastcall MiRemoveUnusedSegments(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r12d
  unsigned int v3; // r15d
  unsigned __int64 v6; // rdi
  int v7; // ebp
  ULONG_PTR v8; // r8
  unsigned __int64 v10; // r14
  unsigned __int128 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r14

  v2 = 0;
  v3 = 0;
  if ( a2 )
  {
    if ( a2 >= qword_1403251A8 )
      v6 = 0LL;
    else
      v6 = qword_1403251A8 - a2;
    v7 = 0;
  }
  else
  {
    v7 = 32;
    v6 = 0LL;
  }
  v8 = 1000LL * *(_QWORD *)(a1 + 6288) / qword_140324E10;
  if ( !v8 )
    return 0LL;
  v10 = *(_QWORD *)(a1 + 1536);
  v11 = (unsigned __int64)qword_1403265A8 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
  v12 = v8 * (qword_1403265A8 / 0x3E8uLL);
  if ( v12 > v10 )
    v12 = *(_QWORD *)(a1 + 1536);
  if ( !v12 )
    return 0LL;
  v13 = v10 - v12;
  if ( v13 < 0x100000 )
    v13 = 0x100000LL;
  while ( 1 )
  {
    if ( a2 )
    {
      if ( qword_1403251A8 <= v6 )
        return v2;
      goto LABEL_20;
    }
    if ( !v7 )
      return v2;
    v12 = qword_140325228;
    *((_QWORD *)&v11 + 1) = qword_140325228 / 0xAuLL;
    if ( qword_1403251A8 < 9 * (qword_140325228 / 0xAuLL) )
      return v2;
    --v7;
LABEL_20:
    if ( !(unsigned int)MiShouldTrimUnusedSegments(v12, *((_QWORD *)&v11 + 1)) || *(_QWORD *)(a1 + 1536) <= v13 )
      return v2;
    if ( (++v3 & 0x3F) == 0 )
    {
      MiProcessDereferenceList(a1, 0);
      if ( v3 >= 0x80 )
        CcUnmapInactiveViews(50LL, 0LL, 0LL);
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    }
    if ( *(_QWORD *)(a1 + 1544) == a1 + 1544 )
    {
      if ( *(_QWORD *)(a1 + 1560) == a1 + 1560 )
      {
        if ( *(_DWORD *)(a1 + 148) || !(unsigned int)CcUnmapInactiveViews(50LL, 0LL, 0LL) )
          return v2;
      }
      else if ( (int)MiDeleteCachedSubsection(a1) >= 0 )
      {
        goto LABEL_31;
      }
    }
    else if ( (unsigned int)MiDeleteCachedSegment(a1) )
    {
LABEL_31:
      v2 = 1;
    }
  }
}
