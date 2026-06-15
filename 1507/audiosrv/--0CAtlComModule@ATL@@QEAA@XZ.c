/*
 * XREFs of ??0CAtlComModule@ATL@@QEAA@XZ @ 0x1800398D8
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x180001180 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180009E44 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 */

int *__fastcall ATL::CAtlComModule::CAtlComModule(ATL::CAtlComModule *this)
{
  memset_0(&stru_1800E8960, 0, sizeof(stru_1800E8960));
  ATL::_AtlComModule = 0;
  qword_1800E8948 = (__int64)&_ImageBase;
  qword_1800E8950 = (__int64)&_pobjMapEntryLast;
  qword_1800E8958 = (__int64)&_pobjMapEntryLast;
  if ( (int)ATL::CComCriticalSection::Init(&stru_1800E8960) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    ATL::_AtlComModule = 72;
  return &ATL::_AtlComModule;
}
