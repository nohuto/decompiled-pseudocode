/*
 * XREFs of _CMonitor::Start_::_1_::dtor$5 @ 0x180081EBC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CMonitor::Start_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CMonitor::SampleDataBlock>::~CAutoPtr<CMonitor::SampleDataBlock>(
           (CMonitor::SampleDataBlock **)(a2 + 88),
           a2);
}
