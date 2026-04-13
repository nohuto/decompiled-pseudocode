/*
 * XREFs of ?remove_ContentUpdated@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJUEventRegistrationToken@@@Z @ 0x1800402E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800348C0 (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAA.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800365A4 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0C.c)
 *     ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180041564 (-Stop@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAA.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@PEAVTargetedContentUpdatedEventArgs@23@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1800427E8 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@Cont.c)
 *     ??$Start@PEBG@RemoveSubscribedContentListenerActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA?AV0123@$$QEAPEBG@Z @ 0x1800434CC (--$Start@PEBG@RemoveSubscribedContentListenerActivity@ContentDeliveryManagerTelemetry@Background.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

__int64 __fastcall ContentManagement::TargetedContent::SubscriptionImpl::remove_ContentUpdated(
        HSTRING *this,
        struct EventRegistrationToken a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  _QWORD v7[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  WindowsGetStringRawBuffer(this[4], 0LL);
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RemoveSubscribedContentListenerActivity::Start<unsigned short const *>((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RemoveSubscribedContentListenerActivity *)v7);
  v4 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<ContentManagement::TargetedContent::TargetedContentSubscription *,ContentManagement::TargetedContent::TargetedContentUpdatedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
         this + 7,
         a2.value);
  v5 = v4;
  if ( v4 >= 0 )
  {
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v7);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x176,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
      (const char *)(unsigned int)v4);
  }
  v7[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RemoveSubscribedContentListenerActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v7);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v7);
  return v5;
}
