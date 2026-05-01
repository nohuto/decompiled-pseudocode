/*
 * XREFs of ?_EmplaceImpl@?$_HashTable@KU?$pair@$$CBKK@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKK@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBKK@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBKK@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBKK@utl@@@2@@Z @ 0x18003EEFC
 * Callers:
 *     ?GetResourceSetInfos@ResourceManager@ExecutionModel@@UEAAJKPEAURmResourceSetInfo@@PEAK@Z @ 0x18003E930 (-GetResourceSetInfos@ResourceManager@ExecutionModel@@UEAAJKPEAURmResourceSetInfo@@PEAK@Z.c)
 * Callees:
 *     ??$_HashRange@PEBG@utl@@YA_KPEBG0_K@Z @ 0x1800048C4 (--$_HashRange@PEBG@utl@@YA_KPEBG0_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_FindKey@?$_HashTable@KU?$pair@$$CBKK@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKK@utl@@@2@$0A@@utl@@AEAA_NV?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBKK@utl@@@utl@@@2@AEBK_KPEAPEAU?$_HashNode@U?$pair@$$CBKK@utl@@@2@@Z @ 0x180033630 (-_FindKey@-$_HashTable@KU-$pair@$$CBKK@utl@@U-$hash@K@2@U-$equal_to@K@2@V-$allocator@U-$pair@$$C.c)
 *     ?_InsertNode@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@$0A@@utl@@AEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@0_K@Z @ 0x1800394B8 (-_InsertNode@-$_HashTable@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@_ea_1800394B8.c)
 */

__int64 __fastcall utl::_HashTable<unsigned long,utl::pair<unsigned long const,unsigned long>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,unsigned long>>,0>::_EmplaceImpl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
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
    if ( utl::_HashTable<unsigned long,utl::pair<unsigned long const,unsigned long>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,unsigned long>>,0>::_FindKey(
           a1,
           a4,
           (_DWORD *)v6 + 6,
           v10,
           (__int64 **)&Block) )
    {
      *(_QWORD *)a2 = Block;
      operator delete(v6);
    }
    else
    {
      inserted = utl::_HashTable<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>,tlx::string_hash,tlx::string_equal_to,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>>,0>::_InsertNode(
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
