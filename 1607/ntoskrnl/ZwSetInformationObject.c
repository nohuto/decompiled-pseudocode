/*
 * XREFs of ZwSetInformationObject @ 0x14015AD70
 * Callers:
 *     CmpDoFileWrite @ 0x1403F7EE8 (CmpDoFileWrite.c)
 *     CmpInitHiveFromFile @ 0x1403F89AC (CmpInitHiveFromFile.c)
 *     CmpCmdHiveClose @ 0x1405180AC (CmpCmdHiveClose.c)
 *     CmpFlushBackupHive @ 0x140604564 (CmpFlushBackupHive.c)
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
