/*
 * XREFs of RtlGetAppContainerParent @ 0x140646A50
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1401F66E8 (RtlGetAppContainerNamedObjectPath.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14003D36C (RtlSubAuthoritySid.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlGetAppContainerSidType @ 0x1403C09F4 (RtlGetAppContainerSidType.c)
 *     RtlLengthRequiredSid @ 0x14046C3B0 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x1404AA898 (RtlInitializeSid.c)
 */

NTSTATUS __cdecl RtlGetAppContainerParent(PSID AppContainerSid, PSID *AppContainerSidParent)
{
  ULONG v4; // eax
  ULONG *PoolWithQuotaTag; // rax
  ULONG *v6; // rbx
  int v8; // edi
  unsigned __int8 v9; // di
  ULONG *v10; // r14
  PULONG v11; // rax
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+48h] [rbp+10h] BYREF

  *AppContainerSidParent = 0LL;
  if ( RtlGetAppContainerSidType(AppContainerSid, &AppContainerSidType) < 0
    || AppContainerSidType != ChildAppContainerSidType )
  {
    return -1073741811;
  }
  v4 = RtlLengthRequiredSid(8u);
  PoolWithQuotaTag = (ULONG *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v4, 0x62507452u);
  v6 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return -1073741670;
  v8 = RtlInitializeSid(PoolWithQuotaTag, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 8u);
  if ( v8 < 0 )
  {
    ExFreePoolWithTag(v6, 0);
  }
  else
  {
    v9 = 0;
    v10 = v6 + 2;
    do
    {
      v11 = RtlSubAuthoritySid(AppContainerSid, v9++);
      *v10++ = *v11;
    }
    while ( v9 < 8u );
    *AppContainerSidParent = v6;
    return 0;
  }
  return v8;
}
