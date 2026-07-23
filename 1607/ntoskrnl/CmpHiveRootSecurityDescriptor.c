/*
 * XREFs of CmpHiveRootSecurityDescriptor @ 0x14055EC7C
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x14055D650 (CmpFinishSystemHivesLoad.c)
 *     CmpSetVersionData @ 0x14055DEE8 (CmpSetVersionData.c)
 *     CmpInitializeSystemHive @ 0x1407AD830 (CmpInitializeSystemHive.c)
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 *     CmpInitializePreloadedHives @ 0x1407AE130 (CmpInitializePreloadedHives.c)
 *     CmpCreateRegistryRoot @ 0x1407AE4D4 (CmpCreateRegistryRoot.c)
 * Callees:
 *     RtlGetAce @ 0x14000BDCC (RtlGetAce.c)
 *     RtlSubAuthoritySid @ 0x14000D278 (RtlSubAuthoritySid.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     RtlLengthRequiredSid @ 0x1404781C0 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x140478448 (RtlInitializeSid.c)
 *     RtlAddAccessAllowedAce @ 0x14048DBDC (RtlAddAccessAllowedAce.c)
 */

ACL *CmpHiveRootSecurityDescriptor()
{
  ULONG v0; // ebx
  unsigned __int8 *PoolWithTag; // r13
  unsigned __int8 *v2; // r15
  unsigned __int8 *v3; // r12
  ULONG v4; // ebx
  unsigned __int8 *v5; // rsi
  unsigned __int8 *v6; // rax
  unsigned __int8 *v7; // r14
  ULONG v8; // edi
  ACL *v9; // rax
  ACL *v10; // rbx
  NTSTATUS Acl; // eax
  NTSTATUS v12; // eax
  ACL *v13; // rax
  ACL *v14; // rdi
  NTSTATUS SecurityDescriptor; // [rsp+80h] [rbp+48h]
  NTSTATUS v17; // [rsp+80h] [rbp+48h]
  _BYTE *v18; // [rsp+88h] [rbp+50h] BYREF
  size_t IdentifierAuthority; // [rsp+90h] [rbp+58h] BYREF
  _SID_IDENTIFIER_AUTHORITY v20; // [rsp+98h] [rbp+60h] BYREF

  WORD2(IdentifierAuthority) = 256;
  LODWORD(IdentifierAuthority) = 0;
  LODWORD(v18) = 0;
  WORD2(v18) = 1280;
  *(_DWORD *)v20.Value = 0;
  *(_WORD *)&v20.Value[4] = 3840;
  v0 = RtlLengthRequiredSid(1u);
  PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, v0, 0x20204D43u);
  v2 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, v0, 0x20204D43u);
  v3 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, v0, 0x20204D43u);
  v4 = RtlLengthRequiredSid(2u);
  v5 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, v4, 0x20204D43u);
  v6 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, v4, 0x20204D43u);
  v7 = v6;
  if ( !PoolWithTag || !v2 || !v3 || !v5 || !v6 )
    KeBugCheckEx(0x51u, 0xBuLL, 1uLL, 0LL, 0LL);
  if ( RtlInitializeSid(PoolWithTag, (PSID_IDENTIFIER_AUTHORITY)&IdentifierAuthority, 1u) < 0
    || RtlInitializeSid(v2, (PSID_IDENTIFIER_AUTHORITY)&v18, 1u) < 0
    || RtlInitializeSid(v3, (PSID_IDENTIFIER_AUTHORITY)&v18, 1u) < 0
    || RtlInitializeSid(v5, (PSID_IDENTIFIER_AUTHORITY)&v18, 2u) < 0
    || RtlInitializeSid(v7, &v20, 2u) < 0 )
  {
    KeBugCheckEx(0x51u, 0xBuLL, 2uLL, 0LL, 0LL);
  }
  *RtlSubAuthoritySid(PoolWithTag, 0) = 0;
  *RtlSubAuthoritySid(v2, 0) = 12;
  *RtlSubAuthoritySid(v3, 0) = 18;
  *RtlSubAuthoritySid(v5, 0) = 32;
  *RtlSubAuthoritySid(v5, 1u) = 544;
  *RtlSubAuthoritySid(v7, 0) = 2;
  *RtlSubAuthoritySid(v7, 1u) = 1;
  v8 = 4 * (PoolWithTag[1] + v2[1] + v3[1] + v5[1] + v7[1]) + 88;
  IdentifierAuthority = v8;
  v9 = (ACL *)ExAllocatePoolWithTag(PagedPool, v8, 0x20204D43u);
  v10 = v9;
  if ( !v9 )
    KeBugCheckEx(0x51u, 0xBuLL, 3uLL, 0LL, 0LL);
  Acl = RtlCreateAcl(v9, v8, 2u);
  if ( Acl < 0 )
    KeBugCheckEx(0x51u, 0xBuLL, 4uLL, Acl, 0LL);
  v12 = RtlAddAccessAllowedAce(v10, 2u, 0xF003Fu, v3);
  if ( v12 < 0
    || (v12 = RtlAddAccessAllowedAce(v10, 2u, 0xF003Fu, v5), v12 < 0)
    || (v12 = RtlAddAccessAllowedAce(v10, 2u, 0x20019u, PoolWithTag), v12 < 0)
    || (v12 = RtlAddAccessAllowedAce(v10, 2u, 0x20019u, v2), v12 < 0)
    || (v12 = RtlAddAccessAllowedAce(v10, 2u, 0x20019u, v7), v12 < 0) )
  {
    KeBugCheckEx(0x51u, 0xBuLL, 5uLL, v12, 0LL);
  }
  RtlGetAce(v10, 0, (PVOID *)&v18);
  v18[1] |= 2u;
  RtlGetAce(v10, 1u, (PVOID *)&v18);
  v18[1] |= 2u;
  RtlGetAce(v10, 2u, (PVOID *)&v18);
  v18[1] |= 2u;
  RtlGetAce(v10, 3u, (PVOID *)&v18);
  v18[1] |= 2u;
  RtlGetAce(v10, 4u, (PVOID *)&v18);
  v18[1] |= 2u;
  v13 = (ACL *)ExAllocatePoolWithTag(PagedPool, v8 + 40LL, 0x20204D43u);
  v14 = v13;
  if ( !v13 )
    KeBugCheckEx(0x51u, 0xBuLL, 6uLL, 0LL, 0LL);
  memmove(&v13[5], v10, IdentifierAuthority);
  SecurityDescriptor = RtlCreateSecurityDescriptor(v14, 1u);
  if ( SecurityDescriptor < 0 )
  {
    ExFreePoolWithTag(v14, 0);
    KeBugCheckEx(0x51u, 0xBuLL, 7uLL, SecurityDescriptor, 0LL);
  }
  v17 = RtlSetDaclSecurityDescriptor(v14, 1u, v14 + 5, 0);
  if ( v17 < 0 )
  {
    ExFreePoolWithTag(v14, 0);
    KeBugCheckEx(0x51u, 0xBuLL, 8uLL, v17, 0LL);
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(v3, 0);
  ExFreePoolWithTag(v5, 0);
  ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(v10, 0);
  return v14;
}
