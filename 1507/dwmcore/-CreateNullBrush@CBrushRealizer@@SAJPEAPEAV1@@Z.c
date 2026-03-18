/*
 * XREFs of ?CreateNullBrush@CBrushRealizer@@SAJPEAPEAV1@@Z @ 0x18005E9CC
 * Callers:
 *     ?Initialize@CDrawingContext@@MEAAJXZ @ 0x18002E2E0 (-Initialize@CDrawingContext@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CImmediateBrushRealizer@@QEAA@XZ @ 0x1800842A0 (--0CImmediateBrushRealizer@@QEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CBrushRealizer::CreateNullBrush(struct CBrushRealizer **a1)
{
  unsigned int v2; // esi
  CImmediateBrushRealizer *v3; // rax
  CImmediateBrushRealizer *v4; // rdi

  v2 = 0;
  v3 = (CImmediateBrushRealizer *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                             + 8LL))(
                                    WPF::g_pProcessHeap,
                                    104LL);
  if ( v3 )
    v4 = CImmediateBrushRealizer::CImmediateBrushRealizer(v3);
  else
    v4 = 0LL;
  if ( v4 )
  {
    (**(void (__fastcall ***)(CImmediateBrushRealizer *))v4)(v4);
    *a1 = v4;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xA5u);
  }
  return v2;
}
