/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IMap@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005BC10
 * Callers:
 *     ?QueryInterface@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005BD50 (-QueryInterface@-$HashMap@W4WindowPosition@ContentManagement@@IU-$DefaultHash@W4WindowPosition@C.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IMap@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800600F0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$IMap@W4WindowPosition@ContentMan_ea_1800600F0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IMap@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800601B0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$IMap@W4WindowPosition@ContentMan_ea_1800601B0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IMap@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800602C0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$IMap@W4WindowPosition@ContentMan_ea_1800602C0.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003CA4 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IMap<enum ContentManagement::WindowPosition,unsigned int>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::QueryInterface(
        char *a1,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // ebx
  int CanCastTo; // edi
  char *v5; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( (*(_DWORD *)a2
     || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
     || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && (*(_DWORD *)a2 != -1350114592
     || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
     || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
     || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]) )
  {
    if ( *(_DWORD *)a2 == 268820644
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_1005e0a4_4221_5c33_a9b3_ceee5c0b9d98.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_1005e0a4_4221_5c33_a9b3_ceee5c0b9d98.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_1005e0a4_4221_5c33_a9b3_ceee5c0b9d98.Data4[4]
      || (a1 += 8, *(_DWORD *)a2 == 56)
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = a1;
      CanCastTo = 0;
    }
    else
    {
      v5 = a1 + 8;
      if ( *(_DWORD *)a2 == 341102983
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_1454d187_b3b9_5845_b51e_2e1140cc31b1.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_1454d187_b3b9_5845_b51e_2e1140cc31b1.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_1454d187_b3b9_5845_b51e_2e1140cc31b1.Data4[4] )
      {
        *a3 = v5;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                      (Microsoft::WRL::FtmBase *)(v5 + 8),
                      (const struct _GUID *)a2,
                      a3);
      }
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)CanCastTo;
  }
  *a3 = a1;
  (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
