/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C720
 * Callers:
 *     ??1SubscriptionImpl@TargetedContent@ContentManagement@@EEAA@XZ @ 0x18003F988 (--1SubscriptionImpl@TargetedContent@ContentManagement@@EEAA@XZ.c)
 *     ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x18003FB7C (--1-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?add_ContentUpdated@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJPEAU?$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@PEAVTargetedContentUpdatedEventArgs@23@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180040010 (-add_ContentUpdated@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJPEAU-$ITypedEventHa.c)
 *     ?NotifySubscribersIfNecessary@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJXZ @ 0x180040A90 (-NotifySubscribersIfNecessary@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJXZ.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@PEAVTargetedContentUpdatedEventArgs@23@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1800427E8 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@Cont.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x180043D78 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ??$InvokeDelegates@V_lambda_eef752076538a26ed334291b1ebf7b16_@@U?$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@PEAVTargetedContentUpdatedEventArgs@23@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_eef752076538a26ed334291b1ebf7b16_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@PEAVTargetedContentUpdatedEventArgs@23@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1800449DC (--$InvokeDelegates@V_lambda_eef752076538a26ed334291b1ebf7b16_@@U-$ITypedEventHandler@PEAVTargete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        volatile signed __int32 *a1)
{
  signed __int32 i; // r8d
  unsigned __int32 v2; // ebx

  for ( i = *((_DWORD *)a1 + 3);
        i != 0x7FFFFFFF && i != _InterlockedCompareExchange(a1 + 3, i - 1, i);
        i = *((_DWORD *)a1 + 3) )
  {
    ;
  }
  v2 = i - 1;
  if ( i == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 24LL))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  }
  return v2;
}
