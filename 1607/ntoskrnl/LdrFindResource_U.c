/*
 * XREFs of LdrFindResource_U @ 0x140564BFC
 * Callers:
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x1407B2098 (FindBitmapResource.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x1404FFD34 (LdrpSearchResourceSection_U.c)
 */

NTSTATUS __stdcall LdrFindResource_U(
        PVOID BaseAddress,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DATA_ENTRY *ResourceDataEntry)
{
  return LdrpSearchResourceSection_U(
           (char *)BaseAddress,
           (__int64 *)ResourceInfo,
           Level,
           0,
           (__int64 *)ResourceDataEntry);
}
