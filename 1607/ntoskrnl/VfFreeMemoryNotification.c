/*
 * XREFs of VfFreeMemoryNotification @ 0x140702884
 * Callers:
 *     MmFreeContiguousMemory @ 0x14009ABB8 (MmFreeContiguousMemory.c)
 *     VfDriverUnloadImage @ 0x1406FE170 (VfDriverUnloadImage.c)
 *     VfFreePoolNotification @ 0x140710968 (VfFreePoolNotification.c)
 * Callees:
 *     VfDeadlockDeleteMemoryRange @ 0x140713D4C (VfDeadlockDeleteMemoryRange.c)
 */

__int64 __fastcall VfFreeMemoryNotification(__int64 a1, __int64 a2)
{
  VfDeadlockDeleteMemoryRange();
  return VfRemLockDeleteMemoryRange(a1, a2);
}
