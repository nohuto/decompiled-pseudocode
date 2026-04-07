/*
 * XREFs of ?Create@CDrawOcclusionRectangleInstruction@@SAJAEBU_MARGINS@@PEAPEAV1@@Z @ 0x180037A84
 * Callers:
 *     ?_AddOcclusionInstruction@CAccent@@IEAAJXZ @ 0x1800373C0 (-_AddOcclusionInstruction@CAccent@@IEAAJXZ.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800910BC (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002ADF0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawOcclusionRectangleInstruction::Create(
        const struct _MARGINS *a1,
        struct CDrawOcclusionRectangleInstruction **a2)
{
  unsigned int v4; // edi
  void *(__fastcall *v5)(WPF::ProcessHeapImpl *, size_t); // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rbx

  v4 = 0;
  v5 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v5 == WPF::ProcessHeapImpl::AllocClear )
    v6 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x30uLL);
  else
    v6 = (_DWORD *)v5(WPF::g_pProcessHeap, 48LL);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = 1;
    *(_QWORD *)v6 = &CDrawOcclusionRectangleInstruction::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    *((struct _MARGINS *)v7 + 1) = *a1;
    SetRectEmpty((LPRECT)v7 + 2);
    *a2 = (struct CDrawOcclusionRectangleInstruction *)v7;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2Cu);
  }
  return v4;
}
