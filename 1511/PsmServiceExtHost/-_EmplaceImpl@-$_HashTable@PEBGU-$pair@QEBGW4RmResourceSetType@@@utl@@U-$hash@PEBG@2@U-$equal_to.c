/*
 * XREFs of ?_EmplaceImpl@?$_HashTable@PEBGU?$pair@QEBGW4RmResourceSetType@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@@Z @ 0x1800282EC
 * Callers:
 *     ?AddResourcePolicyDetails@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGPEBU_ResourcePolicyDetails@@PEAW4RmResourceSetType@@@Z @ 0x180026598 (-AddResourcePolicyDetails@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGPEBU_ResourcePolicyDetail.c)
 * Callees:
 *     ?_InsertNode@?$_HashTable@PEBGU?$pair@QEBGW4RmResourceSetType@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@$0A@@utl@@AEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@0_K@Z @ 0x18001AF84 (-_InsertNode@-$_HashTable@PEBGU-$pair@QEBGW4RmResourceSetType@@@utl@@U-$hash@PEBG@2@U-$equal_to@.c)
 *     ??$_HashRange@PEBG@utl@@YAIPEBG0I@Z @ 0x18001C480 (--$_HashRange@PEBG@utl@@YAIPEBG0I@Z.c)
 *     ?_FindKey@?$_HashTable@PEBGU?$pair@QEBGW4RmResourceSetType@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@$0A@@utl@@AEAA_NV?$_DlistConstIt@U?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@utl@@@2@AEBQEBG_KPEAPEAU?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@@Z @ 0x180028210 (-_FindKey@-$_HashTable@PEBGU-$pair@QEBGW4RmResourceSetType@@@utl@@U-$hash@PEBG@2@U-$equal_to@PEB.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,enum RmResourceSetType>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,enum RmResourceSetType>>,0>::_EmplaceImpl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 Block)
{
  __int64 v5; // rdi
  unsigned __int16 *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  _QWORD *v11; // r11
  __int64 **inserted; // rax

  v5 = Block;
  *(_QWORD *)a2 = 0LL;
  *(_BYTE *)(a2 + 8) = 0;
  if ( v5 )
  {
    v8 = *(unsigned __int16 **)(v5 + 24);
    v9 = -1LL;
    do
      ++v9;
    while ( v8[v9] );
    v10 = utl::_HashRange<unsigned short const *>(v8, (unsigned __int64)&v8[v9]);
    Block = 32769 * (((unsigned int)(9 * v10) >> 11) ^ (9 * v10));
    *(_QWORD *)(v5 + 16) = Block;
    if ( utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,enum RmResourceSetType>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,enum RmResourceSetType>>,0>::_FindKey(
           a1,
           v11,
           (unsigned __int16 **)(v5 + 24),
           32769 * (((unsigned int)(9 * v10) >> 11) ^ (9 * v10)),
           &Block) )
    {
      *(_QWORD *)a2 = Block;
      operator delete((void *)v5);
    }
    else
    {
      inserted = utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,enum RmResourceSetType>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,enum RmResourceSetType>>,0>::_InsertNode(
                   a1,
                   (__int64 **)&Block,
                   Block,
                   (__int64 *)v5,
                   *(_QWORD *)(v5 + 16));
      *(_BYTE *)(a2 + 8) = 1;
      *(_QWORD *)a2 = *inserted;
    }
  }
  return a2;
}
