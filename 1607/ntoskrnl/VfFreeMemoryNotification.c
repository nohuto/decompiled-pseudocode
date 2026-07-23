/*
 * XREFs of VfFreeMemoryNotification @ 0x1407028B4
 * Callers:
 *     MmFreeContiguousMemory @ 0x14009A3B8 (MmFreeContiguousMemory.c)
 *     VfDriverUnloadImage @ 0x1406FE170 (VfDriverUnloadImage.c)
 *     VfFreePoolNotification @ 0x140710998 (VfFreePoolNotification.c)
 * Callees:
 *     VfDeadlockDeleteMemoryRange @ 0x140713D4C (VfDeadlockDeleteMemoryRange.c)
 */

__int64 __fastcall VfFreeMemoryNotification(__int64 a1, __int64 a2)
{
  VfDeadlockDeleteMemoryRange();
  return VfRemLockDeleteMemoryRange(a1, a2);
}
