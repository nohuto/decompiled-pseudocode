/*
 * XREFs of ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x140001B54
 * Callers:
 *     ??0CAudioDGModule@@QEAA@XZ @ 0x140008C98 (--0CAudioDGModule@@QEAA@XZ.c)
 * Callees:
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x1400021EC (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140004E28 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x140019034 (memset_0.c)
 */

__int64 *ATL::CAtlExeModuleT<CAudioDGModule>::CAtlExeModuleT<CAudioDGModule>()
{
  DWORD CurrentThreadId; // eax
  HRESULT v1; // eax
  ATL::CAtlComModule *v2; // rcx

  memset_0(&unk_140055B68, 0, 0x28uLL);
  dword_140055B58 = 0;
  qword_140055B60 = 0LL;
  dword_140055B5C = 0;
  qword_140055B90 = 0LL;
  ATL::_pAtlModule = (CAudioDGModule *)&_AtlModule;
  if ( (int)ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&unk_140055B68) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    dword_140055B58 = 56;
  ATL::CAtlModule::m_libid = LIBID_PolicyServerLib;
  CurrentThreadId = GetCurrentThreadId();
  qword_140055BA0 = 0LL;
  dword_140055B98 = CurrentThreadId;
  dword_140055BA8 = 5000;
  dword_140055BAC = 1000;
  byte_140055BB0 = 1;
  byte_140055BB2 = 0;
  v1 = CoInitializeEx(0LL, 0);
  if ( v1 < 0 )
  {
    if ( v1 != -2147417850 || !GetModuleHandleW(L"Mscoree.dll") )
    {
      ATL::CAtlBaseModule::m_bInitFailed = 1;
      return &_AtlModule;
    }
  }
  else
  {
    byte_140055BB2 = 1;
  }
  ATL::CAtlComModule::ExecuteObjectMain(v2, 1);
  return &_AtlModule;
}
