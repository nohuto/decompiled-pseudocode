/*
 * XREFs of ZwAllocateLocallyUniqueId @ 0x14017FDD0
 * Callers:
 *     VerifierZwAllocateLocallyUniqueId @ 0x140742554 (VerifierZwAllocateLocallyUniqueId.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAllocateLocallyUniqueId(PLUID Luid)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Luid);
}
