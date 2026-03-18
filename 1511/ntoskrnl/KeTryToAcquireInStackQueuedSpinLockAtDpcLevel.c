/*
 * XREFs of KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400D5698
 * Callers:
 *     MiTryToAcquireExpansionLockAtDpc @ 0x1400D5674 (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1401DDD84 (MiDbgTranslatePhysicalAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeTryToAcquireInStackQueuedSpinLockAtDpcLevel(__int64 a1, _QWORD *a2)
{
  *a2 = 0LL;
  a2[1] = a1;
  return KxTryToAcquireQueuedSpinLock(a2, a1);
}
