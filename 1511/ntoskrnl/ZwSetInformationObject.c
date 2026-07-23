/*
 * XREFs of ZwSetInformationObject @ 0x1401511A0
 * Callers:
 *     CmpInitHiveFromFile @ 0x1403DCB84 (CmpInitHiveFromFile.c)
 *     CmpDoFileWrite @ 0x1403DD10C (CmpDoFileWrite.c)
 *     CmpCmdHiveClose @ 0x140499208 (CmpCmdHiveClose.c)
 *     CmpFlushBackupHive @ 0x1405E4F58 (CmpFlushBackupHive.c)
 *     VfZwSetInformationObject @ 0x1406D4450 (VfZwSetInformationObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationObject(
        HANDLE ObjectHandle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectHandle);
}
