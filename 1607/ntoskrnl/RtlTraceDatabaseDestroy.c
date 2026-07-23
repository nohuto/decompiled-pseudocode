/*
 * XREFs of RtlTraceDatabaseDestroy @ 0x140215B14
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall RtlTraceDatabaseDestroy(PRTL_TRACE_DATABASE Database)
{
  struct _RTL_TRACE_SEGMENT *SegmentList; // rcx
  struct _RTL_TRACE_SEGMENT *NextSegment; // rbx

  SegmentList = Database->SegmentList;
  if ( SegmentList )
  {
    do
    {
      NextSegment = SegmentList->NextSegment;
      if ( !NextSegment )
        SegmentList = (struct _RTL_TRACE_SEGMENT *)((char *)SegmentList - 216);
      ExFreePoolWithTag(SegmentList, Database->Tag);
      SegmentList = NextSegment;
    }
    while ( NextSegment );
  }
  return 1;
}
