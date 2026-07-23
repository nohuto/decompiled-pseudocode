/*
 * XREFs of LdrpAcquireModuleDatatableLock @ 0x1800D0628
 * Callers:
 *     LdrpUnloadNode @ 0x18000D720 (LdrpUnloadNode.c)
 * Callees:
 *     <none>
 */

void LdrpAcquireModuleDatatableLock()
{
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
}
