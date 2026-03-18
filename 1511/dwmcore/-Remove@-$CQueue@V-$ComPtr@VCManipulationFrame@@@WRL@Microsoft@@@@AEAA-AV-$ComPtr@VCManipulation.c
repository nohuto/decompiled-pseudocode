/*
 * XREFs of ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x180003A28
 * Callers:
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x180004D7C (-OnInput@CManipulationManager@@AEAAXXZ.c)
 *     ?ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z @ 0x1800B20A0 (-ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z.c)
 *     ??1?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x1800BA2B8 (--1-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x180003BF4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180003C34 (--4-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

_QWORD *__fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(__int64 a1, _QWORD *a2, char a3, int *a4)
{
  __int64 *v7; // rsi
  __int64 v8; // rcx
  int v9; // eax
  _QWORD *v11; // rcx

  *a2 = 0LL;
  EnterCriticalSection(&CriticalSection);
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
    v7 = (__int64 *)qword_1801A3CF8;
    v11 = *(_QWORD **)(qword_1801A3CF8 + 8);
    if ( *(__int64 **)qword_1801A3CF8 != &CManipulationManager::s_InputQueue || *v11 != qword_1801A3CF8 )
      __fastfail(3u);
    qword_1801A3CF8 = *(_QWORD *)(qword_1801A3CF8 + 8);
    *v11 = &CManipulationManager::s_InputQueue;
  }
  if ( v7 == &CManipulationManager::s_InputQueue )
  {
    v9 = dword_1801A3D00;
  }
  else
  {
    Microsoft::WRL::ComPtr<CManipulationFrame>::operator=(a2, v7 + 2);
    if ( v7 )
    {
      Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(v7 + 2);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v7);
    }
    v9 = --dword_1801A3D00;
  }
  if ( a4 )
    *a4 = v9;
  LeaveCriticalSection(&CriticalSection);
  return a2;
}
