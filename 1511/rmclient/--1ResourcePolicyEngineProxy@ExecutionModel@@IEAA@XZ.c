/*
 * XREFs of ??1ResourcePolicyEngineProxy@ExecutionModel@@IEAA@XZ @ 0x1800100CC
 * Callers:
 *     ?Release@ResourcePolicyEngineProxy@ExecutionModel@@UEAAKXZ @ 0x180005A70 (-Release@ResourcePolicyEngineProxy@ExecutionModel@@UEAAKXZ.c)
 * Callees:
 *     ?_FreeBuckets@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAAXXZ @ 0x180002688 (-_FreeBuckets@-$_HashTable@KU-$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U-$hash@K@2@U-$equal_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180009384 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?CleanupClientCallbackContext@ResourcePolicyEngineProxy@ExecutionModel@@IEAAXXZ @ 0x18001015C (-CleanupClientCallbackContext@ResourcePolicyEngineProxy@ExecutionModel@@IEAAXXZ.c)
 */

void __fastcall ExecutionModel::ResourcePolicyEngineProxy::~ResourcePolicyEngineProxy(
        ExecutionModel::ResourcePolicyEngineProxy *this)
{
  bool v1; // zf
  __int64 **v3; // rdi
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rax

  v1 = *((_QWORD *)this + 3) == 0LL;
  *(_QWORD *)this = &ExecutionModel::ResourcePolicyEngineProxy::`vftable';
  if ( !v1 )
    ExecutionModel::ResourcePolicyEngineProxy::CleanupClientCallbackContext(this);
  if ( *((_QWORD *)this + 2) )
  {
    RpcBindingFree((RPC_BINDING_HANDLE *)this + 2);
    *((_QWORD *)this + 2) = 0LL;
  }
  v3 = (__int64 **)((char *)this + 184);
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
  *((_QWORD *)this + 26) = 0LL;
  utl::_HashTable<unsigned long,utl::pair<unsigned long const,ResourceSetClientProxy *>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ResourceSetClientProxy *>>,0>::_FreeBuckets((__int64)this + 184);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
}
