/*
 * XREFs of ?_FreeBuckets@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAAXXZ @ 0x18000F904
 * Callers:
 *     ??1ResourcePolicyEngineProxy@ExecutionModel@@IEAA@XZ @ 0x18000F80C (--1ResourcePolicyEngineProxy@ExecutionModel@@IEAA@XZ.c)
 *     ?_Rehash@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA_NE@Z @ 0x18000FABC (-_Rehash@-$_HashTable@KU-$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U-$hash@K@2@U-$equal_to@K@.c)
 *     ??1ResourceManagerClientProxy@@MEAA@XZ @ 0x1800116E0 (--1ResourceManagerClientProxy@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180008CB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall utl::_HashTable<unsigned long,utl::pair<unsigned long const,ResourceSetClientProxy *>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ResourceSetClientProxy *>>,0>::_FreeBuckets(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    operator delete(v1);
}
