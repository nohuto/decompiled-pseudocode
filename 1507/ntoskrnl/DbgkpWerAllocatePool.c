/*
 * XREFs of DbgkpWerAllocatePool @ 0x14066A7C4
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1401E16B0 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall DbgkpWerAllocatePool(SIZE_T a1)
{
  return ExAllocatePoolWithTag(PagedPool, a1, 0x57676244u);
}
