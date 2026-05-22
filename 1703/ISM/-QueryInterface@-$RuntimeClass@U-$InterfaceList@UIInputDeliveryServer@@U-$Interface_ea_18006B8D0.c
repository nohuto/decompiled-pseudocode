/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIInputDeliveryServer@@U?$InterfaceList@UIInputQueueHost@@U?$InterfaceList@UIInputServiceProxyOwner@@U?$InterfaceList@UIRemoteInputDelivery@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006B8D0
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIInputDeliveryServer@@U?$InterfaceList@UIInputQueueHost@@U?$InterfaceList@UIInputServiceProxyOwner@@U?$InterfaceList@UIRemoteInputDelivery@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006B770 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIInputDeliveryServer@@U-$InterfaceList@UIInputQ.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIInputDeliveryServer@@U?$InterfaceList@UIInputQueueHost@@U?$InterfaceList@UIInputServiceProxyOwner@@U?$InterfaceList@UIRemoteInputDelivery@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006B790 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIInputDeliveryServer@@U-$Interface_ea_18006B790.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIInputDeliveryServer@@U?$InterfaceList@UIInputQueueHost@@U?$InterfaceList@UIInputServiceProxyOwner@@U?$InterfaceList@UIRemoteInputDelivery@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006B7B0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIInputDeliveryServer@@U-$Interface_ea_18006B7B0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInputDeliveryServer,Microsoft::WRL::Details::InterfaceList<IInputQueueHost,Microsoft::WRL::Details::InterfaceList<IInputServiceProxyOwner,Microsoft::WRL::Details::InterfaceList<IRemoteInputDelivery,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  __int64 v5; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *a2 == 852238556
      && a2[1] == *(_DWORD *)&GUID_32cc20dc_af78_43d9_b31d_cfc456c2dfba.Data2
      && a2[2] == *(_DWORD *)GUID_32cc20dc_af78_43d9_b31d_cfc456c2dfba.Data4
      && a2[3] == *(_DWORD *)&GUID_32cc20dc_af78_43d9_b31d_cfc456c2dfba.Data4[4]
      || (a1 += 8LL, *a2 == 1826789373)
      && a2[1] == *(_DWORD *)&GUID_6ce297fd_c4e5_4932_bd86_ce797aad3e42.Data2
      && a2[2] == *(_DWORD *)GUID_6ce297fd_c4e5_4932_bd86_ce797aad3e42.Data4
      && a2[3] == *(_DWORD *)&GUID_6ce297fd_c4e5_4932_bd86_ce797aad3e42.Data4[4] )
    {
      *a3 = a1;
      v4 = 0;
      goto LABEL_28;
    }
    v5 = a1 + 8;
    if ( *a2 == 1477745298
      && a2[1] == *(_DWORD *)&GUID_58149a92_a270_49bd_a1e6_58f7b0eedd18.Data2
      && a2[2] == *(_DWORD *)GUID_58149a92_a270_49bd_a1e6_58f7b0eedd18.Data4
      && a2[3] == *(_DWORD *)&GUID_58149a92_a270_49bd_a1e6_58f7b0eedd18.Data4[4] )
    {
      *a3 = v5;
    }
    else
    {
      if ( *a2 != -785122554
        || a2[1] != *(_DWORD *)&GUID_d133fb06_b258_4fa3_be48_add096389ecf.Data2
        || a2[2] != *(_DWORD *)GUID_d133fb06_b258_4fa3_be48_add096389ecf.Data4
        || a2[3] != *(_DWORD *)&GUID_d133fb06_b258_4fa3_be48_add096389ecf.Data4[4] )
      {
        v4 = -2147467262;
LABEL_27:
        if ( v4 < 0 )
          return (unsigned int)v4;
LABEL_28:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
        return (unsigned int)v4;
      }
      *a3 = v5 + 8;
    }
    v4 = 0;
    goto LABEL_27;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
