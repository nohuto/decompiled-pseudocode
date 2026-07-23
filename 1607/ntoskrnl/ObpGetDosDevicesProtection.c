/*
 * XREFs of ObpGetDosDevicesProtection @ 0x14057A388
 * Callers:
 *     ObpCreateDosDevicesDirectory @ 0x14057A128 (ObpCreateDosDevicesDirectory.c)
 * Callees:
 *     RtlGetAce @ 0x14000BDCC (RtlGetAce.c)
 *     RtlLengthSid @ 0x14000BE2C (RtlLengthSid.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x14048DBDC (RtlAddAccessAllowedAce.c)
 */

__int64 __fastcall ObpGetDosDevicesProtection(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  ULONG v2; // ebx
  ULONG v3; // ebx
  ULONG v4; // ebx
  ULONG v5; // ebx
  ACL *PoolWithTag; // rax
  ACL *v7; // rbp
  PSID v8; // r9
  PSID v9; // r9
  PSID v10; // r9
  ACL *v11; // r8
  ULONG v13; // ebx
  ULONG v14; // ebp
  ACL *v15; // rax
  ACL *v16; // rbx
  PVOID Ace; // [rsp+38h] [rbp+10h] BYREF

  Ace = 0LL;
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( (ObpProtectionMode & 1) != 0 )
  {
    v2 = RtlLengthSid(SeLocalSystemSid);
    v3 = RtlLengthSid(SeWorldSid) + v2;
    v4 = RtlLengthSid(SeCreatorOwnerSid) + 80 + 2 * v3;
    v5 = RtlLengthSid(SeAliasAdminsSid) + v4;
    PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v5, 0x6C636144u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      RtlCreateAcl(PoolWithTag, v5, 2u);
      RtlAddAccessAllowedAce(v7, 2u, 0xA0000000, SeWorldSid);
      RtlAddAccessAllowedAce(v7, 2u, 0x10000000u, SeLocalSystemSid);
      RtlAddAccessAllowedAce(v7, 2u, 0x20000000u, SeWorldSid);
      RtlGetAce(v7, 2u, &Ace);
      v8 = SeAliasAdminsSid;
      *((_BYTE *)Ace + 1) |= 0xBu;
      RtlAddAccessAllowedAce(v7, 2u, 0x10000000u, v8);
      RtlGetAce(v7, 3u, &Ace);
      v9 = SeLocalSystemSid;
      *((_BYTE *)Ace + 1) |= 0xBu;
      RtlAddAccessAllowedAce(v7, 2u, 0x10000000u, v9);
      RtlGetAce(v7, 4u, &Ace);
      v10 = SeCreatorOwnerSid;
      *((_BYTE *)Ace + 1) |= 0xBu;
      RtlAddAccessAllowedAce(v7, 2u, 0x10000000u, v10);
      RtlGetAce(v7, 5u, &Ace);
      v11 = v7;
LABEL_4:
      *((_BYTE *)Ace + 1) |= 0xBu;
      RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v11, 0);
      return 0LL;
    }
  }
  else
  {
    v13 = RtlLengthSid(SeWorldSid);
    v14 = RtlLengthSid(SeLocalSystemSid) + 44 + 2 * v13;
    v15 = (ACL *)ExAllocatePoolWithTag(PagedPool, v14, 0x6C636144u);
    v16 = v15;
    if ( v15 )
    {
      RtlCreateAcl(v15, v14, 2u);
      RtlAddAccessAllowedAce(v16, 2u, 0xE0000000, SeWorldSid);
      RtlAddAccessAllowedAce(v16, 2u, 0x10000000u, SeLocalSystemSid);
      RtlAddAccessAllowedAce(v16, 2u, 0x10000000u, SeWorldSid);
      RtlGetAce(v16, 2u, &Ace);
      v11 = v16;
      goto LABEL_4;
    }
  }
  return 3221225495LL;
}
