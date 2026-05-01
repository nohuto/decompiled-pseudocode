/*
 * XREFs of ?_FreeBuckets@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAAXXZ @ 0x180002688
 * Callers:
 *     ?_Rehash@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@2@$0A@@utl@@AEAA_NE@Z @ 0x1800027D0 (-_Rehash@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U-$hash@_K@2@U-.c)
 *     ??1ResourcePolicyEngineProxy@ExecutionModel@@IEAA@XZ @ 0x1800100CC (--1ResourcePolicyEngineProxy@ExecutionModel@@IEAA@XZ.c)
 *     ??1ResourceManagerClientProxy@@MEAA@XZ @ 0x180012410 (--1ResourceManagerClientProxy@@MEAA@XZ.c)
 *     ?_Rehash@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA_NE@Z @ 0x180014F70 (-_Rehash@-$_HashTable@KU-$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U-$hash@K@2@U-$equal_to@K@.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180009384 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall utl::_HashTable<unsigned long,utl::pair<unsigned long const,ResourceSetClientProxy *>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ResourceSetClientProxy *>>,0>::_FreeBuckets(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    operator delete(v1);
}
