/*
 * XREFs of ?CreateResourceRealizer@CBrushRealizer@@SAJPEAVCBrush@@PEAPEAV1@@Z @ 0x18005F9A0
 * Callers:
 *     ?GetRealizer@CBrush@@UEAAJPEBUBrushContext@@PEAPEAVCBrushRealizer@@@Z @ 0x180083700 (-GetRealizer@CBrush@@UEAAJPEBUBrushContext@@PEAPEAVCBrushRealizer@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CBrushRealizer@@IEAA@XZ @ 0x1800814C4 (--0CBrushRealizer@@IEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CBrushRealizer::CreateResourceRealizer(struct CBrush *a1, struct CBrushRealizer **a2)
{
  unsigned int v4; // esi
  CBrushRealizer *v5; // rax
  struct CBrushRealizer *v6; // rdi

  v4 = 0;
  v5 = (CBrushRealizer *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           112LL);
  v6 = v5;
  if ( v5 )
  {
    CBrushRealizer::CBrushRealizer(v5);
    *((_QWORD *)v6 + 13) = a1;
    *(_QWORD *)v6 = &CBrushResourceRealizer::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    (**(void (__fastcall ***)(struct CBrushRealizer *))v6)(v6);
    *a2 = v6;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x30u);
  }
  return v4;
}
