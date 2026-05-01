/*
 * XREFs of ?_EmplaceImpl@?$_HashTable@KU?$pair@$$CBKK@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKK@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBKK@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBKK@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBKK@utl@@@2@@Z @ 0x1800443BC
 * Callers:
 *     ?GetResourceSetInfos@ResourceManager@ExecutionModel@@UEAAJKPEAURmResourceSetInfo@@PEAK@Z @ 0x180043DF0 (-GetResourceSetInfos@ResourceManager@ExecutionModel@@UEAAJKPEAURmResourceSetInfo@@PEAK@Z.c)
 * Callees:
 *     ??$_HashRange@PEBG@utl@@YAIPEBG0I@Z @ 0x18001C480 (--$_HashRange@PEBG@utl@@YAIPEBG0I@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_FindKey@?$_HashTable@KU?$pair@$$CBKK@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKK@utl@@@2@$0A@@utl@@AEAA_NV?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBKK@utl@@@utl@@@2@AEBK_KPEAPEAU?$_HashNode@U?$pair@$$CBKK@utl@@@2@@Z @ 0x18003A854 (-_FindKey@-$_HashTable@KU-$pair@$$CBKK@utl@@U-$hash@K@2@U-$equal_to@K@2@V-$allocator@U-$pair@$$C.c)
 *     ?_InsertNode@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@$0A@@utl@@AEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@0_K@Z @ 0x1800444A0 (-_InsertNode@-$_HashTable@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@_ea_1800444A0.c)
 */

__int64 __fastcall utl::_HashTable<unsigned long,utl::pair<unsigned long const,unsigned long>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,unsigned long>>,0>::_EmplaceImpl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 Block)
{
  unsigned __int64 v5; // rsi
  int v8; // eax
  __int64 *v9; // r11
  _QWORD *inserted; // rax

  *(_QWORD *)a2 = 0LL;
  v5 = Block;
  *(_BYTE *)(a2 + 8) = 0;
  if ( v5 )
  {
    v8 = utl::_HashRange<unsigned short const *>((unsigned __int16 *)(v5 + 24), v5 + 28);
    Block = 32769 * (((unsigned int)(9 * v8) >> 11) ^ (9 * v8));
    *(_QWORD *)(v5 + 16) = Block;
    if ( utl::_HashTable<unsigned long,utl::pair<unsigned long const,unsigned long>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,unsigned long>>,0>::_FindKey(
           a1,
           v9,
           (_DWORD *)(v5 + 24),
           32769 * (((unsigned int)(9 * v8) >> 11) ^ (9 * v8)),
           (__int64 **)&Block) )
    {
      *(_QWORD *)a2 = Block;
      operator delete((void *)v5);
    }
    else
    {
      inserted = (_QWORD *)utl::_HashTable<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>,tlx::string_hash,tlx::string_equal_to,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>>,0>::_InsertNode(
                             a1,
                             (unsigned int)&Block,
                             Block,
                             v5,
                             *(_QWORD *)(v5 + 16));
      *(_BYTE *)(a2 + 8) = 1;
      *(_QWORD *)a2 = *inserted;
    }
  }
  return a2;
}
