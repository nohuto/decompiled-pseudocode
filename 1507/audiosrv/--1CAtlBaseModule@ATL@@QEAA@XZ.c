/*
 * XREFs of ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x180042B70
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x180049180 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlBaseModule::~CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  DeleteCriticalSection(&stru_1800E89C8);
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  dword_1800E89F8 = 0;
  dword_1800E89FC = 0;
}
