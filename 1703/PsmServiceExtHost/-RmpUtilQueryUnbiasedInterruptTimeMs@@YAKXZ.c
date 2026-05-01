/*
 * XREFs of ?RmpUtilQueryUnbiasedInterruptTimeMs@@YAKXZ @ 0x18001B0E0
 * Callers:
 *     ?LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x18000F5E8 (-LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z @ 0x18000F76C (-CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010460 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 RmpUtilQueryUnbiasedInterruptTimeMs(void)
{
  __int64 v0; // rdx
  unsigned __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  RtlQueryUnbiasedInterruptTime(&v2);
  v0 = (v2 / 0xA * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  return (v0 + ((v2 / 0xA - v0) >> 1)) >> 9;
}
