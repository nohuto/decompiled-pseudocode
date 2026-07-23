/*
 * XREFs of ZwQueryObject @ 0x140150820
 * Callers:
 *     CmpLinkHiveToMaster @ 0x1403BAC9C (CmpLinkHiveToMaster.c)
 *     CmpNameFromAttributes @ 0x1403DBE88 (CmpNameFromAttributes.c)
 *     CmpAddToHiveFileList @ 0x1404C26DC (CmpAddToHiveFileList.c)
 *     CmpCmdRenameHive @ 0x1405E3C50 (CmpCmdRenameHive.c)
 *     EtwpObjectTypeRundown @ 0x140665A08 (EtwpObjectTypeRundown.c)
 *     VfZwQueryObject @ 0x1406D3B7C (VfZwQueryObject.c)
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
