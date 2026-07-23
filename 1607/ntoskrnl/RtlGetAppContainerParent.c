/*
 * XREFs of RtlGetAppContainerParent @ 0x140683A6C
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x140210748 (RtlGetAppContainerNamedObjectPath.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000D278 (RtlSubAuthoritySid.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlLengthRequiredSid @ 0x1404781C0 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x140478448 (RtlInitializeSid.c)
 *     RtlGetAppContainerSidType @ 0x14047AA30 (RtlGetAppContainerSidType.c)
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
