/*
 * XREFs of ?RemoveAll@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180130C84
 * Callers:
 *     ??_GCManipulationContext@@UEAAPEAXI@Z @ 0x18012F894 (--_GCManipulationContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??_G?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x18012F804 (--_G-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::RemoveAll(
        __int64 a1)
{
  int i; // ebx
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
      Microsoft::WRL::ComPtr<CInteraction>::`scalar deleting destructor'((__int64 *)(*(_QWORD *)(a1 + 8) + 8LL * i));
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
