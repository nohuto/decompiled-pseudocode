/*
 * XREFs of ?Remove@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAPEAUInteractionUpdate@CManipulationManager@@_NPEAI@Z @ 0x18013FF7C
 * Callers:
 *     ??1?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@QEAA@XZ @ 0x1800BA608 (--1-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@QEAA@XZ.c)
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18013FD8C (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CQueue<CManipulationManager::InteractionUpdate *>::Remove(__int64 a1, __int64 a2, int *a3)
{
  __int64 v4; // rbp
  __int64 *v5; // rsi
  __int64 v6; // rax
  int v7; // eax

  v4 = 0LL;
  EnterCriticalSection(&stru_1801A3D48);
  v5 = (__int64 *)CManipulationManager::s_InteractionUpdateQueue;
  v6 = *(_QWORD *)CManipulationManager::s_InteractionUpdateQueue;
  if ( *(__int64 **)(CManipulationManager::s_InteractionUpdateQueue + 8) != &CManipulationManager::s_InteractionUpdateQueue
    || *(_QWORD *)(v6 + 8) != CManipulationManager::s_InteractionUpdateQueue )
  {
    __fastfail(3u);
  }
  CManipulationManager::s_InteractionUpdateQueue = *(_QWORD *)CManipulationManager::s_InteractionUpdateQueue;
  *(_QWORD *)(v6 + 8) = &CManipulationManager::s_InteractionUpdateQueue;
  if ( v5 == &CManipulationManager::s_InteractionUpdateQueue )
  {
    v7 = dword_1801A3D40;
  }
  else
  {
    v4 = v5[2];
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v5);
    v7 = --dword_1801A3D40;
  }
  if ( a3 )
    *a3 = v7;
  LeaveCriticalSection(&stru_1801A3D48);
  return v4;
}
