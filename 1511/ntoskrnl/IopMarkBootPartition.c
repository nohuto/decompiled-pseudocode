/*
 * XREFs of IopMarkBootPartition @ 0x140753448
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x140092408 (RtlInitAnsiString.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140098860 (IoGetDeviceAttachmentBaseRef.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140133CE4 (IopCreateUnicodeFromAnsiBuffer.c)
 *     RtlStringCchPrintfA @ 0x140133D10 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x140150C80 (ZwOpenFile.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403E1384 (RtlAnsiStringToUnicodeString.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140523794 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     IopStoreSystemPartitionInformation @ 0x14075363C (IopStoreSystemPartitionInformation.c)
 *     IopAssignBootDriveLetter @ 0x1407538E4 (IopAssignBootDriveLetter.c)
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
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _STRING SourceString; // [rsp+48h] [rbp-B8h] BYREF
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
          v6 = IopCreateUnicodeFromAnsiBuffer(&DestinationString, *(const CHAR **)(a1 + 208));
          if ( v6 >= 0 )
          {
            IopStoreSystemPartitionInformation(v11, &DestinationString);
            RtlFreeAnsiString(&DestinationString);
          }
        }
      }
    }
  }
  return (unsigned int)v6;
}
