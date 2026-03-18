/*
 * XREFs of LdrFindResource_U @ 0x1405341C8
 * Callers:
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140767A0C (FindBitmapResource.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x1404A1680 (LdrpSearchResourceSection_U.c)
 */

NTSTATUS __stdcall LdrFindResource_U(
        PVOID BaseAddress,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DATA_ENTRY *ResourceDataEntry)
{
  return LdrpSearchResourceSection_U((char *)BaseAddress, (__int64 *)ResourceInfo, Level, 0, (char **)ResourceDataEntry);
}
