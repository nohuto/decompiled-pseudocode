/*
 * XREFs of ?CreateResourceRealizer@CLegacyMilBrushRealizer@@SAJPEAVCLegacyMilBrush@@PEAPEAV1@@Z @ 0x1800B12FC
 * Callers:
 *     ?GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x18005D660 (-GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??0CLegacyMilBrushRealizer@@IEAA@XZ @ 0x18008A5FC (--0CLegacyMilBrushRealizer@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CLegacyMilBrushRealizer::CreateResourceRealizer(
        struct CLegacyMilBrush *a1,
        struct CLegacyMilBrushRealizer **a2)
{
  unsigned int v4; // esi
  CLegacyMilBrushRealizer *v5; // rax
  struct CLegacyMilBrushRealizer *v6; // rdi

  v4 = 0;
  v5 = (CLegacyMilBrushRealizer *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                             + 8LL))(
                                    WPF::g_pProcessHeap,
                                    112LL);
  v6 = v5;
  if ( v5 )
  {
    CLegacyMilBrushRealizer::CLegacyMilBrushRealizer(v5);
    *((_QWORD *)v6 + 13) = a1;
    *(_QWORD *)v6 = &CBrushResourceRealizer::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    (**(void (__fastcall ***)(struct CLegacyMilBrushRealizer *))v6)(v6);
    *a2 = v6;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x30u);
  }
  return v4;
}
