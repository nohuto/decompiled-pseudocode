/*
 * XREFs of IopVerifierExAllocatePool_2 @ 0x1401CACC8
 * Callers:
 *     NtQueryEaFile @ 0x14046A59C (NtQueryEaFile.c)
 *     NtSetEaFile @ 0x140625290 (NtSetEaFile.c)
 * Callees:
 *     <none>
 */

PVOID IopVerifierExAllocatePool_2()
{
  if ( ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithTagPriority(
             NonPagedPoolNx,
             0x18uLL,
             0x20206F49u,
             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    return ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x20206F49u);
}
