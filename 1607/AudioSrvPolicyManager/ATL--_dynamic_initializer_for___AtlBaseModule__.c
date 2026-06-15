/*
 * XREFs of ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001270
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180022488 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int ATL::_dynamic_initializer_for___AtlBaseModule__()
{
  memset(&stru_180034D18, 0, sizeof(stru_180034D18));
  ATL::_AtlBaseModule = 96;
  Block = 0LL;
  qword_180034D48 = 0LL;
  qword_180034D00 = (__int64)&_ImageBase;
  qword_180034CF8 = (__int64)&_ImageBase;
  qword_180034D10 = (__int64)&GUID_ATLVer70;
  byte_180034D08 = 1;
  dword_180034D0C = 2048;
  ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_180034D18);
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for___AtlBaseModule__);
}
