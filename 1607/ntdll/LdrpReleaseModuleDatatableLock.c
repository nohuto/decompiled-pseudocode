/*
 * XREFs of LdrpReleaseModuleDatatableLock @ 0x1800D0734
 * Callers:
 *     LdrpUnloadNode @ 0x18000D720 (LdrpUnloadNode.c)
 * Callees:
 *     <none>
 */

void LdrpReleaseModuleDatatableLock()
{
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
