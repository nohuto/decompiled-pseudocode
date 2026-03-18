/*
 * XREFs of ExfAcquirePushLockExclusive @ 0x1400F30D4
 * Callers:
 *     ExCovReadjustUnloadedModuleEntry @ 0x1404531A0 (ExCovReadjustUnloadedModuleEntry.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1406F880C (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x1406F8EF0 (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x1406F9818 (ExpCovResetInformation.c)
 *     VerifierExfAcquirePushLockExclusive @ 0x140751C98 (VerifierExfAcquirePushLockExclusive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExfAcquirePushLockExclusive(__int64 a1)
{
  return ExfAcquirePushLockExclusiveEx(a1, 0LL, a1);
}
