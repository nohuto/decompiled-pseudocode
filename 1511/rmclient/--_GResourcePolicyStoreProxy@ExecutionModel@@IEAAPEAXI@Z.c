/*
 * XREFs of ??_GResourcePolicyStoreProxy@ExecutionModel@@IEAAPEAXI@Z @ 0x180009468
 * Callers:
 *     ?GetResourceSetInfo@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x1800049E0 (-GetResourceSetInfo@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ?Release@ResourcePolicyStoreProxy@ExecutionModel@@UEAAKXZ @ 0x180005430 (-Release@ResourcePolicyStoreProxy@ExecutionModel@@UEAAKXZ.c)
 *     ?CreateInstance@ResourcePolicyStoreProxy@ExecutionModel@@SAJPEAPEAUIResourcePolicyStore@2@@Z @ 0x180007ABC (-CreateInstance@ResourcePolicyStoreProxy@ExecutionModel@@SAJPEAPEAUIResourcePolicyStore@2@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800088D8 (--3@YAXPEAX@Z.c)
 */

ExecutionModel::ResourcePolicyStoreProxy *__fastcall ExecutionModel::ResourcePolicyStoreProxy::`scalar deleting destructor'(
        ExecutionModel::ResourcePolicyStoreProxy *this)
{
  _QWORD *v1; // rdi
  bool v3; // zf

  v1 = (_QWORD *)((char *)this + 16);
  v3 = *((_QWORD *)this + 2) == 0LL;
  *(_QWORD *)this = &ExecutionModel::ResourcePolicyStoreProxy::`vftable';
  if ( !v3 )
  {
    RpcBindingFree((RPC_BINDING_HANDLE *)this + 2);
    *v1 = 0LL;
  }
  operator delete(this);
  return this;
}
