/*
 * XREFs of ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x180035984
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x18003CA70 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     free @ 0x180036D0C (free.c)
 */

void __fastcall ATL::CAtlBaseModule::~CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  DeleteCriticalSection(&stru_1800CB5E8);
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  dword_1800CB618 = 0;
  dword_1800CB61C = 0;
}
