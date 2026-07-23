/*
 * XREFs of IopApplySystemPartitionProt @ 0x1407CE99C
 * Callers:
 *     IopProtectSystemPartition @ 0x1407BC468 (IopProtectSystemPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140074D74 (RtlInitAnsiString.c)
 *     ExAllocatePoolWithTagPriority @ 0x14007E290 (ExAllocatePoolWithTagPriority.c)
 *     RtlStringCchPrintfA @ 0x14013C380 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x14015A850 (ZwOpenFile.c)
 *     ZwSetSecurityObject @ 0x14015D470 (ZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F54C4 (RtlAnsiStringToUnicodeString.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     RtlAddAccessAllowedAce @ 0x14048DBDC (RtlAddAccessAllowedAce.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 */

__int64 __fastcall IopApplySystemPartitionProt(__int64 a1)
{
  ULONG v2; // ebx
  ACL *PoolWithTagPriority; // rax
  ACL *v4; // rdi
  NTSTATUS Acl; // ebx
  HANDLE FileHandle; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C8h] BYREF
  _STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+90h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-50h] BYREF
  char pszFormat[16]; // [rsp+C8h] [rbp-40h] BYREF
  char pszDest[256]; // [rsp+D8h] [rbp-30h] BYREF

  strcpy(pszFormat, "\\ArcName\\%s");
  v2 = 4 * (*((unsigned __int8 *)SeLocalSystemSid + 1) + *((unsigned __int8 *)SeAliasAdminsSid + 1)) + 56;
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = (ACL *)ExAllocatePoolWithTagPriority(
                                   PagedPool,
                                   v2,
                                   0x20206F49u,
                                   (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = (ACL *)ExAllocatePoolWithTag(PagedPool, v2, 0x20206F49u);
  v4 = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
    return 3221225626LL;
  Acl = RtlCreateAcl(PoolWithTagPriority, v2, 2u);
  if ( Acl >= 0 )
  {
    Acl = RtlAddAccessAllowedAce(v4, 2u, 0x10000000u, SeLocalSystemSid);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v4, 2u, 0xE0020000, SeAliasAdminsSid);
      if ( Acl >= 0 )
      {
        Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v4, 0);
          if ( Acl >= 0 )
          {
            RtlStringCchPrintfA(pszDest, 0x100uLL, pszFormat, *(_QWORD *)(a1 + 192));
            RtlInitAnsiString(&DestinationString, pszDest);
            Acl = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
            if ( Acl >= 0 )
            {
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.ObjectName = &UnicodeString;
              ObjectAttributes.Length = 48;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              Acl = ZwOpenFile(&FileHandle, 0x40000u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
              RtlFreeAnsiString(&UnicodeString);
              if ( Acl >= 0 )
              {
                Acl = ZwSetSecurityObject(FileHandle, 4u, SecurityDescriptor);
                NtClose(FileHandle);
              }
            }
          }
        }
      }
    }
  }
  ExFreePoolWithTag(v4, 0);
  return (unsigned int)Acl;
}
