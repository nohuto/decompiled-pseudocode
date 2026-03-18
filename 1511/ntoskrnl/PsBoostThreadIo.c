/*
 * XREFs of PsBoostThreadIo @ 0x140040CF0
 * Callers:
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     CmpLockRegistryExclusive @ 0x1403DE874 (CmpLockRegistryExclusive.c)
 *     CmEnumerateKey @ 0x1403FDED0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1403FF980 (CmQueryKey.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x1404036E0 (CmpDeleteKeyObject.c)
 *     CmQueryValueKey @ 0x140405E20 (CmQueryValueKey.c)
 *     CmpBuildHashStackAndLookupCache @ 0x140408290 (CmpBuildHashStackAndLookupCache.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpReleaseWriteQueue @ 0x1404BDCDC (CmpReleaseWriteQueue.c)
 *     CmpBoostActiveHiveWriter @ 0x1404C5F60 (CmpBoostActiveHiveWriter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsBoostThreadIo(__int64 a1, __int64 a2)
{
  return PsBoostThreadIoEx(a1, a2, 0LL, 0LL);
}
