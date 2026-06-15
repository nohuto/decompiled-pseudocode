/*
 * XREFs of ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x140015AD0
 * Callers:
 *     ??0CAudioDGModule@@QEAA@XZ @ 0x140012558 (--0CAudioDGModule@@QEAA@XZ.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140010C04 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x140015C24 (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 *     memset_0 @ 0x140018550 (memset_0.c)
 */

void *ATL::CAtlExeModuleT<CAudioDGModule>::CAtlExeModuleT<CAudioDGModule>()
{
  DWORD CurrentThreadId; // eax
  HRESULT v1; // eax
  ATL::CAtlComModule *v2; // rcx

  memset_0(&stru_140054C38, 0, sizeof(stru_140054C38));
  dword_140054C28 = 0;
  qword_140054C30 = 0LL;
  dword_140054C2C = 0;
  qword_140054C60 = 0LL;
  ATL::_pAtlModule = (CAudioDGModule *)&_AtlModule;
  if ( (int)ATL::CComCriticalSection::Init(&stru_140054C38) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    dword_140054C28 = 56;
  ATL::CAtlModule::m_libid = LIBID_PolicyServerLib;
  CurrentThreadId = GetCurrentThreadId();
  qword_140054C70 = 0LL;
  dword_140054C68 = CurrentThreadId;
  dword_140054C78 = 5000;
  dword_140054C7C = 1000;
  byte_140054C80 = 1;
  byte_140054C82 = 0;
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
    byte_140054C82 = 1;
  }
  ATL::CAtlComModule::ExecuteObjectMain(v2, 1);
  return &_AtlModule;
}
