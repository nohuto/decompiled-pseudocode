/*
 * XREFs of ZwAllocateLocallyUniqueId @ 0x140151400
 * Callers:
 *     VerifierZwAllocateLocallyUniqueId @ 0x1406C0D14 (VerifierZwAllocateLocallyUniqueId.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAllocateLocallyUniqueId(PLUID Luid)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Luid);
}
