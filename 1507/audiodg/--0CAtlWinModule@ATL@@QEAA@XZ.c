/*
 * XREFs of ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x140018214
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x1400010E0 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140013590 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 */

int *__fastcall ATL::CAtlWinModule::CAtlWinModule(ATL::CAtlWinModule *this)
{
  memset_0(&stru_140055D18, 0, sizeof(stru_140055D18));
  qword_140055D48 = 0LL;
  dword_140055D50 = 0;
  dword_140055D54 = 0;
  qword_140055D40 = 0LL;
  ATL::_AtlWinModule = 72;
  if ( (int)ATL::CComCriticalSection::Init(&stru_140055D18) < 0 )
  {
    ATL::_AtlWinModule = 0;
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  }
  return &ATL::_AtlWinModule;
}
