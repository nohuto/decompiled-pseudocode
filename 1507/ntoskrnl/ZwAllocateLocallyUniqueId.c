/*
 * XREFs of ZwAllocateLocallyUniqueId @ 0x14017FDD0
 * Callers:
 *     VerifierZwAllocateLocallyUniqueId @ 0x140742554 (VerifierZwAllocateLocallyUniqueId.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAllocateLocallyUniqueId(PLUID Luid)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Luid, v1, v2);
}
