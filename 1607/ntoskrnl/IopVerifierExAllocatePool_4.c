/*
 * XREFs of IopVerifierExAllocatePool_4 @ 0x1401CC250
 * Callers:
 *     IopEnumerateEnvironmentVariablesTrEE @ 0x14062857C (IopEnumerateEnvironmentVariablesTrEE.c)
 *     IopGetEnvironmentVariableSysEnv @ 0x14062899C (IopGetEnvironmentVariableSysEnv.c)
 *     IopGetEnvironmentVariableTrEE @ 0x140628AE8 (IopGetEnvironmentVariableTrEE.c)
 *     IopSetEnvironmentVariableSysEnv @ 0x1406290A8 (IopSetEnvironmentVariableSysEnv.c)
 *     IopSetEnvironmentVariableTrEE @ 0x1406291AC (IopSetEnvironmentVariableTrEE.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall IopVerifierExAllocatePool_4(__int64 a1, SIZE_T a2)
{
  if ( ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithTagPriority(
             PagedPool,
             a2,
             0x20206F49u,
             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    return ExAllocatePoolWithTag(PagedPool, a2, 0x20206F49u);
}
