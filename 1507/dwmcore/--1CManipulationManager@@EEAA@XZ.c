/*
 * XREFs of ??1CManipulationManager@@EEAA@XZ @ 0x180129688
 * Callers:
 *     ??_ECManipulationManager@@EEAAPEAXI@Z @ 0x1801299C0 (--_ECManipulationManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Remove@?$CQueue@PEAVCResource@@@@AEAAPEAVCResource@@_NPEAI@Z @ 0x1800E089C (-Remove@-$CQueue@PEAVCResource@@@@AEAAPEAVCResource@@_NPEAI@Z.c)
 *     ??1CMmcssTask@@QEAA@XZ @ 0x1800E8548 (--1CMmcssTask@@QEAA@XZ.c)
 *     ??1MCCollections@@QEAA@XZ @ 0x1801297B0 (--1MCCollections@@QEAA@XZ.c)
 *     ?ClearWaitHandles@CManipulationManager@@CAXXZ @ 0x180129ECC (-ClearWaitHandles@CManipulationManager@@CAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x18012A2B4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CManipulationManager::~CManipulationManager(CManipulationManager *this)
{
  bool v1; // zf
  int i; // ebx

  v1 = *((_QWORD *)this + 3) == 0LL;
  *(_QWORD *)this = &CManipulationManager::`vftable';
  *((_BYTE *)this + 32) = 1;
  if ( !v1 )
  {
    SetEvent(CManipulationManager::s_rghWaitEvents);
    WaitForSingleObject(*((HANDLE *)this + 3), 0xFFFFFFFF);
    CManipulationManager::ClearWaitHandles();
    CloseHandle(*((HANDLE *)this + 3));
    *((_QWORD *)this + 3) = 0LL;
    _InterlockedExchange(&CManipulationManager::s_bManipThreadInitialized, 0);
  }
  Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((char *)this + 272);
  while ( CQueue<CResource *>::Remove((__int64 **)this + 26) )
    ;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( *((_QWORD *)this + 24) )
  {
    for ( i = 0; i < *((_DWORD *)this + 50); ++i )
      Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(*((_QWORD *)this + 24) + 8LL * i);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 24));
    *((_QWORD *)this + 24) = 0LL;
  }
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 0;
  MCCollections::~MCCollections((CManipulationManager *)((char *)this + 128));
  CMmcssTask::~CMmcssTask((CManipulationManager *)((char *)this + 40));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
