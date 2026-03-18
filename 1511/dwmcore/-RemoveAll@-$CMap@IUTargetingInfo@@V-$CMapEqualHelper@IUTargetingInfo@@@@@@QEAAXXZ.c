/*
 * XREFs of ?RemoveAll@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAXXZ @ 0x180005088
 * Callers:
 *     ??_GCManipulationContext@@UEAAPEAXI@Z @ 0x1800054E4 (--_GCManipulationContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GTargetingInfo@@QEAAPEAXI@Z @ 0x180003660 (--_GTargetingInfo@@QEAAPEAXI@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::RemoveAll(__int64 a1)
{
  int i; // ebx
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
      TargetingInfo::`scalar deleting destructor'((TargetingInfo *)(*(_QWORD *)(a1 + 8) + 16LL * i));
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
