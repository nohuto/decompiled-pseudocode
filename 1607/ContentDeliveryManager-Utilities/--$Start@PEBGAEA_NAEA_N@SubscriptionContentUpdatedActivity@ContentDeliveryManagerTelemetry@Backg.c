/*
 * XREFs of ??$Start@PEBGAEA_NAEA_N@SubscriptionContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA?AV0123@$$QEAPEBGAEA_N1@Z @ 0x180043810
 * Callers:
 *     ?NotifySubscribersOfContentUpdate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJ_N0@Z @ 0x180040994 (-NotifySubscribersOfContentUpdate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?StartActivity@SubscriptionContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG_N1@Z @ 0x18003D1F8 (-StartActivity@SubscriptionContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@Con.c)
 *     memset_0 @ 0x180058F42 (memset_0.c)
 */

ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionContentUpdatedActivity *__fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionContentUpdatedActivity::Start<unsigned short const *,bool &,bool &>(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionContentUpdatedActivity *this,
        const unsigned __int16 **a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  char *v4; // rbx
  _QWORD *v8; // rcx

  *((_QWORD *)this + 2) = this;
  v4 = (char *)this + 56;
  *((_QWORD *)this + 5) = (char *)this + 96;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  v8 = (_QWORD *)((char *)this + 136);
  v4[4] = 0;
  v4[64] = 0;
  *((_DWORD *)v4 + 10) = 0;
  *((_QWORD *)v4 + 6) = "SubscriptionContentUpdatedActivity";
  *((_QWORD *)v4 + 7) = 0LL;
  *((_QWORD *)v4 + 9) = 1LL;
  v8[18] = 0LL;
  v8[19] = 0LL;
  memset_0(v8, 0, 0x90uLL);
  *((_QWORD *)v4 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionContentUpdatedActivity::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionContentUpdatedActivity::StartActivity(
    this,
    *a2,
    *a3,
    *a4);
  return this;
}
