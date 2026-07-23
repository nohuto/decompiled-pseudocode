/*
 * XREFs of MiSystemPartitionObjectCreate @ 0x1407A13BC
 * Callers:
 *     MiInitializePartitions @ 0x1407A1300 (MiInitializePartitions.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x14048DBDC (RtlAddAccessAllowedAce.c)
 *     MiPartitionObjectCreate @ 0x1405533A8 (MiPartitionObjectCreate.c)
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
  __int64 v11; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
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
            Acl = MiPartitionObjectCreate((__int64)MiSystemPartition, (__int64)&v5, 0x1F0003u, 0, &v11);
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
