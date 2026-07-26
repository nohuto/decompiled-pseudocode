/*
 * XREFs of NdisFreeMemoryWithTag @ 0x1C0020600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall NdisFreeMemoryWithTag(PVOID VirtualAddress, ULONG Tag)
{
  ExFreePoolWithTag(VirtualAddress, Tag);
}
