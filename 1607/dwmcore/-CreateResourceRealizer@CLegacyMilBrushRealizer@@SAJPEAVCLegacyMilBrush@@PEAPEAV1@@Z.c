/*
 * XREFs of ?CreateResourceRealizer@CLegacyMilBrushRealizer@@SAJPEAVCLegacyMilBrush@@PEAPEAV1@@Z @ 0x1800B4068
 * Callers:
 *     ?GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x18002EE90 (-GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z.c)
 * Callees:
 *     ??0CLegacyMilBrushRealizer@@IEAA@XZ @ 0x18002EAF0 (--0CLegacyMilBrushRealizer@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyMilBrushRealizer::CreateResourceRealizer(
        struct CLegacyMilBrush *a1,
        struct CLegacyMilBrushRealizer **a2)
{
  unsigned int v4; // edi
  CLegacyMilBrushRealizer *v5; // rax
  struct CLegacyMilBrushRealizer *v6; // rbx

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
