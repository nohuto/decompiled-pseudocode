/*
 * XREFs of ?_EmplaceImpl@?$_HashTable@PEBGU?$pair@QEBGW4RmResourceSetType@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@@Z @ 0x18001E1F8
 * Callers:
 *     ?AddResourcePolicyDetails@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGPEBU_ResourcePolicyDetails@@PEAW4RmResourceSetType@@@Z @ 0x18001C998 (-AddResourcePolicyDetails@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGPEBU_ResourcePolicyDetail.c)
 * Callees:
 *     ?_InsertNode@?$_HashTable@PEBGU?$pair@QEBGW4RmResourceSetType@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@$0A@@utl@@AEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@0_K@Z @ 0x18000AA10 (-_InsertNode@-$_HashTable@PEBGU-$pair@QEBGW4RmResourceSetType@@@utl@@U-$hash@PEBG@2@U-$equal_to@.c)
 *     ?_FindKey@?$_HashTable@PEBGU?$pair@QEBGW4RmResourceSetType@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@$0A@@utl@@AEAA_NV?$_DlistConstIt@U?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@utl@@@2@AEBQEBG_KPEAPEAU?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@@Z @ 0x18001E11C (-_FindKey@-$_HashTable@PEBGU-$pair@QEBGW4RmResourceSetType@@@utl@@U-$hash@PEBG@2@U-$equal_to@PEB.c)
 *     ??R?$hash@PEBG@utl@@QEBA_KAEBQEBG@Z @ 0x18001E2B0 (--R-$hash@PEBG@utl@@QEBA_KAEBQEBG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,enum RmResourceSetType>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,enum RmResourceSetType>>,0>::_EmplaceImpl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char *Block)
{
  char *v5; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // r9
  _QWORD *v10; // r10
  __int64 **inserted; // rax

  *(_QWORD *)a2 = 0LL;
  v5 = Block;
  *(_BYTE *)(a2 + 8) = 0;
  if ( v5 )
  {
    v8 = utl::hash<unsigned short const *>::operator()(a1, v5 + 24);
    v9 = 32769 * ((9 * v8) ^ ((unsigned __int64)(9 * v8) >> 11));
    *((_QWORD *)v5 + 2) = v9;
    if ( utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,enum RmResourceSetType>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,enum RmResourceSetType>>,0>::_FindKey(
           a1,
           v10,
           (unsigned __int16 **)v5 + 3,
           v9,
           &Block) )
    {
      *(_QWORD *)a2 = Block;
      operator delete(v5);
    }
    else
    {
      inserted = utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,enum RmResourceSetType>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,enum RmResourceSetType>>,0>::_InsertNode(
                   a1,
                   (__int64 **)&Block,
                   (__int64)Block,
                   (__int64 *)v5,
                   *((_QWORD *)v5 + 2));
      *(_BYTE *)(a2 + 8) = 1;
      *(_QWORD *)a2 = *inserted;
    }
  }
  return a2;
}
