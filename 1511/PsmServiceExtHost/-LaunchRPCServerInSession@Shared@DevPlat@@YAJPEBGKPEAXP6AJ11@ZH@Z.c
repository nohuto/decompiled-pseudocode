/*
 * XREFs of ?LaunchRPCServerInSession@Shared@DevPlat@@YAJPEBGKPEAXP6AJ11@ZH@Z @ 0x180022680
 * Callers:
 *     InitializeGameConfigRpcServer @ 0x180022B2C (InitializeGameConfigRpcServer.c)
 *     ?IntializePolicyEngineRpcServer@@YAJXZ @ 0x180022E20 (-IntializePolicyEngineRpcServer@@YAJXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180007280 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     QueryTransientObjectSecurityDescriptor @ 0x18001E8A0 (QueryTransientObjectSecurityDescriptor.c)
 *     AccessHlprFree @ 0x18001E9F8 (AccessHlprFree.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?FreeTransientObjectSecurityDescriptor@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1800228F0 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-FreeTrans.c)
 *     ?GetWorkaroundRpcInterfaceSecurityDescriptor@Shared@DevPlat@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18002293C (-GetWorkaroundRpcInterfaceSecurityDescriptor@Shared@DevPlat@@YAJAEAV-$unique_any_t@V-$unique_sto.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     ?GetWorkaroundAlpcSecurityDescriptor@Shared@DevPlat@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180053D90 (-GetWorkaroundAlpcSecurityDescriptor@Shared@DevPlat@@YAJAEAV-$unique_any_t@V-$unique_storage@U-$.c)
 *     Template_zq @ 0x180053EC0 (Template_zq.c)
 */

