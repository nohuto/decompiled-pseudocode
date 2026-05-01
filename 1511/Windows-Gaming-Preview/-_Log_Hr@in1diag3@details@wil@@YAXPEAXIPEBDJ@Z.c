/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007A78
 * Callers:
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUITileInfo@@@Z @ 0x1800020E4 (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUITileInfo@@@Z.c)
 *     ??0GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x180008AD4 (--0GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?_OnAppAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@@Z @ 0x1800096EC (-_OnAppAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@.c)
 *     ?_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z @ 0x18000978C (-_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z.c)
 *     ?_OnAppUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@@Z @ 0x1800098D8 (-_OnAppUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo.c)
 *     ?LaunchAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z @ 0x1800112E0 (-LaunchAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU-$IAsyncOpe.c)
 *     ??_GTileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18001E2F0 (--_GTileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z.c)
 *     ?GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAG@Z @ 0x1800225EC (-GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualE.c)
 *     ?MRTResolveText@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGW4VISUAL_ELEMENT_THEME@@PEAPEAG@Z @ 0x18002280C (-MRTResolveText@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGW4VISUAL_ELEMENT_THEME@@PE.c)
 *     ?GetAppUserModelId@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAPEAG@Z @ 0x180022A1C (-GetAppUserModelId@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAPEAG@Z.c)
 *     _lambda_4b113ca380de658e4b053f81fda3c9b1_::operator() @ 0x180022F84 (_lambda_4b113ca380de658e4b053f81fda3c9b1_--operator().c)
 *     ??$s_EnumAdaptor@V_lambda_ff9e2e3e7739ed5ce4d1dc70b79c8674_@@@?$CSimpleHashTable@KV?$ComPtr@UITilePropertyInfo@@@WRL@Microsoft@@V?$CDefaultHashPolicy@K@@V?$CDefaultKeyCompare@K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAHPEBV_lambda_ff9e2e3e7739ed5ce4d1dc70b79c8674_@@AEBKAEAV?$ComPtr@UITilePropertyInfo@@@WRL@Microsoft@@@Z @ 0x1800244CC (--$s_EnumAdaptor@V_lambda_ff9e2e3e7739ed5ce4d1dc70b79c8674_@@@-$CSimpleHashTable@KV-$ComPtr@UITi.c)
 *     ??$s_EnumAdaptor@V_lambda_9703d91439079e95eaf7d6783884b1c5_@@@?$CSimpleHashTable@PEBGV?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAHPEBV_lambda_9703d91439079e95eaf7d6783884b1c5_@@AEBQEBGAEAV?$ComPtr@UIStream@@@WRL@Microsoft@@@Z @ 0x1800246A0 (--$s_EnumAdaptor@V_lambda_9703d91439079e95eaf7d6783884b1c5_@@@-$CSimpleHashTable@PEBGV-$ComPtr@U.c)
 *     ??$s_EnumAdaptor@V_lambda_4c6989d2c2b37cdedc267e9923ecfe14_@@@?$CSimpleHashTable@PEBGHVCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAHPEBV_lambda_4c6989d2c2b37cdedc267e9923ecfe14_@@AEBQEBGAEAH@Z @ 0x180024770 (--$s_EnumAdaptor@V_lambda_4c6989d2c2b37cdedc267e9923ecfe14_@@@-$CSimpleHashTable@PEBGHVCStringHa.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180008A54 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  void *retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr(this, a2, a3, 0LL, 0LL, retaddr, 3, (_DWORD)a4);
}
