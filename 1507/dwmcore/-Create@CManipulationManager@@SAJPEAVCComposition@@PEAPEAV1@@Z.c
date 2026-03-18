/*
 * XREFs of ?Create@CManipulationManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180092670
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800933B0 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CManipulationManager@@AEAAJXZ @ 0x180092F2C (-Initialize@CManipulationManager@@AEAAJXZ.c)
 *     ??0CManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x180093090 (--0CManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CManipulationManager::Create(struct CComposition *a1, struct CManipulationManager **a2)
{
  CManipulationManager *v4; // rax
  CManipulationManager *v5; // rdi
  int v6; // eax
  unsigned int v7; // esi

  v4 = (CManipulationManager *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 16LL))(
                                 WPF::g_pProcessHeap,
                                 304LL);
  if ( v4 )
    v5 = CManipulationManager::CManipulationManager(v4, a1);
  else
    v5 = 0LL;
  if ( v5 )
  {
    (*(void (__fastcall **)(CManipulationManager *))(*(_QWORD *)v5 + 8LL))(v5);
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
      (*(void (__fastcall **)(CManipulationManager *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Eu);
  }
  return v7;
}
