/*
 * XREFs of LdrFindResourceEx_U @ 0x1800808C0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x180030670 (LdrpSearchResourceSection_U.c)
 *     LdrpTraceLoadMUIDll @ 0x1800D44B4 (LdrpTraceLoadMUIDll.c)
 */

NTSTATUS __cdecl LdrFindResourceEx_U(
        ULONG Flags,
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DATA_ENTRY *ResourceDataEntry)
{
  NTSTATUS v9; // ebx

  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(L"02", MEMORY[0x7FFE0384]);
  v9 = LdrpSearchResourceSection_U(DllHandle, (__int64)ResourceInfo, Level, Flags, (__int64)ResourceDataEntry);
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(L".0", MEMORY[0x7FFE0384]);
  return v9;
}
