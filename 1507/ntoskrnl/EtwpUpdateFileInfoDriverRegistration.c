/*
 * XREFs of EtwpUpdateFileInfoDriverRegistration @ 0x14054AE9C
 * Callers:
 *     EtwpUpdateFileInfoDriverState @ 0x14054AE18 (EtwpUpdateFileInfoDriverState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ZwDeviceIoControlFile @ 0x14017F0D0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenFile @ 0x14017F650 (ZwOpenFile.c)
 */

__int64 __fastcall EtwpUpdateFileInfoDriverRegistration(int a1)
{
  NTSTATUS v2; // ebx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp+17h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+27h] BYREF
  HANDLE FileHandle; // [rsp+B8h] [rbp+6Fh] BYREF
  int InputBuffer; // [rsp+C0h] [rbp+77h] BYREF
  int v9; // [rsp+C4h] [rbp+7Bh]

  FileHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\FileInfo");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
  if ( v2 >= 0 )
  {
    InputBuffer = 1;
    v9 = a1;
    v2 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x220020u, &InputBuffer, 8u, 0LL, 0);
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v2;
}
