/*
 * XREFs of IoReplaceFileObjectName @ 0x1405F9FB4
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoReplaceFileObjectName(PFILE_OBJECT FileObject, PWSTR NewFileName, USHORT FileNameLength)
{
  USHORT v6; // bx
  wchar_t *PoolWithTag; // rbp
  wchar_t *Buffer; // rcx
  size_t MaximumLength; // r8
  wchar_t *v11; // rcx

  if ( FileNameLength > FileObject->FileName.MaximumLength )
  {
    v6 = 56;
    if ( FileNameLength >= 0x38u )
    {
      v6 = 120;
      if ( FileNameLength >= 0x78u )
      {
        v6 = 248;
        if ( FileNameLength >= 0xF8u )
          v6 = FileNameLength;
      }
    }
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v6, 0x6D4E6F49u);
    if ( !PoolWithTag )
      return -1073741670;
    Buffer = FileObject->FileName.Buffer;
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0);
    FileObject->FileName.Buffer = PoolWithTag;
    FileObject->FileName.MaximumLength = v6;
  }
  MaximumLength = FileObject->FileName.MaximumLength;
  v11 = FileObject->FileName.Buffer;
  FileObject->FileName.Length = FileNameLength;
  memset(v11, 0, MaximumLength);
  memmove(FileObject->FileName.Buffer, NewFileName, FileNameLength);
  return 0;
}
