/*
 * XREFs of ?_FindKey@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@$0A@@utl@@AEAA_NV?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@2@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@2@_KPEAPEAU?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@@Z @ 0x18004CEDC
 * Callers:
 *     ?_EmplaceImpl@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@@Z @ 0x18004CD78 (-_EmplaceImpl@-$_HashTable@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@_ea_18004CD78.c)
 * Callees:
 *     ?_InitBuckets@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEAAXXZ @ 0x18000A8F0 (-_InitBuckets@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U-$hash.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?eq@?$_StringTraits@U?$transform_traits@U?$identity_transform@G@tlx@@@tlx@@@utl@@SA_NPEBG_K01@Z @ 0x1800478FC (-eq@-$_StringTraits@U-$transform_traits@U-$identity_transform@G@tlx@@@tlx@@@utl@@SA_NPEBG_K01@Z.c)
 */

char __fastcall utl::_HashTable<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>,tlx::string_hash,tlx::string_equal_to,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>>,0>::_FindKey(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 **a5)
{
  char v5; // di
  unsigned __int64 v7; // r11
  __int64 *i; // rbx
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  void *v13; // rax
  __int64 *v14; // rsi
  char result; // al

  v5 = 0;
  v7 = a4;
  i = 0LL;
  v10 = *(_QWORD *)(a1 + 16);
  v11 = 8LL << *(_BYTE *)(a1 + 32);
  v12 = a4 & (v11 - 1);
  if ( v10 )
  {
    if ( *(_QWORD *)(v10 + 16 * v12) )
    {
      if ( a2 && a2 != (__int64 *)a1 && ((v11 - 1) & a2[2]) == v12 )
      {
        for ( i = a2; i != *(__int64 **)(v10 + 16 * v12); i = (__int64 *)i[1] )
        {
          if ( v7 > i[2] )
            break;
        }
      }
      else
      {
        i = *(__int64 **)(v10 + 16 * v12);
      }
      v14 = **(__int64 ***)(v10 + 16 * v12 + 8);
      while ( i != v14 )
      {
        if ( i[2] >= v7 )
        {
          if ( i[2] > v7 )
            break;
          if ( utl::_StringTraits<tlx::transform_traits<tlx::identity_transform<unsigned short>>>::eq(
                 *(char **)a3,
                 (__int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) >> 1,
                 (char *)i[3],
                 (i[4] - i[3]) >> 1) )
          {
            goto LABEL_23;
          }
        }
        i = (__int64 *)*i;
      }
    }
  }
  else
  {
    if ( v11 > 0xFFFFFFFFFFFFFFFLL )
      v13 = 0LL;
    else
      v13 = operator new(16 * v11, (const struct std::nothrow_t *)&std::nothrow);
    *(_QWORD *)(a1 + 16) = v13;
    if ( v13 )
      utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_InitBuckets(a1);
    else
LABEL_23:
      v5 = 1;
  }
  result = v5;
  *a5 = i;
  return result;
}
