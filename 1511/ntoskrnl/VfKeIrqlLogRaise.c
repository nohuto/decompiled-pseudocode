/*
 * XREFs of VfKeIrqlLogRaise @ 0x1406C6CCC
 * Callers:
 *     ViKeRaiseIrqlSanityChecks @ 0x1406C70A0 (ViKeRaiseIrqlSanityChecks.c)
 *     ViExAcquireFastMutexCommon @ 0x1406CE514 (ViExAcquireFastMutexCommon.c)
 *     ViExTryToAcquireFastMutexCommon @ 0x1406CE630 (ViExTryToAcquireFastMutexCommon.c)
 * Callees:
 *     VfKeIrqlTransitionReserveLogEntry @ 0x1406C6CF0 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x1406C6F14 (ViKeIrqlLogCommon.c)
 */

__int64 VfKeIrqlLogRaise()
{
  __int64 v0; // rbx

  v0 = VfKeIrqlTransitionReserveLogEntry();
  ViKeIrqlLogCommon(v0, 2LL);
  return v0;
}
