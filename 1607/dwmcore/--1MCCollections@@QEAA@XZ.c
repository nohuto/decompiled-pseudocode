/*
 * XREFs of ??1MCCollections@@QEAA@XZ @ 0x18016A7F4
 * Callers:
 *     ??1CManipulationManager@@EEAA@XZ @ 0x18016A678 (--1CManipulationManager@@EEAA@XZ.c)
 * Callees:
 *     ??_G?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180007930 (--_G-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MCCollections::~MCCollections(MCCollections *this)
{
  int i; // edi
  int j; // edi

  if ( *((_QWORD *)this + 5) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 5) = 0LL;
  }
  if ( *((_QWORD *)this + 6) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_DWORD *)this + 14) = 0;
  if ( *((_QWORD *)this + 3) )
  {
    for ( i = 0; i < *((_DWORD *)this + 8); ++i )
      Microsoft::WRL::ComPtr<CManipulationContext>::`scalar deleting destructor'((__int64 *)(*((_QWORD *)this + 3)
                                                                                           + 8LL * i));
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 3));
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_QWORD *)this + 4) = 0LL;
  if ( *(_QWORD *)this )
  {
    for ( j = 0; j < *((_DWORD *)this + 4); ++j )
      Microsoft::WRL::ComPtr<CManipulationContext>::`scalar deleting destructor'((__int64 *)(*((_QWORD *)this + 1)
                                                                                           + 8LL * j));
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *(_QWORD *)this);
    *(_QWORD *)this = 0LL;
  }
  if ( *((_QWORD *)this + 1) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
}
