/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x180034950
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001190 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180028F54 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset @ 0x180036D30 (memset.c)
 */

int *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  int v1; // eax
  char v2; // cl
  bool v3; // sf
  int *result; // rax

  memset(&stru_1800CB5E8, 0, sizeof(stru_1800CB5E8));
  Block = 0LL;
  dword_1800CB618 = 0;
  dword_1800CB61C = 0;
  qword_1800CB5D0 = (__int64)&_ImageBase;
  qword_1800CB5C8 = (__int64)&_ImageBase;
  qword_1800CB5E0 = (__int64)&GUID_ATLVer70;
  ATL::_AtlBaseModule = 96;
  byte_1800CB5D8 = 1;
  dword_1800CB5DC = 2048;
  v1 = ATL::CComCriticalSection::Init(&stru_1800CB5E8);
  v2 = ATL::CAtlBaseModule::m_bInitFailed;
  v3 = v1 < 0;
  result = &ATL::_AtlBaseModule;
  if ( v3 )
    v2 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v2;
  return result;
}
