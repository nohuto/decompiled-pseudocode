/*
 * XREFs of _CKsSoftwareNotificationsMonitor::OnFormatCapsChange_::_1_::dtor$4 @ 0x18008AC4F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CKsSoftwareNotificationsMonitor::OnFormatCapsChange_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IPolicyConfig>::~CComPtr<IPolicyConfig>((CPolicyConfig **)(a2 + 80));
}
