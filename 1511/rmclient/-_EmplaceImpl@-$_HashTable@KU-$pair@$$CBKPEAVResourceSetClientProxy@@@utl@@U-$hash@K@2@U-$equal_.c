/*
 * XREFs of ?_EmplaceImpl@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@@Z @ 0x180014CE8
 * Callers:
 *     ??$emplace@AEAKAEAPEAVResourceSetClientProxy@@@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@utl@@_N@1@AEAKAEAPEAVResourceSetClientProxy@@@Z @ 0x180012348 (--$emplace@AEAKAEAPEAVResourceSetClientProxy@@@-$_HashTable@KU-$pair@$$CBKPEAVResourceSetClientP.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180009384 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_HashRange@PEBG@utl@@YAIPEBG0I@Z @ 0x180010770 (--$_HashRange@PEBG@utl@@YAIPEBG0I@Z.c)
 *     ?_FindKey@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA_NV?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@2@AEBK_KPEAPEAU?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@@Z @ 0x180014DD8 (-_FindKey@-$_HashTable@KU-$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U-$hash@K@2@U-$equal_to@K.c)
 *     ?_InsertNode@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@0_K@Z @ 0x180014EDC (-_InsertNode@-$_HashTable@KU-$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U-$hash@K@2@U-$equal_t.c)
 */

__int64 __fastcall utl::_HashTable<unsigned long,utl::pair<unsigned long const,ResourceSetClientProxy *>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ResourceSetClientProxy *>>,0>::_EmplaceImpl(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int64 Block)
{
  unsigned __int64 v6; // rbp
  int v9; // eax
  _QWORD *inserted; // rax

  *(_QWORD *)a2 = 0LL;
  v6 = Block;
  *(_BYTE *)(a2 + 8) = 0;
  if ( v6 )
  {
    v9 = utl::_HashRange<unsigned short const *>((unsigned __int16 *)(v6 + 24), v6 + 28);
    Block = 32769 * (((unsigned int)(9 * v9) >> 11) ^ (9 * v9));
    *(_QWORD *)(v6 + 16) = Block;
    if ( (unsigned __int8)utl::_HashTable<unsigned long,utl::pair<unsigned long const,ResourceSetClientProxy *>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ResourceSetClientProxy *>>,0>::_FindKey(
                            a1,
                            a4,
                            (int)v6 + 24,
                            32769 * (((unsigned int)(9 * v9) >> 11) ^ (9 * v9)),
                            (__int64)&Block) )
    {
      *(_QWORD *)a2 = Block;
      operator delete((void *)v6);
    }
    else
    {
      inserted = (_QWORD *)utl::_HashTable<unsigned long,utl::pair<unsigned long const,ResourceSetClientProxy *>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ResourceSetClientProxy *>>,0>::_InsertNode(
                             a1,
                             (unsigned int)&Block,
                             Block,
                             v6,
                             *(_QWORD *)(v6 + 16));
      *(_BYTE *)(a2 + 8) = 1;
      *(_QWORD *)a2 = *inserted;
    }
  }
  return a2;
}
