/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@U?$InterfaceList@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@U?$InterfaceList@UIWeakReferenceSource@@U?$InterfaceList@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@U?$InterfaceList@UILaunchActivatedEventArgs2@Activation@ApplicationModel@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$0A@$00@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180029E80
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@U?$InterfaceList@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@U?$InterfaceList@UILaunchActivatedEventArgs2@Activation@ApplicationModel@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180029A80 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@U?$InterfaceList@UIActivatedEventArgsWithUser@Activation@ApplicationModel@Windows@@U?$InterfaceList@U?$CloakedIid@UIInitializeActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UIForegroundActivationMode@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@U?$InterfaceList@U?$CloakedIid@UINavigationActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18002A0B8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@U-$InterfaceList@UIActivat.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<CActivatedEventArgsWithPrelaunchAndViewIdBase,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::Details::Nil>>>>,0,1>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // r9
  unsigned int v4; // r10d
  __int64 result; // rax
  __int64 v6; // rcx

  v3 = a1;
  v4 = -2147467262;
  if ( *a2 == -815458541
    && a2[1] == *(_DWORD *)&GUID_cf651713_cd08_4fd8_b697_a281b6544e2e.Data2
    && a2[2] == *(_DWORD *)GUID_cf651713_cd08_4fd8_b697_a281b6544e2e.Data4
    && a2[3] == *(_DWORD *)&GUID_cf651713_cd08_4fd8_b697_a281b6544e2e.Data4[4] )
  {
    goto LABEL_5;
  }
  result = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IForegroundActivationMode>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::INavigationActivatedEventArgs>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,1,0>::CanCastTo(
             a1 + 8,
             a2,
             a3,
             a1);
  if ( (int)result >= 0 )
    return result;
  if ( *a2 == -1827868853
    && a2[1] == *(_DWORD *)&GUID_930cef4b_b829_40fc_88f4_8513e8a64738.Data2
    && a2[2] == *(_DWORD *)GUID_930cef4b_b829_40fc_88f4_8513e8a64738.Data4
    && a2[3] == *(_DWORD *)&GUID_930cef4b_b829_40fc_88f4_8513e8a64738.Data4[4] )
  {
    *a3 = v3 + 104;
LABEL_13:
    result = 0LL;
    goto LABEL_39;
  }
  if ( (a1 = v3 + 112, *a2 == 871532710)
    && a2[1] == *(_DWORD *)&GUID_33f288a6_5c2c_4d27_bac7_7536088f1219.Data2
    && a2[2] == *(_DWORD *)GUID_33f288a6_5c2c_4d27_bac7_7536088f1219.Data4
    && a2[3] == *(_DWORD *)&GUID_33f288a6_5c2c_4d27_bac7_7536088f1219.Data4[4]
    || (a1 = v3 + 120, *a2 == 1392539546)
    && a2[1] == *(_DWORD *)&GUID_5300779a_0d50_411c_8c2c_67e5d4155f1f.Data2
    && a2[2] == *(_DWORD *)GUID_5300779a_0d50_411c_8c2c_67e5d4155f1f.Data4
    && a2[3] == *(_DWORD *)&GUID_5300779a_0d50_411c_8c2c_67e5d4155f1f.Data4[4] )
  {
LABEL_5:
    *a3 = a1;
LABEL_6:
    result = 0LL;
    goto LABEL_28;
  }
  if ( *a2 == 2091404550
    && a2[1] == *(_DWORD *)&GUID_7ca84d06_f54c_4ba8_bd6f_9abaf9380d51.Data2
    && a2[2] == *(_DWORD *)GUID_7ca84d06_f54c_4ba8_bd6f_9abaf9380d51.Data4
    && a2[3] == *(_DWORD *)&GUID_7ca84d06_f54c_4ba8_bd6f_9abaf9380d51.Data4[4] )
  {
    *a3 = v3 + 128;
    goto LABEL_6;
  }
  result = v4;
LABEL_28:
  if ( (int)result >= 0 )
    return result;
  v6 = v3 + 176;
  if ( *a2 == 205812091
    && a2[1] == *(_DWORD *)&GUID_0c44717b_19f7_48d6_b046_cf22826eaa74.Data2
    && a2[2] == *(_DWORD *)GUID_0c44717b_19f7_48d6_b046_cf22826eaa74.Data4
    && a2[3] == *(_DWORD *)&GUID_0c44717b_19f7_48d6_b046_cf22826eaa74.Data4[4] )
  {
LABEL_44:
    *a3 = v6;
    return 0LL;
  }
  if ( *a2 == 928102546
    && a2[1] == *(_DWORD *)&GUID_3751b892_f670_4f8d_af13_9cd405db1f36.Data2
    && a2[2] == *(_DWORD *)GUID_3751b892_f670_4f8d_af13_9cd405db1f36.Data4
    && a2[3] == *(_DWORD *)&GUID_3751b892_f670_4f8d_af13_9cd405db1f36.Data4[4] )
  {
    *a3 = v3 + 184;
    goto LABEL_13;
  }
  result = v4;
LABEL_39:
  if ( (int)result >= 0 )
    return result;
  v6 = v3 + 200;
  if ( *a2 == 56
    && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_44;
  }
  v6 = v3 + 208;
  if ( *a2 == -70697434
    && a2[1] == *(_DWORD *)&GUID_fbc93e26_a14a_4b4f_82b0_33bed920af52.Data2
    && a2[2] == *(_DWORD *)GUID_fbc93e26_a14a_4b4f_82b0_33bed920af52.Data4
    && a2[3] == *(_DWORD *)&GUID_fbc93e26_a14a_4b4f_82b0_33bed920af52.Data4[4] )
  {
    goto LABEL_44;
  }
  if ( *a2 == 265518780
    && a2[1] == *(_DWORD *)&GUID_0fd37ebc_9dc9_46b5_9ace_bd95d4565345.Data2
    && a2[2] == *(_DWORD *)GUID_0fd37ebc_9dc9_46b5_9ace_bd95d4565345.Data4
    && a2[3] == *(_DWORD *)&GUID_0fd37ebc_9dc9_46b5_9ace_bd95d4565345.Data4[4] )
  {
    *a3 = v3 + 216;
    return 0LL;
  }
  return v4;
}
