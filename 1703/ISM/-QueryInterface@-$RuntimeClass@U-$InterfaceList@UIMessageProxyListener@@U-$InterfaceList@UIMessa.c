/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIMessageProxyListener@@U?$InterfaceList@UIMessageListListener@@U?$InterfaceList@UIViewHeirarchy@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006E610
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIMessageProxyListener@@U?$InterfaceList@UIMessageListListener@@U?$InterfaceList@UIViewHeirarchy@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006ED50 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIMessageProxyListener@@U-$Interfac_ea_18006ED50.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIMessageProxyListener@@U?$InterfaceList@UIMessageListListener@@U?$InterfaceList@UIViewHeirarchy@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006ED70 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIMessageProxyListener@@U-$Interfac_ea_18006ED70.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IMessageProxyListener,Microsoft::WRL::Details::InterfaceList<IMessageListListener,Microsoft::WRL::Details::InterfaceList<IViewHeirarchy,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *a2 == 25575075
      && a2[1] == *(_DWORD *)&GUID_01863ea3_981d_4590_9f5d_4d4a6a42e6b5.Data2
      && a2[2] == *(_DWORD *)GUID_01863ea3_981d_4590_9f5d_4d4a6a42e6b5.Data4
      && a2[3] == *(_DWORD *)&GUID_01863ea3_981d_4590_9f5d_4d4a6a42e6b5.Data4[4]
      || (a1 += 8LL, *a2 == 1582616791)
      && a2[1] == *(_DWORD *)&GUID_5e54d0d7_fb96_4f22_b700_d9318781bf57.Data2
      && a2[2] == *(_DWORD *)GUID_5e54d0d7_fb96_4f22_b700_d9318781bf57.Data4
      && a2[3] == *(_DWORD *)&GUID_5e54d0d7_fb96_4f22_b700_d9318781bf57.Data4[4] )
    {
      *a3 = a1;
      v4 = 0;
    }
    else
    {
      if ( *a2 == 1613258560
        && a2[1] == *(_DWORD *)&GUID_60285f40_b2da_4b48_b9fd_7550a7fff1b4.Data2
        && a2[2] == *(_DWORD *)GUID_60285f40_b2da_4b48_b9fd_7550a7fff1b4.Data4
        && a2[3] == *(_DWORD *)&GUID_60285f40_b2da_4b48_b9fd_7550a7fff1b4.Data4[4] )
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
