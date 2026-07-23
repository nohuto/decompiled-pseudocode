/*
 * XREFs of FsRtlpOpenDev @ 0x140578960
 * Callers:
 *     FsRtlpRegisterUncProvider @ 0x140578790 (FsRtlpRegisterUncProvider.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ZwCreateFile @ 0x14015AC90 (ZwCreateFile.c)
 */

NTSTATUS __fastcall FsRtlpOpenDev(PHANDLE FileHandle)
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-38h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\Device\\Mup");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateFile(FileHandle, 0x40000000u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 3u, 1u, 0, 0LL, 0);
  if ( result < 0 || (result = IoStatusBlock.Status, IoStatusBlock.Status < 0) )
    *FileHandle = (HANDLE)-1LL;
  return result;
}
