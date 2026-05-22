/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@UIRawInputProvider@@U?$InterfaceList@UIMouseProcessorForwarding@@U?$InterfaceList@UICursorBasedInputProcessor@@U?$InterfaceList@UIGetClosestInteractiveBounds@@U?$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180042B40
 * Callers:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIRawInputProvider@@U?$InterfaceList@UIMouseProcessorForwarding@@U?$InterfaceList@UICursorBasedInputProcessor@@U?$InterfaceList@UIGetClosestInteractiveBounds@@U?$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800437E0 (-Release@-$RuntimeClass@U-$InterfaceList@UIRawInputProvider@@U-$InterfaceList@UIMou_ea_1800437E0.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIRawInputProvider@@U?$InterfaceList@UIMouseProcessorForwarding@@U?$InterfaceList@UICursorBasedInputProcessor@@U?$InterfaceList@UIGetClosestInteractiveBounds@@U?$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x1800437F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIRawInputProvider@@U-$InterfaceList@UIMou_ea_1800437F0.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIRawInputProvider@@U?$InterfaceList@UIMouseProcessorForwarding@@U?$InterfaceList@UICursorBasedInputProcessor@@U?$InterfaceList@UIGetClosestInteractiveBounds@@U?$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180043830 (-Release@-$RuntimeClass@U-$InterfaceList@UIRawInputProvider@@U-$InterfaceList@UIMou_ea_180043830.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIRawInputProvider@@U?$InterfaceList@UIMouseProcessorForwarding@@U?$InterfaceList@UICursorBasedInputProcessor@@U?$InterfaceList@UIGetClosestInteractiveBounds@@U?$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x180043840 (-Release@-$RuntimeClass@U-$InterfaceList@UIRawInputProvider@@U-$InterfaceList@UIMou_ea_180043840.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIRawInputProvider@@U?$InterfaceList@UIMouseProcessorForwarding@@U?$InterfaceList@UICursorBasedInputProcessor@@U?$InterfaceList@UIGetClosestInteractiveBounds@@U?$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x180043880 (-Release@-$RuntimeClass@U-$InterfaceList@UIRawInputProvider@@U-$InterfaceList@UIMou_ea_180043880.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIRawInputProvider@@U?$InterfaceList@UIMouseProcessorForwarding@@U?$InterfaceList@UICursorBasedInputProcessor@@U?$InterfaceList@UIGetClosestInteractiveBounds@@U?$InterfaceList@VMPCInputProviderBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1800438D0 (-Release@-$RuntimeClass@U-$InterfaceList@UIRawInputProvider@@U-$InterfaceList@UIMou_ea_1800438D0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IRawInputProvider,Microsoft::WRL::Details::InterfaceList<IMouseProcessorForwarding,Microsoft::WRL::Details::InterfaceList<ICursorBasedInputProcessor,Microsoft::WRL::Details::InterfaceList<IGetClosestInteractiveBounds,Microsoft::WRL::Details::InterfaceList<MPCInputProviderBase,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        __int64 a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 196));
  if ( !v1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 32) + 64LL))(a1 + 32, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v1;
}
