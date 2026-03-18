/*
 * XREFs of DbgkpWerAllocatePool @ 0x14061BD24
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1401B7A80 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall DbgkpWerAllocatePool(SIZE_T a1)
{
  return ExAllocatePoolWithTag(PagedPool, a1, 0x57676244u);
}
