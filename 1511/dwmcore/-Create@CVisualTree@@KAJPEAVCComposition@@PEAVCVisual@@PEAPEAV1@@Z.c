/*
 * XREFs of ?Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800B126C
 * Callers:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180048704 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x1800767D8 (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisualTree::Create(struct CComposition *a1, struct CVisual *a2, struct CVisualTree **a3)
{
  unsigned int v6; // esi
  CVisualTree *v7; // rax
  volatile signed __int32 *v8; // rax

  v6 = 0;
  v7 = (CVisualTree *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        776LL);
  if ( v7 )
    v8 = (volatile signed __int32 *)CVisualTree::CVisualTree(v7, a1, a2);
  else
    v8 = 0LL;
  *a3 = (struct CVisualTree *)v8;
  if ( v8 )
  {
    _InterlockedIncrement(v8 + 2);
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Du);
  }
  return v6;
}
