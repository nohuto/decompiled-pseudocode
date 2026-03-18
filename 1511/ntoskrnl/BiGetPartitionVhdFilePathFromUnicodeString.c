/*
 * XREFs of BiGetPartitionVhdFilePathFromUnicodeString @ 0x1404FE1C0
 * Callers:
 *     BiGetPartitionVhdFilePath @ 0x1404FE1A0 (BiGetPartitionVhdFilePath.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x1401506A0 (ZwWaitForSingleObject.c)
 *     ZwDeviceIoControlFile @ 0x140150700 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenFile @ 0x140150C80 (ZwOpenFile.c)
 *     ZwCreateEvent @ 0x140150F20 (ZwCreateEvent.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BiTranslateSymbolicLinkFile @ 0x14068EAC0 (BiTranslateSymbolicLinkFile.c)
 */

ULONG *__fastcall BiGetPartitionVhdFilePathFromUnicodeString(UNICODE_STRING *a1)
{
  ULONG *v1; // rbx
  ULONG OutputBufferLength; // edi
  int i; // esi
  ULONG *OutputBuffer; // rax
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES v9; // [rsp+90h] [rbp+7h] BYREF
  int InputBuffer; // [rsp+F0h] [rbp+67h] BYREF
  HANDLE EventHandle; // [rsp+F8h] [rbp+6Fh] BYREF
  HANDLE FileHandle; // [rsp+100h] [rbp+77h] BYREF
  ULONG *v13; // [rsp+108h] [rbp+7Fh]

  FileHandle = 0LL;
  v1 = 0LL;
  ObjectAttributes.ObjectName = a1;
  EventHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 3u, 0) >= 0 )
  {
    v9.RootDirectory = 0LL;
    v9.ObjectName = 0LL;
    v9.Length = 48;
    v9.Attributes = 512;
    *(_OWORD *)&v9.SecurityDescriptor = 0LL;
    if ( ZwCreateEvent(&EventHandle, 0x1F0003u, &v9, NotificationEvent, 0) >= 0 )
    {
      OutputBufferLength = 520;
      for ( i = 1; ; i = 2 )
      {
        OutputBuffer = (ULONG *)ExAllocatePoolWithTag(PagedPool, OutputBufferLength, 0x4B444342u);
        v1 = OutputBuffer;
        if ( !OutputBuffer )
          break;
        InputBuffer = 1;
        Status = ZwDeviceIoControlFile(
                   FileHandle,
                   EventHandle,
                   0LL,
                   0LL,
                   &IoStatusBlock,
                   0x2D5928u,
                   &InputBuffer,
                   4u,
                   OutputBuffer,
                   OutputBufferLength);
        if ( Status == 259 )
        {
          Status = ZwWaitForSingleObject(EventHandle, 0, 0LL);
          if ( Status >= 0 )
            Status = IoStatusBlock.Status;
        }
        if ( Status != -1073741789 )
          goto LABEL_7;
        if ( i != 1 )
          goto LABEL_8;
        OutputBufferLength = *v1;
        ExFreePoolWithTag(v1, 0);
      }
      Status = -1073741801;
LABEL_7:
      if ( Status < 0 )
      {
LABEL_8:
        if ( v1 )
        {
          ExFreePoolWithTag(v1, 0);
          v1 = 0LL;
        }
        goto LABEL_10;
      }
      if ( (int)BiTranslateSymbolicLinkFile((PCWSTR)v1) >= 0 )
      {
        ExFreePoolWithTag(v1, 0);
        v1 = v13;
      }
    }
  }
LABEL_10:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( EventHandle )
    ZwClose(EventHandle);
  return v1;
}
