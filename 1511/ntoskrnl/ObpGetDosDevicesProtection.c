/*
 * XREFs of ObpGetDosDevicesProtection @ 0x14076D55C
 * Callers:
 *     ObpCreateDosDevicesDirectory @ 0x14076D380 (ObpCreateDosDevicesDirectory.c)
 * Callees:
 *     RtlGetAce @ 0x140003350 (RtlGetAce.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     RtlAddAccessAllowedAce @ 0x1403C01BC (RtlAddAccessAllowedAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1403C091C (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14043549C (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
 */

__int64 __fastcall ObpGetDosDevicesProtection(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  ULONG v2; // ebx
  ACL *PoolWithTag; // rax
  ACL *v4; // rbp
  PSID v5; // r9
  PSID v6; // r9
  PSID v7; // r9
  ACL *v8; // r8
  ULONG v10; // ebp
  ACL *v11; // rax
  ACL *v12; // rbx
  PVOID Ace; // [rsp+38h] [rbp+10h] BYREF

  Ace = 0LL;
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( (ObpProtectionMode & 1) != 0 )
  {
    v2 = 4
       * (*((unsigned __int8 *)SeAliasAdminsSid + 1)
        + *((unsigned __int8 *)SeCreatorOwnerSid + 1)
        + 32
        + 2 * (*((unsigned __int8 *)SeWorldSid + 1) + *((unsigned __int8 *)SeLocalSystemSid + 1)));
    PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v2, 0x6C636144u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      RtlCreateAcl(PoolWithTag, v2, 2u);
      RtlAddAccessAllowedAce(v4, 2u, 0xA0000000, SeWorldSid);
      RtlAddAccessAllowedAce(v4, 2u, 0x10000000u, SeLocalSystemSid);
      RtlAddAccessAllowedAce(v4, 2u, 0x20000000u, SeWorldSid);
      RtlGetAce(v4, 2u, &Ace);
      v5 = SeAliasAdminsSid;
      *((_BYTE *)Ace + 1) |= 0xBu;
      RtlAddAccessAllowedAce(v4, 2u, 0x10000000u, v5);
      RtlGetAce(v4, 3u, &Ace);
      v6 = SeLocalSystemSid;
      *((_BYTE *)Ace + 1) |= 0xBu;
      RtlAddAccessAllowedAce(v4, 2u, 0x10000000u, v6);
      RtlGetAce(v4, 4u, &Ace);
      v7 = SeCreatorOwnerSid;
      *((_BYTE *)Ace + 1) |= 0xBu;
      RtlAddAccessAllowedAce(v4, 2u, 0x10000000u, v7);
      RtlGetAce(v4, 5u, &Ace);
      v8 = v4;
LABEL_4:
      *((_BYTE *)Ace + 1) |= 0xBu;
      RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v8, 0);
      return 0LL;
    }
  }
  else
  {
    v10 = 4 * (*((unsigned __int8 *)SeLocalSystemSid + 1) + 2 * *((unsigned __int8 *)SeWorldSid + 1)) + 68;
    v11 = (ACL *)ExAllocatePoolWithTag(PagedPool, v10, 0x6C636144u);
    v12 = v11;
    if ( v11 )
    {
      RtlCreateAcl(v11, v10, 2u);
      RtlAddAccessAllowedAce(v12, 2u, 0xE0000000, SeWorldSid);
      RtlAddAccessAllowedAce(v12, 2u, 0x10000000u, SeLocalSystemSid);
      RtlAddAccessAllowedAce(v12, 2u, 0x10000000u, SeWorldSid);
      RtlGetAce(v12, 2u, &Ace);
      v8 = v12;
      goto LABEL_4;
    }
  }
  return 3221225495LL;
}
