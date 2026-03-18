/*
 * XREFs of DbgkpWerAllocatePool @ 0x1405F1ACC
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1401ABBD4 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall DbgkpWerAllocatePool(SIZE_T a1)
{
  return ExAllocatePoolWithTag(PagedPool, a1, 0x57676244u);
}
