/*
 * XREFs of LdrpReleaseModuleDatatableLock @ 0x1800D0674
 * Callers:
 *     LdrpUnloadNode @ 0x18000D730 (LdrpUnloadNode.c)
 * Callees:
 *     <none>
 */

signed __int64 LdrpReleaseModuleDatatableLock()
{
  return RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
