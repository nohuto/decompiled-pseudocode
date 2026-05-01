/*
 * XREFs of ?Init@ResourceManagerClientProxy@@IEAAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@@Z @ 0x1800073AC
 * Callers:
 *     ?CreateResourceManagerClientProxyInternal@@YAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@PEAPEAUIResourceManager@2@@Z @ 0x180007D0C (-CreateResourceManagerClientProxyInternal@@YAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@P.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180005DB0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     RmpBindToRmRpcServer @ 0x1800068A0 (RmpBindToRmRpcServer.c)
 *     RmpClientWnfCreateSubscription @ 0x1800070AC (RmpClientWnfCreateSubscription.c)
 *     ?GetDeviceTierName@ResourceManagerClientProxy@@UEAAPEBGXZ @ 0x1800072F0 (-GetDeviceTierName@ResourceManagerClientProxy@@UEAAPEBGXZ.c)
 *     ?Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z @ 0x180007860 (-Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 *     RmpClientWnfDestroySubscription @ 0x18000E6A4 (RmpClientWnfDestroySubscription.c)
 */

__int64 __fastcall ResourceManagerClientProxy::Init(
        ResourceManagerClientProxy *this,
        const unsigned __int16 *a2,
        __int64 a3,
        struct IUnknown *a4)
{
  char v4; // bp
  char *(__fastcall *v7)(ResourceManagerClientProxy *); // rbx
  char *DeviceTierName; // rax
  int Pointer; // ebx
  int Subscription; // eax

  v4 = 0;
  v7 = *(char *(__fastcall **)(ResourceManagerClientProxy *))(*(_QWORD *)this + 136LL);
  if ( v7 == ResourceManagerClientProxy::GetDeviceTierName )
    DeviceTierName = ResourceManagerClientProxy::GetDeviceTierName(this);
  else
    DeviceTierName = (char *)((__int64 (__fastcall *)(ResourceManagerClientProxy *, const unsigned __int16 *))v7)(
                               this,
                               a2);
  Pointer = ExecutionModel::ResourceSetTypeToInfoConverter::Initialize(
              (ResourceManagerClientProxy *)((char *)this + 16),
              (const unsigned __int16 *)DeviceTierName);
  if ( Pointer < 0
    || (Pointer = RmpBindToRmRpcServer(&unk_180016760, (RPC_BINDING_HANDLE *)this + 2510), Pointer < 0)
    || (Pointer = (unsigned int)NdrClientCall3(
                                  (MIDL_STUBLESS_PROXY_INFO *)&stru_180016730,
                                  0,
                                  0LL,
                                  *((_QWORD *)this + 2510),
                                  (char *)this + 20088,
                                  (char *)this + 20104).Pointer,
        Pointer < 0) )
  {
LABEL_16:
    if ( *((_QWORD *)this + 2511) )
      NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016730, 1u, 0LL);
    if ( *((_QWORD *)this + 2510) )
    {
      RpcBindingFree((RPC_BINDING_HANDLE *)this + 2510);
      *((_QWORD *)this + 2510) = 0LL;
    }
    return (unsigned int)Pointer;
  }
  Subscription = RmpClientWnfCreateSubscription(
                   (_QWORD *)this + 2513,
                   0LL,
                   (__int64)ResourceManagerClientProxy::LegacyResourceSetCallbackHandlerThunk,
                   (__int64)this,
                   (__int64)this + 20112);
  if ( Subscription < 0 )
  {
    Pointer = Subscription | 0x10000000;
  }
  else
  {
    v4 = 1;
    if ( *((struct IUnknown **)this + 2512) != a4 )
      ATL::AtlComPtrAssign((struct IUnknown **)this + 2512, a4);
    *((_BYTE *)this + 20720) = 1;
    Pointer = 0;
  }
  if ( Pointer < 0 )
  {
    if ( v4 )
      RmpClientWnfDestroySubscription((char *)this + 20112);
    goto LABEL_16;
  }
  return (unsigned int)Pointer;
}
