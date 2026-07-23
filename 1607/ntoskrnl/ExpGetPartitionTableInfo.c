/*
 * XREFs of ExpGetPartitionTableInfo @ 0x1406B104C
 * Callers:
 *     ExpFindDiskSignature @ 0x1406B0C5C (ExpFindDiskSignature.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ZwDeviceIoControlFile @ 0x14015A2D0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenFile @ 0x14015A850 (ZwOpenFile.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall ExpGetPartitionTableInfo(PCWSTR SourceString, _QWORD *a2)
{
  NTSTATUS result; // eax
  SIZE_T OutputBufferLength; // rsi
  SIZE_T i; // rdx
  NTSTATUS v6; // edi
  PVOID OutputBuffer; // rbx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+D0h] [rbp+77h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 0x60u);
  if ( result >= 0 )
  {
    LODWORD(OutputBufferLength) = 2352;
    for ( i = 2352LL; ; i = OutputBufferLength )
    {
      OutputBuffer = ExAllocatePoolWithTag(NonPagedPoolNx, i, 0x72766E45u);
      if ( !OutputBuffer )
      {
        ZwClose(FileHandle);
        return -1073741670;
      }
      v6 = ZwDeviceIoControlFile(
             FileHandle,
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             0x70050u,
             0LL,
             0,
             OutputBuffer,
             OutputBufferLength);
      if ( v6 >= 0 )
        break;
      ExFreePoolWithTag(OutputBuffer, 0);
      if ( v6 != -1073741789 )
        goto LABEL_10;
      OutputBufferLength = (unsigned int)(2 * OutputBufferLength);
    }
    *a2 = OutputBuffer;
LABEL_10:
    ZwClose(FileHandle);
    return v6;
  }
  return result;
}
