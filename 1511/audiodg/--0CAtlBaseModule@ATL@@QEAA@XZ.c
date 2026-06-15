/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x140002250
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x1400010C0 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140004E28 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x140019034 (memset_0.c)
 */

int *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  int v1; // eax
  char v2; // cl
  bool v3; // sf
  int *result; // rax

  memset_0(&stru_140055CD8, 0, sizeof(stru_140055CD8));
  qword_140055D00 = 0LL;
  dword_140055D08 = 0;
  dword_140055D0C = 0;
  qword_140055CC0 = (__int64)&_ImageBase;
  hModule = &_ImageBase;
  qword_140055CD0 = (__int64)&GUID_ATLVer70;
  ATL::_AtlBaseModule = 96;
  byte_140055CC8 = 1;
  dword_140055CCC = 2048;
  v1 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_140055CD8);
  v2 = ATL::CAtlBaseModule::m_bInitFailed;
  v3 = v1 < 0;
  result = &ATL::_AtlBaseModule;
  if ( v3 )
    v2 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v2;
  return result;
}
