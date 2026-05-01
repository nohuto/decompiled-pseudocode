/*
 * XREFs of ?BindToRPCServerInSession@Shared@DevPlat@@YAJPEAXPEBGKPEAPEAXK@Z @ 0x1800066C0
 * Callers:
 *     CreateGameConfigStoreClient @ 0x180006DC0 (CreateGameConfigStoreClient.c)
 *     ?Init@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ @ 0x1800076B0 (-Init@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJXZ.c)
 *     ?CreateInstance@ResourcePolicyStoreProxy@ExecutionModel@@SAJPEAPEAUIResourcePolicyStore@2@@Z @ 0x180007ABC (-CreateInstance@ResourcePolicyStoreProxy@ExecutionModel@@SAJPEAPEAUIResourcePolicyStore@2@@Z.c)
 *     ?GetRPCBindingHandle@Internal@ExecutionModel@@YAJPEAPEAX@Z @ 0x1800106D8 (-GetRPCBindingHandle@Internal@ExecutionModel@@YAJPEAPEAX@Z.c)
 * Callees:
 *     QueryTransientObjectSecurityDescriptor @ 0x180006030 (QueryTransientObjectSecurityDescriptor.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180006F80 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x180008E40 (__security_check_cookie.c)
 *     memset_0 @ 0x1800095EC (memset_0.c)
 *     Template_zq @ 0x180011DC0 (Template_zq.c)
 */

__int64 __fastcall DevPlat::Shared::BindToRPCServerInSession(
        RPC_IF_HANDLE IfSpec,
        void *a2,
        const unsigned __int16 *a3,
        RPC_BINDING_HANDLE *a4,
        void **a5)
{
  PVOID v5; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // ebx
  int v13; // eax
  RPC_STATUS v14; // eax
  PVOID P; // [rsp+20h] [rbp-E0h] BYREF
  RPC_BINDING_HANDLE Binding; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+38h] [rbp-C8h]
  int v20; // [rsp+3Ch] [rbp-C4h]
  int v21; // [rsp+40h] [rbp-C0h]
  __int128 v22; // [rsp+48h] [rbp-B8h]
  int v23; // [rsp+58h] [rbp-A8h]
  PVOID v24; // [rsp+60h] [rbp-A0h]
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+68h] [rbp-98h] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W Template; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 v27; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v28[526]; // [rsp+D2h] [rbp-2Eh] BYREF

  v5 = 0LL;
  Binding = 0LL;
  P = 0LL;
  v27 = 0;
  memset_0(v28, 0, 0x206uLL);
  *(_QWORD *)&Template.Version = 1LL;
  v20 = (int)a5;
  Security.SecurityQos = (RPC_SECURITY_QOS *)&v18;
  Template.ProtocolSequence = 3;
  v18 = 5LL;
  v19 = 1;
  v21 = 0;
  v23 = 0;
  v24 = 0LL;
  Security.Version = 1;
  Security.ServerPrincName = 0LL;
  Security.AuthnLevel = 6;
  Security.AuthnSvc = 10;
  Security.AuthIdentity = 0LL;
  memset(&Template.NetworkAddress, 0, 40);
  v22 = 0LL;
  if ( !a4 )
  {
    v12 = -2147024809;
LABEL_16:
    if ( (Microsoft_Windows_AppModel_ExecEnableBits & 0x40000000) != 0 )
      Template_zq(v10, v9, v11, (unsigned int)v12);
    return (unsigned int)v12;
  }
  *a4 = 0LL;
  v12 = StringCchPrintfW(&v27, 0x104uLL, L"%s\\Interface", a2);
  if ( v12 >= 0 )
  {
    v13 = QueryTransientObjectSecurityDescriptor(v10, (__int64)&v27, &P);
    v12 = v13 | 0x10000000;
    if ( v13 >= 0 )
    {
      v5 = P;
      goto LABEL_5;
    }
    if ( v12 == -805306316 )
    {
      P = 0LL;
      v12 = 0;
LABEL_5:
      v24 = v5;
      v14 = RpcBindingCreateW(&Template, &Security, 0LL, &Binding);
      if ( v14 )
      {
        if ( v14 <= 0 )
        {
          v12 = v14;
          goto LABEL_8;
        }
      }
      else
      {
        v14 = RpcBindingBind(0LL, Binding, IfSpec);
        if ( !v14 )
        {
          *a4 = Binding;
          goto LABEL_8;
        }
        if ( v14 <= 0 )
        {
          v12 = v14;
          goto LABEL_8;
        }
      }
      v12 = (unsigned __int16)v14 | 0x80070000;
LABEL_8:
      if ( v12 >= 0 )
        goto LABEL_9;
    }
  }
  if ( Binding )
    RpcBindingFree(&Binding);
LABEL_9:
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  if ( v12 < 0 )
    goto LABEL_16;
  return (unsigned int)v12;
}
