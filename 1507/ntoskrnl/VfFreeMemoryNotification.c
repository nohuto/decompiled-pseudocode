/*
 * XREFs of VfFreeMemoryNotification @ 0x140737404
 * Callers:
 *     MmFreeContiguousMemory @ 0x140114978 (MmFreeContiguousMemory.c)
 *     VfDriverUnloadImage @ 0x140732000 (VfDriverUnloadImage.c)
 *     VfFreePoolNotification @ 0x140746198 (VfFreePoolNotification.c)
 * Callees:
 *     VfDeadlockDeleteMemoryRange @ 0x14074F604 (VfDeadlockDeleteMemoryRange.c)
 */

__int64 __fastcall VfFreeMemoryNotification(__int64 a1, __int64 a2)
{
  VfDeadlockDeleteMemoryRange();
  return VfRemLockDeleteMemoryRange(a1, a2);
}
