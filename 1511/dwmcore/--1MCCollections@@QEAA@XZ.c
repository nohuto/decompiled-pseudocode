/*
 * XREFs of ??1MCCollections@@QEAA@XZ @ 0x18013F554
 * Callers:
 *     ??1CManipulationManager@@EEAA@XZ @ 0x18013F42C (--1CManipulationManager@@EEAA@XZ.c)
 * Callees:
 *     ??_G?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180005350 (--_G-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall MCCollections::~MCCollections(MCCollections *this)
{
  int i; // ebx

  if ( *((_QWORD *)this + 5) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 5));
    *((_QWORD *)this + 5) = 0LL;
  }
  if ( *((_QWORD *)this + 6) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 6));
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
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::RemoveAll(this);
}
