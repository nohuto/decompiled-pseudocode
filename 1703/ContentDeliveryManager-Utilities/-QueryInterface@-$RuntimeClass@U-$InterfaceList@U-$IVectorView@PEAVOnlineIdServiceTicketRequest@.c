/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IVectorView@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180016010
 * Callers:
 *     ?QueryInterface@?$SimpleVectorView@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@V?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180016150 (-QueryInterface@-$SimpleVectorView@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Secu.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IVectorView@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001E930 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$IVectorView@PEAVOnlineIdServiceT_ea_18001E930.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IVectorView@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001ED50 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$IVectorView@PEAVOnlineIdServiceT_ea_18001ED50.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2
     || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
     || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && (*a2 != -1350114592
     || a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
     || a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
     || a2[3] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]) )
  {
    if ( *a2 == 444361733
      && a2[1] == *(_DWORD *)&GUID_1a7c6c05_3fef_5eeb_aaff_625ee3ebc07c.Data2
      && a2[2] == *(_DWORD *)GUID_1a7c6c05_3fef_5eeb_aaff_625ee3ebc07c.Data4
      && a2[3] == *(_DWORD *)&GUID_1a7c6c05_3fef_5eeb_aaff_625ee3ebc07c.Data4[4]
      || (a1 += 8LL, *a2 == 56)
      && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
      && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = a1;
      v4 = 0;
    }
    else
    {
      if ( *a2 == -881666426
        && a2[1] == *(_DWORD *)&GUID_cb72d686_9516_520d_a274_fa4cd1762cb2.Data2
        && a2[2] == *(_DWORD *)GUID_cb72d686_9516_520d_a274_fa4cd1762cb2.Data4
        && a2[3] == *(_DWORD *)&GUID_cb72d686_9516_520d_a274_fa4cd1762cb2.Data4[4] )
      {
        v4 = 0;
        *a3 = a1 + 8;
      }
      else
      {
        v4 = -2147467262;
      }
      if ( v4 < 0 )
        return (unsigned int)v4;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v4;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
