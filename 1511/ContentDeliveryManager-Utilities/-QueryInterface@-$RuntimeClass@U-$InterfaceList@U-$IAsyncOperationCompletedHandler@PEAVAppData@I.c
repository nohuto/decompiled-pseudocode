/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IAsyncOperationCompletedHandler@PEAVAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180005E00
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IAsyncOperationCompletedHandler@PEAVAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800060C0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$IAsyncOperationCompletedHandler@_ea_1800060C0.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::AppData *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // edi
  int v4; // esi
  __int64 v5; // rsi

  v3 = 0;
  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *a2 == -1084341845
      && a2[1] == *(_DWORD *)&GUID_bf5e41ab_f688_5163_b1b8_27e2a64e2336.Data2
      && a2[2] == *(_DWORD *)GUID_bf5e41ab_f688_5163_b1b8_27e2a64e2336.Data4
      && a2[3] == *(_DWORD *)&GUID_bf5e41ab_f688_5163_b1b8_27e2a64e2336.Data4[4] )
    {
      *a3 = a1;
    }
    else
    {
      v5 = a1 + 8;
      if ( *a2 != -1796592748
        || a2[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
        || a2[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
        || a2[3] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
      {
        if ( *a2 == 3
          && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
          && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
          && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
        {
          *a3 = v5;
          v4 = 0;
        }
        else
        {
          v4 = -2147467262;
        }
        if ( v4 < 0 )
          return (unsigned int)v4;
        goto LABEL_24;
      }
      *a3 = v5;
    }
    v4 = 0;
LABEL_24:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v4;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
