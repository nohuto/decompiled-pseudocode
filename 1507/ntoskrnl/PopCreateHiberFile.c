/*
 * XREFs of PopCreateHiberFile @ 0x1405C5930
 * Callers:
 *     PopEnableHiberFile @ 0x1405BD654 (PopEnableHiberFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14017F210 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x14017F4D0 (ZwSetInformationFile.c)
 *     ZwFsControlFile @ 0x14017F710 (ZwFsControlFile.c)
 *     ZwFlushBuffersFile @ 0x14017F950 (ZwFlushBuffersFile.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     IoCreateFile @ 0x140508400 (IoCreateFile.c)
 *     PopSanityCheckHiberFile @ 0x14056C0AC (PopSanityCheckHiberFile.c)
 *     PopSetHiberFileMcb @ 0x14056C280 (PopSetHiberFileMcb.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140583464 (FsRtlIssueFileNotificationFsctl.c)
 *     PopResetCurrentPolicies @ 0x1405996E0 (PopResetCurrentPolicies.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1405C0314 (PopCreateHiberFileSecurityDescriptor.c)
 */

__int64 __fastcall PopCreateHiberFile(LARGE_INTEGER a1)
{
  struct _FILE_OBJECT *v1; // rsi
  int v2; // ebx
  ACL *HiberFileSecurityDescriptor; // r12
  unsigned int v4; // r14d
  NTSTATUS v5; // eax
  bool v6; // r15
  HANDLE v7; // rdi
  HANDLE v8; // rcx
  NTSTATUS v9; // eax
  NTSTATUS Status; // eax
  __int64 v11; // rdx
  HANDLE FileHandle; // [rsp+70h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  LARGE_INTEGER AllocationSize; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING Destination; // [rsp+90h] [rbp-70h] BYREF
  SIZE_T NumberOfBytes; // [rsp+A0h] [rbp-60h] BYREF
  PVOID P; // [rsp+A8h] [rbp-58h] BYREF
  LARGE_INTEGER v19; // [rsp+B0h] [rbp-50h] BYREF
  PVOID Object; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD InputBuffer[3]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE FileInformation[16]; // [rsp+118h] [rbp+18h] BYREF
  unsigned int v25; // [rsp+128h] [rbp+28h]
  _DWORD v26[10]; // [rsp+130h] [rbp+30h] BYREF

  AllocationSize = a1;
  FileHandle = 0LL;
  v1 = 0LL;
  P = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\hiberfil.sys");
  Destination.Length = 0;
  Destination.MaximumLength = DestinationString.Length + IoArcBootDeviceName.Length;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                    (POOL_TYPE)257,
                                    (unsigned __int16)(DestinationString.Length + IoArcBootDeviceName.Length),
                                    0x72626968u);
  if ( !Destination.Buffer )
    return (unsigned int)-1073741670;
  RtlAppendUnicodeStringToString(&Destination, &IoArcBootDeviceName);
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  HiberFileSecurityDescriptor = PopCreateHiberFileSecurityDescriptor();
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &Destination;
  v4 = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = HiberFileSecurityDescriptor;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  while ( 1 )
  {
    v5 = IoCreateFile(
           &FileHandle,
           0x100003u,
           &ObjectAttributes,
           &IoStatusBlock,
           &AllocationSize,
           0x2006u,
           0,
           3u,
           0x9048u,
           0LL,
           0,
           CreateFileTypeNone,
           0LL,
           0x102u);
    v2 = v5;
    if ( v5 >= 0 )
      break;
    if ( v5 != -1073741638 )
    {
      v7 = FileHandle;
      goto LABEL_17;
    }
    v2 = IoCreateFile(
           &FileHandle,
           0x10000u,
           &ObjectAttributes,
           &IoStatusBlock,
           &AllocationSize,
           0,
           0,
           1u,
           0x201001u,
           0LL,
           0,
           CreateFileTypeNone,
           0LL,
           0x100u);
    if ( v2 < 0 )
      goto LABEL_41;
    v8 = FileHandle;
LABEL_11:
    ZwClose(v8);
    ++v4;
    FileHandle = 0LL;
    v7 = 0LL;
    if ( v4 >= 3 )
      goto LABEL_17;
  }
  v6 = IoStatusBlock.Information == 2;
  v7 = FileHandle;
  v2 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
  if ( v2 < 0 )
    goto LABEL_42;
  if ( v25 > 1 )
  {
    v8 = v7;
    goto LABEL_11;
  }
  if ( !v6 )
  {
    InputBuffer[0] = 0x100000000LL;
    InputBuffer[2] = -1LL;
    InputBuffer[1] = 0LL;
    ZwFsControlFile(v7, 0LL, 0LL, 0LL, &IoStatusBlock, 0x98208u, InputBuffer, 0x18u, 0LL, 0);
  }
  v2 = 0;