__int64 __fastcall DevPlat::Shared::LaunchRPCServerInSession(
        DevPlat::Shared *this,
        const unsigned __int16 *a2,
        void *a3,
        void *a4,
        int (*a5)(void *, void *))
{
  HLOCAL v7; // rsi
  HLOCAL v8; // rdi
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int WorkaroundAlpcSecurityDescriptor; // ebx
  RPC_STATUS v13; // eax
  bool v14; // cc
  int v15; // ebx
  bool v16; // cc
  RPC_BINDING_VECTOR *BindingVector; // [rsp+40h] [rbp-C0h] BYREF
  void *SecurityDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  HLOCAL hMem; // [rsp+50h] [rbp-B0h] BYREF
  HLOCAL v21; // [rsp+58h] [rbp-A8h] BYREF
  void *v22; // [rsp+60h] [rbp-A0h] BYREF
  void **p_SecurityDescriptor; // [rsp+68h] [rbp-98h] BYREF
  PSECURITY_DESCRIPTOR v24; // [rsp+70h] [rbp-90h] BYREF
  char v25; // [rsp+78h] [rbp-88h]
  int v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  int v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+94h] [rbp-6Ch]
  int v30; // [rsp+9Ch] [rbp-64h]
  wchar_t Buffer; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v32[526]; // [rsp+A2h] [rbp-5Eh] BYREF

  BindingVector = 0LL;
  SecurityDescriptor = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  hMem = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  Buffer = 0;
  memset_0(v32, 0, 0x206uLL);
  v28 = 0;
  v29 = 0LL;
  v30 = 0;
  v27 = 0LL;
  v26 = 0;
  p_SecurityDescriptor = &SecurityDescriptor;
  v24 = 0LL;
  v25 = 1;
  v9 = QueryTransientObjectSecurityDescriptor(8, (__int64)L"DefaultRpcAccess", &v24);
  wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void FreeTransientObjectSecurityDescriptor(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void FreeTransientObjectSecurityDescriptor(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>>(&p_SecurityDescriptor);
  WorkaroundAlpcSecurityDescriptor = v9 | 0x10000000;
  if ( WorkaroundAlpcSecurityDescriptor < 0 )
  {
    if ( WorkaroundAlpcSecurityDescriptor == -805306316 )
    {
      if ( !(_DWORD)a5 )
        goto LABEL_3;
      WorkaroundAlpcSecurityDescriptor = DevPlat::Shared::GetWorkaroundAlpcSecurityDescriptor(&v21);
      if ( WorkaroundAlpcSecurityDescriptor < 0 )
        goto LABEL_16;
      v7 = v21;
    }
    if ( WorkaroundAlpcSecurityDescriptor < 0 )
      goto LABEL_16;
  }
  else
  {
    v7 = SecurityDescriptor;
  }
LABEL_3:
  v13 = RpcServerUseProtseqW((RPC_WSTR)L"ncalrpc", 0xAu, v7);
  WorkaroundAlpcSecurityDescriptor = v13;
  if ( v13 && v13 != 1740 )
  {
    v14 = v13 <= 0;
LABEL_36:
    if ( v14 )
      goto LABEL_16;
    goto LABEL_37;
  }
  v13 = RpcServerInqBindings(&BindingVector);
  WorkaroundAlpcSecurityDescriptor = v13;
  v14 = v13 <= 0;
  if ( v13 )
    goto LABEL_36;
  WorkaroundAlpcSecurityDescriptor = StringCchPrintfW(&Buffer, 260LL, L"%s\\Interface", this);
  if ( WorkaroundAlpcSecurityDescriptor < 0 )
    goto LABEL_16;
  v24 = 0LL;
  p_SecurityDescriptor = &v22;
  v25 = 1;
  v15 = QueryTransientObjectSecurityDescriptor(9, (__int64)&Buffer, &v24);
  wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void FreeTransientObjectSecurityDescriptor(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void FreeTransientObjectSecurityDescriptor(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>>(&p_SecurityDescriptor);
  WorkaroundAlpcSecurityDescriptor = v15 | 0x10000000;
  if ( WorkaroundAlpcSecurityDescriptor >= 0 )
  {
    v8 = v22;
  }
  else
  {
    if ( WorkaroundAlpcSecurityDescriptor != -805306316 )
      goto LABEL_11;
    WorkaroundAlpcSecurityDescriptor = 0;
    if ( (_DWORD)a5 )
    {
      WorkaroundAlpcSecurityDescriptor = DevPlat::Shared::GetWorkaroundRpcInterfaceSecurityDescriptor(&hMem);
      if ( WorkaroundAlpcSecurityDescriptor < 0 )
        goto LABEL_16;
      v8 = hMem;
LABEL_11:
      if ( WorkaroundAlpcSecurityDescriptor < 0 )
        goto LABEL_16;
    }
  }
  v13 = RpcServerRegisterIf3(a3, 0LL, 0LL, 41LL, 1234, 0, 0LL, v8);
  v16 = v13 <= 0;
  if ( v13 || (v13 = RpcEpRegisterW(a3, BindingVector, 0LL, 0LL), v16 = v13 <= 0, v13) )
  {
    if ( !v16 )
    {
LABEL_37:
      WorkaroundAlpcSecurityDescriptor = (unsigned __int16)v13 | 0x80070000;
      goto LABEL_16;
    }
    WorkaroundAlpcSecurityDescriptor = v13;
  }
LABEL_16:
  if ( BindingVector )
    RpcBindingVectorFree(&BindingVector);
  if ( WorkaroundAlpcSecurityDescriptor < 0 && (Microsoft_Windows_AppModel_ExecEnableBits & 0x40000000) != 0 )
    Template_zq(v11, v10, L"DevPlat::Shared::LaunchRPCServerInSession", (unsigned int)WorkaroundAlpcSecurityDescriptor);
  if ( hMem )
    LocalFree(hMem);
  if ( v21 )
    LocalFree(v21);
  if ( v22 )
    AccessHlprFree(v22);
  if ( SecurityDescriptor )
    AccessHlprFree(SecurityDescriptor);
  return (unsigned int)WorkaroundAlpcSecurityDescriptor;
}
