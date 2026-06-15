/*
 * XREFs of ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x1800457E4
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180001200 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180038F7C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 */

int *__fastcall ATL::CAtlWinModule::CAtlWinModule(ATL::CAtlWinModule *this)
{
  memset_0(&CriticalSection, 0, sizeof(CriticalSection));
  qword_1800E6A08 = 0LL;
  dword_1800E6A10 = 0;
  dword_1800E6A14 = 0;
  qword_1800E6A00 = 0LL;
  ATL::_AtlWinModule = 72;
  if ( (int)ATL::CComCriticalSection::Init(&CriticalSection) < 0 )
  {
    ATL::_AtlWinModule = 0;
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  }
  return &ATL::_AtlWinModule;
}
