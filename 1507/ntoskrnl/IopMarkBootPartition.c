/*
 * XREFs of IopMarkBootPartition @ 0x1407B65F4
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400D0E10 (IoGetDeviceAttachmentBaseRef.c)
 *     RtlInitAnsiString @ 0x1400F001C (RtlInitAnsiString.c)
 *     RtlStringCchPrintfA @ 0x14015DBB0 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x14017F650 (ZwOpenFile.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14058F2E0 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     IopAssignBootDriveLetter @ 0x1407B6270 (IopAssignBootDriveLetter.c)
 *     IopStoreSystemPartitionInformation @ 0x1407B634C (IopStoreSystemPartitionInformation.c)
 */

__int64 __fastcall IopMarkBootPartition(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  __int64 v5; // r9
  NTSTATUS v6; // ebx
  PVOID *v7; // rbx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  __int64 v9; // rcx
  PDEVICE_OBJECT v10; // rdi
  __int64 v11; // rcx
  int v13; // eax
  int v14; // edx
  HANDLE FileHandle; // [rsp+30h] [rbp-D0h] BYREF
  _STRING SourceString; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  char pszFormat[24]; // [rsp+98h] [rbp-68h] BYREF
  char pszDest[256]; // [rsp+B0h] [rbp-50h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  v5 = *(_QWORD *)(a1 + 184);
  strcpy(pszFormat, "\\ArcName\\%s");
  v6 = RtlStringCchPrintfA(pszDest, 0x100uLL, pszFormat, v5);
  if ( v6 >= 0 )
  {
    RtlInitAnsiString(&SourceString, pszDest);
    v6 = RtlAnsiStringToUnicodeString(a3, &SourceString, 1u);
    if ( v6 >= 0 )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.ObjectName = a3;
      v6 = ZwOpenFile(&FileHandle, 0x80u, &ObjectAttributes, &IoStatusBlock, 0, 0x40u);
      if ( v6 >= 0 )
      {
        v6 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, (PVOID *)&SourceString, 0LL);
        if ( v6 >= 0 )
        {
          v7 = *(PVOID **)&SourceString.Length;
          DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(*(_QWORD *)&SourceString.Length
                                                                                   + 8LL));
          v9 = (__int64)v7[1];
          v10 = DeviceAttachmentBaseRef;
          *(_DWORD *)(v9 + 48) |= 0x100u;
          DeviceAttachmentBaseRef->Flags |= 0x100u;
          if ( InitIsWinPEMode )
          {
            v9 = (__int64)v7[1];
            v13 = InitWinPEModeType;
            v14 = *(_DWORD *)(v9 + 52);
            if ( (v14 & 1) != 0 )
            {
              v13 = InitWinPEModeType | 0x200;
              InitWinPEModeType |= 0x200u;
            }
            if ( (v14 & 2) != 0 )
              InitWinPEModeType = v13 | 0x100;
          }
          PnpHardwareConfigCreateBootDriverFlags(v9, FileHandle);
          ObfReferenceObjectWithTag(v7[1], 0x746C6644u);
          IopErrorLogObject = (__int64)v7[1];
          ObCloseHandle(FileHandle, 0);
          ObfDereferenceObjectWithTag(v7, 0x746C6644u);
          ObfDereferenceObjectWithTag(v10, 0x746C6644u);
          IopAssignBootDriveLetter();
          RtlInitAnsiString(&SourceString, *(PCSZ *)(a1 + 208));
          v6 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u);
          if ( v6 >= 0 )
          {
            IopStoreSystemPartitionInformation(v11, &DestinationString.Length);
            RtlFreeAnsiString(&DestinationString);
          }
        }
      }
    }
  }
  return (unsigned int)v6;
}
