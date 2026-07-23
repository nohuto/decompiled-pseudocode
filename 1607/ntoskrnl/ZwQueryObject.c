/*
 * XREFs of ZwQueryObject @ 0x14015A3F0
 * Callers:
 *     CmpNameFromAttributes @ 0x1404A4444 (CmpNameFromAttributes.c)
 *     CmpAddToHiveFileList @ 0x1404CD0D8 (CmpAddToHiveFileList.c)
 *     CmpCmdRenameHive @ 0x140603608 (CmpCmdRenameHive.c)
 *     EtwpObjectTypeRundown @ 0x1406A7548 (EtwpObjectTypeRundown.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
