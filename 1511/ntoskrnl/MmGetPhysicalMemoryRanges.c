/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x140484B04
 * Callers:
 *     PfpMemoryRangesQuery @ 0x1400C206C (PfpMemoryRangesQuery.c)
 *     IopGetPhysicalMemoryBlock @ 0x140140DD4 (IopGetPhysicalMemoryBlock.c)
 *     IoFillDumpHeader @ 0x1401B7838 (IoFillDumpHeader.c)
 *     VerifierMmGetPhysicalMemoryRanges @ 0x1406C0AC0 (VerifierMmGetPhysicalMemoryRanges.c)
 * Callees:
 *     MiReferencePageRuns @ 0x1400BFDB4 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x1400BFEC0 (MiDereferencePageRuns.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

PPHYSICAL_MEMORY_RANGE MmGetPhysicalMemoryRanges(void)
{
  unsigned int *v0; // rbx
  struct _PHYSICAL_MEMORY_RANGE *PoolWithTag; // rax
  struct _PHYSICAL_MEMORY_RANGE *v2; // rdi
  PHYSICAL_ADDRESS *p_BaseAddress; // rdx
  unsigned int i; // r8d
  __int64 v5; // rcx

  v0 = (unsigned int *)MiReferencePageRuns((__int64)MiSystemPartition, 0);
  PoolWithTag = (struct _PHYSICAL_MEMORY_RANGE *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * (*v0 + 1), 0x68506D4Du);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    p_BaseAddress = &PoolWithTag->BaseAddress;
    for ( i = 0; i < *v0; p_BaseAddress += 2 )
    {
      v5 = i++;
      v5 *= 2LL;
      p_BaseAddress->QuadPart = *(_QWORD *)&v0[2 * v5 + 4] << 12;
      p_BaseAddress[1].QuadPart = *(_QWORD *)&v0[2 * v5 + 6] << 12;
    }
    p_BaseAddress->QuadPart = 0LL;
    p_BaseAddress[1].QuadPart = 0LL;
  }
  MiDereferencePageRuns((__int64)v0);
  return v2;
}
