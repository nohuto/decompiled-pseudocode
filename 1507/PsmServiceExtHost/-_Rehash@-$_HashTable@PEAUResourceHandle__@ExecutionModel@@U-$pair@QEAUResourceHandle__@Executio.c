/*
 * XREFs of ?_Rehash@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAA_NE@Z @ 0x18003954C
 * Callers:
 *     ?_InsertNode@?$_HashTable@PEBGU?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@2@$0A@@utl@@AEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@2@0_K@Z @ 0x180003764 (-_InsertNode@-$_HashTable@PEBGU-$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@U-$has.c)
 *     ?_InsertNode@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@K@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@K@utl@@@2@$0A@@utl@@AEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@K@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@K@utl@@@2@0_K@Z @ 0x180018CC8 (-_InsertNode@-$_HashTable@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@U-$pair@.c)
 *     ?_InsertNode@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@$0A@@utl@@AEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@0_K@Z @ 0x1800394B8 (-_InsertNode@-$_HashTable@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@_ea_1800394B8.c)
 * Callees:
 *     ?_InitBuckets@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEAAXXZ @ 0x18000A8F0 (-_InitBuckets@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U-$hash.c)
 *     ?_FreeBuckets@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAAXXZ @ 0x180019434 (-_FreeBuckets@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@Exe.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

char __fastcall utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_Rehash(
        __int64 a1,
        unsigned __int8 a2)
{
  char v2; // r14
  void *v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // r11
  _QWORD *v9; // r10
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // r9

  v2 = 0;
  if ( a2 <= 0x38u )
  {
    v5 = (unsigned __int64)(8LL << a2) > 0xFFFFFFFFFFFFFFFLL
       ? 0LL
       : operator new(16 * (8LL << a2), (const struct std::nothrow_t *)&std::nothrow);
    if ( v5 )
    {
      v2 = 1;
      utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FreeBuckets(a1);
      *(_QWORD *)(a1 + 16) = v5;
      *(_BYTE *)(a1 + 32) = a2;
      utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_InitBuckets(a1);
      v6 = *(_QWORD **)a1;
      v7 = (8LL << *(_BYTE *)(a1 + 32)) - 1;
      while ( v6 != (_QWORD *)a1 )
      {
        v8 = v6;
        v6 = (_QWORD *)*v6;
        v9 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16 * (v7 & v8[2]));
        v10 = (_QWORD *)v9[1];
        if ( v10 )
        {
          v11 = (_QWORD *)*v10;
          if ( v11 != v8 )
          {
            v12 = *v8;
            v13 = *(_QWORD **)(*v8 + 8LL);
            *(_QWORD *)v8[1] = *v8;
            *(_QWORD *)(v12 + 8) = v8[1];
            v8[1] = v11[1];
            *(_QWORD *)v11[1] = v8;
            *v13 = v11;
            v11[1] = v13;
          }
        }
        else
        {
          *v9 = v8;
        }
        v9[1] = v8;
      }
    }
  }
  return v2;
}
