/*
 * XREFs of MiFreePartitionPageRun @ 0x1401F184C
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1401F05D0 (MiActOnPartitionNodePages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1401F0E04 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiFreeMdlPageRun @ 0x1400225B4 (MiFreeMdlPageRun.c)
 *     MiReleaseNonPagedResources @ 0x14013F08C (MiReleaseNonPagedResources.c)
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
      _InterlockedExchangeAdd64(&qword_140327928, -(__int64)v6);
  }
  return result;
}
