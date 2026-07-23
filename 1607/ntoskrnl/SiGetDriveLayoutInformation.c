/*
 * XREFs of SiGetDriveLayoutInformation @ 0x1406D62C0
 * Callers:
 *     SiGetEfiSystemDevice @ 0x1406D65A4 (SiGetEfiSystemDevice.c)
 *     SiGetBiosSystemPartition @ 0x1406D6D00 (SiGetBiosSystemPartition.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ZwDeviceIoControlFile @ 0x14015A2D0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenFile @ 0x14015A850 (ZwOpenFile.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SiGetDriveLayoutInformation(PCWSTR SourceString, _QWORD *a2)
{
  NTSTATUS v3; // ebx
  ULONG OutputBufferLength; // esi
  PVOID OutputBuffer; // rax
  void *v6; // rdi
  NTSTATUS v7; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+D0h] [rbp+77h] BYREF

  FileHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( v3 >= 0 )
  {
    OutputBufferLength = 18480;
    OutputBuffer = ExAllocatePoolWithTag(PagedPool, 0x4830uLL, 0x4B505953u);
    v6 = OutputBuffer;
    if ( OutputBuffer )
    {
      while ( 1 )
      {
        v7 = ZwDeviceIoControlFile(
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
        v3 = v7;
        if ( v7 != -1073741789 )
          break;
        ExFreePoolWithTag(v6, 0);
        OutputBufferLength += 9216;
        OutputBuffer = ExAllocatePoolWithTag(PagedPool, OutputBufferLength, 0x4B505953u);
        v6 = OutputBuffer;
        if ( !OutputBuffer )
        {
          v3 = -1073741670;
          goto LABEL_8;
        }
      }
      if ( v7 < 0 )
        goto LABEL_9;
      *a2 = v6;
LABEL_8:
      if ( v3 >= 0 )
        goto LABEL_11;
LABEL_9:
      if ( v6 )
        ExFreePoolWithTag(v6, 0);
    }
    else
    {
      v3 = -1073741670;
    }
  }
LABEL_11:
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v3;
}
