/*
 * XREFs of ??1ResourceManagerClientProxy@@MEAA@XZ @ 0x180012410
 * Callers:
 *     ??_GResourceManagerClientProxy@@MEAAPEAXI@Z @ 0x180012560 (--_GResourceManagerClientProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_FreeBuckets@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAAXXZ @ 0x180002688 (-_FreeBuckets@-$_HashTable@KU-$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U-$hash@K@2@U-$equal_.c)
 *     ?Release@RMExecServicesProvider@ExecutionModel@@UEAAKXZ @ 0x1800080B0 (-Release@RMExecServicesProvider@ExecutionModel@@UEAAKXZ.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180009384 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     RmpClientWnfDestroySubscription @ 0x18000F0BC (RmpClientWnfDestroySubscription.c)
 */

void __fastcall ResourceManagerClientProxy::~ResourceManagerClientProxy(ResourceManagerClientProxy *this)
{
  bool v1; // zf
  __int64 **v3; // rbx
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rax
  ExecutionModel::RMExecServicesProvider *v7; // rbx
  __int64 (__fastcall *v8)(ExecutionModel::RMExecServicesProvider *); // rdi

  v1 = *((_BYTE *)this + 21176) == 0;
  *(_QWORD *)this = &ResourceManagerClientProxy::`vftable';
  if ( !v1 )
  {
    RmpClientWnfDestroySubscription((_QWORD *)this + 2571);
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800176B0, 1u, 0LL, (char *)this + 20544);
    RpcBindingFree((RPC_BINDING_HANDLE *)this + 2567);
    *((_QWORD *)this + 2567) = 0LL;
  }
  v3 = (__int64 **)((char *)this + 21224);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (__int64 *)v3 )
      break;
    v5 = (__int64 *)v4[1];
    v6 = *v4;
    *v5 = *v4;
    *(_QWORD *)(v6 + 8) = v5;
    operator delete(v4);
  }
  *((_QWORD *)this + 2656) = 0LL;
  utl::_HashTable<unsigned long,utl::pair<unsigned long const,ResourceSetClientProxy *>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ResourceSetClientProxy *>>,0>::_FreeBuckets((__int64)this + 21224);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 21184));
  v7 = (ExecutionModel::RMExecServicesProvider *)*((_QWORD *)this + 2569);
  if ( v7 )
  {
    v8 = *(__int64 (__fastcall **)(ExecutionModel::RMExecServicesProvider *))(*(_QWORD *)v7 + 16LL);
    if ( v8 == ExecutionModel::RMExecServicesProvider::Release )
      ExecutionModel::RMExecServicesProvider::Release(v7);
    else
      v8(v7);
  }
}
