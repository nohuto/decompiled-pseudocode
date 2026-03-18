/*
 * XREFs of LdrAccessResource @ 0x1405A9CF0
 * Callers:
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 *     FindBitmapResource @ 0x1407DB540 (FindBitmapResource.c)
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
