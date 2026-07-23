/*
 * XREFs of RtlCreateSystemVolumeInformationFolder @ 0x14052A1F8
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     NtCreateFile @ 0x14045A7C0 (NtCreateFile.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x14052A408 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14052A55C (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolTakeOwnership @ 0x140688E7C (RtlpSysVolTakeOwnership.c)
 */

NTSTATUS __stdcall RtlCreateSystemVolumeInformationFolder(PCUNICODE_STRING VolumeRootPath)
{
  unsigned __int16 Length; // ax
  unsigned __int16 v3; // di
  unsigned __int16 v4; // dx
  char v5; // si
  PVOID PoolWithTag; // rax
  unsigned __int16 v7; // ax
  int v8; // ebx
  HANDLE v9; // rdi
  PVOID v10; // rcx
  _WORD v12[4]; // [rsp+60h] [rbp-19h] BYREF
  PVOID P; // [rsp+68h] [rbp-11h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+7h] BYREF
  HANDLE FileHandle; // [rsp+E0h] [rbp+67h] BYREF
  PVOID v17; // [rsp+E8h] [rbp+6Fh] BYREF

  RtlInitUnicodeString(&DestinationString, L"System Volume Information");
  Length = VolumeRootPath->Length;
  v3 = DestinationString.Length;
  v4 = DestinationString.Length + VolumeRootPath->Length;
  v12[0] = v4;
  if ( (unsigned __int16)(DestinationString.Length + Length) < Length || v4 < DestinationString.Length )
    return -1073741811;
  if ( VolumeRootPath->Buffer[((unsigned __int64)Length >> 1) - 1] == 92 )
  {
    v5 = 0;
  }
  else
  {
    v4 += 2;
    v5 = 1;
    v12[0] = v4;
  }
  v12[1] = v4 + 2;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v4 + 2), 0x536C6F56u);
  P = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memmove(PoolWithTag, VolumeRootPath->Buffer, VolumeRootPath->Length);
  v7 = VolumeRootPath->Length;
  v12[0] = VolumeRootPath->Length;
  if ( v5 )
  {
    *((_WORD *)P + ((unsigned __int64)v7 >> 1)) = 92;
    v7 = v12[0] + 2;
    v12[0] += 2;
  }
  memmove((char *)P + v7, DestinationString.Buffer, v3);
  v12[0] += v3;
  *((_WORD *)P + ((unsigned __int64)v12[0] >> 1)) = 0;
  v8 = RtlpSysVolCreateSecurityDescriptor(&FileHandle, &v17);
  if ( v8 < 0 )
  {
    v10 = P;
  }
  else
  {
    v9 = FileHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v12;
    ObjectAttributes.SecurityDescriptor = FileHandle;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    if ( NtCreateFile(
           &FileHandle,
           0x10000u,
           &ObjectAttributes,
           (PIO_STATUS_BLOCK)&DestinationString,
           0LL,
           0,
           7u,
           1u,
           0x201060u,
           0LL,
           0) >= 0 )
      NtClose(FileHandle);
    v8 = NtCreateFile(
           &FileHandle,
           0x1E0000u,
           &ObjectAttributes,
           (PIO_STATUS_BLOCK)&DestinationString,
           0LL,
           6u,
           7u,
           3u,
           0x21u,
           0LL,
           0);
    if ( v8 < 0 )
    {
      RtlpSysVolTakeOwnership(v12);
      v8 = NtCreateFile(
             &FileHandle,
             0x1E0000u,
             &ObjectAttributes,
             (PIO_STATUS_BLOCK)&DestinationString,
             0LL,
             6u,
             7u,
             3u,
             0x21u,
             0LL,
             0);
    }
    ExFreePoolWithTag(P, 0);
    if ( v8 < 0 )
    {
      ExFreePoolWithTag(v17, 0);
      v10 = v9;
    }
    else
    {
      ExFreePoolWithTag(v9, 0);
      v8 = RtlpSysVolCheckOwnerAndSecurity(FileHandle, (PACL)v17);
      NtClose(FileHandle);
      v10 = v17;
    }
  }
  ExFreePoolWithTag(v10, 0);
  return v8;
}
