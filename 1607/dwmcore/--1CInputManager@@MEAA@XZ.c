/*
 * XREFs of ??1CInputManager@@MEAA@XZ @ 0x18016A23C
 * Callers:
 *     ??_GCInputManager@@MEAAPEAXI@Z @ 0x18016A380 (--_GCInputManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??_GCDWMInputThread@@QEAAPEAXI@Z @ 0x18016A31C (--_GCDWMInputThread@@QEAAPEAXI@Z.c)
 *     ?Stop@CDWMInputThread@@QEAAXXZ @ 0x180170B00 (-Stop@CDWMInputThread@@QEAAXXZ.c)
 *     ?Stop@CISMInputThread@@QEAAXXZ @ 0x180170B48 (-Stop@CISMInputThread@@QEAAXXZ.c)
 */

void __fastcall CInputManager::~CInputManager(CInputManager *this)
{
  CDWMInputThread *v2; // rcx
  unsigned int v3; // edx
  CDWMInputThread *v4; // rcx
  CISMInputThread *v5; // rcx
  WPF::ProcessHeapImpl *v6; // rcx
  __int64 v7; // rdx

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
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  }
  v6 = WPF::g_pProcessHeap;
  v7 = *((_QWORD *)this + 24);
  CInputManager::s_pInputManager = 0LL;
  *((_QWORD *)this + 3) = &CHitTestContext::`vftable';
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)v6 + 32LL))(v6, v7);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 20));
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 11));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
