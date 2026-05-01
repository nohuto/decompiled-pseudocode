/*
 * XREFs of ?InternalRelease@?$ComPtr@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002D54
 * Callers:
 *     ?Add@?$GitEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x18000630C (-Add@-$GitEventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOptio.c)
 *     ?Invoke@?$GitInvokeHelper@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@UEAAJPEAUIInspectable@@0@Z @ 0x18000D350 (-Invoke@-$GitInvokeHelper@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Intern.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180002E20 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<IInspectable *>>::InternalRelease(
        __int64 *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 (__fastcall *v3)(__int64); // rdi

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL);
    if ( v3 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v1);
    else
      return v3(v1);
  }
  return result;
}
