/*
 * XREFs of ?GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAG@Z @ 0x180022874
 * Callers:
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180012AC8 (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007B70 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?SetCachePropertyWithRetry@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@IPEBG@Z @ 0x180022204 (-SetCachePropertyWithRetry@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@P.c)
 *     ?GetRawDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAPEAG@Z @ 0x180022740 (-GetRawDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAPEAG@Z.c)
 *     ?MRTResolveText@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEAPEAG@Z @ 0x180022A94 (-MRTResolveText@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEAPEAG@Z.c)
 *     ??$As@UITileInfoCache@@@?$ComPtr@UITileInfo@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITileInfoCache@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800244FC (--$As@UITileInfoCache@@@-$ComPtr@UITileInfo@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UITileI.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::GetDisplayName(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this,
        struct ITileManager *a2,
        struct IVisualElementEnumerator *a3,
        unsigned __int16 **a4)
{
  unsigned int RawDisplayName; // edi
  int v9; // eax
  unsigned __int16 *v10; // rcx
  __int64 v11; // rdi
  int v12; // eax
  unsigned __int16 *v13; // rbx
  __int64 v14; // rdx
  TileDataLayerItemWrappers::TDLTileInfoHelper *v15; // rcx
  __int64 v16; // r9
  void *v17; // rax
  int v18; // eax
  __int64 v19; // rsi
  LPVOID pv; // [rsp+30h] [rbp-30h] BYREF
  __int64 v22; // [rsp+38h] [rbp-28h]
  __int64 v23; // [rsp+40h] [rbp-20h]
  unsigned __int16 *v24; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v26; // [rsp+90h] [rbp+30h] BYREF

  *a4 = 0LL;
  v26 = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<ITileInfo>::As<ITileInfoCache>((char *)this + 72, &v26) < 0 )
  {
    RawDisplayName = TileDataLayerItemWrappers::TDLTileInfoHelper::GetRawDisplayName(this, a4);
    goto LABEL_26;
  }
  v22 = -1LL;
  v23 = -1LL;
  pv = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, LPVOID *))(*(_QWORD *)v26 + 40LL))(v26, 983227LL, &pv);
  v10 = (unsigned __int16 *)pv;
  if ( v9 < 0 || !pv )
  {
    v11 = v26;
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v22 = -1LL;
    v23 = -1LL;
    (*(void (__fastcall **)(__int64, __int64, LPVOID *))(*(_QWORD *)v11 + 40LL))(v11, 6553604LL, &pv);
    v10 = (unsigned __int16 *)pv;
    if ( !pv )
    {
      v24 = 0LL;
      v12 = TileDataLayerItemWrappers::TDLTileInfoHelper::GetRawDisplayName(this, &v24);
      v13 = v24;
      RawDisplayName = v12;
      if ( v12 < 0 )
      {
        v14 = 512LL;
LABEL_14:
        wil::details::in1diag3::Return_HrPreRelease(
          retaddr,
          v14,
          (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
          (const char *)(unsigned int)v12);
        if ( v13 )
          CoTaskMemFree(v13);
        v17 = pv;
        goto LABEL_23;
      }
      v15 = (TileDataLayerItemWrappers::TDLTileInfoHelper *)pv;
      if ( pv )
      {
        CoTaskMemFree(pv);
        pv = 0LL;
      }
      v22 = -1LL;
      v23 = -1LL;
      v12 = TileDataLayerItemWrappers::TDLTileInfoHelper::MRTResolveText(v15, v13, (unsigned __int16 **)&pv);
      RawDisplayName = v12;
      if ( v12 < 0 )
      {
        v14 = 516LL;
        goto LABEL_14;
      }
      v18 = TileDataLayerItemWrappers::TDLTileInfoHelper::SetCachePropertyWithRetry(this, a2, a3, v16, (LPCWCH)pv);
      if ( v18 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x207,
          (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
          (const char *)(unsigned int)v18);
      if ( v13 )
        CoTaskMemFree(v13);
      v10 = (unsigned __int16 *)pv;
    }
  }
  v17 = 0LL;
  v23 = 0LL;
  pv = 0LL;
  RawDisplayName = 0;
  v22 = 0LL;
  *a4 = v10;
LABEL_23:
  if ( v17 )
  {
    CoTaskMemFree(v17);
    pv = 0LL;
  }
  v22 = 0LL;
  v23 = 0LL;
LABEL_26:
  v19 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return RawDisplayName;
}
