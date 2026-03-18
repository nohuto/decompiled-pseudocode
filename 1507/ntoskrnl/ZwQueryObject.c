/*
 * XREFs of ZwQueryObject @ 0x14017F1F0
 * Callers:
 *     CmpNameFromAttributes @ 0x14044565C (CmpNameFromAttributes.c)
 *     CmpLinkHiveToMaster @ 0x1404E9E8C (CmpLinkHiveToMaster.c)
 *     CmpAddToHiveFileList @ 0x1404EBEEC (CmpAddToHiveFileList.c)
 *     CmpCmdRenameHive @ 0x14065AD80 (CmpCmdRenameHive.c)
 *     EtwpObjectTypeRundown @ 0x1406E8B94 (EtwpObjectTypeRundown.c)
 *     VfZwQueryObject @ 0x140757744 (VfZwQueryObject.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, *(_QWORD *)&ObjectInformationClass, ObjectInformation);
}
