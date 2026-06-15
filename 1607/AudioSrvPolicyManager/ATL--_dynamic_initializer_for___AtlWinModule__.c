/*
 * XREFs of ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180001300
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180022488 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int ATL::_dynamic_initializer_for___AtlWinModule__()
{
  int v0; // eax
  int v1; // ecx

  memset(&stru_180034D58, 0, sizeof(stru_180034D58));
  ATL::_AtlWinModule = 72;
  qword_180034D88 = 0LL;
  qword_180034D90 = 0LL;
  qword_180034D80 = 0LL;
  v0 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_180034D58);
  v1 = ATL::_AtlWinModule;
  if ( v0 < 0 )
    v1 = 0;
  ATL::_AtlWinModule = v1;
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for___AtlWinModule__);
}
