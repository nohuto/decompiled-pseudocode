/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIWeakReferenceSource@@U?$InterfaceList@UIProcessCreativeEvent@ContentManagement@@U?$InterfaceList@UIProcessLockScreenEvent@ContentManagement@@U?$InterfaceList@UIProcessStartMenuEvent@ContentManagement@@U?$InterfaceList@UIProcessContextualSuggestionsEvent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@23@$00$00@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18001ABDC
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIProcessCreativeEvent@ContentManagement@@U?$InterfaceList@UIProcessLockScreenEvent@ContentManagement@@U?$InterfaceList@UIProcessStartMenuEvent@ContentManagement@@U?$InterfaceList@UIProcessContextualSuggestionsEvent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180019750 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIProce.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessCreativeEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessLockScreenEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessStartMenuEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessContextualSuggestionsEvent,Microsoft::WRL::Details::Nil>>>>>>,1,1>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 == -1796592748
    && a2[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && a2[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && a2[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4]
    || *a2 == 3
    && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4]
    || (a1 += 24LL, *a2 == 56)
    && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4]
    || (a1 += 8LL, *a2 == -1821819486)
    && a2[1] == *(_DWORD *)&GUID_93693da2_ede6_456e_a82d_c215a10d97ba.Data2
    && a2[2] == *(_DWORD *)GUID_93693da2_ede6_456e_a82d_c215a10d97ba.Data4
    && a2[3] == *(_DWORD *)&GUID_93693da2_ede6_456e_a82d_c215a10d97ba.Data4[4]
    || (a1 += 8LL, *a2 == 820887424)
    && a2[1] == *(_DWORD *)&GUID_30edbf80_0d30_4f30_a533_63ab65344500.Data2
    && a2[2] == *(_DWORD *)GUID_30edbf80_0d30_4f30_a533_63ab65344500.Data4
    && a2[3] == *(_DWORD *)&GUID_30edbf80_0d30_4f30_a533_63ab65344500.Data4[4]
    || (a1 += 8LL, *a2 == -1053577386)
    && a2[1] == *(_DWORD *)&GUID_c133af56_71bc_4a53_8020_2af3cc1ba2f5.Data2
    && a2[2] == *(_DWORD *)GUID_c133af56_71bc_4a53_8020_2af3cc1ba2f5.Data4
    && a2[3] == *(_DWORD *)&GUID_c133af56_71bc_4a53_8020_2af3cc1ba2f5.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( *a2 == -1919884319
    && a2[1] == *(_DWORD *)&GUID_8d90e3e1_f1d7_4681_aec8_5c436a53c1d4.Data2
    && a2[2] == *(_DWORD *)GUID_8d90e3e1_f1d7_4681_aec8_5c436a53c1d4.Data4
    && a2[3] == *(_DWORD *)&GUID_8d90e3e1_f1d7_4681_aec8_5c436a53c1d4.Data4[4] )
  {
    *a3 = a1 + 8;
    return 0LL;
  }
  return 2147500034LL;
}
