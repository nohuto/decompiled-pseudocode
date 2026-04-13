/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIWeakReferenceSource@@U?$InterfaceList@UIProcessCreativeEvent@ContentManagement@@U?$InterfaceList@UIProcessLockScreenEvent@ContentManagement@@U?$InterfaceList@UIProcessStartMenuEvent@ContentManagement@@U?$InterfaceList@UIProcessContextualSuggestionsEvent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@23@$00$00@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180022080
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIProcessCreativeEvent@ContentManagement@@U?$InterfaceList@UIProcessLockScreenEvent@ContentManagement@@U?$InterfaceList@UIProcessStartMenuEvent@ContentManagement@@U?$InterfaceList@UIProcessContextualSuggestionsEvent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180020C60 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIProce.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003CA4 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessCreativeEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessLockScreenEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessStartMenuEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessContextualSuggestionsEvent,Microsoft::WRL::Details::Nil>>>>>>,1,1>::CanCastTo(
        Microsoft::WRL::FtmBase *a1,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  _DWORD *v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // r8
  __int64 v7; // rcx

  result = Microsoft::WRL::FtmBase::CanCastTo(a1, a2, a3);
  if ( (int)result < 0 )
  {
    v7 = v5 + 24;
    if ( *v4 == 56
      && v4[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
      && v4[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
      && v4[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4]
      || (v7 += 8LL, *v4 == -252374804)
      && v4[1] == *(_DWORD *)&GUID_f0f510ec_e306_4fa9_9162_cd5142078f72.Data2
      && v4[2] == *(_DWORD *)GUID_f0f510ec_e306_4fa9_9162_cd5142078f72.Data4
      && v4[3] == *(_DWORD *)&GUID_f0f510ec_e306_4fa9_9162_cd5142078f72.Data4[4]
      || (v7 += 8LL, *v4 == 820887424)
      && v4[1] == *(_DWORD *)&GUID_30edbf80_0d30_4f30_a533_63ab65344500.Data2
      && v4[2] == *(_DWORD *)GUID_30edbf80_0d30_4f30_a533_63ab65344500.Data4
      && v4[3] == *(_DWORD *)&GUID_30edbf80_0d30_4f30_a533_63ab65344500.Data4[4]
      || (v7 += 8LL, *v4 == -1053577386)
      && v4[1] == *(_DWORD *)&GUID_c133af56_71bc_4a53_8020_2af3cc1ba2f5.Data2
      && v4[2] == *(_DWORD *)GUID_c133af56_71bc_4a53_8020_2af3cc1ba2f5.Data4
      && v4[3] == *(_DWORD *)&GUID_c133af56_71bc_4a53_8020_2af3cc1ba2f5.Data4[4] )
    {
      *v6 = v7;
      return 0LL;
    }
    if ( *v4 == -1919884319
      && v4[1] == *(_DWORD *)&GUID_8d90e3e1_f1d7_4681_aec8_5c436a53c1d4.Data2
      && v4[2] == *(_DWORD *)GUID_8d90e3e1_f1d7_4681_aec8_5c436a53c1d4.Data4
      && v4[3] == *(_DWORD *)&GUID_8d90e3e1_f1d7_4681_aec8_5c436a53c1d4.Data4[4] )
    {
      *v6 = v7 + 8;
      return 0LL;
    }
    return 2147500034LL;
  }
  return result;
}
