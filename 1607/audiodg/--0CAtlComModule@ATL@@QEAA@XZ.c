/*
 * XREFs of ??0CAtlComModule@ATL@@QEAA@XZ @ 0x140015BA8
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x1400010A0 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140010C04 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x140018550 (memset_0.c)
 */

int *__fastcall ATL::CAtlComModule::CAtlComModule(ATL::CAtlComModule *this)
{
  memset_0(&stru_140054D50, 0, sizeof(stru_140054D50));
  ATL::_AtlComModule = 0;
  qword_140054D38 = (__int64)&_ImageBase;
  qword_140054D40 = (__int64)_pobjMap_CStreamGroup;
  qword_140054D48 = (__int64)&_pobjMapEntryLast;
  if ( (int)ATL::CComCriticalSection::Init(&stru_140054D50) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    ATL::_AtlComModule = 72;
  return &ATL::_AtlComModule;
}
