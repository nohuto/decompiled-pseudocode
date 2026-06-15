/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x180045848
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x1800011E0 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180038F7C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 */

int *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  int v1; // eax
  char v2; // cl
  bool v3; // sf
  int *result; // rax

  memset_0(&stru_1800E6998, 0, sizeof(stru_1800E6998));
  Block = 0LL;
  dword_1800E69C8 = 0;
  dword_1800E69CC = 0;
  qword_1800E6980 = (__int64)&_ImageBase;
  qword_1800E6978 = (__int64)&_ImageBase;
  qword_1800E6990 = (__int64)&GUID_ATLVer70;
  ATL::_AtlBaseModule = 96;
  byte_1800E6988 = 1;
  dword_1800E698C = 2048;
  v1 = ATL::CComCriticalSection::Init(&stru_1800E6998);
  v2 = ATL::CAtlBaseModule::m_bInitFailed;
  v3 = v1 < 0;
  result = &ATL::_AtlBaseModule;
  if ( v3 )
    v2 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v2;
  return result;
}
