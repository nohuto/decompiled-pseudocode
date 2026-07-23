/*
 * XREFs of WmiReleaseSmbiosLockExclusive @ 0x140534DEC
 * Callers:
 *     PoBroadcastSystemState @ 0x1403CEBF8 (PoBroadcastSystemState.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 */

__int64 WmiReleaseSmbiosLockExclusive()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9

  ExReleaseResourceLite(&WmipSMBiosLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v0, v1, v2);
}
