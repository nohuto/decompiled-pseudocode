/*
 * XREFs of IopVerifierExAllocatePool @ 0x14007B610
 * Callers:
 *     IopSetLockOperationProcess @ 0x1400784D8 (IopSetLockOperationProcess.c)
 *     IopGetSetSpecificExtension @ 0x14007AE90 (IopGetSetSpecificExtension.c)
 *     IopAllocateFileObjectExtension @ 0x1400EB590 (IopAllocateFileObjectExtension.c)
 *     NtUnlockFile @ 0x1404C9C58 (NtUnlockFile.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall IopVerifierExAllocatePool(__int64 a1, SIZE_T a2)
{
  if ( ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithTagPriority(
             NonPagedPoolNx,
             a2,
             0x20206F49u,
             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    return ExAllocatePoolWithTag(NonPagedPoolNx, a2, 0x20206F49u);
}
