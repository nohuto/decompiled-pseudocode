/*
 * XREFs of ??1ResourceManagerClientProxy@@MEAA@XZ @ 0x18000AEAC
 * Callers:
 *     ??_GResourceManagerClientProxy@@MEAAPEAXI@Z @ 0x18000AFC0 (--_GResourceManagerClientProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800065B0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_FreeBuckets@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAAXXZ @ 0x18000CB2C (-_FreeBuckets@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equ.c)
 *     RmpClientWnfDestroySubscription @ 0x18000D200 (RmpClientWnfDestroySubscription.c)
 */

void __fastcall ResourceManagerClientProxy::~ResourceManagerClientProxy(ResourceManagerClientProxy *this)
{
  bool v1; // zf
  __int64 **v3; // rbx
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rax

  v1 = *((_BYTE *)this + 22000) == 0;
  *(_QWORD *)this = &ResourceManagerClientProxy::`vftable';
  if ( !v1 )
  {
    RmpClientWnfDestroySubscription(*((PVOID *)this + 2684));
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18000E820, 1u, 0LL, (char *)this + 21456);
    RpcBindingFree((RPC_BINDING_HANDLE *)this + 2681);
    *((_QWORD *)this + 2681) = 0LL;
  }
  v3 = (__int64 **)((char *)this + 22048);
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
  *((_QWORD *)this + 2759) = 0LL;
  utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_FreeBuckets((char *)this + 22048);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 22008));
}
