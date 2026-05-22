/*
 * XREFs of ?CanCastTo@?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputProcessor@@UIInputFocusListener@@UIMPCInputProviderBase@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002F2DC
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIRawInputProvider@@U?$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002ED00 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIRawInputProvider@@U-$InterfaceList@VMPCInputPr.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIRawInputProvider@@U?$InterfaceList@UIMouseProcessorForwarding@@U?$InterfaceList@UICursorBasedInputProcessor@@U?$InterfaceList@UIGetClosestInteractiveBounds@@U?$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042BA0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIRawInputProvider@@U-$InterfaceList@UIMouseProc.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180046360 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsof.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IInputProcessor,IInputFocusListener,IMPCInputProviderBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 == 1614805935
    && a2[1] == *(_DWORD *)&GUID_603ffbaf_2fd6_4711_8c68_de56f864f999.Data2
    && a2[2] == *(_DWORD *)GUID_603ffbaf_2fd6_4711_8c68_de56f864f999.Data4
    && a2[3] == *(_DWORD *)&GUID_603ffbaf_2fd6_4711_8c68_de56f864f999.Data4[4]
    || (a1 += 8LL, *a2 == 418570778)
    && a2[1] == *(_DWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data2
    && a2[2] == *(_DWORD *)GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data4
    && a2[3] == *(_DWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( *a2 == -605254686
    && a2[1] == *(_DWORD *)&GUID_dbec8be2_d5cc_471f_8bf1_9a8efeae5f61.Data2
    && a2[2] == *(_DWORD *)GUID_dbec8be2_d5cc_471f_8bf1_9a8efeae5f61.Data4
    && a2[3] == *(_DWORD *)&GUID_dbec8be2_d5cc_471f_8bf1_9a8efeae5f61.Data4[4] )
  {
    *a3 = a1 + 8;
    return 0LL;
  }
  return 2147500034LL;
}
