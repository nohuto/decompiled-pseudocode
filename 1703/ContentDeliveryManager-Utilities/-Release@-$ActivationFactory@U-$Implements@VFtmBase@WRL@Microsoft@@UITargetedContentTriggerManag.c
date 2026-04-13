/*
 * XREFs of ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentTriggerManagerStaticsInternal@Internal@TargetedContent@Services@Windows@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180020560
 * Callers:
 *     ?Release@ContentDeliveryManagerConfigurationStatics@ContentManagement@@UEAAKXZ @ 0x18001FC30 (-Release@ContentDeliveryManagerConfigurationStatics@ContentManagement@@UEAAKXZ.c)
 *     ??$CreateActivationFactory@VSubscriptionStaticsImpl@TargetedContent@ContentManagement@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180021500 (--$CreateActivationFactory@VSubscriptionStaticsImpl@TargetedContent@ContentManagement@@@Details@.c)
 *     ??$CreateActivationFactory@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800218A0 (--$CreateActivationFactory@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Servic.c)
 *     ??1?$ComPtr@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021C54 (--1-$ComPtr@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@WR.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentTriggerManagerStaticsInternal@Internal@TargetedContent@Services@Windows@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCA@EAAKXZ @ 0x1800225E0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedConten_ea_1800225E0.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentSubscriptionStatics@TargetedContent@ContentManagement@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x180022680 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentSubscription.c)
 *     ??$CreateActivationFactory@VTargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180042F00 (--$CreateActivationFactory@VTargetedContentActionStatics@Internal@TargetedContent@Services@Windo.c)
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180048960 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 *     _lambda_a20a6b3776b39db881c9be8aadce65fd_::__lambda_a20a6b3776b39db881c9be8aadce65fd_ @ 0x180048E00 (_lambda_a20a6b3776b39db881c9be8aadce65fd_--__lambda_a20a6b3776b39db881c9be8aadce65fd_.c)
 *     ??_E?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_a20a6b3776b39db881c9be8aadce65fd_@@@Internal@Windows@@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@@Internal@Windows@@UEAAPEAXI@Z @ 0x18004A470 (--_E-$COperationLambda0@V-$CCallAsyncLambda@V_lambda_a20a6b3776b39db881c9be8aadce65fd_@@@Interna.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerManagerStaticsInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
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
