/*
 * XREFs of PopCreateHiberFileSecurityDescriptor @ 0x1405C0314
 * Callers:
 *     PopCreateHiberFile @ 0x1405C5930 (PopCreateHiberFile.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x140044DFC (RtlSubAuthoritySid.c)
 *     RtlGetAce @ 0x1400CEFDC (RtlGetAce.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlAddAccessAllowedAce @ 0x140415C28 (RtlAddAccessAllowedAce.c)
 *     RtlLengthRequiredSid @ 0x140470D24 (RtlLengthRequiredSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404D03E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1404D0440 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404D058C (RtlCreateAcl.c)
 *     RtlInitializeSid @ 0x1405447D8 (RtlInitializeSid.c)
 */

ACL *PopCreateHiberFileSecurityDescriptor()
{
  ACL *v0; // rbx
  ACL *v1; // rdi
  ULONG v2; // eax
  unsigned __int8 *PoolWithTag; // rax
  unsigned __int8 *v4; // rsi
  __int64 v5; // rbp
  ACL *v6; // rax
  NTSTATUS v7; // edx
  ACL *v8; // rax
  NTSTATUS SecurityDescriptor; // eax
  NTSTATUS v10; // eax
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+50h] [rbp+8h] BYREF
  PVOID Ace; // [rsp+58h] [rbp+10h] BYREF

  v0 = 0LL;
  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  v1 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v2 = RtlLengthRequiredSid(1u);
  PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, v2, 0x72626968u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return v0;
  if ( RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 1u) >= 0 )
  {
    *RtlSubAuthoritySid(v4, 0) = 0;
    v5 = 4 * (unsigned int)v4[1] + 24;
    if ( (unsigned int)v5 < 4 * (unsigned int)v4[1] + 16 )
    {
      if ( (PoDebug & 1) != 0 )
        DbgPrint("PopCreateHiberFileSecurityDescriptor: Overflowed while generating required ACL size\n");
      goto LABEL_25;
    }
    v6 = (ACL *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v5, 0x72626968u);
    v1 = v6;
    if ( !v6 )
    {
      if ( (PoDebug & 1) != 0 )
        DbgPrint("PopCreateHiberFileSecurityDescriptor: couldn't allocate ACL\n");
      goto LABEL_25;
    }
    if ( RtlCreateAcl(v6, v5, 2u) < 0 )
    {
      if ( (PoDebug & 1) != 0 )
        DbgPrint("PopCreateHiberFileSecurityDescriptor: couldn't initialize ACL\n");
      goto LABEL_25;
    }
    v7 = RtlAddAccessAllowedAce(v1, 2u, 0x10000u, v4);
    if ( v7 < 0 )
    {
      if ( (PoDebug & 1) != 0 )
        DbgPrint("PopCreateHiberFileSecurityDescriptor: RtlAddAce failed status %08lx\n", v7);
      goto LABEL_25;
    }
    RtlGetAce(v1, 0, &Ace);
    *((_BYTE *)Ace + 1) |= 2u;
    v8 = (ACL *)ExAllocatePoolWithTag(PagedPool, v5 + 40, 0x72626968u);
    v0 = v8;
    if ( !v8 )
    {
      if ( (PoDebug & 1) != 0 )
        DbgPrint("PopCreateHiberFileSecurityDescriptor: Couldn't allocate Sec. Desc.\n");
      goto LABEL_25;
    }
    memmove(&v8[5], v1, (unsigned int)v5);
    SecurityDescriptor = RtlCreateSecurityDescriptor(v0, 1u);
    if ( SecurityDescriptor < 0 )
    {
      if ( (PoDebug & 1) != 0 )
        DbgPrint("PopCreateHiberFileSecurityDescriptor: CreateSecDesc failed %08lx\n", (unsigned int)SecurityDescriptor);
LABEL_19:
      ExFreePoolWithTag(v0, 0);
      goto LABEL_25;
    }
    v10 = RtlSetDaclSecurityDescriptor(v0, 1u, v0 + 5, 0);
    if ( v10 < 0 )
    {
      if ( (PoDebug & 1) != 0 )
        DbgPrint("PopCreateHiberFileSecurityDescriptor: SetDacl failed %08lx\n", (unsigned int)v10);
      goto LABEL_19;
    }
  }
LABEL_25:
  ExFreePoolWithTag(v4, 0);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  return v0;
}
