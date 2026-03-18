/*
 * XREFs of ?CreateNullBrush@CLegacyMilBrushRealizer@@SAJPEAPEAV1@@Z @ 0x1800AF89C
 * Callers:
 *     ?Initialize@CDrawingContext@@MEAAJXZ @ 0x18006BE80 (-Initialize@CDrawingContext@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??0CImmediateBrushRealizer@@QEAA@XZ @ 0x1800AF994 (--0CImmediateBrushRealizer@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyMilBrushRealizer::CreateNullBrush(struct CLegacyMilBrushRealizer **a1)
{
  unsigned int v2; // ebx
  LPVOID (__fastcall *v3)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  CImmediateBrushRealizer *v4; // rax
  CImmediateBrushRealizer *v5; // rdi

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
