/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@UIDisplayBinding@@U?$InterfaceList@UIInputDisplay@@U?$InterfaceList@UIPropertyChangedListener@Input@@U?$InterfaceList@UIInputDisplayOrientationListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180018010
 * Callers:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDisplayBinding@@U?$InterfaceList@UIInputDisplay@@U?$InterfaceList@UIPropertyChangedListener@Input@@U?$InterfaceList@UIInputDisplayOrientationListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180019A00 (-Release@-$RuntimeClass@U-$InterfaceList@UIDisplayBinding@@U-$InterfaceList@UIInput_ea_180019A00.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDisplayBinding@@U?$InterfaceList@UIInputDisplay@@U?$InterfaceList@UIPropertyChangedListener@Input@@U?$InterfaceList@UIInputDisplayOrientationListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x180019A90 (-Release@-$RuntimeClass@U-$InterfaceList@UIDisplayBinding@@U-$InterfaceList@UIInput_ea_180019A90.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDisplayBinding@@U?$InterfaceList@UIInputDisplay@@U?$InterfaceList@UIPropertyChangedListener@Input@@U?$InterfaceList@UIInputDisplayOrientationListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180019B90 (-Release@-$RuntimeClass@U-$InterfaceList@UIDisplayBinding@@U-$InterfaceList@UIInput_ea_180019B90.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDisplayBinding,Microsoft::WRL::Details::InterfaceList<IInputDisplay,Microsoft::WRL::Details::InterfaceList<Input::IPropertyChangedListener,Microsoft::WRL::Details::InterfaceList<IInputDisplayOrientationListener,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 9);
  if ( !v1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v1;
}
