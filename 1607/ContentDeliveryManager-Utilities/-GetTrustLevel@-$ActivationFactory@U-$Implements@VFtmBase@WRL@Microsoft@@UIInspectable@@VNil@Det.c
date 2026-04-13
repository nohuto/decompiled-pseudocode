/*
 * XREFs of ?GetTrustLevel@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x1800191D0
 * Callers:
 *     ?GetTrustLevel@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x18001B040 (-GetTrustLevel@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInspecta_ea_18001B040.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
    *a2 = (*(__int64 (**)(void))(v2 + 16))();
  else
    *a2 = 2;
  return 0LL;
}