LABEL_17:
  if ( v2 >= 0 )
  {
    memset(v26, 0, sizeof(v26));
    v26[8] = 8198;
    v2 = ZwSetInformationFile(v7, &IoStatusBlock, v26, 0x28u, FileBasicInformation);
    if ( v2 >= 0 )
    {
      v9 = ObReferenceObjectByHandle(v7, 3u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
      v1 = (struct _FILE_OBJECT *)Object;
      v2 = v9;
      if ( v9 >= 0 )
      {
        v19 = AllocationSize;
        v2 = ZwSetInformationFile(v7, &IoStatusBlock, &v19, 8u, FileEndOfFileInformation);
        if ( v2 == 259 )
        {
          KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
          v2 = IoStatusBlock.Status;
        }
        else
        {
          Status = IoStatusBlock.Status;
        }
        if ( v2 < 0 || Status < 0 )
        {
          if ( (PoDebug & 0x80u) != 0 )
            DbgPrint("PopCreateHiberFile: failed to set eof %x  %x\n", v2, IoStatusBlock.Status);
          if ( v2 >= 0 )
            v2 = IoStatusBlock.Status;
          goto LABEL_41;
        }
        if ( (v1->DeviceObject->Flags & 0x100) == 0 )
        {
          v2 = -1073741823;
          goto LABEL_42;
        }
        v2 = ZwFsControlFile(v7, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9004Fu, 0LL, 0, 0LL, 0);
        if ( v2 == 259 )
        {
          KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
          v2 = IoStatusBlock.Status;
        }
        if ( v2 < 0 )
        {
          if ( (PoDebug & 0x80u) != 0 )
            DbgPrint("PopCreateHiberFile: unable to flush hiberfile metadata (%x)\n", v2);
LABEL_41:
          v7 = FileHandle;
          goto LABEL_42;
        }
        if ( ZwFlushBuffersFile(v7, &IoStatusBlock) == 259 )
          KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
        v2 = PopSanityCheckHiberFile(v7, (__int64)v1, &AllocationSize, (__int64 **)&P, &NumberOfBytes);
        if ( v2 >= 0 )
        {
          v2 = PopSetHiberFileMcb(P, (unsigned int)NumberOfBytes);
          if ( v2 >= 0 )
          {
            qword_14032E8B0 = AllocationSize.QuadPart;
            PopHiberInfo = v7;
            FileObject = v1;
            FsRtlIssueFileNotificationFsctl(v1, v11, (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_HIBERNATION_FILE);
            PopResetCurrentPolicies();
            v2 = 0;
            goto LABEL_46;
          }
        }
      }
    }
  }
LABEL_42:
  if ( v7 )
    ZwClose(v7);
  if ( v1 )
    ObfDereferenceObject(v1);
LABEL_46:
  if ( HiberFileSecurityDescriptor )
    ExFreePoolWithTag(HiberFileSecurityDescriptor, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v2;
}
