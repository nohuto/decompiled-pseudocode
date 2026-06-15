/*
 * XREFs of ??0CAtlComModule@ATL@@QEAA@XZ @ 0x1800314C4
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x180001110 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180028F54 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset @ 0x180036D30 (memset.c)
 */

int *__fastcall ATL::CAtlComModule::CAtlComModule(ATL::CAtlComModule *this)
{
  memset(&stru_1800CB580, 0, sizeof(stru_1800CB580));
  ATL::_AtlComModule = 0;
  qword_1800CB568 = (__int64)&_ImageBase;
  qword_1800CB570 = (__int64)&_pobjMap_CAPOWrapperSrv;
  qword_1800CB578 = (__int64)&_pobjMapEntryLast;
  if ( (int)ATL::CComCriticalSection::Init(&stru_1800CB580) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    ATL::_AtlComModule = 72;
  return &ATL::_AtlComModule;
}
