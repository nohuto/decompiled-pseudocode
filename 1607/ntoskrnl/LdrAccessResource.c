/*
 * XREFs of LdrAccessResource @ 0x140564BF4
 * Callers:
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x1407B2098 (FindBitmapResource.c)
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
