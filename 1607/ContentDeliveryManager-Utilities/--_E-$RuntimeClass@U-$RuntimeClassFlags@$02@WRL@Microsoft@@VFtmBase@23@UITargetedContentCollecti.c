/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UITargetedContentCollection@TargetedContent@ContentManagement@@UITargetedContentInteractionReporter@67@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180044860
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C5F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Micros.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentCollection,ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = a1[8];
  if ( v4 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v4));
  v5 = a1[3];
  if ( v5 )
  {
    a1[3] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
