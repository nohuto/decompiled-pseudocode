/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x180042828
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001200 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180009E44 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 */

int *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  int v1; // eax
  char v2; // cl
  bool v3; // sf
  int *result; // rax

  memset_0(&stru_1800E89C8, 0, sizeof(stru_1800E89C8));
  Block = 0LL;
  dword_1800E89F8 = 0;
  dword_1800E89FC = 0;
  qword_1800E89B0 = (__int64)&_ImageBase;
  qword_1800E89A8 = (__int64)&_ImageBase;
  qword_1800E89C0 = (__int64)&GUID_ATLVer70;
  ATL::_AtlBaseModule = 96;
  byte_1800E89B8 = 1;
  dword_1800E89BC = 2048;
  v1 = ATL::CComCriticalSection::Init(&stru_1800E89C8);
  v2 = ATL::CAtlBaseModule::m_bInitFailed;
  v3 = v1 < 0;
  result = &ATL::_AtlBaseModule;
  if ( v3 )
    v2 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v2;
  return result;
}
