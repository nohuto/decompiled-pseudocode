/*
 * XREFs of ?Init@ResourceManagerClientProxy@@IEAAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@@Z @ 0x180007CB8
 * Callers:
 *     ?CreateResourceManagerClientProxyInternal@@YAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@PEAPEAUIResourceManager@2@@Z @ 0x1800086FC (-CreateResourceManagerClientProxyInternal@@YAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@P.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180005F60 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     RmpBindToRmRpcServer @ 0x1800070C0 (RmpBindToRmRpcServer.c)
 *     RmpClientWnfCreateSubscription @ 0x180007950 (RmpClientWnfCreateSubscription.c)
 *     ?GetDeviceTierName@ResourceManagerClientProxy@@UEAAPEBGXZ @ 0x180007C40 (-GetDeviceTierName@ResourceManagerClientProxy@@UEAAPEBGXZ.c)
 *     ?Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z @ 0x180008260 (-Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 *     RmpClientWnfDestroySubscription @ 0x18000F0BC (RmpClientWnfDestroySubscription.c)
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
    || (Pointer = RmpBindToRmRpcServer(&unk_1800176E0, (RPC_BINDING_HANDLE *)this + 2567), Pointer < 0)
    || (Pointer = (unsigned int)NdrClientCall3(
                                  (MIDL_STUBLESS_PROXY_INFO *)&stru_1800176B0,
                                  0,
                                  0LL,
                                  *((_QWORD *)this + 2567),
                                  (char *)this + 20544,
                                  (char *)this + 20560).Pointer,
        Pointer < 0) )
  {
LABEL_16:
    if ( *((_QWORD *)this + 2568) )
      NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800176B0, 1u, 0LL);
    if ( *((_QWORD *)this + 2567) )
    {
      RpcBindingFree((RPC_BINDING_HANDLE *)this + 2567);
      *((_QWORD *)this + 2567) = 0LL;
    }
    return (unsigned int)Pointer;
  }
  Subscription = RmpClientWnfCreateSubscription(
                   (_QWORD *)this + 2570,
                   0LL,
                   (__int64)ResourceManagerClientProxy::LegacyResourceSetCallbackHandlerThunk,
                   (__int64)this,
                   (__int64)this + 20568);
  if ( Subscription < 0 )
  {
    Pointer = Subscription | 0x10000000;
  }
  else
  {
    v4 = 1;
    if ( *((struct IUnknown **)this + 2569) != a4 )
      ATL::AtlComPtrAssign((struct IUnknown **)this + 2569, a4);
    *((_BYTE *)this + 21176) = 1;
    Pointer = 0;
  }
  if ( Pointer < 0 )
  {
    if ( v4 )
      RmpClientWnfDestroySubscription((char *)this + 20568);
    goto LABEL_16;
  }
  return (unsigned int)Pointer;
}
