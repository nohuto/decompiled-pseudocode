/*
 * XREFs of ?RemoveAll@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180140054
 * Callers:
 *     ??1MCCollections@@QEAA@XZ @ 0x18013F554 (--1MCCollections@@QEAA@XZ.c)
 * Callees:
 *     ??_G?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180005350 (--_G-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::RemoveAll(
        __int64 a1)
{
  int i; // ebx
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
      Microsoft::WRL::ComPtr<CManipulationContext>::`scalar deleting destructor'((__int64 *)(*(_QWORD *)(a1 + 8)
                                                                                           + 8LL * i));
    result = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
               WPF::g_pProcessHeap,
               *(_QWORD *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  if ( *(_QWORD *)(a1 + 8) )
  {
    result = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
               WPF::g_pProcessHeap,
               *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)(a1 + 16) = 0;
  return result;
}
