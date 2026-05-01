/*
 * XREFs of ?_FreeBuckets@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAAXXZ @ 0x18000CB2C
 * Callers:
 *     ??1ResourceManagerClientProxy@@MEAA@XZ @ 0x18000AEAC (--1ResourceManagerClientProxy@@MEAA@XZ.c)
 *     ?_Rehash@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA_NE@Z @ 0x18000CC20 (-_Rehash@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U-$hash@_K@2@U-$equal_to.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800065B0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_FreeBuckets(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    operator delete(v1);
}
