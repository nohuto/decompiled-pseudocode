/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x140016E0C
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x140001120 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140010C04 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x140018550 (memset_0.c)
 */

int *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  int v1; // eax
  char v2; // cl
  bool v3; // sf
  int *result; // rax

  memset_0(&stru_140054DE8, 0, sizeof(stru_140054DE8));
  qword_140054E10 = 0LL;
  dword_140054E18 = 0;
  dword_140054E1C = 0;
  qword_140054DD0 = (__int64)&_ImageBase;
  hModule = &_ImageBase;
  qword_140054DE0 = (__int64)&GUID_ATLVer70;
  ATL::_AtlBaseModule = 96;
  byte_140054DD8 = 1;
  dword_140054DDC = 2048;
  v1 = ATL::CComCriticalSection::Init(&stru_140054DE8);
  v2 = ATL::CAtlBaseModule::m_bInitFailed;
  v3 = v1 < 0;
  result = &ATL::_AtlBaseModule;
  if ( v3 )
    v2 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v2;
  return result;
}
