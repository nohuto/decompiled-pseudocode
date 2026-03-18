/*
 * XREFs of ??1CInputManager@@MEAA@XZ @ 0x180129228
 * Callers:
 *     ??_GCInputManager@@MEAAPEAXI@Z @ 0x180129320 (--_GCInputManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UseDesktopInputStack@CInputManager@@AEAAHXZ @ 0x18008A750 (-UseDesktopInputStack@CInputManager@@AEAAHXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CMmcssTask@@QEAA@XZ @ 0x1800E8548 (--1CMmcssTask@@QEAA@XZ.c)
 *     ??1CHitTestContext@@QEAA@XZ @ 0x180129144 (--1CHitTestContext@@QEAA@XZ.c)
 *     ?ShutDownInputThread@CInputManager@@IEAAXXZ @ 0x1801293BC (-ShutDownInputThread@CInputManager@@IEAAXXZ.c)
 */

void __fastcall CInputManager::~CInputManager(CInputManager *this)
{
  CInputManager *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rdi

  *(_QWORD *)this = &CInputManager::`vftable';
  CInputManager::ShutDownInputThread(this);
  if ( CInputManager::UseDesktopInputStack(v2) )
  {
    v3 = (void *)*((_QWORD *)this + 3);
    if ( v3 )
      CloseHandle(v3);
    v4 = (void *)*((_QWORD *)this + 4);
    if ( v4 )
      CloseHandle(v4);
  }
  else
  {
    v5 = *((_QWORD *)this + 50);
    if ( v5 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 50));
      *((_QWORD *)this + 50) = 0LL;
    }
    if ( *((_QWORD *)this + 49) )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 49));
      *((_QWORD *)this + 49) = 0LL;
    }
  }
  CInputManager::s_pInputManager = 0LL;
  CHitTestContext::~CHitTestContext((CInputManager *)((char *)this + 144));
  CMmcssTask::~CMmcssTask((CInputManager *)((char *)this + 56));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
