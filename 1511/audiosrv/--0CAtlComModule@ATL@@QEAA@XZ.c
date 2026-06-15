/*
 * XREFs of ??0CAtlComModule@ATL@@QEAA@XZ @ 0x18003DA34
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x180001160 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180038F7C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 */

int *__fastcall ATL::CAtlComModule::CAtlComModule(ATL::CAtlComModule *this)
{
  memset_0(&stru_1800E6930, 0, sizeof(stru_1800E6930));
  ATL::_AtlComModule = 0;
  qword_1800E6918 = (__int64)&_ImageBase;
  qword_1800E6920 = (__int64)&_pobjMapEntryLast;
  qword_1800E6928 = (__int64)&_pobjMapEntryLast;
  if ( (int)ATL::CComCriticalSection::Init(&stru_1800E6930) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    ATL::_AtlComModule = 72;
  return &ATL::_AtlComModule;
}
