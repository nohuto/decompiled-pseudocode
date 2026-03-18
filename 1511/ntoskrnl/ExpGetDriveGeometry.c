/*
 * XREFs of ExpGetDriveGeometry @ 0x14066DFEC
 * Callers:
 *     ExpCreateOutputEFI @ 0x14066D6E4 (ExpCreateOutputEFI.c)
 *     ExpTranslateEfiPath @ 0x14066FA84 (ExpTranslateEfiPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x1401485D0 (swprintf_s.c)
 *     ZwDeviceIoControlFile @ 0x140150700 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenFile @ 0x140150C80 (ZwOpenFile.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGetDriveGeometry(unsigned int a1, _DWORD *a2)
{
  wchar_t *PoolWithTag; // rax
  WCHAR *v5; // rdi
  NTSTATUS v6; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp+17h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+27h] BYREF
  HANDLE FileHandle; // [rsp+C8h] [rbp+77h] BYREF

  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x4CuLL, 0x72766E45u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    swprintf_s(PoolWithTag, 0x26uLL, L"\\Device\\Harddisk%lu\\Partition0", a1);
    RtlInitUnicodeString(&DestinationString, v5);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    IoStatusBlock.Pointer = 0LL;
    IoStatusBlock.Information = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 0x60u);
    if ( v6 >= 0 )
    {
      v6 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x70000u, 0LL, 0, a2, 0x18u);
      ZwClose(FileHandle);
      if ( v6 >= 0 && a2[5] < 0x200u )
        v6 = -1073741823;
    }
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v6;
}
