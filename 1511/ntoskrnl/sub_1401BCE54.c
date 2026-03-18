/*
 * XREFs of sub_1401BCE54 @ 0x1401BCE54
 * Callers:
 *     NtQueryEaFile @ 0x14048E36C (NtQueryEaFile.c)
 *     NtSetEaFile @ 0x1405FB5AC (NtSetEaFile.c)
 * Callees:
 *     <none>
 */

PVOID sub_1401BCE54()
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
