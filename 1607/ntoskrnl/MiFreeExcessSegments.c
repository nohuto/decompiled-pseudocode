/*
 * XREFs of MiFreeExcessSegments @ 0x1400A3910
 * Callers:
 *     ExpAllocateBigPool @ 0x140011AD0 (ExpAllocateBigPool.c)
 *     MiScanLeafNonPagedPool @ 0x14001ADE0 (MiScanLeafNonPagedPool.c)
 *     MiChargeCommit @ 0x14002B650 (MiChargeCommit.c)
 *     MmResourcesAvailable @ 0x14007E280 (MmResourcesAvailable.c)
 *     MiAllocatePoolPages @ 0x14009DBEC (MiAllocatePoolPages.c)
 *     MiExpandPagedPool @ 0x1400A296C (MiExpandPagedPool.c)
 *     MiAllocatePagedPoolPages @ 0x1400DE970 (MiAllocatePagedPoolPages.c)
 *     MiExpandNonPagedPool @ 0x140101824 (MiExpandNonPagedPool.c)
 * Callees:
 *     MiGetNextPartition @ 0x140001C94 (MiGetNextPartition.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     MiShouldTrimUnusedSegments @ 0x1401DF418 (MiShouldTrimUnusedSegments.c)
 */

unsigned __int64 MiFreeExcessSegments()
{
  unsigned __int64 result; // rax
  _QWORD *i; // rcx
  _QWORD *v2; // rbx

  result = 9 * (qword_1403251E8 / 0xAuLL);
  if ( qword_140325168 >= result )
  {
    result = MiShouldTrimUnusedSegments(qword_1403251E8, qword_1403251E8 / 0xAuLL);
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
