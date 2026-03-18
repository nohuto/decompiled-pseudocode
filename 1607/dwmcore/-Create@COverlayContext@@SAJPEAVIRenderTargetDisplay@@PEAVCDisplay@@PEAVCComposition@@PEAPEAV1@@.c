/*
 * XREFs of ?Create@COverlayContext@@SAJPEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@PEAPEAV1@@Z @ 0x1800B6CFC
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x180074110 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@COverlayContext@@IEAAJXZ @ 0x1800790EC (-Initialize@COverlayContext@@IEAAJXZ.c)
 *     ??0COverlayContext@@IEAA@PEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@@Z @ 0x18007926C (--0COverlayContext@@IEAA@PEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayContext::Create(
        struct IRenderTargetDisplay *a1,
        struct CDisplay *a2,
        struct CComposition *a3,
        struct COverlayContext **a4)
{
  COverlayContext *v8; // rax
  COverlayContext *v9; // rbx
  int v10; // eax
  int v11; // edi

  v8 = (COverlayContext *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 16LL))(
                            WPF::g_pProcessHeap,
                            1128LL);
  if ( v8 )
    v9 = COverlayContext::COverlayContext(v8, a1, a2, a3);
  else
    v9 = 0LL;
  if ( v9 )
  {
    (**(void (__fastcall ***)(COverlayContext *))v9)(v9);
    v10 = COverlayContext::Initialize(v9);
    v11 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xAEu);
    else
      *a4 = v9;
    if ( v11 < 0 )
      (*(void (__fastcall **)(COverlayContext *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xAAu);
  }
  return (unsigned int)v11;
}
