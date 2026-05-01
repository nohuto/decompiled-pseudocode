/*
 * XREFs of ??$emplace@PEAGPEAVGameConfigStoreServer@ExecutionModel@@@?$_HashTable@PEBGU?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@2@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@utl@@@utl@@_N@1@$$QEAPEAG$$QEAPEAVGameConfigStoreServer@ExecutionModel@@@Z @ 0x180022D54
 * Callers:
 *     ?GetGameConfigStoreServer@Internal@ExecutionModel@@YAJPEBGPEAPEAVGameConfigStoreServer@2@@Z @ 0x18001C0CC (-GetGameConfigStoreServer@Internal@ExecutionModel@@YAJPEBGPEAPEAVGameConfigStoreServer@2@@Z.c)
 * Callees:
 *     ?_EmplaceImpl@?$_HashTable@PEBGU?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@2@@Z @ 0x180022C6C (-_EmplaceImpl@-$_HashTable@PEBGU-$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@U-$ha.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,ExecutionModel::GameConfigStoreServer *>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,ExecutionModel::GameConfigStoreServer *>>,0>::emplace<unsigned short *,ExecutionModel::GameConfigStoreServer *>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  void *v4; // rdi
  _QWORD *Block; // rax
  __int64 v9; // r8

  v4 = ExecutionModel::Internal::_sidToGameConfigServer;
  Block = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( Block )
  {
    Block[3] = *a3;
    Block[4] = *a4;
  }
  utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,ExecutionModel::GameConfigStoreServer *>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,ExecutionModel::GameConfigStoreServer *>>,0>::_EmplaceImpl(
    (__int64)v4,
    a2,
    v9,
    0LL,
    (__int64)Block);
  return a2;
}
