/*
 * XREFs of ?_EmplaceImpl@?$_HashTable@PEBGU?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@2@@Z @ 0x18001F5F0
 * Callers:
 *     ??$emplace@PEAGPEAVGameConfigStoreServer@ExecutionModel@@@?$_HashTable@PEBGU?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@2@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@utl@@@utl@@_N@1@$$QEAPEAG$$QEAPEAVGameConfigStoreServer@ExecutionModel@@@Z @ 0x18001F6A0 (--$emplace@PEAGPEAVGameConfigStoreServer@ExecutionModel@@@-$_HashTable@PEBGU-$pair@QEBGPEAVGameC.c)
 * Callees:
 *     ?_InsertNode@?$_HashTable@PEBGU?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@2@$0A@@utl@@AEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@2@0_K@Z @ 0x180003764 (-_InsertNode@-$_HashTable@PEBGU-$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@U-$has.c)
 *     ??R?$hash@PEBG@utl@@QEBA_KAEBQEBG@Z @ 0x18001E2B0 (--R-$hash@PEBG@utl@@QEBA_KAEBQEBG@Z.c)
 *     ?_FindKey@?$_HashTable@PEBGU?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@2@$0A@@utl@@AEAA_NV?$_DlistConstIt@U?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@utl@@@2@AEBQEBG_KPEAPEAU?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@2@@Z @ 0x18001F518 (-_FindKey@-$_HashTable@PEBGU-$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@U-$hash@P.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,ExecutionModel::GameConfigStoreServer *>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,ExecutionModel::GameConfigStoreServer *>>,0>::_EmplaceImpl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 **Block)
{
  unsigned __int16 **v5; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r9
  _QWORD *v10; // r10
  _QWORD *inserted; // rax

  *(_QWORD *)a2 = 0LL;
  v5 = Block;
  *(_BYTE *)(a2 + 8) = 0;
  if ( v5 )
  {
    v8 = utl::hash<unsigned short const *>::operator()(a1, v5 + 3);
    v9 = 32769 * ((9 * v8) ^ ((9 * v8) >> 11));
    v5[2] = (unsigned __int16 *)v9;
    if ( utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,ExecutionModel::GameConfigStoreServer *>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,ExecutionModel::GameConfigStoreServer *>>,0>::_FindKey(
           a1,
           v10,
           v5 + 3,
           v9,
           &Block) )
    {
      *(_QWORD *)a2 = Block;
      operator delete(v5);
    }
    else
    {
      inserted = utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,ExecutionModel::GameConfigStoreServer *>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,ExecutionModel::GameConfigStoreServer *>>,0>::_InsertNode(
                   a1,
                   &Block,
                   (__int64)Block,
                   v5,
                   (__int64)v5[2]);
      *(_BYTE *)(a2 + 8) = 1;
      *(_QWORD *)a2 = *inserted;
    }
  }
  return a2;
}
