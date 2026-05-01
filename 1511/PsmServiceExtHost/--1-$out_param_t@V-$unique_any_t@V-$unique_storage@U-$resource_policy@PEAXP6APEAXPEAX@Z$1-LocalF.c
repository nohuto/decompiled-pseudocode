/*
 * XREFs of ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x180022994
 * Callers:
 *     ?GetWorkaroundRpcInterfaceSecurityDescriptor@Shared@DevPlat@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18002293C (-GetWorkaroundRpcInterfaceSecurityDescriptor@Shared@DevPlat@@YAJAEAV-$unique_any_t@V-$unique_sto.c)
 *     ?GetWorkaroundAlpcSecurityDescriptor@Shared@DevPlat@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180053D90 (-GetWorkaroundAlpcSecurityDescriptor@Shared@DevPlat@@YAJAEAV-$unique_any_t@V-$unique_storage@U-$.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>>(
        void ***a1)
{
  void **v1; // rdi
  void **v2; // rbp
  void *v3; // rsi
  DWORD LastError; // ebx

  if ( *((_BYTE *)a1 + 16) )
  {
    v1 = *a1;
    v2 = a1[1];
    v3 = **a1;
    if ( v3 )
    {
      LastError = GetLastError();
      LocalFree(v3);
      SetLastError(LastError);
    }
    *v1 = v2;
  }
}
