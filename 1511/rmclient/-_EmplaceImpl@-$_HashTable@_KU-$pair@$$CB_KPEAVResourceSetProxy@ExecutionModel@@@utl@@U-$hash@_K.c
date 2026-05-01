/*
 * XREFs of ?_EmplaceImpl@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@2@@Z @ 0x18000C1B0
 * Callers:
 *     ??$emplace@AEA_KAEAPEAVResourceSetProxy@ExecutionModel@@@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@2@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@utl@@@utl@@_N@1@AEA_KAEAPEAVResourceSetProxy@ExecutionModel@@@Z @ 0x18000C2A0 (--$emplace@AEA_KAEAPEAVResourceSetProxy@ExecutionModel@@@-$_HashTable@_KU-$pair@$$CB_KPEAVResour.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180009384 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_FindKey@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@2@$0A@@utl@@AEAA_NV?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@utl@@@2@AEB_K_KPEAPEAU?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@2@@Z @ 0x18000C018 (-_FindKey@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U-$hash@_K@2@U.c)
 *     ?_InsertNode@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@2@$0A@@utl@@AEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@2@0_K@Z @ 0x18000C11C (-_InsertNode@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U-$hash@_K@.c)
 *     ??$_HashRange@PEBG@utl@@YAIPEBG0I@Z @ 0x180010770 (--$_HashRange@PEBG@utl@@YAIPEBG0I@Z.c)
 */

__int64 __fastcall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ExecutionModel::ResourceSetProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ExecutionModel::ResourceSetProxy *>>,0>::_EmplaceImpl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 Block)
{
  __int64 *v6; // rbp
  int v9; // eax
  __int64 **inserted; // rax

  *(_QWORD *)a2 = 0LL;
  v6 = (__int64 *)Block;
  *(_BYTE *)(a2 + 8) = 0;
  if ( v6 )
  {
    v9 = utl::_HashRange<unsigned short const *>(v6 + 3, v6 + 4);
    Block = 32769 * (((unsigned int)(9 * v9) >> 11) ^ (9 * v9));
    v6[2] = Block;
    if ( utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ExecutionModel::ResourceSetProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ExecutionModel::ResourceSetProxy *>>,0>::_FindKey(
           a1,
           a4,
           v6 + 3,
           32769 * (((unsigned int)(9 * v9) >> 11) ^ (9 * v9)),
           &Block) )
    {
      *(_QWORD *)a2 = Block;
      operator delete(v6);
    }
    else
    {
      inserted = utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ExecutionModel::ResourceSetProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ExecutionModel::ResourceSetProxy *>>,0>::_InsertNode(
                   a1,
                   (__int64 **)&Block,
                   Block,
                   v6,
                   v6[2]);
      *(_BYTE *)(a2 + 8) = 1;
      *(_QWORD *)a2 = *inserted;
    }
  }
  return a2;
}
