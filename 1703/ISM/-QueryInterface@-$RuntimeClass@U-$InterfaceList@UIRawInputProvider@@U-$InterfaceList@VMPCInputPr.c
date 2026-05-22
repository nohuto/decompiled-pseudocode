/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIRawInputProvider@@U?$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002ED00
 * Callers:
 *     ?Create@MPCGamepadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18002D410 (-Create@MPCGamepadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIRawInputProvider@@U?$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002F390 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIRawInputProvider@@U-$InterfaceLis_ea_18002F390.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIRawInputProvider@@U?$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002F3E0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIRawInputProvider@@U-$InterfaceLis_ea_18002F3E0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIRawInputProvider@@U?$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002F410 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIRawInputProvider@@U-$InterfaceLis_ea_18002F410.c)
 * Callees:
 *     ?CanCastTo@?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputProcessor@@UIInputFocusListener@@UIMPCInputProviderBase@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002F2DC (-CanCastTo@-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputProcessor@@UIInputFocusLi.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IRawInputProvider,Microsoft::WRL::Details::InterfaceList<MPCInputProviderBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int CanCastTo; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *a2 == 1602239275
      && a2[1] == *(_DWORD *)&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data2
      && a2[2] == *(_DWORD *)GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data4
      && a2[3] == *(_DWORD *)&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data4[4] )
    {
      *a3 = a1;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IInputProcessor,IInputFocusListener,IMPCInputProviderBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(a1 + 8);
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)CanCastTo;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
