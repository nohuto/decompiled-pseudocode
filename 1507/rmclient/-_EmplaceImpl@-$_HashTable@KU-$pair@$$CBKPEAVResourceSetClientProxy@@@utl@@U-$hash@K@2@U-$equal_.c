/*
 * XREFs of ?_EmplaceImpl@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@@Z @ 0x180013F98
 * Callers:
 *     ??$emplace@AEAKAEAPEAVResourceSetClientProxy@@@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@utl@@_N@1@AEAKAEAPEAVResourceSetClientProxy@@@Z @ 0x180011618 (--$emplace@AEAKAEAPEAVResourceSetClientProxy@@@-$_HashTable@KU-$pair@$$CBKPEAVResourceSetClientP.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180008CB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_InsertNode@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@0_K@Z @ 0x18000B700 (-_InsertNode@-$_HashTable@KU-$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U-$hash@K@2@U-$equal_t.c)
 *     ??$_HashRange@PEBG@utl@@YA_KPEBG0_K@Z @ 0x18000F928 (--$_HashRange@PEBG@utl@@YA_KPEBG0_K@Z.c)
 *     ?_FindKey@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA_NV?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@2@AEBK_KPEAPEAU?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@@Z @ 0x180014078 (-_FindKey@-$_HashTable@KU-$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U-$hash@K@2@U-$equal_to@K.c)
 */

__int64 __fastcall utl::_HashTable<unsigned long,utl::pair<unsigned long const,ResourceSetClientProxy *>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ResourceSetClientProxy *>>,0>::_EmplaceImpl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int16 *Block)
{
  unsigned __int16 *v6; // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r9
  _QWORD *inserted; // rax

  *(_QWORD *)a2 = 0LL;
  v6 = Block;
  *(_BYTE *)(a2 + 8) = 0;
  if ( v6 )
  {
    v9 = utl::_HashRange<unsigned short const *>(v6 + 12, (unsigned __int64)(v6 + 14));
    v10 = 32769 * ((9 * v9) ^ ((9 * v9) >> 11));
    *((_QWORD *)v6 + 2) = v10;
    if ( (unsigned __int8)utl::_HashTable<unsigned long,utl::pair<unsigned long const,ResourceSetClientProxy *>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ResourceSetClientProxy *>>,0>::_FindKey(
                            a1,
                            a4,
                            (int)v6 + 24,
                            v10,
                            (__int64)&Block) )
    {
      *(_QWORD *)a2 = Block;
      operator delete(v6);
    }
    else
    {
      inserted = utl::_HashTable<unsigned long,utl::pair<unsigned long const,ResourceSetClientProxy *>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ResourceSetClientProxy *>>,0>::_InsertNode(
                   a1,
                   &Block,
                   (__int64)Block,
                   v6,
                   *((_QWORD *)v6 + 2));
      *(_BYTE *)(a2 + 8) = 1;
      *(_QWORD *)a2 = *inserted;
    }
  }
  return a2;
}
