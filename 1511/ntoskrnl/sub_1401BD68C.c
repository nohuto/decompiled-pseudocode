/*
 * XREFs of sub_1401BD68C @ 0x1401BD68C
 * Callers:
 *     IopEnumerateEnvironmentVariablesTrEE @ 0x1405FE550 (IopEnumerateEnvironmentVariablesTrEE.c)
 *     IopGetEnvironmentVariableSysEnv @ 0x1405FE968 (IopGetEnvironmentVariableSysEnv.c)
 *     IopGetEnvironmentVariableTrEE @ 0x1405FEAB4 (IopGetEnvironmentVariableTrEE.c)
 *     IopSetEnvironmentVariableSysEnv @ 0x1405FF074 (IopSetEnvironmentVariableSysEnv.c)
 *     IopSetEnvironmentVariableTrEE @ 0x1405FF178 (IopSetEnvironmentVariableTrEE.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall sub_1401BD68C(__int64 a1, SIZE_T a2)
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
