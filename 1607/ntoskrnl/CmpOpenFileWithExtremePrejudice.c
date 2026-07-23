/*
 * XREFs of CmpOpenFileWithExtremePrejudice @ 0x1404D1584
 * Callers:
 *     CmpOpenHiveFile @ 0x1403F82C0 (CmpOpenHiveFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x14015A6D0 (ZwSetInformationFile.c)
 *     ZwOpenFile @ 0x14015A850 (ZwOpenFile.c)
 *     ZwQueryAttributesFile @ 0x14015A990 (ZwQueryAttributesFile.c)
 *     ZwCreateFile @ 0x14015AC90 (ZwCreateFile.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

int __fastcall CmpOpenFileWithExtremePrejudice(
        PHANDLE FileHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG FileAttributes,
        ULONG CreateOptions)
{
  int result; // eax
  NTSTATUS v10; // ebx
  HANDLE FileHandlea; // [rsp+60h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlocka; // [rsp+68h] [rbp-70h] BYREF
  struct _FILE_BASIC_INFORMATION FileInformation; // [rsp+78h] [rbp-60h] BYREF

  memset(&FileInformation, 0, sizeof(FileInformation));
  *FileHandle = 0LL;
  result = ZwQueryAttributesFile(ObjectAttributes, &FileInformation);
  if ( result >= 0 )
  {
    FileInformation.FileAttributes &= ~1u;
    result = ZwOpenFile(&FileHandlea, 0x100u, ObjectAttributes, &IoStatusBlocka, 7u, 0x4000u);
    if ( result >= 0 )
    {
      v10 = ZwSetInformationFile(FileHandlea, &IoStatusBlocka, &FileInformation, 0x28u, FileBasicInformation);
      ZwClose(FileHandlea);
      if ( v10 >= 0 )
        return ZwCreateFile(
                 FileHandle,
                 3u,
                 ObjectAttributes,
                 IoStatusBlock,
                 0LL,
                 FileAttributes,
                 0,
                 1u,
                 CreateOptions,
                 0LL,
                 0);
      else
        return v10;
    }
  }
  return result;
}
