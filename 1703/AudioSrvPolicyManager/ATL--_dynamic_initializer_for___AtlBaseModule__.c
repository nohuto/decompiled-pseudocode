/*
 * XREFs of ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001210
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18001EEE0 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset @ 0x18002167E (memset.c)
 */

int ATL::_dynamic_initializer_for___AtlBaseModule__()
{
  memset(&CriticalSection, 0, sizeof(CriticalSection));
  ATL::_AtlBaseModule = 96;
  Block = 0LL;
  qword_180031DF8 = 0LL;
  qword_180031DB0 = (__int64)&_ImageBase;
  qword_180031DA8 = (__int64)&_ImageBase;
  qword_180031DC0 = (__int64)&GUID_ATLVer70;
  byte_180031DB8 = 1;
  dword_180031DBC = 2048;
  ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&CriticalSection);
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for___AtlBaseModule__);
}
