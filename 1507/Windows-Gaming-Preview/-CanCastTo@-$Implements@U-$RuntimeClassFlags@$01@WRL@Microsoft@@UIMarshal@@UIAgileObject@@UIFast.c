/*
 * XREFs of ?CanCastTo@?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIMarshal@@UIAgileObject@@UIFastRundown@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180006A0C
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$InterfaceList@VCFTMCrossProcServer@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180006AA0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIGameListEntry@GamesEnumeration@Pr_ea_180006AA0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIInspectable@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@U?$InterfaceList@VCFTMCrossProcClientImpl@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001CEE0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIInspectable@@U-$InterfaceList@U-$_ea_18001CEE0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IMarshal,IAgileObject,IFastRundown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 == 3
    && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4]
    || (a1 += 8LL, *a2 == -1796592748)
    && a2[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && a2[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && a2[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( *a2 == 64
    && a2[1] == *(_DWORD *)&GUID_00000040_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000040_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000040_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1 + 8;
    return 0LL;
  }
  return 2147500034LL;
}
