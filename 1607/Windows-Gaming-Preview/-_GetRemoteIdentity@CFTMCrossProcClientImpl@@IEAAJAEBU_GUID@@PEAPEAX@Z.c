/*
 * XREFs of ?_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001E4DC
 * Callers:
 *     ?get_DisplayInfo@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAppDisplayInfo@ApplicationModel@5@@Z @ 0x1800136D0 (-get_DisplayInfo@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAppDis.c)
 *     ?LaunchAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z @ 0x180013780 (-LaunchAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU-$IAsyncOpe.c)
 *     ?get_Category@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4GameListCategory@2345@@Z @ 0x180013850 (-get_Category@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4GameListCate.c)
 *     ?get_Properties@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@5@@Z @ 0x180013900 (-get_Properties@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU-$IMapVi.c)
 *     ?SetCategoryAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJW4GameListCategory@2345@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x1800139B0 (-SetCategoryAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJW4GameListCat.c)
 *     ?GetTrustLevel@?$CFTMCrossProcClient@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@@@UEAAJPEAW4TrustLevel@@@Z @ 0x18001D9D0 (-GetTrustLevel@-$CFTMCrossProcClient@U-$Implements@U-$RuntimeClassFlags@$02@WRL@Mic_ea_18001D9D0.c)
 *     ?GetRuntimeClassName@?$CFTMCrossProcClient@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18001DA50 (-GetRuntimeClassName@-$CFTMCrossProcClient@U-$Implements@U-$RuntimeClassFlags@$02@W_ea_18001DA50.c)
 *     ?GetIids@?$CFTMCrossProcClient@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18001DAE0 (-GetIids@-$CFTMCrossProcClient@U-$Implements@U-$RuntimeClassFlags@$02@WRL@Microsoft_ea_18001DAE0.c)
 *     ?Query@CFTMCrossProcClientImpl@@UEAAJPEAUIUnknown@@W4tagRPCOPT_PROPERTIES@@PEA_K@Z @ 0x180020C70 (-Query@CFTMCrossProcClientImpl@@UEAAJPEAUIUnknown@@W4tagRPCOPT_PROPERTIES@@PEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFTMCrossProcClientImpl::_GetRemoteIdentity(
        CFTMCrossProcClientImpl *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v5; // rbx
  unsigned int v6; // edi

  *a3 = 0LL;
  v5 = *((_QWORD *)this + 7);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, void **))(*(_QWORD *)v5 + 24LL))(v5, a2, a3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v6;
}
