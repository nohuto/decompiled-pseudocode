/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004DD10
 * Callers:
 *     ?QueryInterface@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004DE40 (-QueryInterface@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Wi.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800509A0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$IVector@PEAVTargetedContentTrigg_ea_1800509A0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800509F0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$IVector@PEAVTargetedContentTrigg_ea_1800509F0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180050A50 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$IVector@PEAVTargetedContentTrigg_ea_180050A50.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003CA4 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::QueryInterface(
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
    if ( *(_DWORD *)a2 == -1248590667
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_b59404b5_d83a_53dd_8845_e0e17df68feb.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_b59404b5_d83a_53dd_8845_e0e17df68feb.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_b59404b5_d83a_53dd_8845_e0e17df68feb.Data4[4]
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
      if ( *(_DWORD *)a2 == -95473476
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_fa4f30bc_096b_5280_b633_948d8ebba990.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_fa4f30bc_096b_5280_b633_948d8ebba990.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_fa4f30bc_096b_5280_b633_948d8ebba990.Data4[4] )
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
