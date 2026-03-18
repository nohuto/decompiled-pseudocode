/*
 * XREFs of ExfAcquirePushLockExclusive @ 0x140020CC8
 * Callers:
 *     ExCovReadjustUnloadedModuleEntry @ 0x1404C64C4 (ExCovReadjustUnloadedModuleEntry.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1406741C8 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x140674878 (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x1406750E8 (ExpCovResetInformation.c)
 *     VerifierExfAcquirePushLockExclusive @ 0x1406CE2C0 (VerifierExfAcquirePushLockExclusive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExfAcquirePushLockExclusive(__int64 a1)
{
  return ExfAcquirePushLockExclusiveEx(a1, 0LL, a1);
}
