/*
 * XREFs of ??0CAtlComModule@ATL@@QEAA@XZ @ 0x140002170
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x1400010A0 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140004E28 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x140019034 (memset_0.c)
 */

int *__fastcall ATL::CAtlComModule::CAtlComModule(ATL::CAtlComModule *this)
{
  memset_0(&stru_140055C80, 0, sizeof(stru_140055C80));
  ATL::_AtlComModule = 0;
  qword_140055C68 = (__int64)&_ImageBase;
  qword_140055C70 = (__int64)_pobjMap_CAudioDeviceGraph;
  qword_140055C78 = (__int64)&_pobjMapEntryLast;
  if ( (int)ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_140055C80) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    ATL::_AtlComModule = 72;
  return &ATL::_AtlComModule;
}
