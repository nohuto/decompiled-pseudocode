/*
 * XREFs of BuildKnownDlls @ 0x14075C938
 * Callers:
 *     StartFirstUserProcess @ 0x14075BB50 (StartFirstUserProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x140151980 (ZwCreateDirectoryObject.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlAddAccessAllowedAce @ 0x1403C01BC (RtlAddAccessAllowedAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1403C091C (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1403C0948 (RtlSetSaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14043549C (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
 *     NtCreateSymbolicLinkObject @ 0x1404B0E34 (NtCreateSymbolicLinkObject.c)
 *     RtlAddProcessTrustLabelAce @ 0x140528188 (RtlAddProcessTrustLabelAce.c)
 *     ExpandKnownDllsPath @ 0x14075CCB4 (ExpandKnownDllsPath.c)
 */

void BuildKnownDlls()
{
  ULONG v0; // edi
  ACL *PoolWithTag; // rax
  ACL *v2; // rbx
  ULONG v3; // esi
  ACL *v4; // rax
  ACL *v5; // rdi
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  int v8; // eax
  NTSTATUS v9; // eax
  int v10; // eax
  NTSTATUS v11; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-79h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-49h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+70h] [rbp-39h] BYREF
  UNICODE_STRING Name; // [rsp+98h] [rbp-11h] BYREF
  UNICODE_STRING Destination; // [rsp+A8h] [rbp-1h] BYREF
  HANDLE v17; // [rsp+110h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+118h] [rbp+6Fh] BYREF
  HANDLE DirectoryHandle; // [rsp+120h] [rbp+77h] BYREF
  HANDLE SymbolicLinkHandle; // [rsp+128h] [rbp+7Fh] BYREF

  v17 = 0LL;
  Handle = 0LL;
  if ( NtKnownDllsPathSize32 == -1 )
    NtKnownDllsPathSize32 = 0;
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  v0 = 4
     * (*((unsigned __int8 *)SeAliasAdminsSid + 1)
      + *((unsigned __int8 *)SeWorldSid + 1)
      + *((unsigned __int8 *)SeRestrictedSid + 1)
      + *((unsigned __int8 *)SeAllAppPackagesSid + 1))
     + 88;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v0, 0x74696E49u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheckEx(0x6Du, 0xFFFFFFFFC000009AuLL, 1uLL, 0LL, 0LL);
  RtlCreateAcl(PoolWithTag, v0, 2u);
  v3 = 4 * *((unsigned __int8 *)SeProcTrustLiteWinTcbSid + 1) + 28;
  v4 = (ACL *)ExAllocatePoolWithTag(PagedPool, v3, 0x74696E49u);
  v5 = v4;
  if ( !v4 )
    KeBugCheckEx(0x6Du, 0xFFFFFFFFC000009AuLL, 1uLL, 1uLL, 0LL);
  RtlCreateAcl(v4, v3, 2u);
  RtlAddAccessAllowedAce(v2, 2u, 0x10000000u, SeAliasAdminsSid);
  RtlAddAccessAllowedAce(v2, 2u, 0xA0000000, SeWorldSid);
  RtlAddAccessAllowedAce(v2, 2u, 0xA0000000, SeRestrictedSid);
  RtlAddAccessAllowedAce(v2, 2u, 0xA0000000, SeAllAppPackagesSid);
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v2, 0);
  RtlAddProcessTrustLabelAce(v5, 2u, 0, SeProcTrustLiteWinTcbSid, 0x14u, 0x20003u);
  RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, v5, 0);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&NtKnownDllsObjectDirectoryName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v6 = ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
  if ( v6 < 0 )
    KeBugCheckEx(0x6Du, v6, 1uLL, 2uLL, 0LL);
  if ( !InitIsWinPEMode )
  {
    if ( NtKnownDllsPathSize32 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&NtKnownDllsObjectDirectoryName32;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
      ObjectAttributes.Attributes = 80;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      v7 = ZwCreateDirectoryObject(&v17, 0xF000Fu, &ObjectAttributes);
      if ( v7 < 0 )
        KeBugCheckEx(0x6Du, v7, 1uLL, 3uLL, 0LL);
    }
  }
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v2, 0);
  RtlInitUnicodeString(&DestinationString, &NtKnownDllsPath);
  v8 = ExpandKnownDllsPath(&DestinationString, &Name);
  if ( v8 < 0 )
    KeBugCheckEx(0x6Du, v8, 1uLL, 4uLL, 0LL);
  ObjectAttributes.RootDirectory = DirectoryHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&NtKnownDllsPathSymLink;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v9 = NtCreateSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes, &Name);
  if ( v9 < 0 )
    KeBugCheckEx(0x6Du, v9, 1uLL, 5uLL, 0LL);
  if ( v17 )
  {
    RtlInitUnicodeString(&DestinationString, &NtKnownDllsPath32);
    v10 = ExpandKnownDllsPath(&DestinationString, &Destination);
    if ( v10 < 0 )
      KeBugCheckEx(0x6Du, v10, 1uLL, 6uLL, 0LL);
    ObjectAttributes.RootDirectory = v17;
    ObjectAttributes.Length = 48;
    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
    ObjectAttributes.Attributes = 80;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&NtKnownDllsPathSymLink;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v11 = NtCreateSymbolicLinkObject(&Handle, 0xF0001u, &ObjectAttributes, &Destination);
    if ( v11 < 0 )
      KeBugCheckEx(0x6Du, v11, 1uLL, 7uLL, 0LL);
    ZwClose(Handle);
    ZwClose(v17);
    ExFreePoolWithTag(Destination.Buffer, 0x74696E49u);
  }
  ZwClose(SymbolicLinkHandle);
  ZwClose(DirectoryHandle);
  ExFreePoolWithTag(Name.Buffer, 0x74696E49u);
  ExFreePoolWithTag(v5, 0x74696E49u);
  ExFreePoolWithTag(v2, 0x74696E49u);
}
