/*
 * XREFs of BiGetVolumeDiskExtentsInformation @ 0x14068E948
 * Callers:
 *     BiGetPhysicalDriveName @ 0x14068E814 (BiGetPhysicalDriveName.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x1401506A0 (ZwWaitForSingleObject.c)
 *     ZwDeviceIoControlFile @ 0x140150700 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwCreateEvent @ 0x140150F20 (ZwCreateEvent.c)
 *     ZwResetEvent @ 0x140153240 (ZwResetEvent.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetVolumeDiskExtentsInformation(HANDLE FileHandle, _QWORD *a2)
{
  NTSTATUS Status; // ebx
  int v5; // r14d
  ULONG OutputBufferLength; // esi
  _DWORD *OutputBuffer; // rax
  _DWORD *v8; // rdi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  HANDLE EventHandle; // [rsp+D0h] [rbp+77h] BYREF

  EventHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Status = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( Status >= 0 )
  {
    IoStatusBlock.Pointer = 0LL;
    v5 = 0;
    IoStatusBlock.Information = 0LL;
    OutputBufferLength = 32;
    while ( 1 )
    {
      OutputBuffer = ExAllocatePoolWithTag(PagedPool, OutputBufferLength, 0x4B444342u);
      v8 = OutputBuffer;
      if ( !OutputBuffer )
        break;
      Status = ZwDeviceIoControlFile(
                 FileHandle,
                 EventHandle,
                 0LL,
                 0LL,
                 &IoStatusBlock,
                 0x560000u,
                 0LL,
                 0,
                 OutputBuffer,
                 OutputBufferLength);
      if ( Status == 259 )
      {
        Status = ZwWaitForSingleObject(EventHandle, 0, 0LL);
        if ( Status >= 0 )
          Status = IoStatusBlock.Status;
      }
      ZwResetEvent(EventHandle, 0LL);
      if ( Status == -1073741789 || Status == -2147483643 )
      {
        OutputBufferLength += 24 * *v8;
        ExFreePoolWithTag(v8, 0);
        v8 = 0LL;
        if ( (unsigned int)++v5 < 2 )
          continue;
      }
      goto LABEL_12;
    }
    Status = -1073741670;
LABEL_12:
    if ( Status < 0 )
    {
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
    }
    else
    {
      *a2 = v8;
    }
  }
  if ( EventHandle )
    ZwClose(EventHandle);
  return (unsigned int)Status;
}
