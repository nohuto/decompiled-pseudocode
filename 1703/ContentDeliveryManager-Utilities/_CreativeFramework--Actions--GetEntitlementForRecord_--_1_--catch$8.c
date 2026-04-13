/*
 * XREFs of _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch$8 @ 0x1800738C9
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NI@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEBQEB_W0AEA_N$$QEAI@Z @ 0x18005770C (--$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NI@ContentDeliveryManagerTelemetry@Back.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18005898C (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch_8(
        wil *a1,
        __int64 a2,
        unsigned int a3)
{
  *(_DWORD *)(a2 + 52) = wil::ResultFromCaughtException(a1, (void *)a2, a3);
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportEntitlementAcquisitionState<wchar_t const * const &,wchar_t const * const &,bool &,unsigned int>(
    *(const WCHAR ***)(a2 + 64),
    *(const WCHAR ***)(a2 + 56),
    a2 + 48,
    a2 + 52);
  *(_BYTE *)(a2 + 48) = 1;
  return &loc_180056909;
}
