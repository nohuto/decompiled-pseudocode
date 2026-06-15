/*
 * XREFs of _CMonitor::Stop_::_1_::dtor$3 @ 0x18009C9AE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CMonitor::Stop_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CMonitor::SampleDataBlock>::~CAutoPtr<CMonitor::SampleDataBlock>(
           (CMonitor::SampleDataBlock **)(a2 + 96),
           a2);
}
