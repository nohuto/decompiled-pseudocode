/*
 * XREFs of ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x180008414
 * Callers:
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x1800074A8 (-OnInput@CManipulationManager@@AEAAXXZ.c)
 *     ?ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z @ 0x1800B5BD0 (-ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z.c)
 *     ??1?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x1800BCFB8 (--1-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180007904 (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180106C20 (--4-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

_QWORD *__fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(__int64 a1, _QWORD *a2, char a3, int *a4)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rbx
  __int64 v10; // rcx
  int v11; // eax
  _QWORD *v13; // rcx

  *a2 = 0LL;
  EnterCriticalSection(&CriticalSection);
  if ( a3 )
  {
    v9 = (__int64 *)CManipulationManager::s_InputQueue;
    v10 = *(_QWORD *)CManipulationManager::s_InputQueue;
    if ( *(__int64 **)(CManipulationManager::s_InputQueue + 8) != &CManipulationManager::s_InputQueue
      || *(_QWORD *)(v10 + 8) != CManipulationManager::s_InputQueue )
    {
      __fastfail(3u);
    }
    CManipulationManager::s_InputQueue = *(_QWORD *)CManipulationManager::s_InputQueue;
    *(_QWORD *)(v10 + 8) = &CManipulationManager::s_InputQueue;
  }
  else
  {
    v9 = (__int64 *)qword_1801EFF98;
    v13 = *(_QWORD **)(qword_1801EFF98 + 8);
    if ( *(__int64 **)qword_1801EFF98 != &CManipulationManager::s_InputQueue || *v13 != qword_1801EFF98 )
      __fastfail(3u);
    qword_1801EFF98 = *(_QWORD *)(qword_1801EFF98 + 8);
    *v13 = &CManipulationManager::s_InputQueue;
  }
  if ( v9 == &CManipulationManager::s_InputQueue )
  {
    v11 = dword_1801EFFA0;
  }
  else
  {
    Microsoft::WRL::ComPtr<CManipulationFrame>::operator=(a2, v9 + 2, v7, v8);
    if ( v9 )
    {
      Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(v9 + 2);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v9);
    }
    v11 = --dword_1801EFFA0;
  }
  if ( a4 )
    *a4 = v11;
  LeaveCriticalSection(&CriticalSection);
  return a2;
}
