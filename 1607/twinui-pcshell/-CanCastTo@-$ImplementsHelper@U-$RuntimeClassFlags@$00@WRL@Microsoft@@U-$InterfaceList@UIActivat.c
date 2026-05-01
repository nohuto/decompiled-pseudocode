/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@U?$InterfaceList@UIActivatedEventArgsWithUser@Activation@ApplicationModel@Windows@@U?$InterfaceList@U?$CloakedIid@UIInitializeActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UIForegroundActivationMode@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UINavigationActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18002A0B8
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@U?$InterfaceList@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@U?$InterfaceList@UIWeakReferenceSource@@U?$InterfaceList@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@U?$InterfaceList@UILaunchActivatedEventArgs2@Activation@ApplicationModel@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$0A@$00@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180029E80 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@U-$InterfaceList@VCActivat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IForegroundActivationMode>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::INavigationActivatedEventArgs>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,1,0>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 != 485530526
    || a2[1] != *(_DWORD *)&GUID_1cf09b9e_9962_4936_80ff_afc8e8ae5c8c.Data2
    || a2[2] != *(_DWORD *)GUID_1cf09b9e_9962_4936_80ff_afc8e8ae5c8c.Data4
    || a2[3] != *(_DWORD *)&GUID_1cf09b9e_9962_4936_80ff_afc8e8ae5c8c.Data4[4] )
  {
    a1 += 8LL;
    if ( *a2 != -432202956
      || a2[1] != *(_DWORD *)&GUID_e63d1b34_5ed4_4edf_8b51_9a260ffd16e9.Data2
      || a2[2] != *(_DWORD *)GUID_e63d1b34_5ed4_4edf_8b51_9a260ffd16e9.Data4
      || a2[3] != *(_DWORD *)&GUID_e63d1b34_5ed4_4edf_8b51_9a260ffd16e9.Data4[4] )
    {
      a1 += 8LL;
      if ( *a2 != 1276687894
        || a2[1] != *(_DWORD *)&GUID_4c18b616_ff4b_4954_9b2e_8019aff960f1.Data2
        || a2[2] != *(_DWORD *)GUID_4c18b616_ff4b_4954_9b2e_8019aff960f1.Data4
        || a2[3] != *(_DWORD *)&GUID_4c18b616_ff4b_4954_9b2e_8019aff960f1.Data4[4] )
      {
        a1 += 8LL;
        if ( *a2 != -244138313
          || a2[1] != *(_DWORD *)&GUID_f172beb7_5016_48f3_858b_da6d2000ed58.Data2
          || a2[2] != *(_DWORD *)GUID_f172beb7_5016_48f3_858b_da6d2000ed58.Data4
          || a2[3] != *(_DWORD *)&GUID_f172beb7_5016_48f3_858b_da6d2000ed58.Data4[4] )
        {
          a1 += 8LL;
          if ( (*a2 != -1796592748
             || a2[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
             || a2[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
             || a2[3] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4])
            && (*a2 != 3
             || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
             || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
             || a2[3] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4]) )
          {
            return 2147500034LL;
          }
        }
      }
    }
  }
  *a3 = a1;
  return 0LL;
}
