/*
 * XREFs of BiGetPhysicalDriveName @ 0x14070E32C
 * Callers:
 *     BiGetDriveLayoutBlock @ 0x14056EFF4 (BiGetDriveLayoutBlock.c)
 *     BiCreatePartitionDevice @ 0x1405709EC (BiCreatePartitionDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x1400CEF64 (RtlStringCbPrintfW.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenFile @ 0x14017F650 (ZwOpenFile.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x14070E460 (BiGetVolumeDiskExtentsInformation.c)
 */

__int64 __fastcall BiGetPhysicalDriveName(PCWSTR SourceString, wchar_t **a2)
{
  NTSTATUS v3; // ebx
  int VolumeDiskExtentsInformation; // eax
  unsigned int *v5; // rdi
  wchar_t *PoolWithTag; // rax
  wchar_t *v7; // rsi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+B0h] [rbp+30h] BYREF
  PVOID P; // [rsp+B8h] [rbp+38h]

  FileHandle = 0LL;
  P = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  IoStatusBlock.Pointer = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  IoStatusBlock.Information = 0LL;
  v3 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 3u, 0);
  if ( v3 >= 0 )
  {
    VolumeDiskExtentsInformation = BiGetVolumeDiskExtentsInformation(FileHandle);
    v5 = (unsigned int *)P;
    v3 = VolumeDiskExtentsInformation;
    if ( VolumeDiskExtentsInformation >= 0 )
    {
      if ( *(_DWORD *)P == 1 )
      {
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x3EuLL, 0x4B444342u);
        v7 = PoolWithTag;
        if ( PoolWithTag )
        {
          v3 = RtlStringCbPrintfW(PoolWithTag, 0x3EuLL, L"\\??\\PhysicalDrive%lu", v5[2]);
          if ( v3 < 0 )
            ExFreePoolWithTag(v7, 0);
          else
            *a2 = v7;
        }
        else
        {
          v3 = -1073741670;
        }
      }
      else
      {
        v3 = -1073741637;
      }
    }
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v3;
}
