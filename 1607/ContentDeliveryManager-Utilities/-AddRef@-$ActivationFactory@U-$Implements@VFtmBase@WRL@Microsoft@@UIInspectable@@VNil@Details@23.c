/*
 * XREFs of ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180018D80
 * Callers:
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x18001B0C0 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@VN_ea_18001B0C0.c)
 *     ?AddRef@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@WCA@EAAKXZ @ 0x18001B3C0 (-AddRef@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(
        __int64 a1)
{
  signed __int32 v1; // r9d
  unsigned int v2; // r8d

  v1 = *(_DWORD *)(a1 + 44);
  v2 = 0x7FFFFFFF;
  if ( v1 != 0x7FFFFFFF )
  {
    do
    {
      if ( v1 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 44), v1 + 1, v1) )
        break;
      v1 = *(_DWORD *)(a1 + 44);
    }
    while ( v1 != 0x7FFFFFFF );
    if ( v1 != 0x7FFFFFFF )
      v2 = v1 + 1;
  }
  if ( (*(_BYTE *)(a1 + 64) & 4) == 0 && v2 == 2 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  return v2;
}
