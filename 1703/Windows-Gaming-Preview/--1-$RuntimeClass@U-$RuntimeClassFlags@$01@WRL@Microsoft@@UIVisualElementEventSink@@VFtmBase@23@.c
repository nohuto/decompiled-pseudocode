/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIVisualElementEventSink@@VFtmBase@23@VNil@Details@23@V6723@V6723@V6723@V6723@V6723@V6723@@WRL@Microsoft@@UEAA@XZ @ 0x18001E244
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x18002AFB8 (_Windows--Gaming--Preview--GamesEnumeration--TileNotificationSink--_scalar_deleting_destructor__.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVisualElementEventSink,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVisualElementEventSink,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>(
        __int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  *(_DWORD *)(a1 + 36) = -1073741823;
  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}
