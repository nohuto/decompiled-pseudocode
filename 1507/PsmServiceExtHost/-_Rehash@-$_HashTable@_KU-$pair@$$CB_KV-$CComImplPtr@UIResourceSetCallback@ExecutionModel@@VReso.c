/*
 * XREFs of ?_Rehash@?$_HashTable@_KU?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@2@$0A@@utl@@AEAA_NE@Z @ 0x180019458
 * Callers:
 *     ?Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_AcquireResourcesType@@KPEAT_RM_ACTIVITY_IMPORTANCE@@PEBU_RPC_ActivationId@@PEAEKKKPEAW4_ResourcePendingReason@@_KPEA_K@Z @ 0x1800156E0 (-Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_Acqu.c)
 *     ?_InsertNode@?$_HashTable@_KU?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@2@$0A@@utl@@AEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@2@0_K@Z @ 0x18002F4B8 (-_InsertNode@-$_HashTable@_KU-$pair@$$CB_KV-$CComImplPtr@UIResourceSetCallback@ExecutionModel@@V.c)
 * Callees:
 *     ?_InitBuckets@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEAAXXZ @ 0x18000A8F0 (-_InitBuckets@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U-$hash.c)
 *     ?_FreeBuckets@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAAXXZ @ 0x180019434 (-_FreeBuckets@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@Exe.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

char __fastcall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,CComImplPtr<ExecutionModel::IResourceSetCallback,ExecutionModel::ResourceSetServerProxy>>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,CComImplPtr<ExecutionModel::IResourceSetCallback,ExecutionModel::ResourceSetServerProxy>>>,0>::_Rehash(
        __int64 a1,
        unsigned __int8 a2)
{
  char v2; // r14
  void *v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // r11
  _QWORD *v9; // r10
  _QWORD *v10; // rcx
  _QWORD *v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // r9

  v2 = 0;
  if ( a2 <= 0x38u )
  {
    v5 = (unsigned __int64)(8LL << a2) > 0xFFFFFFFFFFFFFFFLL
       ? 0LL
       : operator new(16 * (8LL << a2), (const struct std::nothrow_t *)&std::nothrow);
    if ( v5 )
    {
      v2 = 1;
      utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FreeBuckets(a1);
      *(_QWORD *)(a1 + 16) = v5;
      *(_BYTE *)(a1 + 32) = a2;
      utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_InitBuckets(a1);
      v6 = *(_QWORD **)a1;
      v7 = (8LL << *(_BYTE *)(a1 + 32)) - 1;
      while ( v6 != (_QWORD *)a1 )
      {
        v8 = v6;
        v6 = (_QWORD *)*v6;
        v9 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16 * (v7 & v8[2]));
        v10 = (_QWORD *)v9[1];
        if ( v10 )
        {
          v12 = (_QWORD *)*v10;
          if ( v12 != v8 )
          {
            v13 = *v8;
            v14 = *(_QWORD **)(*v8 + 8LL);
            *(_QWORD *)v8[1] = *v8;
            *(_QWORD *)(v13 + 8) = v8[1];
            v8[1] = v12[1];
            *(_QWORD *)v12[1] = v8;
            *v14 = v12;
            v12[1] = v14;
          }
        }
        else
        {
          *v9 = v8;
        }
        v9[1] = v8;
      }
    }
  }
  return v2;
}
