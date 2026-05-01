/*
 * XREFs of ?SetAndRecordShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGAEAV?$ComPtr@UIStream@@@WRL@Microsoft@@@Z @ 0x180023620
 * Callers:
 *     ?RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4GameListCategory@2345@0PEAUITileManager@@PEAUITileInfo@@@Z @ 0x18001EA34 (-RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4Gam.c)
 *     ?ClearShellPropertyStream@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBG@Z @ 0x18002386C (-ClearShellPropertyStream@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddUpdateItem@?$CSimpleHashTable@PEBGV?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEBGAEBV?$ComPtr@UIStream@@@WRL@Microsoft@@PEAV234@@Z @ 0x18002468C (-_AddUpdateItem@-$CSimpleHashTable@PEBGV-$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@V.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x1800248B8 (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VC.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::SetAndRecordShellProperty(
        __int64 a1,
        const WCHAR *a2,
        _QWORD *a3)
{
  __int64 v4; // rcx
  __int64 v7; // r9
  HRESULT updated; // ebx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // r9
  unsigned __int64 v12; // r9
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPWSTR ppwsz; // [rsp+50h] [rbp+8h] BYREF
  const WCHAR *v17; // [rsp+58h] [rbp+10h] BYREF

  v17 = a2;
  v4 = *(_QWORD *)(a1 + 64);
  v7 = v4 == 0 ? 0x8002802B : 0;
  if ( v4
    && *(_DWORD *)CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                    v4,
                    *(unsigned int *)(a1 + 52),
                    &v17,
                    v7) == 1 )
  {
    updated = -2147024809;
    v9 = 961LL;
LABEL_14:
    v12 = (unsigned int)updated;
    goto LABEL_15;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, const WCHAR *, _QWORD, __int64))(**(_QWORD **)(a1 + 72) + 104LL))(
          *(_QWORD *)(a1 + 72),
          a2,
          *a3,
          v7);
  updated = v10;
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v9 = 964LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)v12);
    return (unsigned int)updated;
  }
  if ( !*(_QWORD *)(a1 + 40)
    || *(_DWORD *)CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                    *(_QWORD *)(a1 + 40),
                    *(unsigned int *)(a1 + 28),
                    &v17,
                    v11) != 1 )
  {
    ppwsz = 0LL;
    updated = SHStrDupW(a2, &ppwsz);
    if ( updated >= 0 )
    {
      updated = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
                  a1 + 24,
                  1LL,
                  &ppwsz,
                  a3);
      if ( updated >= 0 )
        return 0LL;
      CoTaskMemFree(ppwsz);
    }
    v9 = 971LL;
    goto LABEL_14;
  }
  v13 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
          a1 + 24,
          0LL,
          &v17,
          a3);
  updated = v13;
  if ( v13 < 0 )
  {
    v12 = (unsigned int)v13;
    v9 = 967LL;
    goto LABEL_15;
  }
  return 0LL;
}
