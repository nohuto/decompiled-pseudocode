/*
 * XREFs of ??$emplace@AEA_KAEAPEAVResourceSetProxy@ExecutionModel@@@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@2@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@utl@@@utl@@_N@1@AEA_KAEAPEAVResourceSetProxy@ExecutionModel@@@Z @ 0x18000B874
 * Callers:
 *     ?AddProxyResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@QEAAJ_KPEAVResourceSetProxy@2@@Z @ 0x18000B484 (-AddProxyResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@QEAAJ_KPEAVResourceSetProxy@2@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000887C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_EmplaceImpl@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@2@@Z @ 0x18000B794 (-_EmplaceImpl@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U-$hash@_K.c)
 */

__int64 __fastcall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ExecutionModel::ResourceSetProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ExecutionModel::ResourceSetProxy *>>,0>::emplace<unsigned __int64 &,ExecutionModel::ResourceSetProxy * &>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *Block; // rax
  __int64 v9; // r8

  Block = (__int64 *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( Block )
  {
    v9 = *a3;
    Block[3] = *a3;
    Block[4] = *a4;
  }
  utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ExecutionModel::ResourceSetProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ExecutionModel::ResourceSetProxy *>>,0>::_EmplaceImpl(
    a1,
    a2,
    v9,
    0LL,
    Block);
  return a2;
}
