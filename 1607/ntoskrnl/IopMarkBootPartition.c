/*
 * XREFs of IopMarkBootPartition @ 0x140798EDC
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     RtlInitAnsiString @ 0x140074CF4 (RtlInitAnsiString.c)
 *     ObfReferenceObjectWithTag @ 0x1400EE4F0 (ObfReferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400FB62C (IoGetDeviceAttachmentBaseRef.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x14013BDE4 (IopCreateUnicodeFromAnsiBuffer.c)
 *     RtlStringCchPrintfA @ 0x14013BE10 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x14015A2E0 (ZwOpenFile.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F6600 (RtlAnsiStringToUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 *     ObCloseHandle @ 0x14050C73C (ObCloseHandle.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14054FA20 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     IopAssignBootDriveLetter @ 0x140798A1C (IopAssignBootDriveLetter.c)
 *     IopStoreSystemPartitionInformation @ 0x140798C34 (IopStoreSystemPartitionInformation.c)
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
  STRING SourceString; // [rsp+38h] [rbp-C8h] BYREF
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
          ObCloseHandle(FileHandle, 0);
          ObfDereferenceObjectWithTag(v7, 0x746C6644u);
          ObfDereferenceObjectWithTag(v10, 0x746C6644u);
          IopAssignBootDriveLetter();
          v6 = IopCreateUnicodeFromAnsiBuffer(&DestinationString, *(const char **)(a1 + 208));
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
