/*
 * XREFs of ?CreateInstance@ResourcePolicyStoreProxy@ExecutionModel@@SAJPEAPEAUIResourcePolicyStore@2@@Z @ 0x180007ABC
 * Callers:
 *     ?GetResourceSetInfo@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x1800049E0 (-GetResourceSetInfo@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ?CreateResourcePolicyStoreClient@@YAJPEAPEAUIResourcePolicyStore@ExecutionModel@@@Z @ 0x180006A60 (-CreateResourcePolicyStoreClient@@YAJPEAPEAUIResourcePolicyStore@ExecutionModel@@@Z.c)
 * Callees:
 *     ?BindToRPCServerInSession@Shared@DevPlat@@YAJPEAXPEBGKPEAPEAXK@Z @ 0x1800066C0 (-BindToRPCServerInSession@Shared@DevPlat@@YAJPEAXPEBGKPEAPEAXK@Z.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 *     ??_GResourcePolicyStoreProxy@ExecutionModel@@IEAAPEAXI@Z @ 0x180009468 (--_GResourcePolicyStoreProxy@ExecutionModel@@IEAAPEAXI@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyStoreProxy::CreateInstance(
        struct ExecutionModel::IResourcePolicyStore **a1)
{
  RPC_BINDING_HANDLE *v1; // rax
  const unsigned __int16 *v2; // r8
  RPC_BINDING_HANDLE *v3; // rdi
  unsigned int v4; // edx
  int v5; // esi
  void **v7; // [rsp+20h] [rbp-18h]

  qword_180024800 = 0LL;
  v1 = (RPC_BINDING_HANDLE *)malloc(0x18uLL);
  v3 = v1;
  if ( v1 )
  {
    v1[2] = 0LL;
    *v1 = &ExecutionModel::ResourcePolicyStoreProxy::`vftable';
    *((_DWORD *)v1 + 2) = 0;
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    LODWORD(v7) = 3;
    v5 = DevPlat::Shared::BindToRPCServerInSession(&unk_180017480, L"ResourcePolicyEngineRpc", v2, v3 + 2, v7);
    if ( v5 >= 0 )
    {
      (*((void (__fastcall **)(RPC_BINDING_HANDLE *))*v3 + 1))(v3);
      qword_180024800 = (__int64)v3;
      v3 = 0LL;
    }
    if ( v3 )
      ExecutionModel::ResourcePolicyStoreProxy::`scalar deleting destructor'(
        (ExecutionModel::ResourcePolicyStoreProxy *)v3,
        v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
