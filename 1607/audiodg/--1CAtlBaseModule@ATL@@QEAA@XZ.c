/*
 * XREFs of ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x140017EA4
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x14001BBA0 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlBaseModule::~CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  DeleteCriticalSection(&stru_140054DE8);
  if ( qword_140054E10 )
  {
    free(qword_140054E10);
    qword_140054E10 = 0LL;
  }
  dword_140054E18 = 0;
  dword_140054E1C = 0;
}
