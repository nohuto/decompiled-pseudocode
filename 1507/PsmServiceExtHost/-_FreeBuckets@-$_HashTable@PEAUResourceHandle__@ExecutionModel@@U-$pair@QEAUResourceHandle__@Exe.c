/*
 * XREFs of ?_FreeBuckets@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAAXXZ @ 0x180019434
 * Callers:
 *     ?_Rehash@?$_HashTable@PEBGU?$pair@QEBGW4RmResourceSetType@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@$0A@@utl@@AEAA_NE@Z @ 0x18000A7D4 (-_Rehash@-$_HashTable@PEBGU-$pair@QEBGW4RmResourceSetType@@@utl@@U-$hash@PEBG@2@U-$equal_to@PEBG.c)
 *     ?_Rehash@?$_HashTable@_KU?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@2@$0A@@utl@@AEAA_NE@Z @ 0x180019458 (-_Rehash@-$_HashTable@_KU-$pair@$$CB_KV-$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VReso.c)
 *     ??1ResourceManagerServerProxy@@MEAA@XZ @ 0x180031880 (--1ResourceManagerServerProxy@@MEAA@XZ.c)
 *     ??1ModernResourceEnforcer@@MEAA@XZ @ 0x18003383C (--1ModernResourceEnforcer@@MEAA@XZ.c)
 *     ??1ResourceManager@ExecutionModel@@QEAA@XZ @ 0x180033F7C (--1ResourceManager@ExecutionModel@@QEAA@XZ.c)
 *     ?_Rehash@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAA_NE@Z @ 0x18003954C (-_Rehash@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@Executio.c)
 *     ?GetResourceSetInfos@ResourceManager@ExecutionModel@@UEAAJKPEAURmResourceSetInfo@@PEAK@Z @ 0x18003E930 (-GetResourceSetInfos@ResourceManager@ExecutionModel@@UEAAJKPEAURmResourceSetInfo@@PEAK@Z.c)
 *     ?DeleteGameConfigServers@Internal@ExecutionModel@@YAJXZ @ 0x180042EEC (-DeleteGameConfigServers@Internal@ExecutionModel@@YAJXZ.c)
 *     ??1ResourcePolicyStore@ExecutionModel@@QEAA@XZ @ 0x1800468C0 (--1ResourcePolicyStore@ExecutionModel@@QEAA@XZ.c)
 *     ??_GResourcePolicyEngineServerProxy@ExecutionModel@@QEAAPEAXI@Z @ 0x1800474D4 (--_GResourcePolicyEngineServerProxy@ExecutionModel@@QEAAPEAXI@Z.c)
 *     ??1HostResources@ExecutionModel@@QEAA@XZ @ 0x180047780 (--1HostResources@ExecutionModel@@QEAA@XZ.c)
 *     ??1AppEnergyUsageManager@@MEAA@XZ @ 0x180048C88 (--1AppEnergyUsageManager@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FreeBuckets(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    operator delete(v1);
}
