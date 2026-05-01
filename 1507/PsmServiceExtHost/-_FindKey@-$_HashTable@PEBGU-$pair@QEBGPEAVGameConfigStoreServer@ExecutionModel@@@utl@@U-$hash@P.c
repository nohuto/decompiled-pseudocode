/*
 * XREFs of ?_FindKey@?$_HashTable@PEBGU?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@2@$0A@@utl@@AEAA_NV?$_DlistConstIt@U?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@utl@@@2@AEBQEBG_KPEAPEAU?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@2@@Z @ 0x18001F518
 * Callers:
 *     ?_EmplaceImpl@?$_HashTable@PEBGU?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@2@@Z @ 0x18001F5F0 (-_EmplaceImpl@-$_HashTable@PEBGU-$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@U-$ha.c)
 * Callees:
 *     ?_InitBuckets@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEAAXXZ @ 0x18000A8F0 (-_InitBuckets@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U-$hash.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

char __fastcall utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,ExecutionModel::GameConfigStoreServer *>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,ExecutionModel::GameConfigStoreServer *>>,0>::_FindKey(
        __int64 a1,
        _QWORD *a2,
        unsigned __int16 **a3,
        unsigned __int64 a4,
        _QWORD *a5)
{
  char v5; // di
  _QWORD *i; // rbx
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  void *v13; // rax
  char result; // al
  _QWORD *v15; // r9
  unsigned __int16 *v16; // rax
  int v17; // r8d
  int v18; // ecx

  v5 = 0;
  i = 0LL;
  v10 = *(_QWORD *)(a1 + 16);
  v11 = 8LL << *(_BYTE *)(a1 + 32);
  v12 = a4 & (v11 - 1);
  if ( v10 )
  {
    if ( *(_QWORD *)(v10 + 16 * v12) )
    {
      if ( a2 && a2 != (_QWORD *)a1 && ((v11 - 1) & a2[2]) == v12 )
      {
        for ( i = a2; i != *(_QWORD **)(v10 + 16 * v12); i = (_QWORD *)i[1] )
        {
          if ( a4 > i[2] )
            break;
        }
      }
      else
      {
        i = *(_QWORD **)(v10 + 16 * v12);
      }
      v15 = **(_QWORD ***)(v10 + 16 * v12 + 8);
      while ( i != v15 )
      {
        if ( i[2] >= a4 )
        {
          if ( i[2] > a4 )
            break;
          v16 = *a3;
          do
          {
            v17 = *(unsigned __int16 *)((char *)v16 + i[3] - (_QWORD)*a3);
            v18 = *v16 - v17;
            if ( v18 )
              break;
            ++v16;
          }
          while ( v17 );
          if ( !v18 )
            goto LABEL_15;
        }
        i = (_QWORD *)*i;
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
LABEL_15:
      v5 = 1;
  }
  result = v5;
  *a5 = i;
  return result;
}
