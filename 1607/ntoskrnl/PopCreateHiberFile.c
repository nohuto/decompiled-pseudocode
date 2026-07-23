/*
 * XREFs of PopCreateHiberFile @ 0x14056D474
 * Callers:
 *     PopEnableHiberFile @ 0x14056CD38 (PopEnableHiberFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14015A410 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x14015A6D0 (ZwSetInformationFile.c)
 *     ZwFsControlFile @ 0x14015A910 (ZwFsControlFile.c)
 *     ZwFlushBuffersFile @ 0x14015AB50 (ZwFlushBuffersFile.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     IoCreateFile @ 0x1404BC4D0 (IoCreateFile.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140547288 (FsRtlIssueFileNotificationFsctl.c)
 *     PopSanityCheckHiberFile @ 0x140547F0C (PopSanityCheckHiberFile.c)
 *     PopSetHiberFileMcb @ 0x140548934 (PopSetHiberFileMcb.c)
 *     PopResetCurrentPolicies @ 0x14056E44C (PopResetCurrentPolicies.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14056EA90 (PopCreateHiberFileSecurityDescriptor.c)
 */

__int64 __fastcall PopCreateHiberFile(LARGE_INTEGER a1)
{
  struct _FILE_OBJECT *v1; // rsi
  int v2; // ebx
  void *HiberFileSecurityDescriptor; // r12
  unsigned int v4; // r14d
  NTSTATUS v5; // eax
  bool v6; // r15
  HANDLE v7; // rdi
  HANDLE v8; // rcx
  NTSTATUS v9; // eax
  NTSTATUS Status; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  HANDLE FileHandle; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER AllocationSize; // [rsp+80h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING Destination; // [rsp+98h] [rbp-70h] BYREF
  PVOID P; // [rsp+A8h] [rbp-60h] BYREF
  LARGE_INTEGER v20; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD InputBuffer[3]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE FileInformation[16]; // [rsp+110h] [rbp+8h] BYREF
  unsigned int v25; // [rsp+120h] [rbp+18h]
  _DWORD v26[10]; // [rsp+128h] [rbp+20h] BYREF

  AllocationSize = a1;
  FileHandle = 0LL;
  v1 = 0LL;
  P = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\hiberfil.sys");
  Destination.Length = 0;
  Destination.MaximumLength = DestinationString.Length + IoArcBootDeviceName.Length;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                    PagedPool,
                                    (unsigned __int16)(DestinationString.Length + IoArcBootDeviceName.Length),
                                    0x72626968u);
  if ( !Destination.Buffer )
    return (unsigned int)-1073741670;
  RtlAppendUnicodeStringToString(&Destination, &IoArcBootDeviceName);
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  HiberFileSecurityDescriptor = (void *)PopCreateHiberFileSecurityDescriptor();
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
      goto LABEL_18;
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
    {
      v7 = FileHandle;
      goto LABEL_37;
    }
    v8 = FileHandle;
LABEL_11:
    ZwClose(v8);
    ++v4;
    FileHandle = 0LL;
    v7 = 0LL;
    if ( v4 >= 3 )
      goto LABEL_18;
  }
  v6 = IoStatusBlock.Information == 2;
  v7 = FileHandle;
  v2 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
  if ( v2 < 0 )
    goto LABEL_37;
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
LABEL_18:
  if ( v2 >= 0 )
  {
    memset(v26, 0, sizeof(v26));
    v26[8] = 8198;
    v2 = ZwSetInformationFile(v7, &IoStatusBlock, v26, 0x28u, FileBasicInformation);
    if ( v2 >= 0 )
    {
      v9 = ObReferenceObjectByHandle(v7, 3u, (POBJECT_TYPE)IoFileObjectType, 0, &FileHandle, 0LL);
      v1 = (struct _FILE_OBJECT *)FileHandle;
      v2 = v9;
      if ( v9 >= 0 )
      {
        v20 = AllocationSize;
        v2 = ZwSetInformationFile(v7, &IoStatusBlock, &v20, 8u, FileEndOfFileInformation);
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
        if ( v2 >= 0 )
        {
          if ( Status < 0 )
          {
            v2 = Status;
          }
          else if ( (v1->DeviceObject->Flags & 0x100) != 0 )
          {
            v2 = ZwFsControlFile(v7, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9004Fu, 0LL, 0, 0LL, 0);
            if ( v2 == 259 )
            {
              KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
              v2 = IoStatusBlock.Status;
            }
            if ( v2 >= 0 )
            {
              if ( ZwFlushBuffersFile(v7, &IoStatusBlock) == 259 )
                KeWaitForSingleObject(&v1->Event, Executive, 0, 0, 0LL);
              v2 = PopSanityCheckHiberFile(v7, (__int64)v1, &AllocationSize, (__int64 **)&P, &FileHandle);
              if ( v2 >= 0 )
              {
                v2 = PopSetHiberFileMcb(P, (unsigned int)FileHandle);
                if ( v2 >= 0 )
                {
                  qword_1403034D0 = AllocationSize.QuadPart;
                  PopHiberInfo = v7;
                  FileObject = v1;
                  FsRtlIssueFileNotificationFsctl(v1, v11, (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_HIBERNATION_FILE);
                  PopResetCurrentPolicies(v13, v12);
                  v2 = 0;
                  goto LABEL_41;
                }
              }
            }
          }
          else
          {
            v2 = -1073741823;
          }
        }
      }
    }
  }
LABEL_37:
  if ( v7 )
    ZwClose(v7);
  if ( v1 )
    ObfDereferenceObject(v1);
LABEL_41:
  if ( HiberFileSecurityDescriptor )
    ExFreePoolWithTag(HiberFileSecurityDescriptor, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v2;
}
