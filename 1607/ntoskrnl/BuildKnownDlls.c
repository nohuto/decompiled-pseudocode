/*
 * XREFs of BuildKnownDlls @ 0x1407A34E0
 * Callers:
 *     StartFirstUserProcess @ 0x1407A263C (StartFirstUserProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x14015B570 (ZwCreateDirectoryObject.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     NtCreateSymbolicLinkObject @ 0x1404729FC (NtCreateSymbolicLinkObject.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140479BD8 (RtlSetSaclSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x14048DBDC (RtlAddAccessAllowedAce.c)
 *     PsWow64IsMachineSupported @ 0x1404FE060 (PsWow64IsMachineSupported.c)
 *     RtlAddProcessTrustLabelAce @ 0x140553FF8 (RtlAddProcessTrustLabelAce.c)
 *     ExpandKnownDllsPath @ 0x1407A38A0 (ExpandKnownDllsPath.c)
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
  NTSTATUS v12; // eax
  int v13; // eax
  NTSTATUS v14; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-89h] BYREF
  HANDLE DirectoryHandle; // [rsp+60h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-51h] BYREF
  UNICODE_STRING Destination; // [rsp+78h] [rbp-41h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+88h] [rbp-31h] BYREF
  HANDLE SymbolicLinkHandle; // [rsp+B0h] [rbp-9h] BYREF
  UNICODE_STRING Name; // [rsp+B8h] [rbp-1h] BYREF
  HANDLE v22; // [rsp+120h] [rbp+67h] BYREF
  HANDLE v23; // [rsp+128h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+130h] [rbp+77h] BYREF
  HANDLE v25; // [rsp+138h] [rbp+7Fh] BYREF

  v22 = 0LL;
  Handle = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  v0 = 4
     * (*((unsigned __int8 *)SeAliasAdminsSid + 1)
      + *((unsigned __int8 *)SeWorldSid + 1)
      + *((unsigned __int8 *)SeRestrictedSid + 1)
      + *((unsigned __int8 *)SeAllAppPackagesSid + 1)
      + *((unsigned __int8 *)SeAllRestrictedAppPackagesSid + 1))
     + 108;
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
  RtlAddAccessAllowedAce(v2, 2u, 0xA0000000, SeAllRestrictedAppPackagesSid);
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
    if ( PsWow64IsMachineSupported(332LL) )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&NtKnownDllsObjectDirectoryName32;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
      ObjectAttributes.Attributes = 80;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      v7 = ZwCreateDirectoryObject(&v22, 0xF000Fu, &ObjectAttributes);
      if ( v7 < 0 )
        KeBugCheckEx(0x6Du, v7, 1uLL, 3uLL, 0LL);
    }
    if ( PsWow64IsMachineSupported(452LL) )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&NtKnownDllsObjectDirectoryNameArm32;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
      ObjectAttributes.Attributes = 80;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      v12 = ZwCreateDirectoryObject(&v23, 0xF000Fu, &ObjectAttributes);
      if ( v12 < 0 )
        KeBugCheckEx(0x6Du, v12, 1uLL, 3uLL, 0LL);
    }
  }
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v2, 0);
  RtlInitUnicodeString(&DestinationString, L"\\System32");
  v8 = ExpandKnownDllsPath(&DestinationString, &Name);
  if ( v8 < 0 )
    KeBugCheckEx(0x6Du, v8, 1uLL, 4uLL, 0LL);
  ObjectAttributes.RootDirectory = DirectoryHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&NtKnownDllsPathSymLink;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v9 = NtCreateSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes, &Name);
  if ( v9 < 0 )
    KeBugCheckEx(0x6Du, v9, 1uLL, 5uLL, 0LL);
  if ( v22 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\SysWoW64");
    v10 = ExpandKnownDllsPath(&DestinationString, &Destination);
    if ( v10 < 0 )
      KeBugCheckEx(0x6Du, v10, 1uLL, 6uLL, 0LL);
    ObjectAttributes.RootDirectory = v22;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&NtKnownDllsPathSymLink;
    ObjectAttributes.Attributes = 80;
    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v11 = NtCreateSymbolicLinkObject(&Handle, 0xF0001u, &ObjectAttributes, &Destination);
    if ( v11 < 0 )
      KeBugCheckEx(0x6Du, v11, 1uLL, 7uLL, 0LL);
    ZwClose(Handle);
    ZwClose(v22);
    ExFreePoolWithTag(Destination.Buffer, 0x74696E49u);
  }
  if ( v23 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\SysArm32");
    v13 = ExpandKnownDllsPath(&DestinationString, &Destination);
    if ( v13 < 0 )
      KeBugCheckEx(0x6Du, v13, 1uLL, 6uLL, 0LL);
    ObjectAttributes.RootDirectory = v23;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&NtKnownDllsPathSymLink;
    ObjectAttributes.Attributes = 80;
    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v14 = NtCreateSymbolicLinkObject(&v25, 0xF0001u, &ObjectAttributes, &Destination);
    if ( v14 < 0 )
      KeBugCheckEx(0x6Du, v14, 1uLL, 7uLL, 0LL);
    ZwClose(v25);
    ZwClose(v23);
    ExFreePoolWithTag(Destination.Buffer, 0x74696E49u);
  }
  ZwClose(SymbolicLinkHandle);
  ZwClose(DirectoryHandle);
  ExFreePoolWithTag(Name.Buffer, 0x74696E49u);
  ExFreePoolWithTag(v5, 0x74696E49u);
  ExFreePoolWithTag(v2, 0x74696E49u);
}
