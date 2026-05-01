/*
 * XREFs of ??$_InsertImpl@U?$pair@_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@?$_HashTable@_KU?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@utl@@@utl@@_N@1@U?$integral_constant@_N$0A@@1@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@utl@@@1@$$QEAU?$pair@_KPEAVHostResourceInfo@ExecutionModel@@@1@@Z @ 0x180018130
 * Callers:
 *     ?CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x18001874C (-CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAE.c)
 * Callees:
 *     ?_InsertNode@?$_HashTable@PEBGU?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@2@$0A@@utl@@AEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@2@0_K@Z @ 0x180003764 (-_InsertNode@-$_HashTable@PEBGU-$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@U-$has.c)
 *     ??$_HashRange@PEBG@utl@@YA_KPEBG0_K@Z @ 0x1800048C4 (--$_HashRange@PEBG@utl@@YA_KPEBG0_K@Z.c)
 *     ?_FindKey@?$_HashTable@_KU?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@2@$0A@@utl@@AEAA_NV?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@utl@@@2@AEB_K_KPEAPEAU?$_HashNode@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@2@@Z @ 0x180017F3C (-_FindKey@-$_HashTable@_KU-$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@U-$hash@_K@2@U.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ExecutionModel::HostResourceInfo *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ExecutionModel::HostResourceInfo *>>,0>::_InsertImpl<utl::pair<unsigned __int64,ExecutionModel::HostResourceInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v5; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD *inserted; // rax

  v5 = a5;
  *(_QWORD *)a2 = 0LL;
  *(_BYTE *)(a2 + 8) = 0;
  v9 = utl::_HashRange<unsigned short const *>((unsigned __int16 *)v5, v5 + 8);
  v10 = 32769 * (((9 * v9) >> 11) ^ (9 * v9));
  if ( utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ExecutionModel::HostResourceInfo *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ExecutionModel::HostResourceInfo *>>,0>::_FindKey(
         a1,
         a4,
         (_QWORD *)v5,
         v10,
         &a5) )
  {
    *(_QWORD *)a2 = a5;
  }
  else
  {
    v11 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v11 )
    {
      v12 = a5;
      v11[3] = *(_QWORD *)v5;
      v11[4] = *(_QWORD *)(v5 + 8);
      v11[2] = v10;
      inserted = utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,ExecutionModel::GameConfigStoreServer *>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,ExecutionModel::GameConfigStoreServer *>>,0>::_InsertNode(
                   a1,
                   &a5,
                   v12,
                   v11,
                   v10);
      *(_BYTE *)(a2 + 8) = 1;
      *(_QWORD *)a2 = *inserted;
    }
  }
  return a2;
}
