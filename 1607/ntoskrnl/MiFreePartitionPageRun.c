/*
 * XREFs of MiFreePartitionPageRun @ 0x1401F1A20
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1401F07A4 (MiActOnPartitionNodePages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1401F0FD8 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiFreeMdlPageRun @ 0x140022A34 (MiFreeMdlPageRun.c)
 *     MiReleaseNonPagedResources @ 0x14013EB1C (MiReleaseNonPagedResources.c)
 */

int *__fastcall MiFreePartitionPageRun(int *a1, ULONG_PTR a2, unsigned __int64 a3, int a4)
{
  int *result; // rax
  int *v6; // rbx

  result = (int *)MiFreeMdlPageRun(a2, a3, a4 == 1);
  v6 = result;
  if ( result )
  {
    MiReleaseNonPagedResources((__int64)a1, (unsigned __int64)result);
    result = MiSystemPartition;
    if ( a1 == MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_1403278E8, -(__int64)v6);
  }
  return result;
}
