/*
 * XREFs of ZwSetInformationObject @ 0x14015A800
 * Callers:
 *     CmpDoFileWrite @ 0x1403F9028 (CmpDoFileWrite.c)
 *     CmpInitHiveFromFile @ 0x1403F9AEC (CmpInitHiveFromFile.c)
 *     CmpCmdHiveClose @ 0x14049FCA0 (CmpCmdHiveClose.c)
 *     CmpFlushBackupHive @ 0x1406044B0 (CmpFlushBackupHive.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationObject(
        HANDLE ObjectHandle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectHandle, *(_QWORD *)&ObjectInformationClass, ObjectInformation);
}
