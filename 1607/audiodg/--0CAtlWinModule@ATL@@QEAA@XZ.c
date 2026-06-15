/*
 * XREFs of ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x140016DA8
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x140001140 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140010C04 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x140018550 (memset_0.c)
 */

int *__fastcall ATL::CAtlWinModule::CAtlWinModule(ATL::CAtlWinModule *this)
{
  memset_0(&CriticalSection, 0, sizeof(CriticalSection));
  qword_140054E58 = 0LL;
  dword_140054E60 = 0;
  dword_140054E64 = 0;
  qword_140054E50 = 0LL;
  ATL::_AtlWinModule = 72;
  if ( (int)ATL::CComCriticalSection::Init(&CriticalSection) < 0 )
  {
    ATL::_AtlWinModule = 0;
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  }
  return &ATL::_AtlWinModule;
}
