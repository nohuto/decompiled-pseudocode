/*
 * XREFs of DbgkpWerAllocatePool @ 0x14061BDD8
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1401B7964 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall DbgkpWerAllocatePool(SIZE_T a1)
{
  return ExAllocatePoolWithTag(PagedPool, a1, 0x57676244u);
}
