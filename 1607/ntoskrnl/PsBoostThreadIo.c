/*
 * XREFs of PsBoostThreadIo @ 0x14002D430
 * Callers:
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     CmpLockRegistryExclusive @ 0x1403FD9E8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x14040476C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404047A0 (CmpLockRegistry.c)
 *     CmEnumerateValueKey @ 0x140437F70 (CmEnumerateValueKey.c)
 *     CmEnumerateKey @ 0x1404390C0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x14043A810 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x14043C400 (CmpDeleteKeyObject.c)
 *     CmQueryValueKey @ 0x14043F420 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmpBoostActiveHiveWriter @ 0x14047D444 (CmpBoostActiveHiveWriter.c)
 *     CmpReleaseWriteQueue @ 0x1404E7034 (CmpReleaseWriteQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsBoostThreadIo(__int64 a1, __int64 a2)
{
  return PsBoostThreadIoEx(a1, a2, 0LL, 0LL);
}
