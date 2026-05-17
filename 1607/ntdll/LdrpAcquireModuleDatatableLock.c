/*
 * XREFs of LdrpAcquireModuleDatatableLock @ 0x1800D0568
 * Callers:
 *     LdrpUnloadNode @ 0x18000D730 (LdrpUnloadNode.c)
 * Callees:
 *     <none>
 */

void __fastcall LdrpAcquireModuleDatatableLock(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
}
