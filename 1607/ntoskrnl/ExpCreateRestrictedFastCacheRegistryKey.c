/*
 * XREFs of ExpCreateRestrictedFastCacheRegistryKey @ 0x1406AED54
 * Callers:
 *     ExpObtainFastCacheKeyBody @ 0x14057A65C (ExpObtainFastCacheKeyBody.c)
 * Callees:
 *     RtlLengthSid @ 0x14000C2AC (RtlLengthSid.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwCreateKey @ 0x14015A020 (ZwCreateKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140413E70 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140413ED0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140420AB8 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x14048D14C (RtlAddAccessAllowedAce.c)
 *     RtlCompareUnicodeString @ 0x1404FF850 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall ExpCreateRestrictedFastCacheRegistryKey(UNICODE_STRING *String1, HANDLE *a2)
{
  ULONG v4; // ebx
  ULONG v5; // ebx
  ACL *PoolWithTag; // rax
  ACL *v7; // rdi
  NTSTATUS Acl; // ebx
  _BYTE SecurityDescriptor[40]; // [rsp+40h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+Fh] BYREF
  HANDLE KeyHandle; // [rsp+D0h] [rbp+77h] BYREF

  v4 = RtlLengthSid(SeAliasAdminsSid);
  v5 = RtlLengthSid(SeLocalSystemSid) + 24 + v4;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v5, 0x20534C53u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    Acl = RtlCreateAcl(PoolWithTag, v5, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v7, 2u, 0x10000000u, SeLocalSystemSid);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v7, 2u, 0x10000000u, SeAliasAdminsSid);
        if ( Acl >= 0 )
        {
          Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
          if ( Acl >= 0 )
          {
            Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0);
            if ( Acl >= 0 )
            {
              if ( !RtlCompareUnicodeString(String1, &stru_1406E9CC8, 0) )
                goto LABEL_11;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.SecurityQualityOfService = 0LL;
              ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
              ObjectAttributes.Length = 48;
              ObjectAttributes.Attributes = 576;
              ObjectAttributes.ObjectName = (PUNICODE_STRING)&stru_1406E9CC8;
              Acl = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
              if ( Acl >= 0 )
              {
                ZwClose(KeyHandle);
LABEL_11:
                ObjectAttributes.RootDirectory = 0LL;
                ObjectAttributes.SecurityQualityOfService = 0LL;
                ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
                ObjectAttributes.Length = 48;
                ObjectAttributes.Attributes = 576;
                ObjectAttributes.ObjectName = String1;
                Acl = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
                if ( Acl >= 0 )
                  *a2 = KeyHandle;
              }
            }
          }
        }
      }
    }
    ExFreePoolWithTag(v7, 0x20534C53u);
    return (unsigned int)Acl;
  }
  return (unsigned int)-1073741801;
}
