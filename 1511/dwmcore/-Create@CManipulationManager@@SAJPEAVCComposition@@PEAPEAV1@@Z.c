/*
 * XREFs of ?Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800A8CC8
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x18009DBC4 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CManipulationManager@@AEAAJXZ @ 0x1800A6CA4 (-Initialize@CManipulationManager@@AEAAJXZ.c)
 *     ??0CManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x1800A6E08 (--0CManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 */

__int64 __fastcall CManipulationManager::Create(struct CComposition *a1, HANDLE **a2)
{
  CManipulationManager *v4; // rax
  HANDLE *v5; // rdi
  int v6; // eax
  unsigned int v7; // esi

  v4 = (CManipulationManager *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 16LL))(
                                 WPF::g_pProcessHeap,
                                 304LL);
  if ( v4 )
    v5 = (HANDLE *)CManipulationManager::CManipulationManager(v4, a1);
  else
    v5 = 0LL;
  if ( v5 )
  {
    (*((void (__fastcall **)(HANDLE *))*v5 + 1))(v5);
    v6 = CManipulationManager::Initialize(v5);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x21u);
    }
    else
    {
      *a2 = v5;
      v5 = 0LL;
    }
    if ( v5 )
      (*((void (__fastcall **)(HANDLE *))*v5 + 2))(v5);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Eu);
  }
  return v7;
}
