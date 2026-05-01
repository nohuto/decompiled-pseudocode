/*
 * XREFs of ?GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAG@Z @ 0x1800225EC
 * Callers:
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180012280 (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007A78 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?SetCachePropertyWithRetry@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@IPEBG@Z @ 0x180021EF4 (-SetCachePropertyWithRetry@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@P.c)
 *     ?GetRawDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAPEAG@Z @ 0x1800224B0 (-GetRawDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAPEAG@Z.c)
 *     ?MRTResolveText@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGW4VISUAL_ELEMENT_THEME@@PEAPEAG@Z @ 0x18002280C (-MRTResolveText@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGW4VISUAL_ELEMENT_THEME@@PE.c)
 *     ??$As@UITileInfoCache@@@?$ComPtr@UITileInfo@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITileInfoCache@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800243FC (--$As@UITileInfoCache@@@-$ComPtr@UITileInfo@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UITileI.c)
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
  __int64 v13; // r8
  unsigned __int16 *v14; // rbx
  __int64 v15; // rdx
  LPVOID v16; // rcx
  __int64 v17; // r9
  void *v18; // rax
  int v19; // eax
  __int64 v20; // rsi
  LPVOID pv; // [rsp+30h] [rbp-30h] BYREF
  __int64 v23; // [rsp+38h] [rbp-28h]
  __int64 v24; // [rsp+40h] [rbp-20h]
  unsigned __int16 *v25; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v27; // [rsp+90h] [rbp+30h] BYREF

  *a4 = 0LL;
  v27 = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<ITileInfo>::As<ITileInfoCache>((char *)this + 72, &v27) < 0 )
  {
    RawDisplayName = TileDataLayerItemWrappers::TDLTileInfoHelper::GetRawDisplayName(this, a4);
    goto LABEL_26;
  }
  v23 = -1LL;
  v24 = -1LL;
  pv = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, LPVOID *))(*(_QWORD *)v27 + 40LL))(v27, 983227LL, &pv);
  v10 = (unsigned __int16 *)pv;
  if ( v9 < 0 || !pv )
  {
    v11 = v27;
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v23 = -1LL;
    v24 = -1LL;
    (*(void (__fastcall **)(__int64, __int64, LPVOID *))(*(_QWORD *)v11 + 40LL))(v11, 6553604LL, &pv);
    v10 = (unsigned __int16 *)pv;
    if ( !pv )
    {
      v25 = 0LL;
      v12 = TileDataLayerItemWrappers::TDLTileInfoHelper::GetRawDisplayName(this, &v25);
      v14 = v25;
      RawDisplayName = v12;
      if ( v12 < 0 )
      {
        v15 = 627LL;
LABEL_14:
        wil::details::in1diag3::Return_HrPreRelease(
          retaddr,
          v15,
          (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
          (const char *)(unsigned int)v12);
        if ( v14 )
          CoTaskMemFree(v14);
        v18 = pv;
        goto LABEL_23;
      }
      v16 = pv;
      if ( pv )
      {
        CoTaskMemFree(pv);
        pv = 0LL;
      }
      v23 = -1LL;
      v24 = -1LL;
      v12 = TileDataLayerItemWrappers::TDLTileInfoHelper::MRTResolveText(v16, v14, v13, &pv);
      RawDisplayName = v12;
      if ( v12 < 0 )
      {
        v15 = 631LL;
        goto LABEL_14;
      }
      v19 = TileDataLayerItemWrappers::TDLTileInfoHelper::SetCachePropertyWithRetry(this, a2, a3, v17, (LPCWCH)pv);
      if ( v19 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x27A,
          (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
          (const char *)(unsigned int)v19);
      if ( v14 )
        CoTaskMemFree(v14);
      v10 = (unsigned __int16 *)pv;
    }
  }
  v18 = 0LL;
  v24 = 0LL;
  pv = 0LL;
  RawDisplayName = 0;
  v23 = 0LL;
  *a4 = v10;
LABEL_23:
  if ( v18 )
  {
    CoTaskMemFree(v18);
    pv = 0LL;
  }
  v23 = 0LL;
  v24 = 0LL;
LABEL_26:
  v20 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return RawDisplayName;
}
