/*
 * XREFs of LdrFindResource_U @ 0x1405A9CF8
 * Callers:
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 *     FindBitmapResource @ 0x1407DB540 (FindBitmapResource.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x140462A10 (LdrpSearchResourceSection_U.c)
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
