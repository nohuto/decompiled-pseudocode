/*
 * XREFs of CmpAdminSystemSecurityDescriptor @ 0x14055EA88
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x14055D650 (CmpFinishSystemHivesLoad.c)
 * Callees:
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

ACL *CmpAdminSystemSecurityDescriptor()
{
  ULONG v0; // eax
  unsigned __int8 *PoolWithTag; // rbp
  ULONG v2; // eax
  unsigned __int8 *v3; // rax
  unsigned __int8 *v4; // rdi
  ULONG v5; // ebx
  ULONG v6; // r14d
  ACL *v7; // rax
  ACL *v8; // rsi
  NTSTATUS Acl; // eax
  NTSTATUS v10; // eax
  ACL *v11; // rax
  ACL *v12; // rbx
  NTSTATUS SecurityDescriptor; // eax
  ULONG_PTR v14; // r14
  NTSTATUS v15; // eax
  ULONG_PTR v16; // r14
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+60h] [rbp+8h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v0 = RtlLengthRequiredSid(1u);
  PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, v0, 0x20204D43u);
  v2 = RtlLengthRequiredSid(2u);
  v3 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, v2, 0x20204D43u);
  v4 = v3;
  if ( !PoolWithTag || !v3 )
    KeBugCheckEx(0x51u, 0xBuLL, 1uLL, 0LL, 0LL);
  if ( RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 1u) < 0 || RtlInitializeSid(v4, &IdentifierAuthority, 2u) < 0 )
    KeBugCheckEx(0x51u, 0xBuLL, 2uLL, 0LL, 0LL);
  *RtlSubAuthoritySid(PoolWithTag, 0) = 18;
  *RtlSubAuthoritySid(v4, 0) = 32;
  *RtlSubAuthoritySid(v4, 1u) = 544;
  v5 = 4 * (PoolWithTag[1] + v4[1]) + 40;
  v6 = v5;
  v7 = (ACL *)ExAllocatePoolWithTag(PagedPool, v5, 0x20204D43u);
  v8 = v7;
  if ( !v7 )
    KeBugCheckEx(0x51u, 0xBuLL, 3uLL, 0LL, 0LL);
  Acl = RtlCreateAcl(v7, v5, 2u);
  if ( Acl < 0 )
    KeBugCheckEx(0x51u, 0xBuLL, 4uLL, Acl, 0LL);
  v10 = RtlAddAccessAllowedAce(v8, 2u, 0x1F01FFu, PoolWithTag);
  if ( v10 < 0 || (v10 = RtlAddAccessAllowedAce(v8, 2u, 0x1F01FFu, v4), v10 < 0) )
    KeBugCheckEx(0x51u, 0xBuLL, 5uLL, v10, 0LL);
  v11 = (ACL *)ExAllocatePoolWithTag(PagedPool, v5 + 40LL, 0x20204D43u);
  v12 = v11;
  if ( !v11 )
    KeBugCheckEx(0x51u, 0xBuLL, 6uLL, 0LL, 0LL);
  memmove(&v11[5], v8, v6);
  SecurityDescriptor = RtlCreateSecurityDescriptor(v12, 1u);
  v14 = SecurityDescriptor;
  if ( SecurityDescriptor < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    KeBugCheckEx(0x51u, 0xBuLL, 7uLL, v14, 0LL);
  }
  v15 = RtlSetDaclSecurityDescriptor(v12, 1u, v12 + 5, 0);
  v16 = v15;
  if ( v15 < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    KeBugCheckEx(0x51u, 0xBuLL, 8uLL, v16, 0LL);
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  ExFreePoolWithTag(v4, 0);
  ExFreePoolWithTag(v8, 0);
  return v12;
}
