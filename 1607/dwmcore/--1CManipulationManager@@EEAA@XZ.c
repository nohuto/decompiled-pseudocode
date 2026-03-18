/*
 * XREFs of ??1CManipulationManager@@EEAA@XZ @ 0x18016A678
 * Callers:
 *     ??_ECManipulationManager@@EEAAPEAXI@Z @ 0x18016A960 (--_ECManipulationManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180007904 (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CMmcssTask@@QEAA@XZ @ 0x18011AAC0 (--1CMmcssTask@@QEAA@XZ.c)
 *     ??1MCCollections@@QEAA@XZ @ 0x18016A7F4 (--1MCCollections@@QEAA@XZ.c)
 *     ??1MessageCallThreadInfo@CManipulationManager@@QEAA@XZ @ 0x18016A908 (--1MessageCallThreadInfo@CManipulationManager@@QEAA@XZ.c)
 *     ?ShutDownManipulationThread@CManipulationManager@@AEAAXXZ @ 0x18016B378 (-ShutDownManipulationThread@CManipulationManager@@AEAAXXZ.c)
 */

void __fastcall CManipulationManager::~CManipulationManager(CManipulationManager *this)
{
  __int64 v2; // rcx
  __int64 **v3; // rdi
  __int64 v4; // rbp
  __int64 *v5; // rdx
  __int64 v6; // rax
  int i; // edi

  *(_QWORD *)this = &CManipulationManager::`vftable';
  CManipulationManager::ShutDownManipulationThread(this);
  CManipulationManager::MessageCallThreadInfo::~MessageCallThreadInfo((CManipulationManager *)((char *)this + 352));
  CManipulationManager::MessageCallThreadInfo::~MessageCallThreadInfo((CManipulationManager *)((char *)this + 328));
  v2 = *((_QWORD *)this + 40);
  if ( v2 )
  {
    *((_QWORD *)this + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)this + 34);
  v3 = (__int64 **)((char *)this + 208);
  do
  {
    v4 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
    v5 = *v3;
    v6 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v6 + 8) != v5 )
      __fastfail(3u);
    *v3 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v3;
    if ( v5 != (__int64 *)v3 )
    {
      v4 = v5[2];
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
      --*((_DWORD *)this + 56);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  }
  while ( v4 );
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( *((_QWORD *)this + 24) )
  {
    for ( i = 0; i < *((_DWORD *)this + 50); ++i )
      Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)(*((_QWORD *)this + 24) + 8LL * i));
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
