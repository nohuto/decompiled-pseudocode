/*
 * XREFs of ??$make_unique@VInputTargetWithHostRegistration@@AEAV?$ComPtr@UIInputDeliveryServerHost@@@WRL@Microsoft@@AEAV?$ComPtr@VInputThread@@@34@AEBUtagInputRoutingInfo@@@std@@YA?AV?$unique_ptr@VInputTargetWithHostRegistration@@U?$default_delete@VInputTargetWithHostRegistration@@@std@@@0@AEAV?$ComPtr@UIInputDeliveryServerHost@@@WRL@Microsoft@@AEAV?$ComPtr@VInputThread@@@34@AEBUtagInputRoutingInfo@@@Z @ 0x18006AB1C
 * Callers:
 *     ?OnAppThreadMessage@InputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z @ 0x180069450 (-OnAppThreadMessage@InputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z.c)
 * Callees:
 *     ??0InputTarget@@IEAA@AEBV?$ComPtr@VInputThread@@@WRL@Microsoft@@AEBUtagInputRoutingInfo@@@Z @ 0x18006BBA4 (--0InputTarget@@IEAA@AEBV-$ComPtr@VInputThread@@@WRL@Microsoft@@AEBUtagInputRoutingInfo@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::make_unique<InputTargetWithHostRegistration,Microsoft::WRL::ComPtr<IInputDeliveryServerHost> &,Microsoft::WRL::ComPtr<InputThread> &,tagInputRoutingInfo const &>(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v8; // r15
  __int64 v9; // rcx
  _QWORD *result; // rax

  v8 = operator new(0x48uLL);
  InputTarget::InputTarget(v8, a3, a4);
  *v8 = &InputTargetWithHostRegistration::`vftable';
  v9 = *a2;
  v8[8] = *a2;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  result = a1;
  *a1 = v8;
  return result;
}
