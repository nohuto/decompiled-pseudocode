/*
 * XREFs of MiFreeExcessSegments @ 0x1400A2238
 * Callers:
 *     ExpAllocateBigPool @ 0x140011650 (ExpAllocateBigPool.c)
 *     MiScanLeafNonPagedPool @ 0x14001A960 (MiScanLeafNonPagedPool.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MmResourcesAvailable @ 0x14007E300 (MmResourcesAvailable.c)
 *     MiAllocatePoolPages @ 0x14009D3EC (MiAllocatePoolPages.c)
 *     MiExpandPagedPool @ 0x1400A1294 (MiExpandPagedPool.c)
 *     MiAllocatePagedPoolPages @ 0x1400DC810 (MiAllocatePagedPoolPages.c)
 *     MiExpandNonPagedPool @ 0x1400FF5A4 (MiExpandNonPagedPool.c)
 * Callees:
 *     MiGetNextPartition @ 0x140001E08 (MiGetNextPartition.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     MiShouldTrimUnusedSegments @ 0x1401DF244 (MiShouldTrimUnusedSegments.c)
 */

unsigned __int64 MiFreeExcessSegments()
{
  unsigned __int64 result; // rax
  _QWORD *i; // rcx
  _QWORD *v2; // rbx

  result = 9 * (qword_140325228 / 0xAuLL);
  if ( qword_1403251A8 >= result )
  {
    result = MiShouldTrimUnusedSegments(qword_140325228, qword_140325228 / 0xAuLL);
    if ( (_DWORD)result )
    {
      for ( i = 0LL; ; i = v2 )
      {
        result = (unsigned __int64)MiGetNextPartition(i);
        v2 = (_QWORD *)result;
        if ( !result )
          break;
        if ( *(_QWORD *)(result + 1536) )
          KeSetEvent((PRKEVENT)(result + 1240), 0, 0);
      }
    }
  }
  return result;
}
