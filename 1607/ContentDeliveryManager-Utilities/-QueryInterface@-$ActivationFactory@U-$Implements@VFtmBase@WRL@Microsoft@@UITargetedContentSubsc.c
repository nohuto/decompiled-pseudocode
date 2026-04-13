/*
 * XREFs of ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentSubscriptionStatics@TargetedContent@ContentManagement@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800193D0
 * Callers:
 *     ?QueryInterface@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180018D60 (-QueryInterface@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAJAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentSubscriptionStatics@TargetedContent@ContentManagement@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001B2A0 (-QueryInterface@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargete_ea_18001B2A0.c)
 *     ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentSubscriptionStatics@TargetedContent@ContentManagement@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001B3F0 (-QueryInterface@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargete_ea_18001B3F0.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@U?$InterfaceList@UIActivationFactory@@U?$InterfaceList@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentSubscriptionStatics@TargetedContent@ContentManagement@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@23@$0A@$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18001AB1C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@U-$Interface_ea_18001AB1C.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int CanCastTo; // edi
  _QWORD *v5; // r8

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || *a2 == -1350114592
    && a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,Microsoft::WRL::Details::InterfaceList<IActivationFactory,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>,0,0>::CanCastTo();
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 8LL))(*v5);
    return (unsigned int)CanCastTo;
  }
  return v3;
}
