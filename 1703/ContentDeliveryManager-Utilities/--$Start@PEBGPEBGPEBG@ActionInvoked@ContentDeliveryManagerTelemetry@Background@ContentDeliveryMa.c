/*
 * XREFs of ??$Start@PEBGPEBGPEBG@ActionInvoked@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA?AV0123@$$QEAPEBG00@Z @ 0x1800430D4
 * Callers:
 *     _lambda_50e7782a30e90defa1ee26bf640ccf69_::operator() @ 0x180042384 (_lambda_50e7782a30e90defa1ee26bf640ccf69_--operator().c)
 * Callees:
 *     ?StartActivity@ActionInvoked@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x180040F88 (-StartActivity@ActionInvoked@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@.c)
 *     memset_0 @ 0x18006F9A2 (memset_0.c)
 */

ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvoked *__fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvoked::Start<unsigned short const *,unsigned short const *,unsigned short const *>(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvoked *this,
        const unsigned __int16 **a2,
        const unsigned __int16 **a3,
        const unsigned __int16 **a4)
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
  *((_QWORD *)v4 + 6) = "ActionInvoked";
  *((_QWORD *)v4 + 7) = 0LL;
  *((_QWORD *)v4 + 9) = 1LL;
  v8[18] = 0LL;
  v8[19] = 0LL;
  memset_0(v8, 0, 0x90uLL);
  *((_QWORD *)v4 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvoked::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionInvoked::StartActivity(this, *a2, *a3, *a4);
  return this;
}
