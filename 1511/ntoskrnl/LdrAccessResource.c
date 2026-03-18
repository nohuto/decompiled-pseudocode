/*
 * XREFs of LdrAccessResource @ 0x1405341C0
 * Callers:
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140767A0C (FindBitmapResource.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall LdrAccessResource(
        PVOID BaseAddress,
        PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry,
        PVOID *Resource,
        PULONG Size)
{
  return LdrpAccessResourceData((unsigned __int64)BaseAddress, (unsigned __int64)ResourceDataEntry);
}
