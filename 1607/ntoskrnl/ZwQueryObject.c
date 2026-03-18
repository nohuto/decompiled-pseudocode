/*
 * XREFs of ZwQueryObject @ 0x140159E80
 * Callers:
 *     CmpNameFromAttributes @ 0x14049C2AC (CmpNameFromAttributes.c)
 *     CmpAddToHiveFileList @ 0x14049CE58 (CmpAddToHiveFileList.c)
 *     CmpCmdRenameHive @ 0x140603554 (CmpCmdRenameHive.c)
 *     EtwpObjectTypeRundown @ 0x1406A7410 (EtwpObjectTypeRundown.c)
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
