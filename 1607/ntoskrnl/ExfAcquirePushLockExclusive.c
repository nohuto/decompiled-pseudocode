/*
 * XREFs of ExfAcquirePushLockExclusive @ 0x1400C8064
 * Callers:
 *     ExCovReadjustUnloadedModuleEntry @ 0x1405474F4 (ExCovReadjustUnloadedModuleEntry.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1406B6B08 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x1406B71B8 (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x1406B7A34 (ExpCovResetInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExfAcquirePushLockExclusive(__int64 a1)
{
  return ExfAcquirePushLockExclusiveEx(a1, 0LL, a1);
}
