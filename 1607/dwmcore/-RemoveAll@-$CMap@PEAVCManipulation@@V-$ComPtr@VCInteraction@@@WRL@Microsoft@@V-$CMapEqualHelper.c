/*
 * XREFs of ?RemoveAll@?$CMap@PEAVCManipulation@@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@PEAVCManipulation@@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18014B088
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x180149A8C (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?ReleaseManipulations@CInteractionTracker@@AEAAXXZ @ 0x18014AFC8 (-ReleaseManipulations@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ??_G?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180008D34 (--_G-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMap<CManipulation *,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<CManipulation *,Microsoft::WRL::ComPtr<CInteraction>>>::RemoveAll(
        __int64 a1)
{
  int i; // edi
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
      Microsoft::WRL::ComPtr<CInteraction>::`scalar deleting destructor'(*(_QWORD *)(a1 + 8) + 8LL * i);
    result = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
               WPF::g_pProcessHeap,
               *(_QWORD *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  if ( *(_QWORD *)(a1 + 8) )
  {
    result = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)(a1 + 16) = 0;
  return result;
}
