/*
 * XREFs of ExfAcquirePushLockExclusive @ 0x1400C5F04
 * Callers:
 *     ExCovReadjustUnloadedModuleEntry @ 0x140547A34 (ExCovReadjustUnloadedModuleEntry.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1406B6C40 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x1406B72F0 (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x1406B7B6C (ExpCovResetInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExfAcquirePushLockExclusive(__int64 a1)
{
  return ExfAcquirePushLockExclusiveEx(a1, 0LL, a1);
}
