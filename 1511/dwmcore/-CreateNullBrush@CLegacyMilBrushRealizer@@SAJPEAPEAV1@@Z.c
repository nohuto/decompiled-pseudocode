/*
 * XREFs of ?CreateNullBrush@CLegacyMilBrushRealizer@@SAJPEAPEAV1@@Z @ 0x1800AC38C
 * Callers:
 *     ?Initialize@CDrawingContext@@MEAAJXZ @ 0x1800437C0 (-Initialize@CDrawingContext@@MEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CImmediateBrushRealizer@@QEAA@XZ @ 0x1800AC534 (--0CImmediateBrushRealizer@@QEAA@XZ.c)
 */

__int64 __fastcall CLegacyMilBrushRealizer::CreateNullBrush(struct CLegacyMilBrushRealizer **a1)
{
  unsigned int v2; // edi
  LPVOID (__fastcall *v3)(WPF::ProcessHeapImpl *, SIZE_T); // rsi
  CImmediateBrushRealizer *v4; // rax
  CImmediateBrushRealizer *v5; // rsi

  v2 = 0;
  v3 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v3 == WPF::ProcessHeapImpl::Alloc )
    v4 = (CImmediateBrushRealizer *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x68uLL);
  else
    v4 = (CImmediateBrushRealizer *)v3(WPF::g_pProcessHeap, 104LL);
  if ( v4 )
    v5 = CImmediateBrushRealizer::CImmediateBrushRealizer(v4);
  else
    v5 = 0LL;
  if ( v5 )
  {
    (**(void (__fastcall ***)(CImmediateBrushRealizer *))v5)(v5);
    *a1 = v5;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xA5u);
  }
  return v2;
}
