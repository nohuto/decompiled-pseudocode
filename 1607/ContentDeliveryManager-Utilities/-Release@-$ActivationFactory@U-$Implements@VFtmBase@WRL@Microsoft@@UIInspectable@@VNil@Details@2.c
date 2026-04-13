/*
 * XREFs of ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180019350
 * Callers:
 *     ?Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAKXZ @ 0x180018D70 (-Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAKXZ.c)
 *     ??$CreateActivationFactory@VSubscriptionStaticsImpl@TargetedContent@ContentManagement@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18001A2E0 (--$CreateActivationFactory@VSubscriptionStaticsImpl@TargetedContent@ContentManagement@@@Details@.c)
 *     ??1?$ComPtr@VSubscriptionStaticsImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@QEAA@XZ @ 0x18001A5B8 (--1-$ComPtr@VSubscriptionStaticsImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCA@EAAKXZ @ 0x18001B110 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@V_ea_18001B110.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentSubscriptionStatics@TargetedContent@ContentManagement@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x18001B260 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentSubscription.c)
 *     ?GetSubscriptionAsync@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@78@@Z @ 0x180040D20 (-GetSubscriptionAsync@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAJPEAUHSTRIN.c)
 *     _lambda_770ef59a870ab0485516ac767e870dae_::__lambda_770ef59a870ab0485516ac767e870dae_ @ 0x1800412AC (_lambda_770ef59a870ab0485516ac767e870dae_--__lambda_770ef59a870ab0485516ac767e870dae_.c)
 *     ??_G?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_770ef59a870ab0485516ac767e870dae_@@@Internal@Windows@@V?$CMarshaledInterfaceResult@UITargetedContentSubscription@TargetedContent@ContentManagement@@@23@@Internal@Windows@@UEAAPEAXI@Z @ 0x180044790 (--_G-$COperationLambda0@V-$CCallAsyncLambda@V_lambda_770ef59a870ab0485516ac767e870dae_@@@Interna.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        __int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // edi
  int v3; // ebx

  do
    v1 = *(unsigned int *)(a1 + 44);
  while ( (_DWORD)v1 != 0x7FFFFFFF
       && (_DWORD)v1 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 44), v1 - 1, v1) );
  v2 = v1 - 1;
  if ( (_DWORD)v1 == 1 )
  {
    v3 = *(_DWORD *)(a1 + 64) >> 2;
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, 1LL, v1, 0x7FFFFFFFLL);
    if ( (v3 & 1) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_10:
      _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  }
  else if ( (*(_BYTE *)(a1 + 64) & 4) == 0 && (_DWORD)v1 == 2 )
  {
    goto LABEL_10;
  }
  return v2;
}
