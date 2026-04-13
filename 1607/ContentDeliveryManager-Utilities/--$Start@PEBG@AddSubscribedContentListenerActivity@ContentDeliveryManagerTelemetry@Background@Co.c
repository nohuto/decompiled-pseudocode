/*
 * XREFs of ??$Start@PEBG@AddSubscribedContentListenerActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA?AV0123@$$QEAPEBG@Z @ 0x18004340C
 * Callers:
 *     ?add_ContentUpdated@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJPEAU?$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@PEAVTargetedContentUpdatedEventArgs@23@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180040010 (-add_ContentUpdated@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJPEAU-$ITypedEventHa.c)
 * Callees:
 *     ?StartActivity@AddSubscribedContentListenerActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG@Z @ 0x18003DD68 (-StartActivity@AddSubscribedContentListenerActivity@ContentDeliveryManagerTelemetry@Background@C.c)
 *     memset_0 @ 0x180058F42 (memset_0.c)
 */

ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::AddSubscribedContentListenerActivity *__fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::AddSubscribedContentListenerActivity::Start<unsigned short const *>(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::AddSubscribedContentListenerActivity *this,
        const unsigned __int16 **a2)
{
  char *v2; // rbx
  _QWORD *v5; // rcx

  *((_QWORD *)this + 2) = this;
  v2 = (char *)this + 56;
  *((_QWORD *)this + 5) = (char *)this + 96;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  v5 = (_QWORD *)((char *)this + 136);
  v2[4] = 0;
  v2[64] = 0;
  *((_DWORD *)v2 + 10) = 0;
  *((_QWORD *)v2 + 6) = "AddSubscribedContentListenerActivity";
  *((_QWORD *)v2 + 7) = 0LL;
  *((_QWORD *)v2 + 9) = 1LL;
  v5[18] = 0LL;
  v5[19] = 0LL;
  memset_0(v5, 0, 0x90uLL);
  *((_QWORD *)v2 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::AddSubscribedContentListenerActivity::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::AddSubscribedContentListenerActivity::StartActivity(
    this,
    *a2);
  return this;
}
