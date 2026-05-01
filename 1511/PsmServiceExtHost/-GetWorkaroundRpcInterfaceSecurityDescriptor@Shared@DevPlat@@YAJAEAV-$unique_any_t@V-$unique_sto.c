/*
 * XREFs of ?GetWorkaroundRpcInterfaceSecurityDescriptor@Shared@DevPlat@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18002293C
 * Callers:
 *     ?LaunchRPCServerInSession@Shared@DevPlat@@YAJPEBGKPEAXP6AJ11@ZH@Z @ 0x180022680 (-LaunchRPCServerInSession@Shared@DevPlat@@YAJPEBGKPEAXP6AJ11@ZH@Z.c)
 * Callees:
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x180022994 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalF.c)
 *     ?Return_GetLastErrorPreRelease@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180053190 (-Return_GetLastErrorPreRelease@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall DevPlat::Shared::GetWorkaroundRpcInterfaceSecurityDescriptor(__int64 a1)
{
  BOOL v1; // ebx
  const char *v2; // r9
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  PSECURITY_DESCRIPTOR v5; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  ULONG v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0;
  v5 = 0LL;
  v4 = a1;
  v6 = 1;
  v1 = ConvertStringSecurityDescriptorToSecurityDescriptorW(
         L"D:(A;;0x111FFFFF;;;CO)(A;;0x111FFFFF;;;SY)(A;;0x111FFFFF;;;BA)(A;;GA;;;IU)(A;;GA;;;AC)(A;;GA;;;AU)",
         1u,
         &v5,
         &v8);
  wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>>(&v4);
  if ( v1 )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastErrorPreRelease(
             retaddr,
             (void *)0x3F,
             (unsigned int)"base\\appmodel\\execmodel\\shared\\utility\\rpcutils.cpp",
             v2);
}
