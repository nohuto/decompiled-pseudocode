/*
 * XREFs of _CMonitor::Initialize_::_1_::dtor$1 @ 0x18009A07E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitor::Initialize_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IPolicyConfig>::~CComPtr<IPolicyConfig>((CPolicyConfig **)(a2 + 64));
}
