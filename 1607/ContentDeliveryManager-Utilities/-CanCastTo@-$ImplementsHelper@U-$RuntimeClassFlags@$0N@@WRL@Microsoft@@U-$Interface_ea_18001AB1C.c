/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@U?$InterfaceList@UIActivationFactory@@U?$InterfaceList@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentSubscriptionStatics@TargetedContent@ContentManagement@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@23@$0A@$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18001AB1C
 * Callers:
 *     ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentSubscriptionStatics@TargetedContent@ContentManagement@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800193D0 (-QueryInterface@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentSubsc.c)
 *     ??$CreateActivationFactory@VSubscriptionStaticsImpl@TargetedContent@ContentManagement@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18001A2E0 (--$CreateActivationFactory@VSubscriptionStaticsImpl@TargetedContent@ContentManagement@@@Details@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,Microsoft::WRL::Details::InterfaceList<IActivationFactory,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>,0,0>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 == 53
    && a2[1] == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000035_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data4[4]
    || (a1 += 8LL, *a2 == -1796592748)
    && a2[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && a2[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && a2[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4]
    || *a2 == 3
    && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( *a2 == 1828647805
    && a2[1] == *(_DWORD *)&GUID_6cfef37d_8a37_4c33_a163_2b33a7ba0584.Data2
    && a2[2] == *(_DWORD *)GUID_6cfef37d_8a37_4c33_a163_2b33a7ba0584.Data4
    && a2[3] == *(_DWORD *)&GUID_6cfef37d_8a37_4c33_a163_2b33a7ba0584.Data4[4] )
  {
    *a3 = a1 + 24;
    return 0LL;
  }
  return 2147500034LL;
}
