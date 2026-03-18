/*
 * XREFs of sub_1400CC298 @ 0x1400CC298
 * Callers:
 *     IopAllocateFileObjectExtension @ 0x140074A60 (IopAllocateFileObjectExtension.c)
 *     IopSetLockOperationProcess @ 0x1400CC17C (IopSetLockOperationProcess.c)
 *     IopGetSetSpecificExtension @ 0x1400CC2E8 (IopGetSetSpecificExtension.c)
 *     NtUnlockFile @ 0x1404911DC (NtUnlockFile.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall sub_1400CC298(__int64 a1, SIZE_T a2)
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
