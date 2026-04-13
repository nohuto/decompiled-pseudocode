/*
 * XREFs of ??$Start@PEB_WIPEBD@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA?AV0123@$$QEAPEB_W$$QEAI$$QEAPEBD@Z @ 0x180053C20
 * Callers:
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x180052960 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 * Callees:
 *     ?StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_WIPEBD@Z @ 0x180051B54 (-StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@Cont.c)
 *     memset_0 @ 0x18006F9A2 (memset_0.c)
 */

ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule *__fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::Start<wchar_t const *,unsigned int,char const *>(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule *this,
        const wchar_t **a2,
        int *a3,
        const char **a4)
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
  *((_QWORD *)v4 + 6) = "DiagTrackRuleSetHandlerRemoveRule";
  *((_QWORD *)v4 + 7) = 0LL;
  *((_QWORD *)v4 + 9) = 1LL;
  v8[18] = 0LL;
  v8[19] = 0LL;
  memset_0(v8, 0, 0x90uLL);
  *((_QWORD *)v4 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::StartActivity(
    this,
    *a2,
    *a3,
    *a4);
  return this;
}
