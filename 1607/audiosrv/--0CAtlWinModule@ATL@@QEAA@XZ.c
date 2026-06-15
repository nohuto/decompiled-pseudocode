/*
 * XREFs of ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x1800348EC
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x1800011B0 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180028F54 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset @ 0x180036D30 (memset.c)
 */

int *__fastcall ATL::CAtlWinModule::CAtlWinModule(ATL::CAtlWinModule *this)
{
  memset(&CriticalSection, 0, sizeof(CriticalSection));
  qword_1800CB658 = 0LL;
  dword_1800CB660 = 0;
  dword_1800CB664 = 0;
  qword_1800CB650 = 0LL;
  ATL::_AtlWinModule = 72;
  if ( (int)ATL::CComCriticalSection::Init(&CriticalSection) < 0 )
  {
    ATL::_AtlWinModule = 0;
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  }
  return &ATL::_AtlWinModule;
}
