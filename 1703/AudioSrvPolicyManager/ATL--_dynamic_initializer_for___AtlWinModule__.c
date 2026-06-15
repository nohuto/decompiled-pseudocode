/*
 * XREFs of ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180001290
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18001EEE0 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset @ 0x18002167E (memset.c)
 */

int ATL::_dynamic_initializer_for___AtlWinModule__()
{
  int v0; // eax
  int v1; // ecx

  memset(&stru_180031E08, 0, sizeof(stru_180031E08));
  ATL::_AtlWinModule = 72;
  qword_180031E38 = 0LL;
  qword_180031E40 = 0LL;
  qword_180031E30 = 0LL;
  v0 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_180031E08);
  v1 = ATL::_AtlWinModule;
  if ( v0 < 0 )
    v1 = 0;
  ATL::_AtlWinModule = v1;
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for___AtlWinModule__);
}
