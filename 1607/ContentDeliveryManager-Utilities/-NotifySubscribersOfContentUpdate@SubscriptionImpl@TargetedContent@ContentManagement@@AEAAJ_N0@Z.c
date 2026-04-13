/*
 * XREFs of ?NotifySubscribersOfContentUpdate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJ_N0@Z @ 0x180040994
 * Callers:
 *     _lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_::operator() @ 0x1800405E0 (_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_--operator().c)
 *     ?OnContentUpdated@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJE@Z @ 0x1800408E0 (-OnContentUpdated@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003EA2C (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAA.c)
 *     ?NotifySubscribersIfNecessary@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJXZ @ 0x180040A90 (-NotifySubscribersIfNecessary@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJXZ.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800416F0 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0E.c)
 *     ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180041E30 (-Stop@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAA.c)
 *     ??$Start@PEBGAEA_NAEA_N@SubscriptionContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA?AV0123@$$QEAPEBGAEA_N1@Z @ 0x180043810 (--$Start@PEBGAEA_NAEA_N@SubscriptionContentUpdatedActivity@ContentDeliveryManagerTelemetry@Backg.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::TargetedContent::SubscriptionImpl::NotifySubscribersOfContentUpdate(
        ContentManagement::TargetedContent::SubscriptionImpl *this,
        char a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  _QWORD v7[40]; // [rsp+40h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  WindowsGetStringRawBuffer(*((HSTRING *)this + 9), 0LL);
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionContentUpdatedActivity::Start<unsigned short const *,bool &,bool &>((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionContentUpdatedActivity *)v7);
  if ( a2 )
    _InterlockedExchange((volatile __int32 *)this + 23, 1);
  if ( _InterlockedExchange((volatile __int32 *)this + 22, 2)
    || (v4 = ContentManagement::TargetedContent::SubscriptionImpl::NotifySubscribersIfNecessary(this), v5 = v4, v4 >= 0) )
  {
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v7);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
      (const char *)(unsigned int)v4);
  }
  v7[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionContentUpdatedActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v7);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v7);
  return v5;
}
