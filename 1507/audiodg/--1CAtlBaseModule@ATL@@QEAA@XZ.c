/*
 * XREFs of ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x14001853C
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x14001C0F0 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlBaseModule::~CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  DeleteCriticalSection(&stru_140055CD8);
  if ( qword_140055D00 )
  {
    free(qword_140055D00);
    qword_140055D00 = 0LL;
  }
  dword_140055D08 = 0;
  dword_140055D0C = 0;
}
