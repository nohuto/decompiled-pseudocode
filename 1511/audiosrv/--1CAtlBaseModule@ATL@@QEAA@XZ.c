/*
 * XREFs of ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x180046A10
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x18004D230 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlBaseModule::~CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  DeleteCriticalSection(&stru_1800E6998);
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  dword_1800E69C8 = 0;
  dword_1800E69CC = 0;
}
