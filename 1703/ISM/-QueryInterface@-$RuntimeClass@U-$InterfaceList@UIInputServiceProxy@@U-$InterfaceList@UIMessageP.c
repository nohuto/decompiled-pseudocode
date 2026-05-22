/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIInputServiceProxy@@U?$InterfaceList@UIMessageProxyReconnectAdapterOwner@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180088A00
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIInputServiceProxy@@U?$InterfaceList@UIMessageProxyReconnectAdapterOwner@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180088B60 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIInputServiceProxy@@U-$InterfaceLi_ea_180088B60.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInputServiceProxy,Microsoft::WRL::Details::InterfaceList<IMessageProxyReconnectAdapterOwner,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
  }
  else
  {
    if ( *a2 == 1477745298
      && a2[1] == *(_DWORD *)&GUID_58149a92_a270_49bd_a1e6_58f7b0eedd18.Data2
      && a2[2] == *(_DWORD *)GUID_58149a92_a270_49bd_a1e6_58f7b0eedd18.Data4
      && a2[3] == *(_DWORD *)&GUID_58149a92_a270_49bd_a1e6_58f7b0eedd18.Data4[4] )
    {
      *a3 = a1;
    }
    else
    {
      if ( *a2 != -200518439
        || a2[1] != *(_DWORD *)&GUID_f40c54d9_03bb_449c_83a5_6796bd8f9dc5.Data2
        || a2[2] != *(_DWORD *)GUID_f40c54d9_03bb_449c_83a5_6796bd8f9dc5.Data4
        || a2[3] != *(_DWORD *)&GUID_f40c54d9_03bb_449c_83a5_6796bd8f9dc5.Data4[4] )
      {
        return (unsigned int)-2147467262;
      }
      *a3 = a1 + 8;
    }
    a1 = *a3;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
