/*
 * XREFs of ?Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z @ 0x180092228
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800933B0 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CSurfaceManager@@IEAA@PEAVCComposition@@@Z @ 0x180092418 (--0CSurfaceManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x180092568 (-Initialize@CSurfaceManager@@IEAAJPEAPEAX0@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CSurfaceManager::Create(struct CComposition *a1, struct CSurfaceManager **a2, void **a3, void **a4)
{
  CSurfaceManager *v8; // rax
  CSurfaceManager *v9; // rdi
  int v10; // eax
  unsigned int v11; // esi

  *a2 = 0LL;
  v8 = (CSurfaceManager *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 16LL))(
                            WPF::g_pProcessHeap,
                            632LL);
  if ( v8 )
    v9 = CSurfaceManager::CSurfaceManager(v8, a1);
  else
    v9 = 0LL;
  if ( v9 )
  {
    (**(void (__fastcall ***)(CSurfaceManager *))v9)(v9);
    v10 = CSurfaceManager::Initialize(v9, a3, a4);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x21u);
    }
    else
    {
      *a2 = v9;
      v9 = 0LL;
    }
    if ( v9 )
      (*(void (__fastcall **)(CSurfaceManager *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Eu);
  }
  return v11;
}
