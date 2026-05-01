/*
 * XREFs of ?CreateInstance@ResourcePolicyStoreProxy@ExecutionModel@@SAJPEAPEAUIResourcePolicyStore@2@@Z @ 0x180006AD4
 * Callers:
 *     ?GetResourceSetInfo@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x1800050C0 (-GetResourceSetInfo@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ?CreateResourcePolicyStoreClient@@YAJPEAPEAUIResourcePolicyStore@ExecutionModel@@@Z @ 0x180006A40 (-CreateResourcePolicyStoreClient@@YAJPEAPEAUIResourcePolicyStore@ExecutionModel@@@Z.c)
 * Callees:
 *     ?BindToRPCServerInSession@Shared@DevPlat@@YAJPEAXPEBGKPEAPEAXK@Z @ 0x180001D80 (-BindToRPCServerInSession@Shared@DevPlat@@YAJPEAXPEBGKPEAPEAXK@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180008208 (--3@YAXPEAX@Z.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyStoreProxy::CreateInstance(
        struct ExecutionModel::IResourcePolicyStore **a1)
{
  RPC_BINDING_HANDLE *v1; // rax
  const unsigned __int16 *v2; // r8
  RPC_BINDING_HANDLE *v3; // rdi
  int v4; // esi
  void **v6; // [rsp+20h] [rbp-18h]

  qword_180022798 = 0LL;
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
    LODWORD(v6) = 3;
    v4 = DevPlat::Shared::BindToRPCServerInSession(&unk_180016500, L"ResourcePolicyEngineRpc", v2, v3 + 2, v6);
    if ( v4 >= 0 )
    {
      (*((void (__fastcall **)(RPC_BINDING_HANDLE *))*v3 + 1))(v3);
      qword_180022798 = (ExecutionModel::ResourcePolicyStoreProxy *)v3;
      v3 = 0LL;
    }
  }
  else
  {
    v4 = -2147024882;
  }
  operator delete(v3);
  return (unsigned int)v4;
}
