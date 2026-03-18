/*
 * XREFs of VfFreeMemoryNotification @ 0x1406B709C
 * Callers:
 *     MmFreeContiguousMemory @ 0x1400C1D4C (MmFreeContiguousMemory.c)
 *     VfDriverUnloadImage @ 0x1406B2000 (VfDriverUnloadImage.c)
 *     VfFreePoolNotification @ 0x1406C48D4 (VfFreePoolNotification.c)
 * Callees:
 *     VfDeadlockDeleteMemoryRange @ 0x1406CBF70 (VfDeadlockDeleteMemoryRange.c)
 */

__int64 __fastcall VfFreeMemoryNotification(__int64 a1, __int64 a2)
{
  VfDeadlockDeleteMemoryRange();
  return VfRemLockDeleteMemoryRange(a1, a2);
}
