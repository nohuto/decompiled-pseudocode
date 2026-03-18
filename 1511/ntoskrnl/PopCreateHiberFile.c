/*
 * XREFs of PopCreateHiberFile @ 0x14054BA2C
 * Callers:
 *     PopEnableHiberFile @ 0x1405467D4 (PopEnableHiberFile.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400030E4 (RtlAppendUnicodeStringToString.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwSetInformationFile @ 0x140150B00 (ZwSetInformationFile.c)
 *     ZwFsControlFile @ 0x140150D40 (ZwFsControlFile.c)
 *     ZwFlushBuffersFile @ 0x140150F80 (ZwFlushBuffersFile.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     IoCreateFile @ 0x1404B282C (IoCreateFile.c)
 *     PopSanityCheckHiberFile @ 0x1404F9F38 (PopSanityCheckHiberFile.c)
 *     PopSetHiberFileMcb @ 0x1404FA0FC (PopSetHiberFileMcb.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14050C180 (FsRtlIssueFileNotificationFsctl.c)
 *     PopDeleteHiberFile @ 0x14051AD40 (PopDeleteHiberFile.c)
 *     PopResetCurrentPolicies @ 0x14053E130 (PopResetCurrentPolicies.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140549098 (PopCreateHiberFileSecurityDescriptor.c)
 *     PopValidateExistingHiberFile @ 0x14054B958 (PopValidateExistingHiberFile.c)
 */

__int64 __fastcall PopCreateHiberFile(LARGE_INTEGER a1)
{
  struct _FILE_OBJECT *v1; // rsi
  ACL *HiberFileSecurityDescriptor; // r14
  NTSTATUS v3; // eax
  HANDLE v4; // rdi
  NTSTATUS v5; // eax
  int v6; // ebx
  NTSTATUS Status; // eax
  __int64 v8; // rdx
  NTSTATUS v10; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-39h] BYREF
  UNICODE_STRING Destination; // [rsp+80h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-9h] BYREF
  HANDLE FileHandle; // [rsp+110h] [rbp+67h] BYREF
  LARGE_INTEGER AllocationSize; // [rsp+118h] [rbp+6Fh] BYREF
  PVOID P; // [rsp+120h] [rbp+77h] BYREF
  LARGE_INTEGER FileInformation; // [rsp+128h] [rbp+7Fh] BYREF

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
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = HiberFileSecurityDescriptor;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v3 = IoCreateFile(
         &FileHandle,
         0x100003u,
         &ObjectAttributes,
         &IoStatusBlock,
         &AllocationSize,
         0x2006u,
         0,
         5u,
         0x9008u,
         0LL,
         0,
         CreateFileTypeNone,
         0LL,
         0x102u);
  if ( v3 < 0 )
    goto LABEL_38;
  v4 = FileHandle;
  if ( IoStatusBlock.Information == 3 || !IoStatusBlock.Information )
    v3 = PopValidateExistingHiberFile(FileHandle, &AllocationSize);
  if ( v3 < 0 )
  {
LABEL_38:
    PopDeleteHiberFile(&ObjectAttributes);
    v10 = IoCreateFile(
            &FileHandle,
            0x100003u,
            &ObjectAttributes,
            &IoStatusBlock,
            &AllocationSize,
            0x2006u,
            0,
            0,
            0x9008u,
            0LL,
            0,
            CreateFileTypeNone,
            0LL,
            0x102u);
    v4 = FileHandle;
    v6 = v10;
    if ( v10 < 0 )
      goto LABEL_32;
  }
  v5 = ObReferenceObjectByHandle(v4, 3u, (POBJECT_TYPE)IoFileObjectType, 0, &FileHandle, 0LL);
  v1 = (struct _FILE_OBJECT *)FileHandle;
  v6 = v5;
  if ( v5 < 0 )
    goto LABEL_32;
  FileInformation = AllocationSize;
  v6 = ZwSetInformationFile(v4, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
    v6 = IoStatusBlock.Status;
  }
  else
  {
    Status = IoStatusBlock.Status;
  }
  if ( v6 < 0 )
    goto LABEL_32;
  if ( Status < 0 )
  {
    v6 = Status;
    goto LABEL_32;
  }
  if ( (v1->DeviceObject->Flags & 0x100) == 0 )
  {
    v6 = -1073741823;
LABEL_32:
    if ( v4 )
      ZwClose(v4);
    if ( v1 )
      ObfDereferenceObject(v1);
    goto LABEL_21;
  }
  v6 = ZwFsControlFile(v4, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9004Fu, 0LL, 0, 0LL, 0);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
    v6 = IoStatusBlock.Status;
  }
  if ( v6 < 0 )
    goto LABEL_32;
  if ( ZwFlushBuffersFile(v4, &IoStatusBlock) == 259 )
    KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
  v6 = PopSanityCheckHiberFile(v4, (__int64)v1, &AllocationSize, (__int64 **)&P, &FileHandle);
  if ( v6 < 0 )
    goto LABEL_32;
  v6 = PopSetHiberFileMcb(P, (unsigned int)FileHandle);
  if ( v6 < 0 )
    goto LABEL_32;
  qword_1402DE2F0 = AllocationSize.QuadPart;
  PopHiberInfo = v4;
  FileObject = v1;
  FsRtlIssueFileNotificationFsctl(v1, v8, (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_HIBERNATION_FILE);
  PopResetCurrentPolicies();
  v6 = 0;
LABEL_21:
  if ( HiberFileSecurityDescriptor )
    ExFreePoolWithTag(HiberFileSecurityDescriptor, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v6;
}
