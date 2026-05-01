/*
 * XREFs of ??1ResourcePolicyStore@ExecutionModel@@QEAA@XZ @ 0x1800468C0
 * Callers:
 *     ??_GResourcePolicyStore@ExecutionModel@@QEAAPEAXI@Z @ 0x1800469AC (--_GResourcePolicyStore@ExecutionModel@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?_InitBuckets@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEAAXXZ @ 0x18000A8F0 (-_InitBuckets@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U-$hash.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_ClearList@?$_HashTable@PEBGU?$pair@QEBGW4RmResourceSetType@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@$0A@@utl@@AEAAXXZ @ 0x180046E40 (-_ClearList@-$_HashTable@PEBGU-$pair@QEBGW4RmResourceSetType@@@utl@@U-$hash@PEBG@2@U-$equal_to@P.c)
 */

void __fastcall ExecutionModel::ResourcePolicyStore::~ResourcePolicyStore(ExecutionModel::ResourcePolicyStore *this)
{
  unsigned __int64 v1; // rbp
  __int64 v3; // rsi
  __int64 v4; // rbx
  void *v5; // rcx
  char *v6; // rdi

  v1 = 0LL;
  *(_QWORD *)this = &ExecutionModel::ResourcePolicyStore::`vftable';
  if ( *((_QWORD *)this + 6) )
  {
    v3 = 0LL;
    do
    {
      v4 = *((_QWORD *)this + 7);
      operator delete(*(void **)(v3 + v4));
      operator delete(*(void **)(v3 + v4 + 16));
      ++v1;
      *(_QWORD *)(v3 + v4) = 0LL;
      *(_QWORD *)(v3 + v4 + 8) = 0LL;
      *(_QWORD *)(v3 + v4 + 16) = 0LL;
      v3 += 24LL;
    }
    while ( v1 < *((_QWORD *)this + 6) );
  }
  operator delete(*((void **)this + 7));
  v5 = (void *)*((_QWORD *)this + 9);
  *((_QWORD *)this + 7) = 0LL;
  operator delete(v5);
  *((_QWORD *)this + 9) = 0LL;
  v6 = (char *)this + 8;
  utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,enum RmResourceSetType>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,enum RmResourceSetType>>,0>::_ClearList(v6);
  if ( *((_QWORD *)v6 + 2) )
    utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_InitBuckets((__int64)v6);
  utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,enum RmResourceSetType>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,enum RmResourceSetType>>,0>::_ClearList(v6);
  utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FreeBuckets((__int64)v6);
}
