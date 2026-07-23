/*
 * XREFs of EtwpCreateDirectoryFile @ 0x140495608
 * Callers:
 *     EtwpDelayCreate @ 0x14049553C (EtwpDelayCreate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwCreateFile @ 0x14015AC90 (ZwCreateFile.c)
 */

__int64 __fastcall EtwpCreateDirectoryFile(
        PCWSTR SourceString,
        char a2,
        char a3,
        char a4,
        HANDLE *a5,
        PIO_STATUS_BLOCK IoStatusBlock,
        int a7)
{
  ULONG v10; // ebp
  ACCESS_MASK v11; // edx
  ULONG CreateDisposition; // eax
  ULONG CreateOptions; // ecx
  NTSTATUS v14; // ebx
  HANDLE FileHandle; // [rsp+60h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-60h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-50h] BYREF

  FileHandle = 0LL;
  v10 = 576;
  if ( !a2 && !a5 )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  if ( !a4 )
    v10 = 1600;
  ObjectAttributes.Attributes = v10;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( a2 )
  {
    CreateDisposition = 3;
    v11 = 1180063;
    CreateOptions = 33;
  }
  else
  {
    v11 = (a4 != 0 ? 0x10000 : 0) | 0x12008B;
    CreateDisposition = a7 != 0 ? 3 : 5;
    CreateOptions = (a3 != 0 ? 8 : 0) | 0x20;
  }
  v14 = ZwCreateFile(
          &FileHandle,
          v11,
          &ObjectAttributes,
          IoStatusBlock,
          0LL,
          0x80u,
          5u,
          CreateDisposition,
          CreateOptions,
          0LL,
          0);
  if ( v14 >= 0 && a2 && FileHandle )
  {
    ZwClose(FileHandle);
    if ( a5 )
      *a5 = 0LL;
  }
  else if ( a5 )
  {
    *a5 = FileHandle;
  }
  if ( a2 == 1 && v14 == -1073741757 )
    return 0;
  return (unsigned int)v14;
}
