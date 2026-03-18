/*
 * XREFs of MiSystemPartitionObjectCreate @ 0x14075A6E8
 * Callers:
 *     MiInitializePartitions @ 0x14075A5B8 (MiInitializePartitions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14009C26C (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlAddAccessAllowedAce @ 0x1403C01BC (RtlAddAccessAllowedAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1403C091C (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14043549C (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
 *     MiPartitionObjectCreate @ 0x1405261F8 (MiPartitionObjectCreate.c)
 */

NTSTATUS MiSystemPartitionObjectCreate()
{
  NTSTATUS result; // eax
  ULONG v1; // ebx
  ACL *PoolWithTag; // rax
  ACL *v3; // rdi
  NTSTATUS Acl; // ebx
  int v5; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v6; // [rsp+38h] [rbp-C8h]
  UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-C0h]
  int v8; // [rsp+48h] [rbp-B8h]
  _BYTE *v9; // [rsp+50h] [rbp-B0h]
  __int64 v10; // [rsp+58h] [rbp-A8h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v12; // [rsp+70h] [rbp-90h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+78h] [rbp-88h] BYREF
  wchar_t pszDest[104]; // [rsp+A0h] [rbp-60h] BYREF

  RtlStringCbPrintfW(pszDest, 0xC2uLL, L"\\KernelObjects\\MemoryPartition%d", 0LL);
  RtlInitUnicodeString(&DestinationString, pszDest);
  result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( result >= 0 )
  {
    v1 = 4 * *((unsigned __int8 *)SeAliasAdminsSid + 1) + 28;
    PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v1, 0x6C636144u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      Acl = RtlCreateAcl(PoolWithTag, v1, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v3, 2u, 0x1F0003u, SeAliasAdminsSid);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v3, 0);
          if ( Acl >= 0 )
          {
            v6 = 0LL;
            v10 = 0LL;
            p_DestinationString = &DestinationString;
            v5 = 48;
            v9 = SecurityDescriptor;
            v8 = 512;
            Acl = MiPartitionObjectCreate((__int64)MiSystemPartition, (__int64)&v5, 0x1F0003u, 0, &v12);
          }
        }
      }
      ExFreePoolWithTag(v3, 0);
      return Acl;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
