/*
 * XREFs of ??$Start@PEBGAEAI@RunQueuedUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA?AV0123@$$QEAPEBGAEAI@Z @ 0x180043740
 * Callers:
 *     _lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_::operator() @ 0x1800405E0 (_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_--operator().c)
 * Callees:
 *     ?StartActivity@RunQueuedUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBGI@Z @ 0x18003CC48 (-StartActivity@RunQueuedUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@ContentDe.c)
 *     memset_0 @ 0x180058F42 (memset_0.c)
 */

ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RunQueuedUpdateRetryActivity *__fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RunQueuedUpdateRetryActivity::Start<unsigned short const *,unsigned int &>(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RunQueuedUpdateRetryActivity *this,
        const unsigned __int16 **a2,
        int *a3)
{
  char *v3; // rbx
  _QWORD *v7; // rcx

  *((_QWORD *)this + 2) = this;
  v3 = (char *)this + 56;
  *((_QWORD *)this + 5) = (char *)this + 96;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  v7 = (_QWORD *)((char *)this + 136);
  v3[4] = 0;
  v3[64] = 0;
  *((_DWORD *)v3 + 10) = 0;
  *((_QWORD *)v3 + 6) = "RunQueuedUpdateRetryActivity";
  *((_QWORD *)v3 + 7) = 0LL;
  *((_QWORD *)v3 + 9) = 1LL;
  v7[18] = 0LL;
  v7[19] = 0LL;
  memset_0(v7, 0, 0x90uLL);
  *((_QWORD *)v3 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RunQueuedUpdateRetryActivity::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RunQueuedUpdateRetryActivity::StartActivity(
    this,
    *a2,
    *a3);
  return this;
}
