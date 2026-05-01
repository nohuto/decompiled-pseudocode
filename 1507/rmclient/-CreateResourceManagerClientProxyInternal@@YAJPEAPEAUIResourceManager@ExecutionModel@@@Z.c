/*
 * XREFs of ?CreateResourceManagerClientProxyInternal@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x180007D90
 * Callers:
 *     ?CreateResourceManagerClientProxy@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x180007E20 (-CreateResourceManagerClientProxy@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z.c)
 * Callees:
 *     ?CreateRMExecServicesProvider@ExecutionModel@@YAJPEAPEAUIRMExecServicesProvider@1@@Z @ 0x1800076A0 (-CreateRMExecServicesProvider@ExecutionModel@@YAJPEAPEAUIRMExecServicesProvider@1@@Z.c)
 *     ?Release@RMExecServicesProvider@ExecutionModel@@UEAAKXZ @ 0x180007760 (-Release@RMExecServicesProvider@ExecutionModel@@UEAAKXZ.c)
 *     ?CreateResourceManagerClientProxyInternal@@YAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@PEAPEAUIResourceManager@2@@Z @ 0x180007D0C (-CreateResourceManagerClientProxyInternal@@YAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@P.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall CreateResourceManagerClientProxyInternal(
        struct IResourceManager **a1,
        struct ExecutionModel::IRMExecServicesProvider **a2)
{
  int RMExecServicesProvider; // eax
  __int64 v4; // rdx
  const unsigned __int16 *v5; // rcx
  struct ExecutionModel::IRMExecServicesProvider *v6; // rbx
  int ResourceManagerClientProxyInternal; // edi
  __int64 (__fastcall *v8)(ExecutionModel::RMExecServicesProvider *); // rsi
  struct ExecutionModel::IRMExecServicesProvider *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  RMExecServicesProvider = ExecutionModel::CreateRMExecServicesProvider((ExecutionModel *)&v10, a2);
  v6 = v10;
  ResourceManagerClientProxyInternal = RMExecServicesProvider;
  if ( RMExecServicesProvider >= 0 )
  {
    ResourceManagerClientProxyInternal = CreateResourceManagerClientProxyInternal(v5, v4, (struct IUnknown *)v10, a1);
    if ( ResourceManagerClientProxyInternal >= 0 )
      ResourceManagerClientProxyInternal = 0;
  }
  if ( v6 )
  {
    v8 = *(__int64 (__fastcall **)(ExecutionModel::RMExecServicesProvider *))(*(_QWORD *)v6 + 16LL);
    if ( v8 == ExecutionModel::RMExecServicesProvider::Release )
      ExecutionModel::RMExecServicesProvider::Release(v6);
    else
      v8(v6);
  }
  return (unsigned int)ResourceManagerClientProxyInternal;
}
