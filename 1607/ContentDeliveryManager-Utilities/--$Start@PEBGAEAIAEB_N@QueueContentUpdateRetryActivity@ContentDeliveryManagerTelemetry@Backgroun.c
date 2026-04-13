/*
 * XREFs of ??$Start@PEBGAEAIAEB_N@QueueContentUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA?AV0123@$$QEAPEBGAEAIAEB_N@Z @ 0x18004358C
 * Callers:
 *     ?QueueContentUpdateRetryNoLock@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAXXZ @ 0x1800403AC (-QueueContentUpdateRetryNoLock@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAXXZ.c)
 * Callees:
 *     ?StartActivity@QueueContentUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBGI_N@Z @ 0x18003C688 (-StartActivity@QueueContentUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@Conten.c)
 *     memset_0 @ 0x180058F42 (memset_0.c)
 */

ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::QueueContentUpdateRetryActivity *__fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::QueueContentUpdateRetryActivity::Start<unsigned short const *,unsigned int &,bool const &>(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::QueueContentUpdateRetryActivity *this,
        const unsigned __int16 **a2,
        int *a3,
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
  *((_QWORD *)v4 + 6) = "QueueContentUpdateRetryActivity";
  *((_QWORD *)v4 + 7) = 0LL;
  *((_QWORD *)v4 + 9) = 1LL;
  v8[18] = 0LL;
  v8[19] = 0LL;
  memset_0(v8, 0, 0x90uLL);
  *((_QWORD *)v4 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::QueueContentUpdateRetryActivity::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::QueueContentUpdateRetryActivity::StartActivity(
    this,
    *a2,
    *a3,
    *a4);
  return this;
}
