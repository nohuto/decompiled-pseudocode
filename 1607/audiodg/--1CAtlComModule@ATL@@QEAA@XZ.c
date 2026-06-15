/*
 * XREFs of ??1CAtlComModule@ATL@@QEAA@XZ @ 0x140017DB0
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlComModule__ @ 0x14001BB70 (ATL--_dynamic_atexit_destructor_for___AtlComModule__.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlComModule::~CAtlComModule(ATL::CAtlComModule *this)
{
  ATL::CAtlComModule::Term(this);
}
