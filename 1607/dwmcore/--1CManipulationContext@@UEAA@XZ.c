/*
 * XREFs of ??1CManipulationContext@@UEAA@XZ @ 0x1800079B8
 * Callers:
 *     ??_GCManipulationContext@@UEAAPEAXI@Z @ 0x180007AE0 (--_GCManipulationContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GTargetingInfo@@QEAAPEAXI@Z @ 0x180008854 (--_GTargetingInfo@@QEAAPEAXI@Z.c)
 *     ??_G?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180008D34 (--_G-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CManipulationContext::~CManipulationContext(CManipulationContext *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  int i; // edi
  int j; // edi

  *(_QWORD *)this = &CManipulationContext::`vftable'{for `IManipulationContext'};
  *((_QWORD *)this + 1) = &CManipulationContext::`vftable'{for `CMILRefCountBase'};
  v2 = *((_QWORD *)this + 17);
  if ( v2 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((char *)this + 128);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((char *)this + 112);
  if ( *((_QWORD *)this + 10) )
  {
    for ( i = 0; i < *((_DWORD *)this + 24); ++i )
      TargetingInfo::`scalar deleting destructor'((TargetingInfo *)(*((_QWORD *)this + 11) + 16LL * i), v3);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 10));
    *((_QWORD *)this + 10) = 0LL;
  }
  if ( *((_QWORD *)this + 11) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_DWORD *)this + 24) = 0;
  if ( *((_QWORD *)this + 7) )
  {
    for ( j = 0; j < *((_DWORD *)this + 18); ++j )
      Microsoft::WRL::ComPtr<CInteraction>::`scalar deleting destructor'(*((_QWORD *)this + 8) + 8LL * j);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 7));
    *((_QWORD *)this + 7) = 0LL;
  }
  if ( *((_QWORD *)this + 8) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_DWORD *)this + 18) = 0;
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((char *)this + 48);
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
}
