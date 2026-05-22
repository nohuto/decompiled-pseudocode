/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIMessageProxyReconnectAdapter@@U?$InterfaceList@UIMessageProxyListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180096180
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIMessageProxyReconnectAdapter@@U?$InterfaceList@UIMessageProxyListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180096250 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIMessageProxyReconnectAdapter@@U-$_ea_180096250.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IMessageProxyReconnectAdapter,Microsoft::WRL::Details::InterfaceList<IMessageProxyListener,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
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
    if ( *a2 == -905144483
      && a2[1] == *(_DWORD *)&GUID_ca0c975d_c418_48f7_a805_631986e096ce.Data2
      && a2[2] == *(_DWORD *)GUID_ca0c975d_c418_48f7_a805_631986e096ce.Data4
      && a2[3] == *(_DWORD *)&GUID_ca0c975d_c418_48f7_a805_631986e096ce.Data4[4] )
    {
      *a3 = a1;
    }
    else
    {
      if ( *a2 != 25575075
        || a2[1] != *(_DWORD *)&GUID_01863ea3_981d_4590_9f5d_4d4a6a42e6b5.Data2
        || a2[2] != *(_DWORD *)GUID_01863ea3_981d_4590_9f5d_4d4a6a42e6b5.Data4
        || a2[3] != *(_DWORD *)&GUID_01863ea3_981d_4590_9f5d_4d4a6a42e6b5.Data4[4] )
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
