/*
 * XREFs of ??1?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIProcessCreativeEvent@ContentManagement@@U?$InterfaceList@UIProcessLockScreenEvent@ContentManagement@@U?$InterfaceList@UIProcessStartMenuEvent@ContentManagement@@U?$InterfaceList@UIProcessContextualSuggestionsEvent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180007184
 * Callers:
 *     ??_GContentManagementService@ContentManagement@@UEAAPEAXI@Z @ 0x180006630 (--_GContentManagementService@ContentManagement@@UEAAPEAXI@Z.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@@WRL@Microsoft@@UEAA@XZ @ 0x180006724 (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UIProcessCreativeEvent@Con.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180007DB0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UIProcessCreativeEvent@Co.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessCreativeEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessLockScreenEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessStartMenuEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessContextualSuggestionsEvent,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessCreativeEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessLockScreenEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessStartMenuEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessContextualSuggestionsEvent,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>(
        __int64 a1)
{
  __int64 v1; // rdi
  volatile signed __int32 *v3; // rdi
  __int64 result; // rax
  __int64 v5; // rdi

  v1 = *(_QWORD *)(a1 + 80);
  if ( v1 < 0 )
  {
    v3 = (volatile signed __int32 *)(2 * v1);
    result = (unsigned int)_InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      if ( v3 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
