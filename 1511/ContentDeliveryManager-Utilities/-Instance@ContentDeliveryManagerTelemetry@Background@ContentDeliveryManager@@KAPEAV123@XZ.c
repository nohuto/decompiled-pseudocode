/*
 * XREFs of ?Instance@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@KAPEAV123@XZ @ 0x18000D6B4
 * Callers:
 *     ?LogFailure_@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEAUFailureInfo@wil@@@Z @ 0x18000D73C (-LogFailure_@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEAUFailure.c)
 *     ?FailureLoggingCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@CAXPEAUFailureInfo@wil@@PEAG_K@Z @ 0x18000D8B0 (-FailureLoggingCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@CAXPE.c)
 *     ??$PlacementHealthEvaluation@IG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAI$$QEAG$$QEA_KAEBE$$QEAPEBG4@Z @ 0x180021188 (--$PlacementHealthEvaluation@IG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@Content.c)
 *     ??$ReportPlacementHealth@IG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAI$$QEAG$$QEA_KAEBE$$QEAPEBG4@Z @ 0x1800212C4 (--$ReportPlacementHealth@IG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeli.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@@details@wil@@QEAA@XZ @ 0x18001615C (--1Completer@-$static_lazy@VContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@@.c)
 *     atexit @ 0x180027D64 (atexit.c)
 */

struct ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry *ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Instance(
        void)
{
  union _RTL_RUN_ONCE *v1; // [rsp+20h] [rbp-18h] BYREF
  int v2; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+10h] BYREF

  if ( (`ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Instance'::`2'::`local static guard' & 1) == 0 )
  {
    `ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Instance'::`2'::`local static guard' |= 1u;
    atexit(`ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Instance'::`2'::`dynamic atexit destructor for 'wrapper'');
  }
  InitOnceBeginInitialize(
    &`ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Instance'::`2'::wrapper,
    0,
    &fPending,
    &Context);
  if ( fPending )
  {
    v2 = 0;
    Context = &qword_18003E680;
    v1 = &`ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Instance'::`2'::wrapper;
    qword_18003E680 = (__int64)&ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::`vftable';
    wil::details::static_lazy<ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry>::Completer::~Completer(&v1);
  }
  return (struct ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry *)Context;
}
