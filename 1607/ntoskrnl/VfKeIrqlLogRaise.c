/*
 * XREFs of VfKeIrqlLogRaise @ 0x140712D1C
 * Callers:
 *     ViKeRaiseIrqlSanityChecks @ 0x1407130E8 (ViKeRaiseIrqlSanityChecks.c)
 *     ViExAcquireFastMutexCommon @ 0x14071A5CC (ViExAcquireFastMutexCommon.c)
 *     ViExTryToAcquireFastMutexCommon @ 0x14071A6E8 (ViExTryToAcquireFastMutexCommon.c)
 * Callees:
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140712D40 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x140712F64 (ViKeIrqlLogCommon.c)
 */

__int64 VfKeIrqlLogRaise()
{
  __int64 v0; // rbx

  v0 = VfKeIrqlTransitionReserveLogEntry();
  ViKeIrqlLogCommon(v0, 2LL);
  return v0;
}
