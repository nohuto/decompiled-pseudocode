/*
 * XREFs of LdrFindResourceDirectory_U @ 0x14064852C
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x1404A1680 (LdrpSearchResourceSection_U.c)
 */

NTSTATUS __stdcall LdrFindResourceDirectory_U(
        PVOID BaseAddress,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DIRECTORY *ResourceDirectory)
{
  return LdrpSearchResourceSection_U((char *)BaseAddress, (__int64 *)ResourceInfo, Level, 2, (char **)ResourceDirectory);
}
