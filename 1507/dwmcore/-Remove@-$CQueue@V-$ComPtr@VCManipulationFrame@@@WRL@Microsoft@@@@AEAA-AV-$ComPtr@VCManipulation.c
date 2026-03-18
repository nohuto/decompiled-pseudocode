/*
 * XREFs of ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x18012B7AC
 * Callers:
 *     ??1?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x180097A64 (--1-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ.c)
 *     ?ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z @ 0x18012A360 (-ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z.c)
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x18012A874 (-OnInput@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801298EC (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x18012A2B4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(
        __int64 a1,
        __int64 *a2,
        char a3,
        int *a4)
{
  __int64 *v7; // rsi
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  int v10; // eax

  *a2 = 0LL;
  EnterCriticalSection(&stru_180195D18);
  if ( a3 )
  {
    v7 = (__int64 *)CManipulationManager::s_InputQueue;
    v8 = *(_QWORD *)CManipulationManager::s_InputQueue;
    if ( *(__int64 **)(CManipulationManager::s_InputQueue + 8) != &CManipulationManager::s_InputQueue
      || *(_QWORD *)(v8 + 8) != CManipulationManager::s_InputQueue )
    {
      __fastfail(3u);
    }
    CManipulationManager::s_InputQueue = *(_QWORD *)CManipulationManager::s_InputQueue;
    *(_QWORD *)(v8 + 8) = &CManipulationManager::s_InputQueue;
  }
  else
  {
    v7 = (__int64 *)qword_180195D08;
    v9 = *(_QWORD **)(qword_180195D08 + 8);
    if ( *(__int64 **)qword_180195D08 != &CManipulationManager::s_InputQueue || *v9 != qword_180195D08 )
      __fastfail(3u);
    qword_180195D08 = *(_QWORD *)(qword_180195D08 + 8);
    *v9 = &CManipulationManager::s_InputQueue;
  }
  if ( v7 == &CManipulationManager::s_InputQueue )
  {
    v10 = dword_180195D10;
  }
  else
  {
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(a2, v7 + 2);
    if ( v7 )
    {
      Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(v7 + 2);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v7);
    }
    v10 = --dword_180195D10;
  }
  if ( a4 )
    *a4 = v10;
  LeaveCriticalSection(&stru_180195D18);
  return a2;
}
