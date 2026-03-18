/*
 * XREFs of ??1CInputManager@@MEAA@XZ @ 0x18013F07C
 * Callers:
 *     ??_GCInputManager@@MEAAPEAXI@Z @ 0x18013F1B0 (--_GCInputManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CHitTestContext@@QEAA@XZ @ 0x18013EFE0 (--1CHitTestContext@@QEAA@XZ.c)
 *     ??_GCDWMInputThread@@QEAAPEAXI@Z @ 0x18013F134 (--_GCDWMInputThread@@QEAAPEAXI@Z.c)
 *     ?Stop@CDWMInputThread@@QEAAXXZ @ 0x180143480 (-Stop@CDWMInputThread@@QEAAXXZ.c)
 *     ?Stop@CISMInputThread@@QEAAXXZ @ 0x1801434C8 (-Stop@CISMInputThread@@QEAAXXZ.c)
 */

void __fastcall CInputManager::~CInputManager(CInputManager *this)
{
  CDWMInputThread *v2; // rcx
  unsigned int v3; // edx
  CDWMInputThread *v4; // rcx
  CISMInputThread *v5; // rcx

  *(_QWORD *)this = &CInputManager::`vftable';
  v2 = (CDWMInputThread *)*((_QWORD *)this + 26);
  if ( v2 )
  {
    CDWMInputThread::Stop(v2);
    v4 = (CDWMInputThread *)*((_QWORD *)this + 26);
    if ( v4 )
      CDWMInputThread::`scalar deleting destructor'(v4, v3);
  }
  v5 = (CISMInputThread *)*((_QWORD *)this + 27);
  if ( v5 )
  {
    CISMInputThread::Stop(v5);
    if ( *((_QWORD *)this + 27) )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 27));
  }
  CInputManager::s_pInputManager = 0LL;
  CHitTestContext::~CHitTestContext((CInputManager *)((char *)this + 24));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
